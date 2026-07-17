/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_logical_inverted_value (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 23, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	if (tree_truth_valued_p (_p0))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 24, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 25, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 26, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	      }
	  }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	if (tree_truth_valued_p (_p0))
	  {
	    if (integer_truep (_p1))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  {
		    res_ops[0] = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 27, __FILE__, __LINE__, false);
		    return true;
		  }
		}
	      }
	  }
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_3 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail74;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, LSHIFT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 51, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail74:;
    }
  return NULL_TREE;
}

tree
generic_simplify_11 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail85;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail85;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 58, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail85:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail86;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail86;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 59, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail86:;
    }
  return NULL_TREE;
}

tree
generic_simplify_20 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail95;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 68, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail95:;
  return NULL_TREE;
}

tree
generic_simplify_27 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail102;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 75, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail102:;
    }
  return NULL_TREE;
}

tree
generic_simplify_36 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail113;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail113;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail113;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[4];
	tree res_op2;
	res_op2 = captures[7];
	tree _r;
	_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 85, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail113:;
    }
  return NULL_TREE;
}

tree
generic_simplify_42 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && operand_equal_p (captures[2], captures[6], 0)
 && (tree_nonzero_bits (captures[0]) & tree_nonzero_bits (captures[4])) == 0
)
    {
      {
 tree t = type;
 if (!TYPE_OVERFLOW_WRAPS (t))
 t = unsigned_type_for (t);
 wide_int c = wi::add (wi::to_wide (captures[3]), wi::to_wide (captures[7]));
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail120;
	  if (TREE_SIDE_EFFECTS (captures[7])) goto next_after_fail120;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail120;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != t)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, t, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  wide_int_to_tree (t, c);
	      _r1 = fold_build2_loc (loc, MULT_EXPR, t, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 86, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail120:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_54 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail135;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail135;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail135;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 103, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail135:;
    }
  return NULL_TREE;
}

tree
generic_simplify_60 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  {
 tree t1 = type;
 if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_WRAPS (type) != TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
 t1 = TYPE_OVERFLOW_WRAPS (type) ? type : TREE_TYPE (captures[1]);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail141;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    if (TREE_TYPE (_o2[0]) != t1)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, t1, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (TREE_TYPE (_o2[0]) != t1)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, t1, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 109, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail141:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_72 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
 && (!FLOAT_TYPE_P (type) || flag_associative_math)
)
    {
      if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
)
	{
	  if (TREE_CODE (type) == INTEGER_TYPE
 && wi::neg_p (wi::to_wide (captures[3]))
 && wi::to_wide (captures[3]) != wi::min_value (TYPE_PRECISION (type), SIGNED)
)
	    {
	      {
 wide_int c0 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[3]);
 wide_int c2_abs = wi::abs (c2);
		  if (wi::multiple_of_p (c2_abs, c0, TYPE_SIGN (type))
)
		    {
		      {
 wide_int div_res = wi::sdiv_trunc (c2, c0);
 tree div_cst = wide_int_to_tree (type, div_res);
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail162;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail162;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail162;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[2];
			      _o1[1] =  div_cst;
			      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[1];
			    tree _r;
			    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 130, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail162:;
		      }
		    }
	      }
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_82 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (captures[1]) == SSA_NAME && num_imm_uses (captures[1]) == 2
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail173;
      {
	if (! tree_invariant_p (captures[2])) goto next_after_fail173;
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[3], _r2;
	    _o2[0] = unshare_expr (captures[2]);
	    _o2[1] = captures[2];
	    _o2[2] = captures[4];
	    _r2 = fold_build3_loc (loc, VEC_PERM_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1], _o2[2]);
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[5];
	tree _r;
	_r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 141, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail173:;
    }
  return NULL_TREE;
}

tree
generic_simplify_89 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type) && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_TRAPS (TREE_TYPE (captures[0]))
 && !TYPE_SATURATING (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail180;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail180;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[1];
	    _o2[1] = captures[2];
	    _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 148, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail180:;
    }
  return NULL_TREE;
}

tree
generic_simplify_102 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_OVERFLOW_UNDEFINED (type)
 && TREE_CODE (captures[1]) != INTEGER_CST
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail197;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (TREE_TYPE (_o2[0]) != utype)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 164, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail197:;
	      }
	    }
	  else
	    {
	      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail198;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 165, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail198:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_115 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail212;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 178, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail212:;
  return NULL_TREE;
}

tree
generic_simplify_123 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail220;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail220;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[3];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 184, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail220:;
  return NULL_TREE;
}

tree
generic_simplify_134 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if ((bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 || bitwise_inverted_equal_p (captures[1], captures[2], wascmp))
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail231;
	  {
	    tree _r;
	    _r =  build_all_ones_cst (TREE_TYPE (captures[0]));
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 191, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail231:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_145 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail246;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail246;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 196, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail246:;
  return NULL_TREE;
}

tree
generic_simplify_151 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[5])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
    {
      if (integer_onep (captures[4])
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail253;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail253;
	  {
	    tree res_op0;
	    {
	      tree _o1[3], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[6];
	      _o1[2] = captures[9];
	      _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 = captures[4];
	    tree _r;
	    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 202, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail253:;
	}
      else
	{
	  if (integer_minus_onep (captures[4])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail254;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail254;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[6];
		tree res_op2;
		res_op2 = captures[9];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 203, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail254:;
	    }
	}
    }
  else
    {
      if (integer_zerop (captures[4])
 && invert_tree_comparison (cmp, HONOR_NANS (captures[2])) == icmp
)
	{
	  if (integer_onep (captures[5])
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail255;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail255;
	      {
		tree res_op0;
		{
		  tree _o1[3], _r1;
		  _o1[0] = captures[1];
		  _o1[1] = captures[9];
		  _o1[2] = captures[6];
		  _r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 = captures[5];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 204, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail255:;
	    }
	  else
	    {
	      if (integer_minus_onep (captures[5])
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail256;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail256;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[9];
		    tree res_op2;
		    res_op2 = captures[6];
		    tree _r;
		    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 205, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail256:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_173 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (logic),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (ext))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (captures[1]) != INTEGER_CST
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail310;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, ext, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 231, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail310:;
    }
  return NULL_TREE;
}

tree
generic_simplify_178 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail315;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail315;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 235, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail315:;
    }
  return NULL_TREE;
}

tree
generic_simplify_183 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail320;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail320;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 239, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail320:;
  return NULL_TREE;
}

tree
generic_simplify_187 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail326;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    _r2 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[0] = _r2;
	  }
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 242, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail326:;
    }
  return NULL_TREE;
}

