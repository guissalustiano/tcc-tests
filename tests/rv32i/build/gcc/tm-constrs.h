/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/riscv.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 54 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 60 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 69 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 71 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 78 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 79 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 85 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 86 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 90 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 94 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONSTANT_P (op))) && (
#line 95 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(!flag_pic || raw_constraint_p || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 99 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONSTANT_P (op))) && ((
#line 100 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 101 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(!flag_pic || raw_constraint_p || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint__c (rtx op)
{
  return (
#line 105 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONSTANT_P (op))) && (
#line 106 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(!CONST_SCALAR_INT_P (op)));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 110 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 111 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(!flag_pic || raw_constraint_p || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 115 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 116 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 122 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 123 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 128 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 61 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(SMALL_OPERAND (ival)));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 66 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 0));
}
static inline bool
satisfies_constraint_k01 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 71 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 1));
}
static inline bool
satisfies_constraint_k02 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 76 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 2));
}
static inline bool
satisfies_constraint_k03 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 81 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 3));
}
static inline bool
satisfies_constraint_k04 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 86 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 4));
}
static inline bool
satisfies_constraint_k08 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 91 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(ival == 8));
}
static inline bool
satisfies_constraint_P (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 96 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -16, 15)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 101 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 31)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 106 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(LUI_OPERAND (ival)));
}
static inline bool
satisfies_constraint_MiG (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 111 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival,  2048,  4094))) || (
#line 112 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -4096, -2049))));
}
static inline bool
satisfies_constraint_Ds3 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 118 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 1, 3)));
}
static inline bool
satisfies_constraint_DsS (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 124 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
((ival & 31) == 31));
}
static inline bool
satisfies_constraint_DsD (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 130 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
((ival & 63) == 63));
}
static inline bool
satisfies_constraint_DbS (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 135 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(SINGLE_BIT_MASK_OPERAND (ival)));
}
static inline bool
satisfies_constraint_DnS (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 140 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(SINGLE_BIT_MASK_OPERAND (~ival)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 147 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_A (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 152 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(GET_CODE(XEXP(op,0)) == REG));
}
static inline bool
satisfies_constraint_S (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return absolute_symbolic_operand (op, mode);
}
static inline bool
satisfies_constraint_U (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return plt_symbolic_operand (op, mode);
}
static inline bool
satisfies_constraint_T (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (move_operand (op, mode)) && (
#line 167 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(CONSTANT_P (op)));
}
static inline bool
satisfies_constraint_Bq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 174 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(TARGET_BYTE));
}
static inline bool
satisfies_constraint_Bh (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 179 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(TARGET_HALF));
}
static inline bool
satisfies_constraint_Bs (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 184 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(GET_MODE (op) == QImode ? TARGET_BYTE : TARGET_HALF));
}
static inline bool
satisfies_constraint_zfli (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 191 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(TARGET_ZFA && (riscv_float_const_rtx_index_for_fli (op) != -1)));
}
static inline bool
satisfies_constraint_vp (rtx op)
{
  return (GET_CODE (op) == CONST_POLY_INT) && (
#line 217 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(known_eq (rtx_to_poly_int64 (op), BYTES_PER_RISCV_VECTOR)));
}
static inline bool
satisfies_constraint_vu (rtx op)
{
  return (GET_CODE (op) == UNSPEC) && (
#line 222 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(XINT (op, 1) == UNSPEC_VUNDEF));
}
static inline bool
satisfies_constraint_vi (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 227 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(riscv_vector::const_vec_all_same_in_range_p (op, -16, 15)));
}
static inline bool
satisfies_constraint_vj (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 232 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(riscv_vector::const_vec_all_same_in_range_p (op, -15, 16)));
}
static inline bool
satisfies_constraint_vk (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 237 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(riscv_vector::const_vec_all_same_in_range_p (op, 0, 31)));
}
static inline bool
satisfies_constraint_vl (rtx op)
{
  return (GET_CODE (op) == CONST_INT) && ((
#line 242 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(!TARGET_XTHEADVECTOR && satisfies_constraint_K (op))) || (
#line 243 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(TARGET_XTHEADVECTOR && satisfies_constraint_J (op))));
}
static inline bool
satisfies_constraint_Wc0 (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 249 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(op == CONST0_RTX (GET_MODE (op))));
}
static inline bool
satisfies_constraint_Wc1 (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 255 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(op == CONSTM1_RTX (GET_MODE (op))));
}
static inline bool
satisfies_constraint_Wb1 (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 261 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(rtx_equal_p (op, riscv_vector::gen_scalar_move_mask (GET_MODE (op)))));
}
static inline bool
satisfies_constraint_Wdm (rtx op)
{
  return (
#line 265 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(strided_load_broadcast_p ())) && ((GET_CODE (op) == MEM) && (GET_CODE (XEXP (op, 0)) == REG));
}
static inline bool
satisfies_constraint_th__m__mia (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 275 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(th_memidx_legitimate_modify_p (op, true)));
}
static inline bool
satisfies_constraint_th__m__mib (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 281 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(th_memidx_legitimate_modify_p (op, false)));
}
static inline bool
satisfies_constraint_th__m__mir (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 287 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(th_memidx_legitimate_index_p (op, false)));
}
static inline bool
satisfies_constraint_th__m__miu (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 293 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(th_memidx_legitimate_index_p (op, true)));
}
static inline bool
satisfies_constraint_th__m__noi (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 299 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(!th_memidx_legitimate_modify_p (op, true))) && ((
#line 300 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(!th_memidx_legitimate_modify_p (op, false))) && ((
#line 301 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(!th_memidx_legitimate_index_p (op, false))) && (
#line 302 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(!th_memidx_legitimate_index_p (op, true))))));
}
static inline bool
satisfies_constraint_CV__alu__pow2 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 309 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 1073741823))) && (
#line 310 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(exact_log2 (ival + 1) != -1)));
}
static inline bool
satisfies_constraint_CV__bi__sign5 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 316 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -16, 15)));
}
static inline bool
satisfies_constraint_CV__simd__si6 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 321 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -32, 31)));
}
static inline bool
satisfies_constraint_CV__simd__un6 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 326 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 63)));
}
static inline bool
satisfies_constraint_CV__simd__i01 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 331 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 64, 127)));
}
static inline bool
satisfies_constraint_CV__simd__i02 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 336 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -128, -65)));
}
static inline bool
satisfies_constraint_CV__simd__i03 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 341 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, -64, -1)));
}
static inline bool
satisfies_constraint_Ou01 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 346 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 1)));
}
static inline bool
satisfies_constraint_Ou02 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 351 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 3)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return prefetch_operand (op, mode);
}
static inline bool
satisfies_constraint_ZD (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return 
#line 359 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(TARGET_XMIPSCBOP && riscv_prefetch_offset_address_p (op, mode));
}
static inline bool
satisfies_constraint_Ou07 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 364 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
(IN_RANGE (ival, 0, 127)));
}
static inline bool
satisfies_constraint_ads__Bext (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 369 "/home/salust/p/scgcc/tests/rv32i/../../gcc/gcc/config/riscv/constraints.md"
((ival & (ival + 1)) == 0));
}
#endif /* tm-constrs.h */
