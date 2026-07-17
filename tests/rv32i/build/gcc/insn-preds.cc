/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"


struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
struct target_constraints *this_target_constraints = &default_target_constraints;
#endif
static inline bool
aligned_register_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 25 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
{
  /* Require the offset in a non-paradoxical subreg to be naturally aligned.
     For example, if we have a subreg of something that is double the size of
     this operand, the offset must select the first or second half of it.  */
  if (SUBREG_P (op)
      && multiple_p (SUBREG_BYTE (op), GET_MODE_SIZE (GET_MODE (op))))
    op = SUBREG_REG (op);
  if (!REG_P (op))
    return false;

  if (HARD_REGISTER_P (op))
    {
      if (!in_hard_reg_set_p (operand_reg_set, GET_MODE (op), REGNO (op)))
	return false;

      /* Reject hard registers that would need reloading, so that the reload
	 is visible to IRA and to pre-RA optimizers.  */
      if (REGNO (op) % REG_NREGS (op) != 0)
	return false;
    }
  return true;
}

bool
aligned_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(aligned_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
const_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 24 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(SMALL_OPERAND (INTVAL (op))));
}

bool
arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_arith_operand (op, mode)) || (register_operand (op, mode));
}

bool
prefetch_const_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 32 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
((IN_RANGE (INTVAL (op),  0, 511))));
}

bool
zicbop_prefetch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((((
#line 39 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(const_arith_operand (op, VOIDmode))) && (
#line 40 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
((INTVAL (op) & 0x1f) == 0))) || ((GET_CODE (op) == PLUS) && ((
#line 42 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(register_operand (XEXP (op, 0), word_mode))) && ((
#line 43 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(const_arith_operand (XEXP (op, 1), VOIDmode))) && (
#line 44 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
((INTVAL (XEXP (op, 1)) & 0x1f) == 0)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
mips_prefetch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((
#line 49 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(prefetch_const_operand (op, VOIDmode))) || ((GET_CODE (op) == PLUS) && ((
#line 51 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(register_operand (XEXP (op, 0), word_mode))) && (
#line 52 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(prefetch_const_operand (XEXP (op, 1), VOIDmode)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
prefetch_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 56 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_XMIPSCBOP)) ? (mips_prefetch_operand (op, mode)) : (zicbop_prefetch_operand (op, mode));
}

bool
lui_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 62 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(LUI_OPERAND (INTVAL (op))));
}

bool
sfb_alu_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arith_operand (op, mode)) || (lui_operand (op, mode));
}

bool
movcc_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 69 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_SFB_ALU || TARGET_XTHEADCONDMOV
			     || TARGET_ZICOND_LIKE)) ? (sfb_alu_operand (op, mode)) : (arith_operand (op, mode));
}

bool
const_csr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
const_0_3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 80 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

bool
const_0_10_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 84 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 10)));
}

bool
csr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_csr_operand (op, mode)) || (register_operand (op, mode));
}

bool
vector_scalar_shift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return csr_operand (op, mode);
}

bool
sle_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 97 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(SMALL_OPERAND (INTVAL (op) + 1)));
}

bool
sleu_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (sle_operand (op, mode)) && (
#line 101 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) + 1 != 0));
}

bool
const_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_DOUBLE:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 105 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(op == CONST0_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
const_1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return (
#line 109 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(op == CONST1_RTX (GET_MODE (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
const_1_or_2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 113 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 2));
}

bool
const_1_or_4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 117 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 4));
}

bool
const_1_or_8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 121 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 8));
}

bool
reg_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_0_operand (op, mode)) || (register_operand (op, mode));
}

bool
stack_push_up_to_ra_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 130 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 1)));
}

bool
stack_push_up_to_s0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 134 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 2)));
}

bool
stack_push_up_to_s1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 138 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 3)));
}

bool
stack_push_up_to_s2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 142 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 4)));
}

bool
stack_push_up_to_s3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 146 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 5)));
}

bool
stack_push_up_to_s4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 150 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 6)));
}

bool
stack_push_up_to_s5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 154 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 7)));
}