tree
generic_simplify_195 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (!tree_expr_maybe_signaling_nan_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail335;
	  {
	    tree _r;
	    _r = captures[1];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 250, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail335:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_198 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (LDEXP))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (real_equal (TREE_REAL_CST_PTR (captures[1]), &dconst1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail338;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[2];
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, LDEXP, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail338;
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 253, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail338:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_205 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 && (CONSTANT_CLASS_P (captures[2]) || (single_use (captures[1]) && single_use (captures[0])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail345;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[3]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 260, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail345:;
    }
  return NULL_TREE;
}

tree
generic_simplify_217 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && (CONSTANT_CLASS_P (captures[3]) || (single_use (captures[1]) && single_use (captures[0])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail373;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[3]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 287, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail373:;
    }
  return NULL_TREE;
}

tree
generic_simplify_225 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_INT_CST_LOW (captures[1]) & 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail381;
      {
	tree _r;
	_r =  constant_boolean_node (cmp == NE_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 294, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail381:;
    }
  return NULL_TREE;
}

tree
generic_simplify_231 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail389;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail389;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (utype);
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 302, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail389:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_239 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (invrot),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail407;
  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail407;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail407;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  const_binop (invrot, TREE_TYPE (captures[0]), captures[2], captures[1]);
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 320, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail407:;
  return NULL_TREE;
}

tree
generic_simplify_245 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (type, TREE_TYPE (captures[0]))
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[1]));
	  if (ic == icmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail413;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail413;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 326, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail413:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail414;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail414;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 327, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail414:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_255 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail429;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_real (TREE_TYPE (captures[1]), dconst0);
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 340, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail429:;
    }
  else
    {
      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail430;
	  {
	    tree res_op0;
	    res_op0 =  build_real (TREE_TYPE (captures[0]), dconst0);
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail430:;
	}
      else
	{
	  if (REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[1])
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail431;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 342, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail431:;
	    }
	  else
	    {
	      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_ISNAN (TREE_REAL_CST (captures[0]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[0])
 && !tree_expr_signaling_nan_p (captures[1])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail432;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == NE_EXPR, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 343, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail432:;
		}
	      else
		{
		  if (REAL_VALUE_ISINF (TREE_REAL_CST (captures[1]))
 && MODE_HAS_INFINITIES (TYPE_MODE (TREE_TYPE (captures[1])))
)
		    {
		      {
 REAL_VALUE_TYPE max;
 enum tree_code code = cmp;
 bool neg = REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]));
 if (neg)
 code = swap_tree_comparison (code);
			  if (code == GT_EXPR
 && !(HONOR_NANS (captures[0]) && flag_trapping_math)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail433;
			      {
				tree _r;
				_r =  constant_boolean_node (false, type);
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (TREE_SIDE_EFFECTS (captures[1]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 344, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail433:;
			    }
			  else
			    {
			      if (code == LE_EXPR
)
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail434;
				      {
					tree _r;
					_r =  constant_boolean_node (true, type);
					if (TREE_SIDE_EFFECTS (captures[0]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 345, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail434:;
				    }
				  else
				    {
				      if (!flag_trapping_math
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail435;
					  {
					    if (! tree_invariant_p (captures[0])) goto next_after_fail435;
					    tree res_op0;
					    res_op0 = unshare_expr (captures[0]);
					    tree res_op1;
					    res_op1 = captures[0];
					    tree _r;
					    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 346, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail435:;
					}
				    }
				}
			      else
				{
				  if ((code == EQ_EXPR && !(HONOR_NANS (captures[0]) && flag_trapping_math))
 || code == GE_EXPR
)
				    {
				      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					  if (neg
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail436;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree res_op1;
						res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 347, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail436:;
					    }
					  else
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail437;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree res_op1;
						res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						tree _r;
						_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[1]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 348, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail437:;
					    }
				      }
				    }
				  else
				    {
				      if (code == LT_EXPR
)
					{
					  {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
					      if (neg
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail438;
						  {
						    tree res_op0;
						    res_op0 = captures[0];
						    tree res_op1;
						    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[1]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 349, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail438:;
						}
					      else
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail439;
						  {
						    tree res_op0;
						    res_op0 = captures[0];
						    tree res_op1;
						    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
						    tree _r;
						    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[1]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 350, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail439:;
						}
					  }
					}
				      else
					{
					  if (code == NE_EXPR
)
					    {
					      {
 real_maxval (&max, neg, TYPE_MODE (TREE_TYPE (captures[0])));
						  if (! HONOR_NANS (captures[0])
)
						    {
						      if (neg
)
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail440;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 351, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail440:;
							}
						      else
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail441;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 352, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail441:;
							}
						    }
						  else
						    {
						      if (neg
)
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail442;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, UNGE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 353, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail442:;
							}
						      else
							{
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail443;
							  {
							    tree res_op0;
							    res_op0 = captures[0];
							    tree res_op1;
							    res_op1 =  build_real (TREE_TYPE (captures[0]), max);
							    tree _r;
							    _r = fold_build2_loc (loc, UNLE_EXPR, type, res_op0, res_op1);
							    if (TREE_SIDE_EFFECTS (captures[1]))
							      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
							    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 354, __FILE__, __LINE__, true);
							    return _r;
							  }
next_after_fail443:;
							}
						    }
					      }
					    }
					}
				    }
				}
			    }
		      }
		    }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_298 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (captures[0])))
 && can_compare_p (cmp == EQ_EXPR ? EQ : NE, TYPE_MODE (TREE_TYPE (captures[0])),
 ccp_jump)
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail561;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail561;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 455, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail561:;
    }
  return NULL_TREE;
}

tree
generic_simplify_303 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!REAL_VALUE_NEGATIVE (TREE_REAL_CST (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail567;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 461, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail567:;
    }
  return NULL_TREE;
}

