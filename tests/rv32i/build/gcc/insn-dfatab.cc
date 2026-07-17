/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  attr_type cached_type ATTRIBUTE_UNUSED;
  attr_mode cached_mode ATTRIBUTE_UNUSED;
  int cached_sew ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 501:  /* stack_tiedi */
    case 500:  /* stack_tiesi */
    case 475:  /* blockage */
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      if ((cached_type = get_attr_type (insn)) == TYPE_GHOST)
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCMP)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_CPOP)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 9;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FDIV))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FSQRT))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_LOAD))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_STORE))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_TRAP)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_IMUL))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_IDIV))
        {
	  return 23 /* 0x17 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_UNKNOWN)))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_ZICOND) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FMADD))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FADD))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FMUL))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP)))
        {
	  return 30 /* 0x1e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FADD))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FMADD))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FMUL))
        {
	  return 40 /* 0x28 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 41 /* 0x29 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_MTC))
        {
	  return 43 /* 0x2b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_MFC))
        {
	  return 44 /* 0x2c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_LOAD))
        {
	  return 45 /* 0x2d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_STORE))
        {
	  return 46 /* 0x2e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 47 /* 0x2f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_NOP))
        {
	  return 48 /* 0x30 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 49 /* 0x31 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_IDIV))
        {
	  return 50 /* 0x32 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_RET) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_TRAP)))
        {
	  return 51 /* 0x33 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_JALR)))
        {
	  return 52 /* 0x34 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_GHOST)))
        {
	  return 53 /* 0x35 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_LOAD))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 55 /* 0x37 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_STORE))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 57 /* 0x39 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 58 /* 0x3a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 59 /* 0x3b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR)))
        {
	  return 60 /* 0x3c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IMUL))
        {
	  return 61 /* 0x3d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IDIV))
        {
	  return 62 /* 0x3e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 63 /* 0x3f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE)))
        {
	  return 64 /* 0x40 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 67 /* 0x43 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 68 /* 0x44 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 69 /* 0x45 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 71 /* 0x47 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 72 /* 0x48 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MTC))
        {
	  return 73 /* 0x49 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MFC))
        {
	  return 74 /* 0x4a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 75 /* 0x4b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_RDFRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_WRVXRM)))
        {
	  return 76 /* 0x4c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_CRYPTO))
        {
	  return 77 /* 0x4d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_GHOST))
        {
	  return 78 /* 0x4e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 79 /* 0x4f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 80 /* 0x50 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 81 /* 0x51 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VANDN)))
        {
	  return 82 /* 0x52 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIMULADD)))
        {
	  return 83 /* 0x53 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VICMP))
        {
	  return 84 /* 0x54 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VWSLL)))
        {
	  return 85 /* 0x55 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFDIV)))
        {
	  return 86 /* 0x56 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 87 /* 0x57 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 88 /* 0x58 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFCLASS)))
        {
	  return 89 /* 0x59 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFSGNJ)))
        {
	  return 90 /* 0x5a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX)))
        {
	  return 91 /* 0x5b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFDIV)))
        {
	  return 92 /* 0x5c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_SF_VQMACC)))
        {
	  return 93 /* 0x5d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO)))
        {
	  return 94 /* 0x5e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS)))
        {
	  return 95 /* 0x5f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 96 /* 0x60 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VGATHER))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 98 /* 0x62 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 99 /* 0x63 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VECTOR) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_LOAD))
        {
	  return 101 /* 0x65 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 102 /* 0x66 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_STORE))
        {
	  return 103 /* 0x67 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 104 /* 0x68 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 105 /* 0x69 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 106 /* 0x6a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 107 /* 0x6b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_IMUL))
        {
	  return 108 /* 0x6c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_IDIV))
        {
	  return 109 /* 0x6d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 110 /* 0x6e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_CPOP))
        {
	  return 111 /* 0x6f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_CLMUL))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_MOVE)))
        {
	  return 113 /* 0x71 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 114 /* 0x72 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 115 /* 0x73 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 116 /* 0x74 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCVT)))
        {
	  return 117 /* 0x75 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 118 /* 0x76 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 119 /* 0x77 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VFMUL)))
        {
	  return 120 /* 0x78 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_LOAD))
        {
	  return 121 /* 0x79 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 122 /* 0x7a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_STORE))
        {
	  return 123 /* 0x7b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 124 /* 0x7c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 125 /* 0x7d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 126 /* 0x7e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 127 /* 0x7f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_IMUL))
        {
	  return 128 /* 0x80 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_IDIV))
        {
	  return 129 /* 0x81 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 130 /* 0x82 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_CPOP))
        {
	  return 131 /* 0x83 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_CLMUL))
        {
	  return 132 /* 0x84 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_MOVE)))
        {
	  return 133 /* 0x85 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 134 /* 0x86 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 135 /* 0x87 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 136 /* 0x88 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCVT)))
        {
	  return 137 /* 0x89 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 138 /* 0x8a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 139 /* 0x8b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_VICMP) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VAESKF1)))
        {
	  return 140 /* 0x8c */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 141 /* 0x8d */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR)))
        {
	  return 142 /* 0x8e */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 143 /* 0x8f */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL)))
        {
	  return 144 /* 0x90 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 145 /* 0x91 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL)))
        {
	  return 146 /* 0x92 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU)))
        {
	  return 147 /* 0x93 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VFNRCLIP)))
        {
	  return 148 /* 0x94 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP)))
        {
	  return 149 /* 0x95 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ)))
        {
	  return 150 /* 0x96 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL)))
        {
	  return 151 /* 0x97 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C)))
        {
	  return 152 /* 0x98 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS)))
        {
	  return 153 /* 0x99 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 154 /* 0x9a */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 155 /* 0x9b */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && (cached_type == TYPE_VIDIV))
        {
	  return 156 /* 0x9c */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 157 /* 0x9d */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV)))
        {
	  return 158 /* 0x9e */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 159 /* 0x9f */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM)))
        {
	  return 160 /* 0xa0 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 161 /* 0xa1 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 162 /* 0xa2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_LOAD))
        {
	  return 163 /* 0xa3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_STORE))
        {
	  return 164 /* 0xa4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 165 /* 0xa5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 166 /* 0xa6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 167 /* 0xa7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 168 /* 0xa8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 169 /* 0xa9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FMOVE))
        {
	  return 170 /* 0xaa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 171 /* 0xab */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FCMP))
        {
	  return 172 /* 0xac */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_IMUL))
        {
	  return 173 /* 0xad */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_IDIV))
        {
	  return 174 /* 0xae */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)))
        {
	  return 175 /* 0xaf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FMADD))
        {
	  return 176 /* 0xb0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 177 /* 0xb1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 178 /* 0xb2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 179 /* 0xb3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 180 /* 0xb4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 181 /* 0xb5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_STORE) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPSTORE)))
        {
	  return 182 /* 0xb6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 183 /* 0xb7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 184 /* 0xb8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 185 /* 0xb9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMOVE))
        {
	  return 186 /* 0xba */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 187 /* 0xbb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FCMP))
        {
	  return 188 /* 0xbc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_IMUL))
        {
	  return 189 /* 0xbd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_IDIV))
        {
	  return 190 /* 0xbe */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FADD))
        {
	  return 191 /* 0xbf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMUL))
        {
	  return 192 /* 0xc0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMADD))
        {
	  return 193 /* 0xc1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 194 /* 0xc2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 195 /* 0xc3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 196 /* 0xc4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 197 /* 0xc5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 198 /* 0xc6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTR)))
        {
	  return 199 /* 0xc7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VLDS))
        {
	  return 200 /* 0xc8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VSTS))
        {
	  return 201 /* 0xc9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX)))
        {
	  return 202 /* 0xca */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX)))
        {
	  return 203 /* 0xcb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 204 /* 0xcc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VECTOR) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR)))
        {
	  return 205 /* 0xcd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VEXT)))
        {
	  return 206 /* 0xce */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VICMP)))
        {
	  return 207 /* 0xcf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 208 /* 0xd0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 209 /* 0xd1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL)))
        {
	  return 210 /* 0xd2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU)))
        {
	  return 211 /* 0xd3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16)))
        {
	  return 212 /* 0xd4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VCPOP))
        {
	  return 213 /* 0xd5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ)))
        {
	  return 214 /* 0xd6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL)))
        {
	  return 215 /* 0xd7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFMERGE)))
        {
	  return 216 /* 0xd8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS)))
        {
	  return 217 /* 0xd9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN)))
        {
	  return 218 /* 0xda */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 219 /* 0xdb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 220 /* 0xdc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 8))
        {
	  return 221 /* 0xdd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 16 /* 0x10 */))
        {
	  return 222 /* 0xde */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 32 /* 0x20 */))
        {
	  return 223 /* 0xdf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 64 /* 0x40 */))
        {
	  return 224 /* 0xe0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 16 /* 0x10 */))
        {
	  return 225 /* 0xe1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 32 /* 0x20 */))
        {
	  return 226 /* 0xe2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 64 /* 0x40 */))
        {
	  return 227 /* 0xe3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV)))
        {
	  return 228 /* 0xe4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 229 /* 0xe5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM)))
        {
	  return 230 /* 0xe6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 231 /* 0xe7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_RDFRM)))
        {
	  return 232 /* 0xe8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_AUIPC)))
        {
	  return 233 /* 0xe9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_LOAD))
        {
	  return 234 /* 0xea */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_STORE))
        {
	  return 235 /* 0xeb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 236 /* 0xec */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 237 /* 0xed */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 238 /* 0xee */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 239 /* 0xef */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 240 /* 0xf0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FADD))
        {
	  return 241 /* 0xf1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FMUL))
        {
	  return 242 /* 0xf2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FMADD))
        {
	  return 243 /* 0xf3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 244 /* 0xf4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 245 /* 0xf5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 246 /* 0xf6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 247 /* 0xf7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 248 /* 0xf8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 249 /* 0xf9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 250 /* 0xfa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ)))
        {
	  return 251 /* 0xfb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_CRYPTO))
        {
	  return 252 /* 0xfc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VIRED)))
        {
	  return 253 /* 0xfd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_ATOMIC)))
        {
	  return 254 /* 0xfe */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_LOAD) && (! (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI))))
        {
	  return 255 /* 0xff */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_LOAD) && (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI)))
        {
	  return 256 /* 0x100 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_STORE))
        {
	  return 257 /* 0x101 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_RET)))
        {
	  return 258 /* 0x102 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 259 /* 0x103 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 260 /* 0x104 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 261 /* 0x105 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 262 /* 0x106 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FADD))
        {
	  return 263 /* 0x107 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FMUL))
        {
	  return 264 /* 0x108 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FMADD))
        {
	  return 265 /* 0x109 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 266 /* 0x10a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 267 /* 0x10b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 268 /* 0x10c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 269 /* 0x10d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 270 /* 0x10e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 271 /* 0x10f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 272 /* 0x110 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_BITMANIP))
        {
	  return 273 /* 0x111 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 274 /* 0x112 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX)))
        {
	  return 275 /* 0x113 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 276 /* 0x114 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 277 /* 0x115 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VIMERGE)))
        {
	  return 278 /* 0x116 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 279 /* 0x117 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VNCLIP)))
        {
	  return 280 /* 0x118 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VSMUL)))
        {
	  return 281 /* 0x119 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD)))
        {
	  return 282 /* 0x11a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER)))
        {
	  return 283 /* 0x11b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 284 /* 0x11c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VFMOVVF)))
        {
	  return 285 /* 0x11d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFMOV)))
        {
	  return 286 /* 0x11e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED)))
        {
	  return 287 /* 0x11f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VIDIV))
        {
	  return 288 /* 0x120 */;
        }
      else if ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMSFS))
        {
	  return 289 /* 0x121 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 290 /* 0x122 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VMPOP))
        {
	  return 291 /* 0x123 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VMFFS))
        {
	  return 292 /* 0x124 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD)))
        {
	  return 293 /* 0x125 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 294 /* 0x126 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE)))
        {
	  return 295 /* 0x127 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VFRECP))
        {
	  return 296 /* 0x128 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI)))
        {
	  return 297 /* 0x129 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 298 /* 0x12a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16)))
        {
	  return 299 /* 0x12b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 300 /* 0x12c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 301 /* 0x12d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 302 /* 0x12e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_RDFRM)))
        {
	  return 303 /* 0x12f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP)))
        {
	  return 304 /* 0x130 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL)))
        {
	  return 305 /* 0x131 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_BITMANIP)))
        {
	  return 306 /* 0x132 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 307 /* 0x133 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_LOAD) && (! (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI))))
        {
	  return 308 /* 0x134 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_LOAD) && (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI)))
        {
	  return 309 /* 0x135 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_STORE) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_SI)))
        {
	  return 310 /* 0x136 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_STORE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_SI))))
        {
	  return 311 /* 0x137 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_RET) || (cached_type == TYPE_JALR) || (cached_type == TYPE_TRAP)))
        {
	  return 312 /* 0x138 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 313 /* 0x139 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 314 /* 0x13a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 315 /* 0x13b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 316 /* 0x13c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FADD) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 317 /* 0x13d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 318 /* 0x13e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMUL) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 319 /* 0x13f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 320 /* 0x140 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMADD) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 321 /* 0x141 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 322 /* 0x142 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 323 /* 0x143 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 324 /* 0x144 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 325 /* 0x145 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 326 /* 0x146 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 327 /* 0x147 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 328 /* 0x148 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 329 /* 0x149 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 330 /* 0x14a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDS) || (cached_type == TYPE_VLSEGDS)))
        {
	  return 331 /* 0x14b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDUX)))
        {
	  return 332 /* 0x14c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTS)))
        {
	  return 333 /* 0x14d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VECTOR)))
        {
	  return 334 /* 0x14e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VEXT))
        {
	  return 335 /* 0x14f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 336 /* 0x150 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIMINMAX))
        {
	  return 337 /* 0x151 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VICMP))
        {
	  return 338 /* 0x152 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VSMUL)))
        {
	  return 339 /* 0x153 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIDIV))
        {
	  return 340 /* 0x154 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD)))
        {
	  return 341 /* 0x155 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIMERGE))
        {
	  return 342 /* 0x156 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN)))
        {
	  return 343 /* 0x157 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 344 /* 0x158 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL)))
        {
	  return 345 /* 0x159 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 346 /* 0x15a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD)))
        {
	  return 347 /* 0x15b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFMINMAX))
        {
	  return 348 /* 0x15c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFRECP)))
        {
	  return 349 /* 0x15d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFSGNJ))
        {
	  return 350 /* 0x15e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFCLASS))
        {
	  return 351 /* 0x15f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFMERGE))
        {
	  return 352 /* 0x160 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 353 /* 0x161 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTBF16)))
        {
	  return 354 /* 0x162 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED)))
        {
	  return 355 /* 0x163 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 356 /* 0x164 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 357 /* 0x165 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VMALU))
        {
	  return 358 /* 0x166 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 359 /* 0x167 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VGATHER))
        {
	  return 360 /* 0x168 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 361 /* 0x169 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 362 /* 0x16a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_RDFRM)))
        {
	  return 363 /* 0x16b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VLSEGDE)))
        {
	  return 364 /* 0x16c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_ATOMIC)))
        {
	  return 365 /* 0x16d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 366 /* 0x16e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_SFB_ALU)))
        {
	  return 367 /* 0x16f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 368 /* 0x170 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 369 /* 0x171 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 370 /* 0x172 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 371 /* 0x173 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_CLMUL))
        {
	  return 372 /* 0x174 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 373 /* 0x175 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCVT_I2F))
        {
	  return 374 /* 0x176 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCVT_F2I))
        {
	  return 375 /* 0x177 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CPOP)))
        {
	  return 376 /* 0x178 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_CPOP))
        {
	  return 377 /* 0x179 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FMOVE)))
        {
	  return 378 /* 0x17a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCMP))
        {
	  return 379 /* 0x17b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 380 /* 0x17c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FMADD) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 381 /* 0x17d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 382 /* 0x17e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 383 /* 0x17f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 384 /* 0x180 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 385 /* 0x181 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 386 /* 0x182 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 387 /* 0x183 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLDFF)))
        {
	  return 388 /* 0x184 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSTM)))
        {
	  return 389 /* 0x185 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VLDM))
        {
	  return 390 /* 0x186 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS)))
        {
	  return 391 /* 0x187 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 392 /* 0x188 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS)))
        {
	  return 393 /* 0x189 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VANDN)))
        {
	  return 394 /* 0x18a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSHIFT))
        {
	  return 395 /* 0x18b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSSHIFT))
        {
	  return 396 /* 0x18c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VICMP))
        {
	  return 397 /* 0x18d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMUL))
        {
	  return 398 /* 0x18e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMULADD))
        {
	  return 399 /* 0x18f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VWSLL)))
        {
	  return 400 /* 0x190 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIDIV))
        {
	  return 401 /* 0x191 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU)))
        {
	  return 402 /* 0x192 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSMUL))
        {
	  return 403 /* 0x193 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VNCLIP)))
        {
	  return 404 /* 0x194 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFMERGE)))
        {
	  return 405 /* 0x195 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_SF_VQMACC)))
        {
	  return 406 /* 0x196 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VFCMP))
        {
	  return 407 /* 0x197 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFMOV)))
        {
	  return 408 /* 0x198 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFSGNJ)))
        {
	  return 409 /* 0x199 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFDIV)))
        {
	  return 410 /* 0x19a */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VMALU))
        {
	  return 411 /* 0x19b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS)))
        {
	  return 412 /* 0x19c */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMIDX) || (cached_type == TYPE_VMIOTA)))
        {
	  return 413 /* 0x19d */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VMSFS))
        {
	  return 414 /* 0x19e */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOV)))
        {
	  return 415 /* 0x19f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMERGE))
        {
	  return 416 /* 0x1a0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VGATHER))
        {
	  return 417 /* 0x1a1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 418 /* 0x1a2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 419 /* 0x1a3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 420 /* 0x1a4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 421 /* 0x1a5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VAESEF) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R)))
        {
	  return 422 /* 0x1a6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_ROTATE)))
        {
	  return 423 /* 0x1a7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 424 /* 0x1a8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_IDIV))
        {
	  return 425 /* 0x1a9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_IMUL))
        {
	  return 426 /* 0x1aa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_LOAD))
        {
	  return 427 /* 0x1ab */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 428 /* 0x1ac */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 429 /* 0x1ad */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCMP)))
        {
	  return 430 /* 0x1ae */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 431 /* 0x1af */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FMUL))
        {
	  return 432 /* 0x1b0 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FMADD))
        {
	  return 433 /* 0x1b1 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 434 /* 0x1b2 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VROR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 435 /* 0x1b3 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE)))
        {
	  return 436 /* 0x1b4 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 437 /* 0x1b5 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && (cached_type == TYPE_IDIV))
        {
	  return 438 /* 0x1b6 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && (cached_type == TYPE_IMUL))
        {
	  return 439 /* 0x1b7 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 440 /* 0x1b8 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 441 /* 0x1b9 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCMP)))
        {
	  return 442 /* 0x1ba */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 443 /* 0x1bb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 444 /* 0x1bc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VROR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 445 /* 0x1bd */;
        }
      else
        {
	  return 447 /* 0x1bf */;
        }

    }
}