bool
stack_push_up_to_s6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 158 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 8)));
}

bool
stack_push_up_to_s7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 162 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 9)));
}

bool
stack_push_up_to_s8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 166 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 10)));
}

bool
stack_push_up_to_s9_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 170 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 11)));
}

bool
stack_push_up_to_s11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 174 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op) * -1, 13)));
}

bool
stack_pop_up_to_ra_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 178 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 1)));
}

bool
stack_pop_up_to_s0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 182 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 2)));
}

bool
stack_pop_up_to_s1_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 186 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 3)));
}

bool
stack_pop_up_to_s2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 190 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 4)));
}

bool
stack_pop_up_to_s3_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 194 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 5)));
}

bool
stack_pop_up_to_s4_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 198 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 6)));
}

bool
stack_pop_up_to_s5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 202 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 7)));
}

bool
stack_pop_up_to_s6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 206 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 8)));
}

bool
stack_pop_up_to_s7_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 210 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 9)));
}

bool
stack_pop_up_to_s8_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 214 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 10)));
}

bool
stack_pop_up_to_s9_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 218 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 11)));
}

bool
stack_pop_up_to_s11_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 222 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_zcmp_valid_stack_adj_bytes_p (INTVAL (op), 13)));
}

bool
a0a1_reg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 226 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (REGNO (op), A0_REGNUM, A1_REGNUM)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
zcmp_mv_sreg_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) && (
#line 230 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_RVE ? IN_RANGE (REGNO (op), S0_REGNUM, S1_REGNUM)
                    : IN_RANGE (REGNO (op), S0_REGNUM, S1_REGNUM)
                    || IN_RANGE (REGNO (op), S2_REGNUM, S7_REGNUM)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
branch_on_bit_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 237 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) >= IMM_BITS - 1));
}

static inline bool
splittable_const_int_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 243 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  /* Don't handle multi-word moves this way; we don't want to introduce
     the individual word-mode moves until after reload.  */
  if (GET_MODE_SIZE (mode).to_constant () > UNITS_PER_WORD)
    return false;

  /* Check whether the constant can be loaded in a single
     instruction with zbs extensions.  */
  if (TARGET_ZBS && SINGLE_BIT_MASK_OPERAND (INTVAL (op)))
    return false;

  /* Otherwise check whether the constant can be loaded in a single
     instruction.  */
  return !LUI_OPERAND (INTVAL (op)) && !SMALL_OPERAND (INTVAL (op));
}

bool
splittable_const_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(splittable_const_int_operand_1 (op, mode)));
}

static inline bool
p2m1_shift_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 261 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  int val = exact_log2 (INTVAL (op) + 1);
  if (val < 12)
    return false;
  return true;
 }

bool
p2m1_shift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(p2m1_shift_operand_1 (op, mode)));
}

static inline bool
high_mask_shift_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 270 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  int val1 = clz_hwi (~ INTVAL (op));
  int val0 = ctz_hwi (INTVAL (op));
  if ((val0 + val1 == BITS_PER_WORD)
      && val0 > 31 && val0 < 64)
    return true;
  return false;
}

bool
high_mask_shift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(high_mask_shift_operand_1 (op, mode)));
}