tree
generic_simplify_308 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_vector)
 || target_supports_op_p (type, RSHIFT_EXPR, optab_scalar))
 && (useless_type_conversion_p (type, TREE_TYPE (captures[2]))
 || (element_precision (type) >= element_precision (TREE_TYPE (captures[2]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 || (element_precision (type)
 == element_precision (TREE_TYPE (captures[2])))
 || (INTEGRAL_TYPE_P (type)
 && (tree_nonzero_bits (captures[0])
 & wi::mask (element_precision (TREE_TYPE (captures[2])) - 1,
 true,
 element_precision (type))) == 0))))
)
    {
      if (!VECTOR_TYPE_P (type)
 && useless_type_conversion_p (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
 && element_precision (TREE_TYPE (captures[1])) < element_precision (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail572;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 466, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail572:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail573;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail573;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree _r;
	    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 467, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail573:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_326 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail593;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail593;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 485, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail593:;
  return NULL_TREE;
}

tree
generic_simplify_334 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH),
 const combined_fn ARG_UNUSED (TANH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail603;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, TANH, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail603;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 495, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail603:;
    }
  return NULL_TREE;
}

tree
generic_simplify_342 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree from_type = TREE_TYPE (captures[0]);
 tree c1_type = TREE_TYPE (captures[1]), c2_type = TREE_TYPE (captures[2]);
 enum tree_code code = ERROR_MARK;
 if (integer_zerop (captures[1])
 && INTEGRAL_TYPE_P (from_type)
 && (cmp == GE_EXPR || cmp == LT_EXPR)
 && TYPE_UNSIGNED (from_type)
 && !TYPE_UNSIGNED (c1_type)
 && TYPE_PRECISION (from_type) == TYPE_PRECISION (c1_type)
 && int_fits_type_p (captures[2], from_type)
 && (types_match (c2_type, from_type)
 || (TYPE_PRECISION (c2_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c2_type) == TYPE_SIGN (from_type)))))
 {
 tree_code ncmp = cmp == GE_EXPR ? LE_EXPR : GT_EXPR;
 widest_int c1 = wi::mask<widest_int>(TYPE_PRECISION (type) - 1, 0);
 code = minmax_from_comparison (ncmp, captures[0], c1, wi::to_widest (captures[2]));
 }
 if (code == ERROR_MARK
 && INTEGRAL_TYPE_P (from_type)
 && int_fits_type_p (captures[2], from_type)
 && (types_match (c1_type, from_type)
 || (TYPE_PRECISION (c1_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c1_type) == TYPE_SIGN (from_type))))
 && (types_match (c2_type, from_type)
 || (TYPE_PRECISION (c2_type) > TYPE_PRECISION (from_type)
 && (TYPE_UNSIGNED (from_type)
 || TYPE_SIGN (c2_type) == TYPE_SIGN (from_type)))))
 {
 if (cmp != EQ_EXPR)
 code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[2]);
 else if (int_fits_type_p (captures[1], from_type))
 code = EQ_EXPR;
 }
      if (code == MAX_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail611;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail611;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail611;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail611;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[0];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail611:;
	}
      else
	{
	  if (code == MIN_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail612;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail612;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail612;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail612;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 504, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail612:;
	    }
	  else
	    {
	      if (code == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail613;
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail613;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail613;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail613;
		  {
		    if (! tree_invariant_p (captures[1])) goto next_after_fail613;
		    tree res_op0;
		    {
		      tree _o1[3], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = unshare_expr (captures[1]);
			  if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
			    {
			      _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			    }
			  else
			    _r3 = _o3[0];
			  _o2[1] = _r3;
			}
			_r2 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o2[0], _o2[1]);
			_o1[0] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[1];
			if (TREE_TYPE (_o2[0]) != from_type)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, from_type, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[1] = _r2;
		      }
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (TREE_TYPE (_o2[0]) != from_type)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, from_type, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[2] = _r2;
		      }
		      _r1 = fold_build3_loc (loc, COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 505, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail613:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_382 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      if (bitop == BIT_AND_EXPR || tree_expr_nonnegative_p (captures[1])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail662;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == GE_EXPR || cmp == LE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 552, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail662:;
	}
      else
	{
	  if (TREE_CODE (captures[1]) == INTEGER_CST && wi::neg_p (wi::to_wide (captures[1]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail663;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == LT_EXPR, type);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 553, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail663:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_398 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail711;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail711;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, out, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail711:;
    }
  return NULL_TREE;
}

tree
generic_simplify_405 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (acmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree cst = uniform_integer_cst_p (captures[1]);
      if (tree_int_cst_sgn (cst) == -1
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail725;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  build_uniform_cst (TREE_TYPE (captures[1]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
	    tree _r;
	    _r = fold_build2_loc (loc, acmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 598, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail725:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_408 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail728;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail728;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, out, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 583, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail728:;
    }
  return NULL_TREE;
}

tree
generic_simplify_413 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2),
 const enum tree_code ARG_UNUSED (cmp3),
 const enum tree_code ARG_UNUSED (bit_op),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail733;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	    tree _r;
	    _r = fold_build2_loc (loc, cmp2, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 602, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail733:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail734;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == GT_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 603, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail734:;
	    }
	  else
	    {
	      if (wi::to_widest (captures[2]) >= prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail735;
		  {
		    tree _r;
		    _r =  constant_boolean_node (cmp == GT_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 604, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail735:;
		}
	      else
		{
		  if (wi::to_widest (captures[2]) == prec - 1
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail736;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (prec - 1, 1,
 false, prec));
			tree _r;
			_r = fold_build2_loc (loc, cmp3, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 605, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail736:;
		    }
		  else
		    {
		      if (single_use (captures[0])
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail737;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail737;
			  {
			    if (! tree_invariant_p (captures[1])) goto next_after_fail737;
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = unshare_expr (captures[1]);
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      _r1 = fold_build2_loc (loc, cmp2, type, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				_o2[0] = captures[1];
				_o2[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
				_r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _o1[1] =  build_zero_cst (TREE_TYPE (captures[1]));
			      _r1 = fold_build2_loc (loc, cmp3, type, _o1[0], _o1[1]);
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, bit_op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 606, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail737:;
			}
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_435 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail780;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 635, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail780:;
    }
  return NULL_TREE;
}

tree
generic_simplify_438 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (coshs),
 const combined_fn ARG_UNUSED (atanhs),
 const combined_fn ARG_UNUSED (sqrts))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!flag_errno_math
)
    {
      {
 tree t_one = build_one_cst (type);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail783;
	  {
	    if (! tree_invariant_p (captures[1])) goto next_after_fail783;
	    tree res_op0;
	    res_op0 =  t_one;
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = unshare_expr (captures[1]);
		  _r3 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[0] = _r3;
		}
		{
		  tree _o3[2], _r3;
		  _o3[0] =  t_one;
		  _o3[1] = captures[1];
		  _r3 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, sqrts, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail783;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 638, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail783:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_442 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail787;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 642, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail787:;
  return NULL_TREE;
}

tree
generic_simplify_445 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns),
 const combined_fn ARG_UNUSED (hypots))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail790;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, hypots, type, 2, res_op0, res_op1);
    if (!_r)
      goto next_after_fail790;
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 645, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail790:;
  return NULL_TREE;
}

tree
generic_simplify_450 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail795;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 650, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail795:;
    }
  return NULL_TREE;
}

tree
generic_simplify_455 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail800;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail800;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[5];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 654, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail800:;
  return NULL_TREE;
}

tree
generic_simplify_461 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail806;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 660, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail806:;
  return NULL_TREE;
}

tree
generic_simplify_465 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail810;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 664, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail810:;
  return NULL_TREE;
}

tree
generic_simplify_470 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail816;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail816;
      {
	tree _r;
	_r =  constant_boolean_node (false, type);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail816:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail817;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail817;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail817;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail817:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_481 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail860;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 685, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail860:;
  return NULL_TREE;
}

tree
generic_simplify_485 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) <= HOST_BITS_PER_WIDE_INT
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) > 0
 && tree_to_uhwi (captures[4]) < TYPE_PRECISION (type)
)
    {
      {
 unsigned int shiftc = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT mask = TREE_INT_CST_LOW (captures[5]);
 unsigned HOST_WIDE_INT newmask, zerobits = 0;
 tree shift_type = TREE_TYPE (captures[2]);
 unsigned int prec;
 if (shift == LSHIFT_EXPR)
 zerobits = ((HOST_WIDE_INT_1U << shiftc) - 1);
 else if (shift == RSHIFT_EXPR
 && type_has_mode_precision_p (shift_type))
 {
 prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 tree arg00 = captures[3];
 if (captures[2] != captures[3]
 && TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 {
 tree inner_type = TREE_TYPE (captures[3]);
 if (type_has_mode_precision_p (inner_type)
 && TYPE_PRECISION (inner_type) < prec)
 {
 prec = TYPE_PRECISION (inner_type);
 if (shiftc < prec)
 shift_type = inner_type;
 }
 }
 zerobits = HOST_WIDE_INT_M1U;
 if (shiftc < prec)
 {
 zerobits >>= HOST_BITS_PER_WIDE_INT - shiftc;
 zerobits <<= prec - shiftc;
 }
 if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && prec == TYPE_PRECISION (TREE_TYPE (captures[2])))
 {
 if ((mask & zerobits) == 0)
 shift_type = unsigned_type_for (TREE_TYPE (captures[2]));
 else
 zerobits = 0;
 }
 }
	  if ((mask & zerobits) == mask
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail864;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail864;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail864;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail864;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail864:;
	    }
	  else
	    {
	      {
 newmask = mask | zerobits;
		  if (newmask != mask && (newmask & (newmask + 1)) == 0
)
		    {
		      {
 for (prec = BITS_PER_UNIT;
 prec < HOST_BITS_PER_WIDE_INT; prec <<= 1)
 if (newmask == (HOST_WIDE_INT_1U << prec) - 1)
 break;
			  if (prec < HOST_BITS_PER_WIDE_INT
 || newmask == HOST_WIDE_INT_M1U
)
			    {
			      {
 tree newmaskt = build_int_cst_type (TREE_TYPE (captures[5]), newmask);
				  if (!tree_int_cst_equal (newmaskt, captures[5])
)
				    {
				      if (shift_type != TREE_TYPE (captures[2])
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail865;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail865;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail865;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (TREE_TYPE (_o3[0]) != shift_type)
						    {
						      _r3 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o3[0]);
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						_r2 = fold_build2_loc (loc, shift, shift_type, _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      if (TREE_TYPE (_o1[0]) != type)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 690, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail865:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail866;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail866;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail866;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree res_op1;
					    res_op1 =  newmaskt;
					    tree _r;
					    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 691, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail866:;
					}
				    }
			      }
			    }
		      }
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_495 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail884;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail884;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
    if (!_r)
      goto next_after_fail884;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 699, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail884:;
  return NULL_TREE;
}

tree
generic_simplify_500 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail889;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail889;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 704, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail889:;
    }
  return NULL_TREE;
}

tree
generic_simplify_508 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      {
 tree rotate_type = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail897;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != rotate_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, rotate_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, rotate, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 709, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail897:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_520 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail911;
  {
    tree _r;
    _r = captures[1];
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 723, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail911:;
  return NULL_TREE;
}

tree
generic_simplify_529 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (minmax == MIN_EXPR
)
	    {
	      if (known_le (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail931;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail931;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail931;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail931:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail932;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail932;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail932;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail932:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail933;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail933;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail933;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 733, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail933:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail934;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail934;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail934;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail934:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_550 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail955;
	  {
	    tree res_op0;
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != op_type)
		  {
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[7];
	      _o1[6] = captures[8];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 7, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5], _o1[6]);
	      if (!_r1)
	        goto next_after_fail955;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[6]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[6]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 750, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail955:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_564 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[1])) || TYPE_UNSIGNED (TREE_TYPE (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail972;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ovf, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail972;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 767, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail972:;
    }
  return NULL_TREE;
}

tree
generic_simplify_572 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail980;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 775, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail980:;
  return NULL_TREE;
}

tree
generic_simplify_577 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail985;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 780, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail985:;
  return NULL_TREE;
}

tree
generic_simplify_584 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (rints))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (!flag_errno_math
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail992;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail992:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_590 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail998;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail998;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 793, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail998:;
    }
  return NULL_TREE;
}

