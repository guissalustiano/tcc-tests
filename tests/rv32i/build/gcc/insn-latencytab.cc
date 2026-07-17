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
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
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
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCMP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_CPOP)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 66 /* 0x42 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC)))) && (cached_type == TYPE_FSQRT))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_IDIV))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_BRANCH) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_UNKNOWN)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_ZICOND) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FMADD))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FADD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FDIV) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FSQRT) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_XIANGSHAN)))) && (cached_type == TYPE_FSQRT) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FADD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FMADD))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_FMUL))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_MTC))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_MFC))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_LOAD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_STORE))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_NOP))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_IMUL) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && (cached_type == TYPE_IDIV))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_RET) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_CALL) || (cached_type == TYPE_JALR)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_MIPS_P8700)))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_GHOST)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_IDIV))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FMOVE)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 27 /* 0x1b */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MTC))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_MFC))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_RDFRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_WRVXRM)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_CRYPTO))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_GHOST))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VANDN)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIMULADD)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VICMP))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VWSLL)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFDIV)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFCLASS)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFSGNJ)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMINMAX)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFDIV)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_SF_VQMACC)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFWREDO)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VGATHER))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_7)))) && ((cached_type == TYPE_VECTOR) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_IDIV))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_CPOP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && (cached_type == TYPE_CLMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_MOVE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCVT)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P400)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VFMUL)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_STORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_ATOMIC))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_IDIV))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_CPOP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && (cached_type == TYPE_CLMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_NOP) || (cached_type == TYPE_CONST) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_MOVE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_FCMP) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCVT)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SIFIVE_P600)))) && ((cached_type == TYPE_VICMP) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VAESKF1)))
        {
	  return 1;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 6;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR)))
        {
	  return 6;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VWSLL)))
        {
	  return 3;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 3;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VFNRCLIP)))
        {
	  return 6;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM3C)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS)))
        {
	  return 3;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 8;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && (cached_type == TYPE_VIDIV))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV)))
        {
	  return 2;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 1;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM)))
        {
	  return 20 /* 0x14 */;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 4;
        }
      else if (((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) || (((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC))))) && ((cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_LOAD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_STORE))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FMOVE))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_IMUL))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_IDIV))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && (cached_type == TYPE_FMADD))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_GENERIC_OOO)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_STORE) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_FPSTORE)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_SFB_ALU))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMOVE))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_IDIV))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FADD))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_FMADD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 9;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTR)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VLDS))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VSTS))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VECTOR) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VEXT)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VICMP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VGMUL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VCPOP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VAESZ)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSHA2CL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFMERGE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VCOMPRESS)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 8))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 16 /* 0x10 */))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 32 /* 0x20 */))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && (cached_type == TYPE_VIDIV) && ((cached_sew = get_attr_sew (insn)) == 64 /* 0x40 */))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 16 /* 0x10 */))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 32 /* 0x20 */))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)) && ((cached_sew = get_attr_sew (insn)) == 64 /* 0x40 */))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_TT_ASCALON_D8)))) && ((cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_RDFRM)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_AUIPC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_STORE))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FADD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FMUL))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FMADD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && (cached_type == TYPE_CRYPTO))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_23_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VIRED)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_ATOMIC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_LOAD) && (! (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI))))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_LOAD) && (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_STORE))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_RET)))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FADD))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FMUL))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FMADD))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I)))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_BITMANIP))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLDR)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_VIMERGE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VNCLIP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VSMUL)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VGATHER)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VFMOVVF)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFMOV)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VIDIV))
        {
	  return 35 /* 0x23 */;
        }
      else if ((cached_type == TYPE_VMALU) || (cached_type == TYPE_VMSFS))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VMPOP))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VMFFS))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFMERGE)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && (cached_type == TYPE_VFRECP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_RDFRM)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_25_SERIES)))) && ((cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_SHIFT) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_BITMANIP)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_CONDMOVE))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_LOAD) && (! (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI))))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_LOAD) && (((cached_mode = get_attr_mode (insn)) == MODE_QI) || (cached_mode == MODE_HI)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_STORE) && (((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_SI)))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_STORE) && (! (((cached_mode = get_attr_mode (insn)) == MODE_DI) || (cached_mode == MODE_SI))))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_RET) || (cached_type == TYPE_JALR) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FADD) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMUL) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMADD) && (((cached_mode = get_attr_mode (insn)) == MODE_BF) || (cached_mode == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FDIV))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FSQRT))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FCMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_FPSTORE))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VLSEGDFF)))
        {
	  return 8;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDS) || (cached_type == TYPE_VLSEGDS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VLDOX) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VLSEGDUX)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTS)))
        {
	  return 0;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VECTOR)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VEXT))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VSSHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIMINMAX))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VICMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMUL) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VSMUL)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIDIV))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWMULADD)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VIMERGE))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIMOV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VNCLIP))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFWMUL)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFDIV) || (cached_type == TYPE_VFSQRT)))
        {
	  return 38 /* 0x26 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFWMULADD)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFMINMAX))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFCMP) || (cached_type == TYPE_VFRECP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFSGNJ))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFCLASS))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VFMERGE))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFMOV) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTBF16)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED)))
        {
	  return 9;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VMALU))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VMIDX)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VGATHER))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_WRVXRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VSETVL_PRE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_GHOST) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_RDFRM)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ANDES_45_SERIES)))) && ((cached_type == TYPE_VCLZ) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VLSEGDE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD) || (cached_type == TYPE_ATOMIC)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP) || (cached_type == TYPE_SFB_ALU)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IDIV) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_SI))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_IMUL) && ((cached_mode = get_attr_mode (insn)) == MODE_DI))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_CLMUL))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_MTC) || (cached_type == TYPE_MFC)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCVT_I2F))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCVT_F2I))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ROTATE) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CPOP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_CPOP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FCVT) || (cached_type == TYPE_FMOVE)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FCMP))
        {
	  return 6;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FMADD) && (((cached_mode = get_attr_mode (insn)) == MODE_HF) || (cached_mode == MODE_SF)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_FMADD) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_HF))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_SF))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)) && ((cached_mode = get_attr_mode (insn)) == MODE_DF))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_RDVL)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDE) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLDFF)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSTE) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VSTM)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VLDM))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDS) || (cached_type == TYPE_VSTS)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VSSEGTS)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIALU) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VROR) || (cached_type == TYPE_VANDN)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSHIFT))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSSHIFT))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VICMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMUL))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMULADD))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIWALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VWSLL)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIDIV))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSALU) || (cached_type == TYPE_VAALU)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VSMUL))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VNCLIP)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFALU) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VFMERGE)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_SF_VQMACC)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VFCMP))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFMOV)))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VFSGNJ)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFSQRT) || (cached_type == TYPE_VFDIV)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VMALU))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMPOP) || (cached_type == TYPE_VMFFS)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMIDX) || (cached_type == TYPE_VMIOTA)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VMSFS))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VMOV) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VIMOV)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VIMERGE))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VGATHER))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && (cached_type == TYPE_VCOMPRESS))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VFSLIDE1DOWN)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VIRED) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_VFWREDU)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VFREDO) || (cached_type == TYPE_VFWREDO)))
        {
	  return 7;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_SPACEMIT_X60)))) && ((cached_type == TYPE_VAESEF) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_GHOST) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_SF_VC_SE) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSM4R)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_ROTATE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_IDIV))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_IMUL))
        {
	  return 9;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_LOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FPLOAD))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FCMP)))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FMOVE) || (cached_type == TYPE_MTC) || (cached_type == TYPE_MFC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FCVT_I2F)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FMUL))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && (cached_type == TYPE_FMADD))
        {
	  return 2;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RMX100)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VROR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_UNKNOWN) || (cached_type == TYPE_MOVE) || (cached_type == TYPE_CONST) || (cached_type == TYPE_ARITH) || (cached_type == TYPE_SHIFT) || (cached_type == TYPE_SLT) || (cached_type == TYPE_MULTI) || (cached_type == TYPE_AUIPC) || (cached_type == TYPE_NOP) || (cached_type == TYPE_LOGICAL) || (cached_type == TYPE_BITMANIP) || (cached_type == TYPE_MIN) || (cached_type == TYPE_MAX) || (cached_type == TYPE_MINU) || (cached_type == TYPE_MAXU) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_CTZ) || (cached_type == TYPE_ATOMIC) || (cached_type == TYPE_CONDMOVE) || (cached_type == TYPE_MVPAIR) || (cached_type == TYPE_ZICOND) || (cached_type == TYPE_CPOP) || (cached_type == TYPE_CLMUL) || (cached_type == TYPE_ROTATE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_JUMP) || (cached_type == TYPE_CALL) || (cached_type == TYPE_JALR) || (cached_type == TYPE_RET) || (cached_type == TYPE_TRAP)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && (cached_type == TYPE_IDIV))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && (cached_type == TYPE_IMUL))
        {
	  return 4;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_LOAD) || (cached_type == TYPE_FPLOAD)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_STORE) || (cached_type == TYPE_FPSTORE)))
        {
	  return 1;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_MFC) || (cached_type == TYPE_MTC) || (cached_type == TYPE_FCVT) || (cached_type == TYPE_FCVT_I2F) || (cached_type == TYPE_FCVT_F2I) || (cached_type == TYPE_FMOVE) || (cached_type == TYPE_FCMP)))
        {
	  return 3;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_FADD) || (cached_type == TYPE_FMUL) || (cached_type == TYPE_FMADD)))
        {
	  return 5;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_FDIV) || (cached_type == TYPE_FSQRT)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 729 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md"
(((enum attr_tune) riscv_microarchitecture))) == (
(TUNE_ARCV_RHX100)))) && ((cached_type == TYPE_VFWALU) || (cached_type == TYPE_VFWCVTFTOI) || (cached_type == TYPE_VROL) || (cached_type == TYPE_VMIDX) || (cached_type == TYPE_VEXT) || (cached_type == TYPE_VAESKF1) || (cached_type == TYPE_VFREDO) || (cached_type == TYPE_VECTOR) || (cached_type == TYPE_SFB_ALU) || (cached_type == TYPE_VLDS) || (cached_type == TYPE_VIMINMAX) || (cached_type == TYPE_VFCMP) || (cached_type == TYPE_VIMOV) || (cached_type == TYPE_VSMUL) || (cached_type == TYPE_VNCLIP) || (cached_type == TYPE_VLDM) || (cached_type == TYPE_VSETVL_PRE) || (cached_type == TYPE_VWSLL) || (cached_type == TYPE_VFMERGE) || (cached_type == TYPE_VMFFS) || (cached_type == TYPE_VCLMUL) || (cached_type == TYPE_VMPOP) || (cached_type == TYPE_WRFRM) || (cached_type == TYPE_VSHA2MS) || (cached_type == TYPE_VIDIV) || (cached_type == TYPE_VFNCVTITOF) || (cached_type == TYPE_VAESEF) || (cached_type == TYPE_VLDR) || (cached_type == TYPE_VLSEGDOX) || (cached_type == TYPE_VFWMUL) || (cached_type == TYPE_VFMUL) || (cached_type == TYPE_VFREDU) || (cached_type == TYPE_CRYPTO) || (cached_type == TYPE_VMALU) || (cached_type == TYPE_VIMUL) || (cached_type == TYPE_VGHSH) || (cached_type == TYPE_VIALU) || (cached_type == TYPE_VIWMUL) || (cached_type == TYPE_VFCVTFTOI) || (cached_type == TYPE_VAALU) || (cached_type == TYPE_VISLIDE1UP) || (cached_type == TYPE_VFCVTITOF) || (cached_type == TYPE_VFWCVTFTOF) || (cached_type == TYPE_VGATHER) || (cached_type == TYPE_VAESZ) || (cached_type == TYPE_VBREV) || (cached_type == TYPE_VSHIFT) || (cached_type == TYPE_VSHA2CH) || (cached_type == TYPE_VSSEGTUX) || (cached_type == TYPE_VSSEGTOX) || (cached_type == TYPE_VCOMPRESS) || (cached_type == TYPE_VCPOP) || (cached_type == TYPE_VSTUX) || (cached_type == TYPE_VFNCVTFTOF) || (cached_type == TYPE_VFRECP) || (cached_type == TYPE_VSSEGTS) || (cached_type == TYPE_SF_VFNRCLIP) || (cached_type == TYPE_VSTOX) || (cached_type == TYPE_VSTR) || (cached_type == TYPE_VLSEGDFF) || (cached_type == TYPE_VIRED) || (cached_type == TYPE_VIMOVVX) || (cached_type == TYPE_VISLIDE1DOWN) || (cached_type == TYPE_VCLZ) || (cached_type == TYPE_VFWREDU) || (cached_type == TYPE_RDVL) || (cached_type == TYPE_VLDE) || (cached_type == TYPE_VAESEM) || (cached_type == TYPE_VSM3ME) || (cached_type == TYPE_VMIOTA) || (cached_type == TYPE_VLDUX) || (cached_type == TYPE_VLSEGDE) || (cached_type == TYPE_VSSEGTE) || (cached_type == TYPE_VFWMACCBF16) || (cached_type == TYPE_VFWREDO) || (cached_type == TYPE_VCTZ) || (cached_type == TYPE_VSM4K) || (cached_type == TYPE_VSSHIFT) || (cached_type == TYPE_VSTS) || (cached_type == TYPE_VMSFS) || (cached_type == TYPE_VFMOVVF) || (cached_type == TYPE_VFSLIDE1DOWN) || (cached_type == TYPE_VIWRED) || (cached_type == TYPE_VSLIDEDOWN) || (cached_type == TYPE_VFNCVTFTOI) || (cached_type == TYPE_VSM3C) || (cached_type == TYPE_VNSHIFT) || (cached_type == TYPE_VFALU) || (cached_type == TYPE_VFSQRT) || (cached_type == TYPE_WRVXRM) || (cached_type == TYPE_VFMULADD) || (cached_type == TYPE_VMOV) || (cached_type == TYPE_VSETVL) || (cached_type == TYPE_VFCLASS) || (cached_type == TYPE_VSHA2CL) || (cached_type == TYPE_VICMP) || (cached_type == TYPE_VLDFF) || (cached_type == TYPE_VFDIV) || (cached_type == TYPE_VSTE) || (cached_type == TYPE_VAESKF2) || (cached_type == TYPE_VFNCVTBF16) || (cached_type == TYPE_VANDN) || (cached_type == TYPE_VBREV8) || (cached_type == TYPE_VGMUL) || (cached_type == TYPE_VAESDM) || (cached_type == TYPE_VLSEGDUX) || (cached_type == TYPE_VFSGNJ) || (cached_type == TYPE_VFMOV) || (cached_type == TYPE_RDFRM) || (cached_type == TYPE_VLSEGDS) || (cached_type == TYPE_VCLMULH) || (cached_type == TYPE_VIMULADD) || (cached_type == TYPE_VIWALU) || (cached_type == TYPE_VFWMULADD) || (cached_type == TYPE_VIMERGE) || (cached_type == TYPE_VROR) || (cached_type == TYPE_RDVLENB) || (cached_type == TYPE_VFWCVTITOF) || (cached_type == TYPE_VAESDF) || (cached_type == TYPE_VIWMULADD) || (cached_type == TYPE_VREV8) || (cached_type == TYPE_VSM4R) || (cached_type == TYPE_VSALU) || (cached_type == TYPE_VFMINMAX) || (cached_type == TYPE_VICALU) || (cached_type == TYPE_VSLIDEUP) || (cached_type == TYPE_VLDOX) || (cached_type == TYPE_VSTM) || (cached_type == TYPE_VFWCVTBF16) || (cached_type == TYPE_VFMOVFV) || (cached_type == TYPE_VFSLIDE1UP) || (cached_type == TYPE_VIMOVXV) || (cached_type == TYPE_SF_VC) || (cached_type == TYPE_SF_VQMACC) || (cached_type == TYPE_SF_VC_SE)))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    }
}