static inline bool
move_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 281 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  enum riscv_symbol_type symbol_type;

  /* The thinking here is as follows:

     (1) The move expanders should split complex load sequences into
	 individual instructions.  Those individual instructions can
	 then be optimized by all rtl passes.

     (2) The target of pre-reload load sequences should not be used
	 to store temporary results.  If the target register is only
	 assigned one value, reload can rematerialize that value
	 on demand, rather than spill it to the stack.

     (3) If we allowed pre-reload passes like combine and cse to recreate
	 complex load sequences, we would want to be able to split the
	 sequences before reload as well, so that the pre-reload scheduler
	 can see the individual instructions.  This falls foul of (2);
	 the splitter would be forced to reuse the target register for
	 intermediate results.

     (4) We want to define complex load splitters for combine.  These
	 splitters can request a temporary scratch register, which avoids
	 the problem in (2).  They allow things like:

	      (set (reg T1) (high SYM))
	      (set (reg T2) (low (reg T1) SYM))
	      (set (reg X) (plus (reg T2) (const_int OFFSET)))

	 to be combined into:

	      (set (reg T3) (high SYM+OFFSET))
	      (set (reg X) (lo_sum (reg T3) SYM+OFFSET))

	 if T2 is only used this once.  */
  switch (GET_CODE (op))
    {
    case CONST_INT:
      return !splittable_const_int_operand (op, mode);

    case CONST_POLY_INT:
      return known_eq (rtx_to_poly_int64 (op), BYTES_PER_RISCV_VECTOR);

    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      return riscv_symbolic_constant_p (op, &symbol_type)
	     && !riscv_split_symbol_type (symbol_type)
	     && symbol_type != SYMBOL_FORCE_TO_MEM;

    case HIGH:
      op = XEXP (op, 0);
      return riscv_symbolic_constant_p (op, &symbol_type)
	      && riscv_split_symbol_type (symbol_type)
	      && symbol_type != SYMBOL_PCREL;

    /* Be tight about the SUBREGs we accept.  In particular,
       (subreg (mem)) has been discouraged for decades.  Just
       allow (subreg (reg)) until such time as we see a strong
       need to be more permissive.  */
    case SUBREG:
      return REG_P (SUBREG_REG (op));

    default:
      return true;
    }
}

bool
move_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(move_operand_1 (op, mode)));
}

static inline bool
symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 351 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  enum riscv_symbol_type type;
  return riscv_symbolic_constant_p (op, &type);
}

bool
symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
absolute_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 358 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  enum riscv_symbol_type type;
  return (riscv_symbolic_constant_p (op, &type)
	  && (type == SYMBOL_ABSOLUTE || type == SYMBOL_PCREL));
}

bool
absolute_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(absolute_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
plt_symbolic_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 366 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  enum riscv_symbol_type type;
  return (riscv_symbolic_constant_p (op, &type)
	  && type == SYMBOL_GOT_DISP && !SYMBOL_REF_WEAK (op) && flag_plt);
}

bool
plt_symbolic_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case CONST:
    case SYMBOL_REF:
    case LABEL_REF:
      break;
    default:
      return false;
    }
  return (
(plt_symbolic_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

static inline bool
call_insn_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 374 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  if (!TARGET_AUIPC || riscv_cmodel == CM_LARGE)
    return register_operand (op, mode);
  else
    return (absolute_symbolic_operand (op, mode)
	    || plt_symbolic_operand (op, mode)
	    || register_operand (op, mode));
}

bool
call_insn_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (general_operand (op, mode)) && (
(call_insn_operand_1 (op, mode)));
}

bool
modular_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case PLUS:
    case MINUS:
    case MULT:
    case ASHIFT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
ne_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == NE) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
equality_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
signed_order_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case LE:
    case GE:
    case GT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
subreg_lowpart_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == TRUNCATE) || ((GET_CODE (op) == SUBREG) && (
#line 398 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(subreg_lowpart_p (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
fp_native_comparison (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case LT:
    case LE:
    case GT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
fp_scc_comparison (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNGE:
    case UNLE:
    case UNGT:
    case LTGT:
    case NE:
    case EQ:
    case LT:
    case LE:
    case GT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
fp_branch_comparison (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNGE:
    case UNLE:
    case UNGT:
    case UNEQ:
    case LTGT:
    case NE:
    case EQ:
    case LT:
    case LE:
    case GT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
gpr_save_operation_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 411 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  return riscv_gpr_save_operation_p (op);
}

bool
gpr_save_operation (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(gpr_save_operation_1 (op, mode)));
}

bool
single_bit_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 418 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(SINGLE_BIT_MASK_OPERAND (UINTVAL (op))));
}

bool
not_single_bit_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 422 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(SINGLE_BIT_MASK_OPERAND (~UINTVAL (op))));
}

bool
arith_or_mode_mask_or_zbs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (arith_operand (op, mode)) || (((
#line 426 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_ZBS)) && (not_single_bit_mask_operand (op, mode))) || (((GET_CODE (op) == CONST_INT) && (
#line 429 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(UINTVAL (op) == GET_MODE_MASK (HImode)
			 || UINTVAL (op) == GET_MODE_MASK (SImode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode))));
}

bool
const_si_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 434 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
((INTVAL (op) & (GET_MODE_BITSIZE (SImode) - 1))
                    == GET_MODE_BITSIZE (SImode) - 1));
}

bool
const_di_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 439 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
((INTVAL (op) & (GET_MODE_BITSIZE (DImode) - 1))
                    == GET_MODE_BITSIZE (DImode) - 1));
}

bool
imm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 444 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) < 5));
}

bool
imm123_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 449 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 1, 3)));
}

static inline bool
consecutive_bits_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 454 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  unsigned HOST_WIDE_INT val = UINTVAL (op);
  if (exact_log2 ((val >> ctz_hwi (val)) + 1) <= 0)
    return false;

  return true;
}

bool
consecutive_bits_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(consecutive_bits_operand_1 (op, mode)));
}

static inline bool
const_two_s12_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 464 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  return SUM_OF_TWO_S12 (INTVAL (op));
}

bool
const_two_s12 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(const_two_s12_1 (op, mode)));
}

bool
immediate_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
const_int6s_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 475 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), -32, 31)));
}

bool
int6s_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int6s_operand (op, mode)) || (register_operand (op, mode));
}

bool
const_int2_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 483 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 3)));
}

bool
const_int6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 487 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 63)));
}

bool
int6_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int6_operand (op, mode)) || (register_operand (op, mode));
}

bool
const_int5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 495 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
const_int5s_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 499 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), -16, 15)));
}

bool
vector_length_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || (((
#line 504 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_XTHEADVECTOR && rtx_equal_p (op, const0_rtx))) || (
#line 505 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(!TARGET_XTHEADVECTOR))) && (const_csr_operand (op, mode)));
}

bool
autovec_length_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || (GET_CODE (op) == CONST_INT || GET_CODE (op) == CONST_POLY_INT);
}

bool
reg_or_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (memory_operand (op, mode));
}

bool
reg_or_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (const_int_operand (op, mode));
}

bool
vector_const_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 522 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(satisfies_constraint_Wc0 (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_const_int_or_double_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 526 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(satisfies_constraint_vi (op)
                    || satisfies_constraint_Wc0 (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_move_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (nonimmediate_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 532 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(reload_completed
		|| satisfies_constraint_vi (op)
		|| satisfies_constraint_Wc0 (op)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
vector_all_trues_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 538 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(op == CONSTM1_RTX (GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_least_significant_set_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == CONST_VECTOR) && (
#line 542 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(rtx_equal_p (op, riscv_vector::gen_scalar_move_mask (GET_MODE (op)))))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
vector_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (vector_all_trues_mask_operand (op, mode));
}

bool
vector_broadcast_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_least_significant_set_mask_operand (op, mode)) || (vector_all_trues_mask_operand (op, mode));
}

bool
strided_broadcast_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (vector_least_significant_set_mask_operand (op, mode)) || ((register_operand (op, mode)) || (vector_all_trues_mask_operand (op, mode)));
}

bool
vector_undef_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 558 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(rtx_equal_p (op, RVV_VUNDEF (GET_MODE (op))))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
vector_merge_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (vector_undef_operand (op, mode));
}

bool
autovec_else_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (scratch_operand (op, mode));
}

bool
maskload_else_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return scratch_operand (op, mode);
}

bool
vector_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 574 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_vector::const_vec_all_same_in_range_p (op, -16, 15)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
vector_neg_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 579 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_vector::const_vec_all_same_in_range_p (op, -15, 16)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
vector_shift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_VECTOR) && (
#line 584 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_vector::const_vec_all_same_in_range_p (op, 0, 31)))) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
vector_perm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((GET_CODE (op) == CONST_VECTOR) && (
(mode == VOIDmode || GET_MODE (op) == mode)));
}

bool
vector_gs_extension_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_1_operand (op, mode)) || ((const_0_operand (op, mode)) && (
#line 593 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(Pmode == SImode)));
}

bool
vector_gs_scale_operand_16_rv32 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 597 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1
		    || (INTVAL (op) == 2 && Pmode == SImode)));
}

bool
vector_gs_scale_operand_32_rv32 (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 602 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1
		    || (INTVAL (op) == 4 && Pmode == SImode)));
}

bool
ltge_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case LT:
    case LTU:
    case GE:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
comparison_except_ltge_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LEU:
    case GT:
    case GTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
comparison_except_ge_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LEU:
    case GT:
    case GTU:
    case LT:
    case LTU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
comparison_swappable_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GTU:
    case GT:
    case GEU:
    case GE:
    case LTU:
    case LT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
ge_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case GE:
    case GEU:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

static inline bool
riscv_cbranch_comparison_operator_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 623 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  return TARGET_VECTOR;
}

bool
riscv_cbranch_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      break;
    default:
      return false;
    }
  return 
(riscv_cbranch_comparison_operator_1 (op, mode));
}

bool
pmode_reg_or_uimm5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || (const_csr_operand (op, mode));
}

bool
pmode_reg_or_0_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_0_operand (op, mode)) || (pmode_register_operand (op, mode));
}

bool
vector_eew8_stride_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 642 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 1 || INTVAL (op) == 0)));
}

bool
vector_eew16_stride_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 646 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 2 || INTVAL (op) == 0)));
}

bool
vector_eew32_stride_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 650 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 4 || INTVAL (op) == 0)));
}

bool
vector_eew64_stride_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (pmode_register_operand (op, mode)) || ((GET_CODE (op) == CONST_INT) && (
#line 654 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(INTVAL (op) == 8 || INTVAL (op) == 0)));
}

bool
vector_any_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == REG;
}

bool
direct_broadcast_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 662 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_vector::can_be_broadcast_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
strided_broadcast_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 667 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(riscv_vector::strided_broadcast_p (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
any_broadcast_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (direct_broadcast_operand (op, mode)) || (strided_broadcast_operand (op, mode));
}

bool
const_nottwobits_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 676 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(popcount_hwi (~UINTVAL (op)) == 2));
}

bool
const_nottwobits_not_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((!(arith_operand (op, mode))) && (const_nottwobits_operand (op, mode)));
}

bool
consecutive_bits32_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (consecutive_bits_operand (op, mode)) && (
#line 687 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(popcount_hwi (UINTVAL (op)) == 32));
}

bool
shifted_const_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 694 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(ctz_hwi (INTVAL (op)) > 0)) && (
#line 695 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(SMALL_OPERAND (INTVAL (op) >> ctz_hwi (INTVAL (op))))));
}

bool
const_twobits_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 700 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(popcount_hwi (UINTVAL (op)) == 2));
}

bool
const_twobits_not_arith_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((!(arith_operand (op, mode))) && (const_twobits_operand (op, mode)));
}

bool
uimm_extra_bit_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 711 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(UIMM_EXTRA_BIT_OPERAND (UINTVAL (op))));
}

bool
uimm_extra_bit_or_twobits (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((uimm_extra_bit_operand (op, mode)) || (const_twobits_not_arith_operand (op, mode)));
}

bool
not_uimm_extra_bit_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 723 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(UIMM_EXTRA_BIT_OPERAND (~UINTVAL (op))));
}

bool
not_uimm_extra_bit_or_nottwobits (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && ((not_uimm_extra_bit_operand (op, mode)) || (const_nottwobits_not_arith_operand (op, mode)));
}

static inline bool
pcrel_symbol_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 732 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  enum riscv_symbol_type type;
  return (riscv_symbolic_constant_p (op, &type)
         && type == SYMBOL_PCREL);
}

bool
pcrel_symbol_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == SYMBOL_REF) && (
(pcrel_symbol_operand_1 (op, mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
x1x5_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) && (
#line 741 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(REGNO (op) == RETURN_ADDR_REGNUM
		    || REGNO (op) == T0_REGNUM));
}

bool
bitpos_mask_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 746 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(TARGET_64BIT ? INTVAL (op) == 63 : INTVAL (op) == 31));
}

bool
reg_or_const_int_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (const_int_operand (op, mode)) || (register_operand (op, mode));
}

static inline bool
ads_branch_bbcs_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 755 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  if (TARGET_XANDESPERF && (INTVAL (op) >= 0))
    {
      if (TARGET_64BIT && INTVAL (op) <= 63)
	return true;
      else if (INTVAL (op) <=31)
	return true;
      else
	return false;
    }

  return false;
}

bool
ads_branch_bbcs_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(ads_branch_bbcs_operand_1 (op, mode)));
}

static inline bool
ads_branch_bimm_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 772 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
{
  if (TARGET_XANDESPERF)
    return satisfies_constraint_Ou07 (op);
  else
    return false;
}

bool
ads_branch_bimm_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
(ads_branch_bimm_operand_1 (op, mode)));
}

bool
ads_imm_extract_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (
#line 780 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(satisfies_constraint_ads__Bext (op))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode));
}

bool
ads_extract_size_imm_si (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 784 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 1, 32)));
}

bool
ads_extract_size_imm_di (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 788 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/predicates.md"
(IN_RANGE (INTVAL (op), 1, 64)));
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case ':':
      return CONSTRAINT__c;
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'A':
      return CONSTRAINT_A;
    case 'B':
      if (str[1] == 'h')
        return CONSTRAINT_Bh;
      if (str[1] == 's')
        return CONSTRAINT_Bs;
      if (str[1] == 'q')
        return CONSTRAINT_Bq;
      break;
    case 'C':
      if (!strncmp (str + 1, "V_bi_sign5", 10))
        return CONSTRAINT_CV__bi__sign5;
      if (!strncmp (str + 1, "V_simd_si6", 10))
        return CONSTRAINT_CV__simd__si6;
      if (!strncmp (str + 1, "V_simd_un6", 10))
        return CONSTRAINT_CV__simd__un6;
      if (!strncmp (str + 1, "V_simd_i01", 10))
        return CONSTRAINT_CV__simd__i01;
      if (!strncmp (str + 1, "V_simd_i02", 10))
        return CONSTRAINT_CV__simd__i02;
      if (!strncmp (str + 1, "V_simd_i03", 10))
        return CONSTRAINT_CV__simd__i03;
      if (!strncmp (str + 1, "V_alu_pow2", 10))
        return CONSTRAINT_CV__alu__pow2;
      break;
    case 'D':
      if (!strncmp (str + 1, "sS", 2))
        return CONSTRAINT_DsS;
      if (!strncmp (str + 1, "sD", 2))
        return CONSTRAINT_DsD;
      if (!strncmp (str + 1, "bS", 2))
        return CONSTRAINT_DbS;
      if (!strncmp (str + 1, "nS", 2))
        return CONSTRAINT_DnS;
      if (!strncmp (str + 1, "s3", 2))
        return CONSTRAINT_Ds3;
      break;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'G':
      return CONSTRAINT_G;
    case 'I':
      return CONSTRAINT_I;
    case 'J':
      return CONSTRAINT_J;
    case 'K':
      return CONSTRAINT_K;
    case 'L':
      return CONSTRAINT_L;
    case 'M':
      if (!strncmp (str + 1, "iG", 2))
        return CONSTRAINT_MiG;
      break;
    case 'O':
      if (!strncmp (str + 1, "u02", 3))
        return CONSTRAINT_Ou02;
      if (!strncmp (str + 1, "u07", 3))
        return CONSTRAINT_Ou07;
      if (!strncmp (str + 1, "u01", 3))
        return CONSTRAINT_Ou01;
      break;
    case 'P':
      return CONSTRAINT_P;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      return CONSTRAINT_R;
    case 'S':
      return CONSTRAINT_S;
    case 'T':
      return CONSTRAINT_T;
    case 'U':
      return CONSTRAINT_U;
    case 'V':
      return CONSTRAINT_V;
    case 'W':
      if (!strncmp (str + 1, "c1", 2))
        return CONSTRAINT_Wc1;
      if (!strncmp (str + 1, "b1", 2))
        return CONSTRAINT_Wb1;
      if (!strncmp (str + 1, "dm", 2))
        return CONSTRAINT_Wdm;
      if (!strncmp (str + 1, "c0", 2))
        return CONSTRAINT_Wc0;
      break;
    case 'X':
      return CONSTRAINT_X;
    case 'Z':
      if (str[1] == 'D')
        return CONSTRAINT_ZD;
      break;
    case 'a':
      if (!strncmp (str + 1, "ds_Bext", 7))
        return CONSTRAINT_ads__Bext;
      break;
    case 'c':
      if (str[1] == 'f')
        return CONSTRAINT_cf;
      if (str[1] == 'R')
        return CONSTRAINT_cR;
      if (str[1] == 'r')
        return CONSTRAINT_cr;
      break;
    case 'f':
      return CONSTRAINT_f;
    case 'i':
      return CONSTRAINT_i;
    case 'j':
      return CONSTRAINT_j;
    case 'k':
      if (!strncmp (str + 1, "02", 2))
        return CONSTRAINT_k02;
      if (!strncmp (str + 1, "03", 2))
        return CONSTRAINT_k03;
      if (!strncmp (str + 1, "04", 2))
        return CONSTRAINT_k04;
      if (!strncmp (str + 1, "08", 2))
        return CONSTRAINT_k08;
      if (!strncmp (str + 1, "01", 2))
        return CONSTRAINT_k01;
      break;
    case 'l':
      return CONSTRAINT_l;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    case 't':
      if (!strncmp (str + 1, "h_m_mib", 7))
        return CONSTRAINT_th__m__mib;
      if (!strncmp (str + 1, "h_m_mir", 7))
        return CONSTRAINT_th__m__mir;
      if (!strncmp (str + 1, "h_m_miu", 7))
        return CONSTRAINT_th__m__miu;
      if (!strncmp (str + 1, "h_m_noi", 7))
        return CONSTRAINT_th__m__noi;
      if (!strncmp (str + 1, "h_m_mia", 7))
        return CONSTRAINT_th__m__mia;
      break;
    case 'v':
      if (str[1] == 'd')
        return CONSTRAINT_vd;
      if (str[1] == 'm')
        return CONSTRAINT_vm;
      if (str[1] == 'p')
        return CONSTRAINT_vp;
      if (str[1] == 'u')
        return CONSTRAINT_vu;
      if (str[1] == 'i')
        return CONSTRAINT_vi;
      if (str[1] == 'j')
        return CONSTRAINT_vj;
      if (str[1] == 'k')
        return CONSTRAINT_vk;
      if (str[1] == 'l')
        return CONSTRAINT_vl;
      if (str[1] == 'r')
        return CONSTRAINT_vr;
      break;
    case 'y':
      if (str[1] == 'r')
        return CONSTRAINT_yr;
      break;
    case 'z':
      if (!strncmp (str + 1, "mvf", 3))
        return CONSTRAINT_zmvf;
      if (!strncmp (str + 1, "mvr", 3))
        return CONSTRAINT_zmvr;
      if (!strncmp (str + 1, "fli", 3))
        return CONSTRAINT_zfli;
      break;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__c, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_A, (int) UCHAR_MAX),
  UCHAR_MAX,
  UCHAR_MAX,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_G, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_I, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_J, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_K, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_L, (int) UCHAR_MAX),
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_P, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_R, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_S, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_T, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_U, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_f, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_j, (int) UCHAR_MAX),
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_l, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_f: return TARGET_HARD_FLOAT ? FP_REGS :
  (TARGET_ZFINX ? GR_REGS : NO_REGS);
    case CONSTRAINT_j: return SIBCALL_REGS;
    case CONSTRAINT_R: return GR_REGS;
    case CONSTRAINT_l: return JALR_REGS;
    case CONSTRAINT_yr: return NORA_REGS;
    case CONSTRAINT_cr: return RVC_GR_REGS;
    case CONSTRAINT_cf: return TARGET_HARD_FLOAT ? RVC_FP_REGS : (TARGET_ZFINX ? RVC_GR_REGS : NO_REGS);
    case CONSTRAINT_cR: return RVC_GR_REGS;
    case CONSTRAINT_zmvf: return (TARGET_ZFA || TARGET_XTHEADFMV) ? FP_REGS : NO_REGS;
    case CONSTRAINT_zmvr: return (TARGET_ZFA || TARGET_XTHEADFMV) ? GR_REGS : NO_REGS;
    case CONSTRAINT_vr: return TARGET_VECTOR ? V_REGS : NO_REGS;
    case CONSTRAINT_vd: return TARGET_VECTOR ? VD_REGS : NO_REGS;
    case CONSTRAINT_vm: return TARGET_VECTOR ? VM_REGS : NO_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_I,
  satisfies_constraint_J,
  satisfies_constraint_P,
  satisfies_constraint_K,
  satisfies_constraint_L,
  satisfies_constraint_MiG,
  satisfies_constraint_Ou01,
  satisfies_constraint_Ou02,
  satisfies_constraint_Ou07,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_A,
  satisfies_constraint_Bq,
  satisfies_constraint_Bh,
  satisfies_constraint_Bs,
  satisfies_constraint_th__m__mia,
  satisfies_constraint_th__m__mib,
  satisfies_constraint_th__m__mir,
  satisfies_constraint_th__m__miu,
  satisfies_constraint_th__m__noi,
  satisfies_constraint_p,
  satisfies_constraint_ZD,
  satisfies_constraint_k01,
  satisfies_constraint_k02,
  satisfies_constraint_k03,
  satisfies_constraint_k04,
  satisfies_constraint_k08,
  satisfies_constraint_Ds3,
  satisfies_constraint_DsS,
  satisfies_constraint_DsD,
  satisfies_constraint_DbS,
  satisfies_constraint_DnS,
  satisfies_constraint_G,
  satisfies_constraint_S,
  satisfies_constraint_U,
  satisfies_constraint_zfli,
  satisfies_constraint_vp,
  satisfies_constraint_vu,
  satisfies_constraint_vi,
  satisfies_constraint_vj,
  satisfies_constraint_vk,
  satisfies_constraint_vl,
  satisfies_constraint_Wc0,
  satisfies_constraint_Wc1,
  satisfies_constraint_Wb1,
  satisfies_constraint_CV__alu__pow2,
  satisfies_constraint_CV__bi__sign5,
  satisfies_constraint_CV__simd__si6,
  satisfies_constraint_CV__simd__un6,
  satisfies_constraint_CV__simd__i01,
  satisfies_constraint_CV__simd__i02,
  satisfies_constraint_CV__simd__i03,
  satisfies_constraint_ads__Bext,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_Wdm,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint__c,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_T,
  satisfies_constraint_Q
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_I:
      return 
#line 61 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(SMALL_OPERAND (ival));

    case CONSTRAINT_J:
      return 
#line 66 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 0);

    case CONSTRAINT_P:
      return 
#line 96 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -16, 15));

    case CONSTRAINT_K:
      return 
#line 101 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 31));

    case CONSTRAINT_L:
      return 
#line 106 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(LUI_OPERAND (ival));

    case CONSTRAINT_MiG:
      return (
#line 111 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival,  2048,  4094))) || (
#line 112 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -4096, -2049)));

    case CONSTRAINT_Ou01:
      return 
#line 346 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 1));

    case CONSTRAINT_Ou02:
      return 
#line 351 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 3));

    case CONSTRAINT_Ou07:
      return 
#line 364 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 127));

    default: break;
    }
  return false;
}


void
init_reg_class_start_regs ()
{
  for (unsigned int regno = 0; regno < FIRST_PSEUDO_REGISTER; ++regno)
    {
      if (
#line 33 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(regno % 2 == 0))
        SET_HARD_REG_BIT (this_target_constraints->register_filters[0], regno);
    }
}
