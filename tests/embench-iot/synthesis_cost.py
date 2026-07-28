#!/usr/bin/env python3
"""Worst-case dynamic cost of each rvsc1 synthesis, for @tab-synthesis-cost.

Call a one-operation function in a loop and difference the retired-instruction
count from `spike -g` between trip counts of 100 and 200, dividing by 100.  The
loop and call overhead cancels exactly, so the per-iteration figure is exact.  A
do-nothing function gives the residual loop+call cost, which is subtracted.

Differencing one call against two does not work and was tried first: these
operations are pure, so with literal arguments GCC folds them into the caller or
CSEs the second call away, and the deltas come out as zero or negative.

Both operands come from `volatile` globals and the function is noinline/noipa,
for the same reason.

Where the worst case is not obvious every candidate operand is tried and the
maximum is reported.  Loads are the interesting case: they are most expensive at
an *aligned* address, because the SRL extraction loop gets cheaper as the shift
amount grows.
"""
import subprocess, sys, tempfile, os
from pathlib import Path

T = Path("/home/salust/p/scgcc/tests")
CC = str(T / "sc1/build/install/bin/rvsc1-unknown-elf-gcc")
LD = str(T / "sc1/pk32.ld")
PK = os.environ["PK"]

# name -> (return type, params, expression, arg C-types, operand tuples)
OPS = {
 "not":       ("unsigned", "unsigned a",              "~a",        ["unsigned"],             [("0x12345678u",)]),
 "xor_reg":   ("unsigned", "unsigned a,unsigned b",   "a^b",       ["unsigned","unsigned"],  [("0x12345678u","0x9abcdef0u")]),
 "xor_imm":   ("unsigned", "unsigned a",              "a^0x1234u", ["unsigned"],             [("0x12345678u",)]),
 "ori_imm":   ("unsigned", "unsigned a",              "a|0x1234u", ["unsigned"],             [("0x12345678u",)]),
 "andi_imm":  ("unsigned", "unsigned a",              "a&0x1234u", ["unsigned"],             [("0x12345678u",)]),
 "sll_const": ("unsigned", "unsigned a",              "a<<31",     ["unsigned"],             [("0x12345678u",)]),
 "sll_var":   ("unsigned", "unsigned a,unsigned b",   "a<<b",      ["unsigned","unsigned"],  [("0x12345678u",f"{n}u") for n in (1,8,16,31)]),
 "srl_const": ("unsigned", "unsigned a",              "a>>1",      ["unsigned"],             [("0x87654321u",)]),
 "srl_var":   ("unsigned", "unsigned a,unsigned b",   "a>>b",      ["unsigned","unsigned"],  [("0x87654321u",f"{n}u") for n in (1,8,16,31)]),
 "sra_const": ("int",      "int a",                   "a>>1",      ["int"],                  [("-123456789",)]),
 "sra_var":   ("int",      "int a,int b",             "a>>b",      ["int","int"],            [("-123456789",str(n)) for n in (1,8,16,31)]),
 "slt":       ("int",      "int a,int b",             "a<b",       ["int","int"],            [("-5","7"),("7","-5")]),
 "sltu":      ("int",      "unsigned a,unsigned b",   "a<b",       ["unsigned","unsigned"],  [("5u","7u"),("0x80000000u","7u")]),
 "bne":        ("void",     "int a,int b",           "if(a!=b)sink=1", ["int","int"],              [("3","4"),("3","3")]),
 "blt":        ("void",     "int a,int b",           "if(a<b)sink=1", ["int","int"],              [("-5","7"),("7","-5")]),
 "bge":        ("void",     "int a,int b",           "if(a>=b)sink=1", ["int","int"],              [("-5","7"),("7","-5")]),
 "bltu":       ("void",     "unsigned a,unsigned b", "if(a<b)sink=1", ["unsigned","unsigned"],    [("5u","7u"),("0x80000000u","7u")]),
 "bgeu":       ("void",     "unsigned a,unsigned b", "if(a>=b)sink=1", ["unsigned","unsigned"],    [("5u","7u"),("0x80000000u","7u")]),
 "lb":        ("int",      "char*p",                  "*p",        ["char*"],                [(f"(char*)(buf+{o})",) for o in range(4)]),
 "lbu":       ("int",      "unsigned char*p",         "*p",        ["unsigned char*"],       [(f"(unsigned char*)(buf+{o})",) for o in range(4)]),
 "lh":        ("int",      "short*p",                 "*p",        ["short*"],               [(f"(short*)(buf+{o})",) for o in (0,2)]),
 "lhu":       ("int",      "unsigned short*p",        "*p",        ["unsigned short*"],      [(f"(unsigned short*)(buf+{o})",) for o in (0,2)]),
 "sb":        ("void",     "char*p,int v",            "*p=v",      ["char*","int"],          [(f"(char*)(buf+{o})","0xFF") for o in range(4)]),
 "sh":        ("void",     "short*p,int v",           "*p=v",      ["short*","int"],         [(f"(short*)(buf+{o})","0xFFFF") for o in (0,2)]),
 "srlc1":     ("unsigned", "unsigned a",              "a>>1",    ["unsigned"],             [("0x87654321u",)]),
 "srac1":     ("int",      "int a",                   "a>>1",    ["int"],                  [("-123456789",)]),
 "sllc1":     ("unsigned", "unsigned a",              "a<<1",    ["unsigned"],             [("0x12345678u",)]),
 "srlc3":     ("unsigned", "unsigned a",              "a>>3",    ["unsigned"],             [("0x87654321u",)]),
 "srac3":     ("int",      "int a",                   "a>>3",    ["int"],                  [("-123456789",)]),
 "sllc3":     ("unsigned", "unsigned a",              "a<<3",    ["unsigned"],             [("0x12345678u",)]),
 "srlc8":     ("unsigned", "unsigned a",              "a>>8",    ["unsigned"],             [("0x87654321u",)]),
 "srac8":     ("int",      "int a",                   "a>>8",    ["int"],                  [("-123456789",)]),
 "sllc8":     ("unsigned", "unsigned a",              "a<<8",    ["unsigned"],             [("0x12345678u",)]),
 "srlc16":     ("unsigned", "unsigned a",              "a>>16",    ["unsigned"],             [("0x87654321u",)]),
 "srac16":     ("int",      "int a",                   "a>>16",    ["int"],                  [("-123456789",)]),
 "sllc16":     ("unsigned", "unsigned a",              "a<<16",    ["unsigned"],             [("0x12345678u",)]),
 "srlc31":     ("unsigned", "unsigned a",              "a>>31",    ["unsigned"],             [("0x87654321u",)]),
 "srac31":     ("int",      "int a",                   "a>>31",    ["int"],                  [("-123456789",)]),
 "sllc31":     ("unsigned", "unsigned a",              "a<<31",    ["unsigned"],             [("0x12345678u",)]),
 "srlc1w":    ("unsigned", "unsigned a",              "a>>1",      ["unsigned"],             [("0xFFFFFFFFu",),("0x0u",),("0xAAAAAAAAu",),("0x87654321u",)]),
 "srac1w":    ("int",      "int a",                   "a>>1",      ["int"],                  [("-1",),("0",),("-123456789",),("0x55555555",)]),
 "srlvw":     ("unsigned", "unsigned a,unsigned b",   "a>>b",      ["unsigned","unsigned"],  [("0xFFFFFFFFu","1u"),("0x0u","1u"),("0xAAAAAAAAu","1u")]),
 "sravw":     ("int",      "int a,int b",             "a>>b",      ["int","int"],            [("-1","1"),("0","1"),("-123456789","1")]),
 "_overhead": ("int",      "int a",                   "a",         ["int"],                  [("7",)]),
}


def retired(elf):
    r = subprocess.run(["spike", "-g", "--isa=rv32imac_zicsr_zifencei", PK, str(elf)],
                       stdout=subprocess.DEVNULL, stderr=subprocess.PIPE, timeout=900)
    tot = 0
    for line in r.stderr.split(b"\n"):
        p = line.split()
        if len(p) == 2 and p[1].isdigit():
            try: int(p[0], 16)
            except ValueError: continue
            tot += int(p[1])
    return tot


def measure(name, spec, operands, tmp):
    ret, params, expr, argtypes, _ = spec
    proto = f"{ret} op({params})"
    decls = "\n".join(f"volatile {ty} A{i};" for i, ty in enumerate(argtypes))
    inits = "\n  ".join(f"A{i} = {v};" for i, v in enumerate(operands))
    args = ",".join(f"A{i}" for i in range(len(argtypes)))
    call = f"op({args})"
    stmt = call if ret == "void" else f"sink = {call}"
    driver = f"""#include <stdlib.h>
volatile char buf[64];
volatile int sink;
volatile int trips;
{decls}
extern {proto};
int main(void){{
  for (int k = 0; k < 64; k++) buf[k] = (char) 0xFF;
  {inits}
  trips = COUNT;
  for (int i = 0; i < trips; i++)
    {stmt};
  exit(0);
}}
"""
    fn = "extern volatile int sink;\n" + f"__attribute__((noinline,noipa)) {proto} {{ {'' if ret=='void' else 'return '}{expr}; }}\n"
    vals = []
    for n in (100, 200):
        (tmp / f"{name}_d.c").write_text(driver)
        (tmp / f"{name}_f.c").write_text(fn)
        elf = tmp / f"{name}_{n}.elf"
        r = subprocess.run([CC, "-O2", "-ffreestanding", f"-DCOUNT={n}",
                            str(tmp / f"{name}_d.c"), str(tmp / f"{name}_f.c"),
                            "-T", LD, "-lsim", "-o", str(elf)], capture_output=True, text=True)
        if r.returncode != 0:
            return None
        vals.append(retired(elf))
    # 100 extra iterations of (loop body + call + operation)
    return (vals[1] - vals[0]) / 100.0


def main():
    only = sys.argv[1:]
    with tempfile.TemporaryDirectory() as d:
        tmp = Path(d)
        ov = measure("_overhead", OPS["_overhead"], OPS["_overhead"][4][0], tmp)
        print(f"loop+call overhead = {ov:.1f} instructions/iteration (subtracted below)\n")
        print(f"{'operation':<12}{'worst':>8}   per-operand")
        for name, spec in OPS.items():
            if name == "_overhead" or (only and name not in only):
                continue
            res = [measure(name, spec, ops, tmp) for ops in spec[4]]
            adj = [None if v is None else v - ov for v in res]
            good = [v for v in adj if v is not None]
            best = f"{max(good):.0f}" if good else "FAIL"
            print(f"{name:<12}{best:>8}   "
                  + " ".join("FAIL" if v is None else f"{v:.0f}" for v in adj))


main()