tree
generic_simplify_600 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree ARG_UNUSED (_p3), tree ARG_UNUSED (_p4), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1008;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree res_op3;
	res_op3 = captures[3];
	tree res_op4;
	res_op4 = captures[4];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_COND_FMA, type, 5, res_op0, res_op1, res_op2, res_op3, res_op4);
	if (!_r)
	  goto next_after_fail1008;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 803, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1008:;
    }
  return NULL_TREE;
}

tree
generic_simplify_610 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree type0 = TREE_TYPE (captures[1]);
 tree type2 = TREE_TYPE (captures[0]);
      if (INTEGRAL_TYPE_P (type0)
 && TYPE_PRECISION (type2) <= TYPE_PRECISION (type0)
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1018;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1018;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != type2)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, type2, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] =  build_zero_cst (type2);
	      _r1 = fold_build2_loc (loc, NE_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 810, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1018:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_619 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (reduc))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int i = single_nonzero_element (captures[1]);
      if (i >= 0
)
	{
	  {
 tree elt = vector_cst_elt (captures[1], i);
 tree elt_type = TREE_TYPE (elt);
 unsigned int elt_bits = tree_to_uhwi (TYPE_SIZE (elt_type));
 tree size = bitsize_int (elt_bits);
 tree pos = bitsize_int (elt_bits * i);
	      if (compare_tree_int (TYPE_SIZE (type), elt_bits) == 0
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1028;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1028;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[3], _r2;
			_o2[0] = captures[0];
			_o2[1] =  size;
			_o2[2] =  pos;
			_r2 = fold_build3_loc (loc, BIT_FIELD_REF, elt_type, _o2[0], _o2[1], _o2[2]);
			_o1[0] = _r2;
		      }
		      _o1[1] =  elt;
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, elt_type, _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 816, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1028:;
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_FIX_TRUNC_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
1
 && type == TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1111;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1111:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1112;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1112:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1113;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1113:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1114;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1114:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1115;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1115:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1116;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1116:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1117;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1117:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1118;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1118:;
					}
				    }
				}
			    }
			}
		    }
		}
	  }
	}
        break;
      }
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  {
 tree inside_type = TREE_TYPE (captures[1]);
 tree inter_type = TREE_TYPE (captures[0]);
 int inside_int = INTEGRAL_TYPE_P (inside_type);
 int inside_ptr = POINTER_TYPE_P (inside_type);
 int inside_float = FLOAT_TYPE_P (inside_type);
 int inside_vec = VECTOR_TYPE_P (inside_type);
 unsigned int inside_prec = element_precision (inside_type);
 int inside_unsignedp = TYPE_UNSIGNED (inside_type);
 int inter_int = INTEGRAL_TYPE_P (inter_type);
 int inter_ptr = POINTER_TYPE_P (inter_type);
 int inter_float = FLOAT_TYPE_P (inter_type);
 int inter_vec = VECTOR_TYPE_P (inter_type);
 unsigned int inter_prec = element_precision (inter_type);
 int inter_unsignedp = TYPE_UNSIGNED (inter_type);
 int final_int = INTEGRAL_TYPE_P (type);
 int final_ptr = POINTER_TYPE_P (type);
 int final_float = FLOAT_TYPE_P (type);
 int final_vec = VECTOR_TYPE_P (type);
 unsigned int final_prec = element_precision (type);
 int final_unsignedp = TYPE_UNSIGNED (type);
	      if (((
0
 && useless_type_conversion_p (type, inside_type))
 || (
1
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1119;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1119:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1120;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1120:;
		    }
		  else
		    {
		      if (inside_int && inter_int && final_int
 && ((inside_prec < inter_prec && inter_prec < final_prec
 && inside_unsignedp && !inter_unsignedp)
 || final_prec == inter_prec
 || (inside_prec < inter_prec && inter_prec > final_prec
 && !inside_unsignedp && inter_unsignedp))
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1121;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1121:;
			}
		      else
			{
			  if (! inside_float && ! inter_float && ! final_float
 && ! inside_vec && ! inter_vec && ! final_vec
 && (inter_prec >= inside_prec || inter_prec >= final_prec)
 && ! (inside_int && inter_int
 && inter_unsignedp != inside_unsignedp
 && inter_prec < final_prec)
 && ((inter_unsignedp && inter_prec > inside_prec)
 == (final_unsignedp && final_prec > inter_prec))
 && ! (inside_ptr && inter_prec != final_prec)
 && ! (final_ptr && inside_prec != inter_prec)
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1122;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1122:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1123;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1123:;
				}
			      else
				{
				  if (0
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1124;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = captures[1];
					  _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
					  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1124:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1125;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1125:;
					}
				    }
				}
			    }
			}
		    }
		}
	  }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_BIT_IOR_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1301;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1301:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_3 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_4 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_109 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_all_onesp (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_110 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
		tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q50 };
		tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q51 };
		tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q50 };
		tree res = generic_simplify_5 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_111 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_111 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_112 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_NOT_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_112 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			      tree res = generic_simplify_112 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p0 };
			      tree res = generic_simplify_112 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q20, _q21 };
	  tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p0, _q21, _q20 };
	  tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_111 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_111 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _p1 };
			      tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q30, _p1 };
			      tree res = generic_simplify_114 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q41 };
		    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q31 };
		    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _p0, _q30 };
		    tree res = generic_simplify_115 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  {
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case EQ_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_116 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_XOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
	  tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q31, _q30 };
	  tree res = generic_simplify_113 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_minus_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_8 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_minus_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_9 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_onep (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_10 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_onep (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			tree res = generic_simplify_11 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_117 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q21, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q21 };
	      tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q20, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q20 };
	      tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      tree res = generic_simplify_120 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			      tree res = generic_simplify_120 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case EQ_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_121 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
      }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q21, _q20 };
			tree res = generic_simplify_119 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q61 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q60 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q61 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q60 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q71 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q70 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  switch (TREE_CODE (_q51))
		    {
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			tree _q71 = TREE_OPERAND (_q51, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q71 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q70 };
			      tree res = generic_simplify_122 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q30, _q31 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _q31, _q30 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q40, _q41 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _q41, _q40 };
			      tree res = generic_simplify_123 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			      tree res = generic_simplify_124 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p0 };
			tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case EQ_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
			    tree res = generic_simplify_125 (loc, type, _p0, _p1, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    break;
	  }
        default:;
        }
    }
}
  if (integer_all_onesp (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1302;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 937, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1302:;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1303;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1303;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 938, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1303:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree _q40_pops[1];
		if (tree_maybe_bit_not (_q40, _q40_pops))
		  {
		    tree _q50 = _q40_pops[0];
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	      break;
	    }
          default:;
          }
	{
	  tree _q20_pops[1];
	  if (tree_maybe_bit_not (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
		      tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
        break;
      }
    default:;
    }
  {
    tree _p1_pops[1];
    if (tree_maybe_bit_not (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  {
    tree _p0_pops[1];
    if (tree_maybe_bit_not (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	  tree res = generic_simplify_14 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
      }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_126 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q41 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q40 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q20, _q31 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q20, _q30 };
		    tree res = generic_simplify_127 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q30, _q31 };
				    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q60, _q31, _q30 };
				    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q30, _q31 };
				    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			switch (TREE_CODE (_q61))
			  {
			  case BIT_NOT_EXPR:
			    {
			      tree _q80 = TREE_OPERAND (_q61, 0);
			      if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q61, _q31, _q30 };
				    tree res = generic_simplify_128 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			      break;
			    }
		          default:;
		          }
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0, _q20 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
		      tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			    {
			      if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
				    tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			    {
			      if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
				    tree res = generic_simplify_132 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_129 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q20 };
		    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q20 };
		    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q21 };
		    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q21, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q21 };
		    tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
			      tree res = generic_simplify_130 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_22 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_NOT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q60 };
			    tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
		      tree res = generic_simplify_131 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_29 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
			  tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
			  tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q31 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q30, _q30 };
		    tree res = generic_simplify_118 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q51, _q20 };
			  tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q51, _q50, _q20 };
			  tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _q20 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _q20 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q41, _q40, _p0 };
		    tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
	      tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q31, _q30, _p0 };
	      tree res = generic_simplify_133 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_134 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q61 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q50, _q60 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q61 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _q50, _q60 };
			  tree res = generic_simplify_135 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q51 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20, _p1, _p1, _q50 };
		    tree res = generic_simplify_136 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_IOR_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_134 (loc, type, _p0, _p1, captures);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q60))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q71 };
				tree res = generic_simplify_137 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _q60, _q70 };
				tree res = generic_simplify_137 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q71 };
				tree res = generic_simplify_137 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			    {
			      {
				tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _q60, _q70 };
				tree res = generic_simplify_137 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q61 };
			  tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1, _p1, _q60 };
			  tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q61 };
			  tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _p1, _p1, _q60 };
			  tree res = generic_simplify_138 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_31 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_32 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
	  if (res) return res;
	}
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_139 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_139 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
	  tree res = generic_simplify_140 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
	  tree res = generic_simplify_140 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_141 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q50))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q61 };
			  tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q60 };
			  tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q61 };
			  tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q60 };
			  tree res = generic_simplify_142 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q40, _q41, _q21, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q41, _q40, _q21, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q50, _q51, _q20, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q40, _q51, _q50, _q20, _p1 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q30, _q31, _q21, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q31, _q30, _q21, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q40, _q41, _q20, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q21, _q41, _q40, _q20, _p1 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_139 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_139 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	      if (res) return res;
	    }
	  }
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
	  tree res = generic_simplify_140 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _p0 };
	  tree res = generic_simplify_140 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q51, _p0, _q21 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q51, _p0, _q20 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q50, _p0, _q21 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q50, _p0, _q20 };
		    tree res = generic_simplify_145 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q30, _p0, _q31 };
			  tree res = generic_simplify_146 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q31 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q31, 0) && types_match (_q61, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q31, _p0, _q30 };
			  tree res = generic_simplify_146 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q30, _p0, _q31 };
			  tree res = generic_simplify_146 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _q61, _q31, _p0, _q30 };
			  tree res = generic_simplify_146 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		    tree res = generic_simplify_147 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		    tree res = generic_simplify_147 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case BIT_NOT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		    tree res = generic_simplify_147 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		    tree res = generic_simplify_147 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  {
    tree _p0_pops[1];
    if (tree_nop_convert (_p0, _p0_pops))
      {
	tree _q20 = _p0_pops[0];
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q40))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q50, _q51, _q31, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q51, _q50, _q31, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      {
		tree _q31_pops[1];
		if (tree_nop_convert (_q31, _q31_pops))
		  {
		    tree _q50 = _q31_pops[0];
		    switch (TREE_CODE (_q50))
		      {
		      case BIT_IOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      case BIT_XOR_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q60, _q61, _q30, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q50, _q61, _q60, _q30, _p1 };
			    tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      switch (TREE_CODE (_q30))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q40, _q41, _q31, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q30, _q41, _q40, _q31, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q31))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q50, _q51, _q30, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q31, _q51, _q50, _q30, _p1 };
		      tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree _q30_pops[1];
		if (tree_nop_convert (_q30, _q30_pops))
		  {
		    tree _q40 = _q30_pops[0];
		    switch (TREE_CODE (_q31))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				tree _q71 = TREE_OPERAND (_p1, 1);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    switch (TREE_CODE (_q71))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q71 };
					    tree res = generic_simplify_39 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					    if (res) return res;
					  }
				          break;
				        }
				      default:;
				      }
				  }
			        break;
			      }
			    default:;
			    }
			{
			  tree _p1_pops[1];
			  if (tree_nop_convert (_p1, _p1_pops))
			    {
			      tree _q70 = _p1_pops[0];
			      switch (TREE_CODE (_q70))
			        {
				case MULT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    {
				      tree _q80_pops[1];
				      if (tree_nop_convert (_q80, _q80_pops))
				        {
					  tree _q90 = _q80_pops[0];
					  switch (TREE_CODE (_q81))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31, _p1, _q70, _q90, _q81 };
						  tree res = generic_simplify_38 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
						  if (res) return res;
						}
					        break;
					      }
					    default:;
					    }
				        }
				    }
				    break;
				  }
			        default:;
			        }
			    }
			}
			  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
				tree res = generic_simplify_40 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		  }
	      }
	      break;
	    }
          default:;
          }
      }
  }
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      switch (TREE_CODE (_q40))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q50, _q51, _q31, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q40, _q51, _q50, _q31, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      switch (TREE_CODE (_q50))
	        {
		case BIT_IOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case BIT_XOR_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    tree _q61 = TREE_OPERAND (_q50, 1);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q60, _q61, _q30, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q50, _q61, _q60, _q30, _p0 };
		      tree res = generic_simplify_143 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	}
	switch (TREE_CODE (_q30))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q40, _q41, _q31, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _q30, _q41, _q40, _q31, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case BIT_XOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q50, _q51, _q30, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _q31, _q51, _q50, _q30, _p0 };
		tree res = generic_simplify_144 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case BIT_AND_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q60, _q61, _q41, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q50, _q61, _q60, _q41, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    case BIT_XOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q70, _q71, _q40, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q60, _q71, _q70, _q40, _p0 };
			  tree res = generic_simplify_148 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q50, _q51, _q41, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _q40, _q51, _q50, _q41, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q41))
	      {
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  tree _q61 = TREE_OPERAND (_q41, 1);
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q60, _q61, _q40, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _q41, _q61, _q60, _q40, _p0 };
		    tree res = generic_simplify_149 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_33 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1304;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1304;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1304;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 886, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1304:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1305;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1305;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1305;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 886, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1305:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (zerop (_q82))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q80, _q81 };
					    tree res = generic_simplify_35 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if (integer_zerop (_q22))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q61))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q62 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1306;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1306;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 886, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1306:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if (integer_zerop (_q62))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q20, _q61, _p0, _q22 };
			    const enum tree_code op = BIT_IOR_EXPR;
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1307;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1307;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1307;
			    {
			      tree res_op0;
			      res_op0 = captures[1];
			      tree res_op1;
			      res_op1 = captures[2];
			      tree res_op2;
			      res_op2 = captures[4];
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 886, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1307:;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, EQ_EXPR, NE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case EQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, NE_EXPR, EQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case ORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNORDERED_EXPR, ORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNORDERED_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, ORDERED_EXPR, UNORDERED_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLT_EXPR, GE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case GT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNLE_EXPR, GT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGT_EXPR, LE_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNGE_EXPR, LT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case LTGT_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, UNEQ_EXPR, LTGT_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q22))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case VEC_COND_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p1, 0);
			tree _q81 = TREE_OPERAND (_p1, 1);
			tree _q82 = TREE_OPERAND (_p1, 2);
			switch (TREE_CODE (_q80))
			  {
			  case UNEQ_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_q80, 0);
			      tree _q91 = TREE_OPERAND (_q80, 1);
			      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				{
				  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				    {
				      if (integer_zerop (_q82))
					{
					  {
					    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q80, _q81 };
					    tree res = generic_simplify_36 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LTGT_EXPR, UNEQ_EXPR);
					    if (res) return res;
					  }
				        }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q40 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q40, 0) && types_match (_q100, _q40)))
					{
					  if ((_q101 == _q41 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q41, 0) && types_match (_q101, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
					{
					  if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _q21, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case NE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case NE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case EQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case EQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case GT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case GT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LE_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LE_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p1, 0);
			  tree _q81 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q80))
			    {
			    CASE_CONVERT:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				switch (TREE_CODE (_q90))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q100 = TREE_OPERAND (_q90, 0);
				      tree _q101 = TREE_OPERAND (_q90, 1);
				      if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
					{
					  if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q90, _q81 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q81))
			    {
			    CASE_CONVERT:
			      {
				tree _q100 = TREE_OPERAND (_q81, 0);
				switch (TREE_CODE (_q100))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q110 = TREE_OPERAND (_q100, 0);
				      tree _q111 = TREE_OPERAND (_q100, 1);
				      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
					{
					  if ((_q111 == _q51 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q51, 0) && types_match (_q111, _q51)))
					    {
					      {
						tree captures[6] ATTRIBUTE_UNUSED = { _q40, _q50, _q51, _q20, _q100, _q80 };
						tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
						if (res) return res;
					      }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			    {
			      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
			    {
			      if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _q21, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case NE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case NE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case EQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case EQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case ORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNORDERED_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case GT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case GT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LE_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LE_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case LTGT_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q70))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_q70, 0);
			  tree _q81 = TREE_OPERAND (_q70, 1);
			  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			    {
			      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q70, _q71 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q71))
		      {
		      case UNEQ_EXPR:
		        {
			  tree _q90 = TREE_OPERAND (_q71, 0);
			  tree _q91 = TREE_OPERAND (_q71, 1);
			  if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
			    {
			      if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				{
				  {
				    tree captures[6] ATTRIBUTE_UNUSED = { _q21, _q40, _q41, _q20, _q71, _q70 };
				    tree res = generic_simplify_150 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      tree _q32 = TREE_OPERAND (_q20, 2);
	      switch (TREE_CODE (_q30))
	        {
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
					{
					  if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
					    {
					      if ((_q111 == _q31 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q31, 0) && types_match (_q111, _q31)))
						{
						  if ((_q112 == _q32 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q32, 0) && types_match (_q112, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
					{
					  if ((_q131 == _q41 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q41, 0) && types_match (_q131, _q41)))
					    {
					      if ((_q121 == _q31 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q31, 0) && types_match (_q121, _q31)))
						{
						  if ((_q122 == _q32 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q32, 0) && types_match (_q122, _q32)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q41, _q31, _q32, _q21, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      tree _q42 = TREE_OPERAND (_q21, 2);
	      switch (TREE_CODE (_q40))
	        {
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case EQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case NE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case NE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case EQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case EQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case GT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case ORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ORDERED_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNORDERED_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNLE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case GT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case GT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LE_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LE_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNGE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case UNEQ_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case LTGT_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LTGT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_p1))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q100 = TREE_OPERAND (_p1, 0);
			  tree _q101 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q100))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q110 = TREE_OPERAND (_q100, 0);
				tree _q111 = TREE_OPERAND (_q100, 1);
				tree _q112 = TREE_OPERAND (_q100, 2);
				switch (TREE_CODE (_q110))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q120 = TREE_OPERAND (_q110, 0);
				      tree _q121 = TREE_OPERAND (_q110, 1);
				      if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
					{
					  if ((_q121 == _q51 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q51, 0) && types_match (_q121, _q51)))
					    {
					      if ((_q111 == _q41 && ! TREE_SIDE_EFFECTS (_q111)) || (operand_equal_p (_q111, _q41, 0) && types_match (_q111, _q41)))
						{
						  if ((_q112 == _q42 && ! TREE_SIDE_EFFECTS (_q112)) || (operand_equal_p (_q112, _q42, 0) && types_match (_q112, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q100, _q110, _q101 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
			  switch (TREE_CODE (_q101))
			    {
			    case VEC_COND_EXPR:
			      {
				tree _q120 = TREE_OPERAND (_q101, 0);
				tree _q121 = TREE_OPERAND (_q101, 1);
				tree _q122 = TREE_OPERAND (_q101, 2);
				switch (TREE_CODE (_q120))
				  {
				  case UNEQ_EXPR:
				    {
				      tree _q130 = TREE_OPERAND (_q120, 0);
				      tree _q131 = TREE_OPERAND (_q120, 1);
				      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
					{
					  if ((_q131 == _q51 && ! TREE_SIDE_EFFECTS (_q131)) || (operand_equal_p (_q131, _q51, 0) && types_match (_q131, _q51)))
					    {
					      if ((_q121 == _q41 && ! TREE_SIDE_EFFECTS (_q121)) || (operand_equal_p (_q121, _q41, 0) && types_match (_q121, _q41)))
						{
						  if ((_q122 == _q42 && ! TREE_SIDE_EFFECTS (_q122)) || (operand_equal_p (_q122, _q42, 0) && types_match (_q122, _q42)))
						    {
						      {
							tree captures[10] ATTRIBUTE_UNUSED = { _q21, _q40, _q50, _q51, _q41, _q42, _q20, _q101, _q120, _q100 };
							tree res = generic_simplify_151 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR);
							if (res) return res;
						      }
						    }
					        }
					    }
				        }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q60 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1, _q61 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q60 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1, _q61 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _p0, _q21 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q50))
	        {
		case BIT_NOT_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q20, _p0, _q21 };
			  tree res = generic_simplify_152 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_41 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, BIT_IOR_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_153 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_154 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q20, _p0, _q21 };
			tree res = generic_simplify_155 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GT_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GE_EXPR, GT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			tree res = generic_simplify_153 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			tree res = generic_simplify_154 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q21, _p0, _q20 };
			tree res = generic_simplify_155 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GT_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GT_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GT_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_161 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q51 };
			tree res = generic_simplify_162 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_162 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _p0 };
			tree res = generic_simplify_163 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _p0 };
			tree res = generic_simplify_163 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_164 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_164 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			tree res = generic_simplify_167 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_168 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_168 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GE_EXPR, LE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			tree res = generic_simplify_167 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_168 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if (tree_min_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if (tree_max_value (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			tree res = generic_simplify_168 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, LE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, LE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GT_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_158 (loc, type, _p0, _p1, captures, GE_EXPR, GE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, GE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, LE_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, GE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, LE_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_min_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_169 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q50 };
			tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q51 };
			tree res = generic_simplify_170 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (tree_max_value (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q51 };
			tree res = generic_simplify_164 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q50 };
			tree res = generic_simplify_164 (loc, type, _p0, _p1, captures, EQ_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q50))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q50, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q51))
	        {
		CASE_CONVERT:
		  {
		    tree _q70 = TREE_OPERAND (_q51, 0);
		    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
			  tree res = generic_simplify_165 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q61, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q30, _q60, _p0, _q20, _q21 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case EQ_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
		case NE_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q61, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q40, _q60, _p0, _q21, _q20 };
			  tree res = generic_simplify_156 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case EQ_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q51, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q51, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q21, _q50, _p0, _q21, _q20 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q20, _q50, _p0, _q20, _q21 };
		    tree res = generic_simplify_157 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LT_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50, _q51 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, GE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51, _q50 };
		    tree res = generic_simplify_166 (loc, type, _p0, _p1, captures, LE_EXPR, EQ_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (tree_expr_nonzero_p (_q31))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				{
				  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				{
				  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _q40, _q31, _q21, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q30))
	      {
		switch (TREE_CODE (_q31))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q31, 0);
		      tree _q51 = TREE_OPERAND (_q31, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
			      {
				if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
			      {
				if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q30, _q21, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if (tree_expr_nonzero_p (_q41))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NE_EXPR:
			    {
			      tree _q90 = TREE_OPERAND (_p1, 0);
			      tree _q91 = TREE_OPERAND (_p1, 1);
			      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				{
				  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q51, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				{
				  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q51, _q50, _q41, _q20, _p1 };
					tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
					if (res) return res;
				      }
				    }
			        }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_expr_nonzero_p (_q40))
	      {
		switch (TREE_CODE (_q41))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q41, 0);
		      tree _q61 = TREE_OPERAND (_q41, 1);
		      switch (TREE_CODE (_p1))
		        {
			case NE_EXPR:
			  {
			    tree _q90 = TREE_OPERAND (_p1, 0);
			    tree _q91 = TREE_OPERAND (_p1, 1);
			    if ((_q90 == _q60 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q60, 0) && types_match (_q90, _q60)))
			      {
				if ((_q91 == _q61 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q61, 0) && types_match (_q91, _q61)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q90 == _q61 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q61, 0) && types_match (_q90, _q61)))
			      {
				if ((_q91 == _q60 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q60, 0) && types_match (_q91, _q60)))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q61, _q60, _q40, _q20, _p1 };
				      tree res = generic_simplify_159 (loc, type, _p0, _p1, captures, EQ_EXPR);
				      if (res) return res;
				    }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		      break;
		    }
	          default:;
	          }
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
		      {
			if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
		      {
			if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q21, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case BIT_XOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_p1))
	        {
		case NE_EXPR:
		  {
		    tree _q70 = TREE_OPERAND (_p1, 0);
		    tree _q71 = TREE_OPERAND (_p1, 1);
		    if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
		      {
			if ((_q71 == _q41 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q41, 0) && types_match (_q71, _q41)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q70 == _q41 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q41, 0) && types_match (_q70, _q41)))
		      {
			if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q41, _q40, _q20, _p1 };
			      tree res = generic_simplify_160 (loc, type, _p0, _p1, captures, EQ_EXPR);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q51))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _p1, _q50, _q51 };
			    tree res = generic_simplify_42 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_43 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_44 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[6] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q51, _p0, _q21 };
				tree res = generic_simplify_43 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	    {
	      tree _p1_pops[1];
	      if (tree_nop_convert (_p1, _p1_pops))
	        {
		  tree _q50 = _p1_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case MULT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			{
			  tree _q60_pops[1];
			  if (tree_nop_convert (_q60, _q60_pops))
			    {
			      tree _q70 = _q60_pops[0];
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  switch (TREE_CODE (_q61))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[6] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q61, _p0, _q21 };
					  tree res = generic_simplify_39 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
					  if (res) return res;
					}
				        break;
				      }
				    default:;
				    }
			        }
			    }
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
}
if (tree_truth_valued_p (_p0))
  {
    {
      tree _p1_pops[1];
      if (tree_logical_inverted_value (_p1, _p1_pops))
        {
	  tree _q30 = _p1_pops[0];
	  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		tree res = generic_simplify_34 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
  }
  switch (TREE_CODE (_p1))
    {
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
		    tree res = generic_simplify_44 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
{
  tree _p1_pops[1];
  if (tree_nop_convert (_p1, _p1_pops))
    {
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case MULT_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      switch (TREE_CODE (_q41))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			      tree res = generic_simplify_40 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
			      if (res) return res;
			    }
			    break;
			  }
		        default:;
		        }
		    }
	        }
	    }
	    break;
	  }
        default:;
        }
    }
}
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case LSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_46 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_47 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
		    tree res = generic_simplify_47 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1308;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1308:;
			  }
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1309;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1309:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1310;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1310:;
			  }
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!HONOR_NANS (captures[0])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1311;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1311:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q60 = TREE_OPERAND (_p1, 0);
	      tree _q61 = TREE_OPERAND (_p1, 1);
	      tree _q62 = TREE_OPERAND (_p1, 2);
	      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1312;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1312;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1312;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1312:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	if (integer_minus_onep (_q21))
	  {
	    if (integer_zerop (_q22))
	      {
		switch (TREE_CODE (_p1))
		  {
		  case VEC_COND_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p1, 0);
		      tree _q61 = TREE_OPERAND (_p1, 1);
		      tree _q62 = TREE_OPERAND (_p1, 2);
		      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			{
			  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1313;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1313:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1314;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1314:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1315;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1315:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1316;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1316:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1317;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1317:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1318;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1318:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1319;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1319:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1320;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1320:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1321;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1321:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1322;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1322:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1323:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1324:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1325;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1325:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1326;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1326:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1327;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1327:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1328;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1328:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1329;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1329:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1330;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1330:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1331;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1331:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1332;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1332:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1333;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1333:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1334;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1334:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1335;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1335:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1336;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1336:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1337;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1337:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1338;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1338:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1339;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1339:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1340;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1340:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1341;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1341:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1342;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1342:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1343;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1343:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1344;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1344:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1345;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1345:;
				  }
			      }
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
				const enum tree_code lop = BIT_IOR_EXPR;
				if (target_supports_op_p (TREE_TYPE (captures[0]), lop, optab_vector)
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1346;
				    {
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[0];
					_o1[1] = captures[3];
					_r1 = fold_build2_loc (loc, lop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[1];
				      tree res_op2;
				      res_op2 = captures[2];
				      tree _r;
				      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 891, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1346:;
				  }
			      }
			    }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1347;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1347;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1347;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1347;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1347:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (BIT_IOR_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1348;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1348;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1348;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1348;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1348:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case UNORDERED_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q51 == _q50 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q50, 0) && types_match (_q51, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			if (types_match (captures[0], captures[1])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1349;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, UNORDERED_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 939, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1349:;
			  }
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q51 };
			tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
			tree res = generic_simplify_171 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	switch (TREE_CODE (_p1))
	  {
	  case UNORDERED_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q21, _p0, _q20 };
			tree res = generic_simplify_172 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1350;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1350;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1350;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1350;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1350;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1350;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1350:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1351;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1351;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1351;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1351;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1351:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1352;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1352;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1352;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1352;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1352;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1352;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1352:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1353;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1353;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1353;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1353;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1353:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
				  {
				    if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				      {
					if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1354;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1354;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1354;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1354;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1354;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1354;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1354:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1355;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1355;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1355;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1355;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1355:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q21 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q21, 0) && types_match (_q90, _q21)))
				      {
					if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1356;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1356;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1356;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1356;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1356;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1356;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1356:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1357;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1357;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1357;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1357;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1357:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1358;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1358;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1358;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1358;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1358;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1358;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1358:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1359;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1359;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1359;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1359;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1359:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GT_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LT_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1360;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1360;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1360;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1360;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1360;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1360;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1360:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1361;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1361;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1361;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1361;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1361:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_173 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q41))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case LE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  switch (TREE_CODE (_q70))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				      {
					if ((_q71 == _q40 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q40, 0) && types_match (_q71, _q40)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q70 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1362;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1362;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1362;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1362;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1362;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1362;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1362:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1363;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1363;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1363;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1363;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1363:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				  }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      case GE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_p1, 0);
			  tree _q71 = TREE_OPERAND (_p1, 1);
			  if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			    {
			      switch (TREE_CODE (_q71))
			        {
				case POINTER_PLUS_EXPR:
				  {
				    tree _q90 = TREE_OPERAND (_q71, 0);
				    tree _q91 = TREE_OPERAND (_q71, 1);
				    if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
				      {
					if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
					  {
					    {
					      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q21, _q40, _q41, _q20, _p1, _q71 };
					      const enum tree_code cmp = LE_EXPR;
					      if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_WRAPS (sizetype)
 && TYPE_PRECISION (TREE_TYPE (captures[2])) == TYPE_PRECISION (sizetype)
)
						{
						  {
 offset_int off = wi::to_offset (captures[3]) - (cmp == LE_EXPR ? 1 : 0);
 offset_int rhs = off * 2;
						      if (wi::min_precision (rhs, UNSIGNED) <= TYPE_PRECISION (sizetype)
)
							{
							  {
 bool swap_p = tree_swap_operands_p (captures[2], captures[4]);
 tree rhs_tree = wide_int_to_tree (sizetype, rhs);
							      if (cmp == LT_EXPR
)
								{
								  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1364;
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1364;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1364;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1364;
								  if (TREE_SIDE_EFFECTS (captures[6])) goto next_after_fail1364;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1364;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									_o2[0] =  swap_p ? captures[6] : captures[1];
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 940, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1364:;
								}
							      else
								{
								  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1365;
								  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1365;
								  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1365;
								  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1365;
								  {
								    tree res_op0;
								    {
								      tree _o1[1], _r1;
								      {
									tree _o2[2], _r2;
									{
									  tree _o3[2], _r3;
									  _o3[0] =  swap_p ? captures[4] : captures[2];
									  _o3[1] =  wide_int_to_tree (sizetype, off);
									  _r3 = fold_build2_loc (loc, POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
									  _o2[0] = _r3;
									}
									_o2[1] =  swap_p ? captures[2] : captures[4];
									_r2 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ssizetype, _o2[0], _o2[1]);
									_o1[0] = _r2;
								      }
								      if (TREE_TYPE (_o1[0]) != sizetype)
									{
									  _r1 = fold_build1_loc (loc, NOP_EXPR, sizetype, _o1[0]);
									}
								      else
								        _r1 = _o1[0];
								      res_op0 = _r1;
								    }
								    tree res_op1;
								    res_op1 =  rhs_tree;
								    tree _r;
								    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
								    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 941, __FILE__, __LINE__, true);
								    return _r;
								  }
next_after_fail1365:;
								}
							  }
							}
						  }
						}
					    }
					  }
				      }
				    break;
				  }
			        default:;
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  tree _q62 = TREE_OPERAND (_p1, 2);
		  if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
		    {
		      if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
			    if (VECTOR_INTEGER_TYPE_P (type)
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1366;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    captures[3] = _r1;
				  }
				  res_op0 = unshare_expr (captures[3]);
				  tree res_op1;
				  res_op1 = captures[3];
				  tree res_op2;
				  res_op2 = captures[1];
				  tree _r;
				  _r = fold_build3_loc (loc, VEC_PERM_EXPR, type, res_op0, res_op1, res_op2);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1366:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case RSHIFT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q51))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _q60, _q61, _q51 };
					tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case LSHIFT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				tree _q71 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q71))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q70, _q71, _q30, _q31, _q21 };
					tree res = generic_simplify_174 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q21))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    case RSHIFT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				tree _q71 = TREE_OPERAND (_p1, 1);
				switch (TREE_CODE (_q71))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _q70, _q71 };
					tree res = generic_simplify_175 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case BIT_XOR_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case LSHIFT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  switch (TREE_CODE (_q61))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q51))
				  {
				  case INTEGER_CST:
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q61, _q51, _q20, _q21 };
					tree res = generic_simplify_175 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				      break;
				    }
			          default:;
			          }
			        break;
			      }
			    default:;
			    }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop
