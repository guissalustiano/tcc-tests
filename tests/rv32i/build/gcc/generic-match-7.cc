/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_maybe_cmp (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
    case LE_EXPR:
    case EQ_EXPR:
    case NE_EXPR:
    case GE_EXPR:
    case GT_EXPR:
    case UNORDERED_EXPR:
    case ORDERED_EXPR:
    case UNLT_EXPR:
    case UNLE_EXPR:
    case UNGT_EXPR:
    case UNGE_EXPR:
    case UNEQ_EXPR:
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 5, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	switch (TREE_CODE (_p0))
	  {
	  case LT_EXPR:
	  case LE_EXPR:
	  case EQ_EXPR:
	  case NE_EXPR:
	  case GE_EXPR:
	  case GT_EXPR:
	  case UNORDERED_EXPR:
	  case ORDERED_EXPR:
	  case UNLT_EXPR:
	  case UNLE_EXPR:
	  case UNGT_EXPR:
	  case UNGE_EXPR:
	  case UNEQ_EXPR:
	  case LTGT_EXPR:
	    {
	      tree _q20 = TREE_OPERAND (_p0, 0);
	      tree _q21 = TREE_OPERAND (_p0, 1);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
		  {
		    {
		      res_ops[0] = captures[0];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 6, __FILE__, __LINE__, false);
		      return true;
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
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) == 1
)
	    {
	      {
		res_ops[0] = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 7, __FILE__, __LINE__, false);
		return true;
	      }
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
tree_float_value_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (TYPE_MAIN_VARIANT (TREE_TYPE (captures[0])) == float_type_node
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 45, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  return false;
}

tree
generic_simplify_7 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail78;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 55, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail78:;
  return NULL_TREE;
}

tree
generic_simplify_13 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail88;
  {
    if (! tree_invariant_p (captures[3])) goto next_after_fail88;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = unshare_expr (captures[3]);
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[4];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail88;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 61, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail88:;
  return NULL_TREE;
}

tree
generic_simplify_23 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail98;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
    if (TREE_SIDE_EFFECTS (captures[2]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 71, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail98:;
  return NULL_TREE;
}

tree
generic_simplify_31 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (((TREE_CODE (captures[3]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (int_fits_type_p (captures[3], TREE_TYPE (captures[1]))
 || tree_nop_conversion_p (TREE_TYPE (captures[1]), type)))
 || types_match (captures[1], captures[3]))
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && !VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && TREE_CODE (TREE_TYPE (captures[1])) != OFFSET_TYPE
 && (bitop != BIT_AND_EXPR ||
0
)
 && (
 TYPE_PRECISION (TREE_TYPE (captures[1])) < TYPE_PRECISION (type)
 || (
0
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (type))
 || GET_MODE_CLASS (TYPE_MODE (type)) != MODE_INT
 || !type_has_mode_precision_p (type)
 || (
0
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[1]))
 && single_use (captures[0])
 && single_use (captures[2])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail106;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 79, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail106:;
    }
  return NULL_TREE;
}

tree
generic_simplify_45 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail123;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != boolean_type_node)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, boolean_type_node, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[0];
	tree _r;
	_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 91, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail123:;
    }
  return NULL_TREE;
}

tree
generic_simplify_51 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail130;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[3];
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail130;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 98, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail130:;
    }
  else
    {
      if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[3]))
)
	{
	  {
 tree utype = TREE_TYPE (captures[1]);
 if (TYPE_PRECISION (utype) < TYPE_PRECISION (TREE_TYPE (captures[3])))
 utype = TREE_TYPE (captures[3]);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail131;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
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
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[3];
		    if (TREE_TYPE (_o2[0]) != utype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail131;
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 99, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail131:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_68 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail157;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail157;
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
		tree _r;
		_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 125, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail157:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_76 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_PRECISION (type) > 1
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[1]));
 tree cmptype = TREE_TYPE (captures[0]);
	  if (ic == icmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail166;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail166;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[1];
		    _o2[1] = captures[2];
		    _r2 = fold_build2_loc (loc, icmp, cmptype, _o2[0], _o2[1]);
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
		_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 134, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail166:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail167;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail167;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[1];
			_o2[1] = captures[2];
			_r2 = fold_build2_loc (loc, ncmp, cmptype, _o2[0], _o2[1]);
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
		    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 135, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail167:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_90 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail181;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 149, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail181:;
  return NULL_TREE;
}

tree
generic_simplify_97 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail190;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 157, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail190:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_103 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[2]))
)
	    {
	      {
 tree utype = unsigned_type_for (type);
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail199;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
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
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[2];
			if (TREE_TYPE (_o2[0]) != utype)
			  {
			    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
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
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 166, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail199:;
	      }
	    }
	  else
	    {
	      if (((element_precision (type) <= element_precision (TREE_TYPE (captures[1])))
 == (element_precision (type) <= element_precision (TREE_TYPE (captures[2]))))
 && (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[2]))))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail200;
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
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[2];
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 167, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail200:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_131 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (rop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 && element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail228;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[0];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    if (TREE_TYPE (_o2[0]) != type)
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, rop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 190, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail228:;
    }
  return NULL_TREE;
}

tree
generic_simplify_144 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail245;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
		{
		  _r3 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		}
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    _r2 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[7]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[7]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 198, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail245:;
    }
  return NULL_TREE;
}

tree
generic_simplify_157 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[2])))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail268;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail268;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail268;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 210, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail268:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail269;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail269;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail269;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 211, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail269:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail270;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail270;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail270;
		      {
			tree _r;
			_r = captures[0];
			if (TREE_SIDE_EFFECTS (captures[4]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail270:;
		    }
		  else
		    {
		      if (code1 == EQ_EXPR
 && code2 == GT_EXPR
 && cmp == 0
 && allbits
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, GE_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail271;
			  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail271;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail271;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    res_op1 = captures[5];
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 213, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail271:;
			}
		      else
			{
			  if (code1 == EQ_EXPR
 && code2 == LT_EXPR
 && cmp == 0
 && allbits
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, LE_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail272;
			      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail272;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail272;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				res_op1 = captures[5];
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail272:;
			    }
			  else
			    {
			      if (code1 == EQ_EXPR
 && code2 == GE_EXPR
 && one_before
 && allbits
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, GE_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail273;
				  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail273;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail273;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
				    tree res_op1;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					{
					  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					}
				      else
				        _r1 = _o1[0];
				      res_op1 = _r1;
				    }
				    tree _r;
				    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 215, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail273:;
				}
			      else
				{
				  if (code1 == EQ_EXPR
 && code2 == LE_EXPR
 && one_after
 && allbits
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, LE_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail274;
				      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail274;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail274;
				      {
					tree res_op0;
					res_op0 = captures[4];
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					    {
					      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					    }
					  else
					    _r1 = _o1[0];
					  res_op1 = _r1;
					}
					tree _r;
					_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail274:;
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
generic_simplify_201 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail341;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[4];
	  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, POW, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail341;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 256, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail341:;
    }
  return NULL_TREE;
}

tree
generic_simplify_210 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (TREE_TYPE (captures[0])) == BOOLEAN_TYPE
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail353;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail353;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, neeq, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 267, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail353:;
    }
  return NULL_TREE;
}

tree
generic_simplify_215 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && integer_nonzerop (captures[2])
 && !TREE_OVERFLOW (captures[2])
 && !TREE_OVERFLOW (captures[3])
)
    {
      {
 tree lo, hi; bool neg_overflow;
 enum tree_code code = fold_div_compare (cmp, captures[2], captures[3], &lo, &hi,
 &neg_overflow);
	  if (code == LT_EXPR || code == GE_EXPR
)
	    {
	      if (TREE_OVERFLOW (lo)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail358;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail358;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail358;
		  {
		    tree _r;
		    _r =  build_int_cst (type, (code == LT_EXPR) ^ neg_overflow);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail358:;
		}
	      else
		{
		  if (code == LT_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail359;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail359;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail359;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 273, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail359:;
		    }
		  else
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail360;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail360;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail360;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree res_op1;
			res_op1 =  lo;
			tree _r;
			_r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 274, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail360:;
		    }
		}
	    }
	  else
	    {
	      if (code == LE_EXPR || code == GT_EXPR
)
		{
		  if (TREE_OVERFLOW (hi)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail361;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail361;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail361;
		      {
			tree _r;
			_r =  build_int_cst (type, (code == LE_EXPR) ^ neg_overflow);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 275, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail361:;
		    }
		  else
		    {
		      if (code == LE_EXPR
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail362;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail362;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail362;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 276, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail362:;
			}
		      else
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail363;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail363;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail363;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  hi;
			    tree _r;
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 277, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail363:;
			}
		    }
		}
	      else
		{
		  if (!lo && !hi
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail364;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail364;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail364;
		      {
			tree _r;
			_r =  build_int_cst (type, code == NE_EXPR);
			if (TREE_SIDE_EFFECTS (captures[1]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 278, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail364:;
		    }
		  else
		    {
		      if (code == EQ_EXPR && !hi
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail365;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail365;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail365;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree res_op1;
			    res_op1 =  lo;
			    tree _r;
			    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 279, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail365:;
			}
		      else
			{
			  if (code == EQ_EXPR && !lo
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail366;
			      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail366;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail366;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree res_op1;
				res_op1 =  hi;
				tree _r;
				_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail366:;
			    }
			  else
			    {
			      if (code == NE_EXPR && !hi
)
				{
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail367;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail367;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail367;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree res_op1;
				    res_op1 =  lo;
				    tree _r;
				    _r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 281, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail367:;
				}
			      else
				{
				  if (code == NE_EXPR && !lo
)
				    {
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail368;
				      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail368;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail368;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree res_op1;
					res_op1 =  hi;
					tree _r;
					_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 282, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail368:;
				    }
				  else
				    {
				      if (1
)
					{
					  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail369;
					  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail369;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail369;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail369;
					  {
					    tree _r;
					    _r =  build_range_check (UNKNOWN_LOCATION, type, captures[1], code == EQ_EXPR,
 lo, hi);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 283, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail369:;
					}
				      else
					{
					  {
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 hi = fold_convert (etype, hi);
 lo = fold_convert (etype, lo);
 hi = const_binop (MINUS_EXPR, etype, hi, lo);
 }
					      if (etype && hi && !TREE_OVERFLOW (hi)
)
						{
						  if (code == EQ_EXPR
)
						    {
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail370;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail370;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail370;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, LE_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 284, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail370:;
						    }
						  else
						    {
						      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail371;
						      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail371;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail371;
						      {
							tree res_op0;
							{
							  tree _o1[2], _r1;
							  {
							    tree _o2[1], _r2;
							    _o2[0] = captures[1];
							    if (TREE_TYPE (_o2[0]) != etype)
							      {
								_r2 = fold_build1_loc (loc, NOP_EXPR, etype, _o2[0]);
							      }
							    else
							      _r2 = _o2[0];
							    _o1[0] = _r2;
							  }
							  _o1[1] =  lo;
							  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  hi;
							tree _r;
							_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 285, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail371:;
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
generic_simplify_272 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && !wi::neg_p (wi::to_wide (captures[3]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail502;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[2];
	  {
	    tree _o2[1], _r2;
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      _r3 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      _o2[0] = _r3;
	    }
	    if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o1[0]))
	      {
		_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail502:;
    }
  return NULL_TREE;
}

tree
generic_simplify_279 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[1]))
 && element_precision (captures[0]) >= element_precision (captures[1])
 && wi::only_sign_bit_p (wi::to_wide (captures[2]), element_precision (captures[1]))
)
    {
      {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail509;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail509;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (TREE_TYPE (_o1[0]) != stype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (stype);
	    tree _r;
	    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 412, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail509:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_289 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= 2 * TYPE_PRECISION (TREE_TYPE (captures[2])))
 && tree_fits_uhwi_p (captures[4])
 && tree_to_uhwi (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], captures[3])
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && (optab_handler (umulv4_optab, TYPE_MODE (TREE_TYPE (captures[2])))
 != CODE_FOR_nothing)
)
    {
      {
 tree t = TREE_TYPE (captures[2]), cpx = build_complex_type (t);
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail537;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail537;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[2], _r2;
		_o2[0] = captures[2];
		_o2[1] = captures[3];
		_r2 = maybe_build_call_expr_loc (loc, CFN_MUL_OVERFLOW, cpx, 2, _o2[0], _o2[1]);
		if (!_r2)
		  goto next_after_fail537;
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o1[0])), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (t);
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 431, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail537:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_292 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (clz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!sanitize_flags_p (SANITIZE_BUILTIN)
 || (cfun && (cfun->curr_properties & PROP_ssa) != 0)
)
    {
      if (integer_zerop (captures[2]) && single_use (captures[0])
)
	{
	  {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail549;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (TREE_TYPE (_o1[0]) != stype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  build_zero_cst (stype);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 443, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail549:;
	  }
	}
      else
	{
	  if (wi::to_wide (captures[2]) == TYPE_PRECISION (TREE_TYPE (captures[1])) - 1
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail550;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_one_cst (TREE_TYPE (captures[1]));
		tree _r;
		_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 444, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail550:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_297 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail558;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 452, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail558:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0 || wi::to_widest (captures[2]) > prec
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail559;
	      {
		tree _r;
		_r =  constant_boolean_node (cmp == NE_EXPR ? true : false, type);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 453, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail559:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail560;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail560;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (tree_to_uhwi (captures[2]) - 1, 1,
 false, prec));
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 454, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail560:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_315 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail581;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 473, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail581:;
    }
  return NULL_TREE;
}

tree
generic_simplify_321 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail588;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, trunc_divmod, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 480, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail588:;
    }
  return NULL_TREE;
}

tree
generic_simplify_325 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail592;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 484, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail592:;
    }
  return NULL_TREE;
}

tree
generic_simplify_335 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TANH),
 const combined_fn ARG_UNUSED (SINH),
 const combined_fn ARG_UNUSED (COSH))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail604;
      {
	tree res_op0;
	res_op0 = build_one_cst (type);
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  _r1 = maybe_build_call_expr_loc (loc, COSH, TREE_TYPE (_o1[0]), 1, _o1[0]);
	  if (!_r1)
	    goto next_after_fail604;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 496, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail604:;
    }
  return NULL_TREE;
}

tree
generic_simplify_343 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree from_type = TREE_TYPE (captures[0]), to_type = TREE_TYPE (captures[1]);
      if (types_match (from_type, to_type)
 || (TYPE_UNSIGNED (from_type)
 && !TYPE_UNSIGNED (to_type)
 && TYPE_PRECISION (from_type) == TYPE_PRECISION (to_type)
 && integer_zerop (captures[1])
 && (cmp == LT_EXPR || cmp == GE_EXPR))
)
	{
	  {
 wi::overflow_type overflow = wi::OVF_NONE;
 enum tree_code code, cmp_code = cmp;
 wide_int real_c1;
 wide_int c1 = wi::to_wide (captures[1]);
 wide_int c2 = wi::to_wide (captures[2]);
 wide_int c3 = wi::to_wide (captures[3]);
 signop sgn = TYPE_SIGN (from_type);
 if (!types_match (from_type, to_type))
 {
 if (cmp_code == LT_EXPR)
 cmp_code = GT_EXPR;
 if (cmp_code == GE_EXPR)
 cmp_code = LE_EXPR;
 c1 = wi::max_value (to_type);
 }
 if (op == PLUS_EXPR)
 real_c1 = wi::sub (c3, c2, sgn, &overflow);
 else
 real_c1 = wi::add (c3, c2, sgn, &overflow);
 code = cmp_code;
 if (!overflow || !TYPE_OVERFLOW_UNDEFINED (from_type))
 {
 if (!wi::cmp (wi::sub (real_c1, 1, sgn, &overflow), c1, sgn)
 && !overflow)
 {
 if (cmp_code == LE_EXPR)
 code = LT_EXPR;
 if (cmp_code == GT_EXPR)
 code = GE_EXPR;
 }
 if (!wi::cmp (wi::add (real_c1, 1, sgn, &overflow), c1, sgn)
 && !overflow)
 {
 if (cmp_code == LT_EXPR)
 code = LE_EXPR;
 if (cmp_code == GE_EXPR)
 code = GT_EXPR;
 }
 if (code != cmp_code || !wi::cmp (real_c1, c1, sgn))
 {
 if (cmp_code == LT_EXPR || cmp_code == LE_EXPR)
 code = MIN_EXPR;
 if (cmp_code == GT_EXPR || cmp_code == GE_EXPR)
 code = MAX_EXPR;
 }
 }
	      if (code == MAX_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail614;
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail614;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail614;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail614;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail614;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (from_type, real_c1);
		      _r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (from_type, c2);
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 506, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail614:;
		}
	      else
		{
		  if (code == MIN_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail615;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail615;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail615;
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail615;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail615;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  _o1[1] =  wide_int_to_tree (from_type, real_c1);
			  _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree res_op1;
			res_op1 =  wide_int_to_tree (from_type, c2);
			tree _r;
			_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 507, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail615:;
		    }
		}
	  }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_373 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (type)
)
    {
      {
 tree shifter = build_int_cst (integer_type_node, TYPE_PRECISION (type) - 1);
	  if (cmp == GE_EXPR
)
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail650;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail650;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail650;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
		    _r2 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
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
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 540, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail650:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail651;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail651;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail651;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      _r3 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
		      _o2[0] = _r3;
		    }
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 541, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail651:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_393 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || POINTER_TYPE_P (TREE_TYPE (captures[2]))
 || VECTOR_INTEGER_TYPE_P (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
    {
      {
 tree cst = uniform_integer_cst_p (captures[2]);
 tree arg1_type = TREE_TYPE (cst);
 unsigned int prec = TYPE_PRECISION (arg1_type);
 wide_int max = wi::max_value (arg1_type);
 wide_int signed_max = wi::max_value (prec, SIGNED);
 wide_int min = wi::min_value (arg1_type);
	  if (wi::to_wide (cst) == max
)
	    {
	      if (cmp == GT_EXPR
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail691;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 565, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail691:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail692;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 = captures[2];
			tree _r;
			_r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 566, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail692:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail693;
			  {
			    tree _r;
			    _r =  constant_boolean_node (true, type);
			    if (TREE_SIDE_EFFECTS (captures[0]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 567, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail693:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail694;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 = captures[2];
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 568, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail694:;
			    }
			}
		    }
		}
	    }
	  else
	    {
	      if (wi::to_wide (cst) == min
)
		{
		  if (cmp == LT_EXPR
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail695;
		      {
			tree _r;
			_r =  constant_boolean_node (false, type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 569, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail695:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail696;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 = captures[2];
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 570, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail696:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail697;
			      {
				tree _r;
				_r =  constant_boolean_node (true, type);
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 571, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail697:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail698;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 572, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail698:;
				}
			    }
			}
		    }
		}
	      else
		{
		  if (wi::to_wide (cst) == max - 1
)
		    {
		      if (cmp == GT_EXPR
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail699;
			  {
			    tree res_op0;
			    res_op0 = captures[0];
			    tree res_op1;
			    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    tree _r;
			    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
			    if (TREE_SIDE_EFFECTS (captures[2]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 573, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail699:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail700;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 574, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail700:;
			    }
			}
		    }
		  else
		    {
		      if (wi::to_wide (cst) == min + 1
)
			{
			  if (cmp == GE_EXPR
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail701;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				tree _r;
				_r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
				if (TREE_SIDE_EFFECTS (captures[2]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 575, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail701:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail702;
				  {
				    tree res_op0;
				    res_op0 = captures[0];
				    tree res_op1;
				    res_op1 =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    tree _r;
				    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 576, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail702:;
				}
			    }
			}
		      else
			{
			  if (wi::to_wide (cst) == signed_max
 && TYPE_UNSIGNED (arg1_type)
 && TYPE_MODE (arg1_type) != BLKmode
 && prec == GET_MODE_PRECISION (SCALAR_INT_TYPE_MODE (arg1_type))
 && INTEGRAL_TYPE_P (arg1_type)
)
			    {
			      if (cmp == LE_EXPR || cmp == GT_EXPR
)
				{
				  {
 tree st = signed_type_for (TREE_TYPE (captures[2]));
				      if (cst == captures[2] && cmp == LE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail703;
					  {
					    tree res_op0;
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (TREE_TYPE (_o1[0]) != st)
						{
						  _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						}
					      else
					        _r1 = _o1[0];
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  build_zero_cst (st);
					    tree _r;
					    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail703:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail704;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (TREE_TYPE (_o1[0]) != st)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, st, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 =  build_zero_cst (st);
						tree _r;
						_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 578, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail704:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail705;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      if (TREE_TYPE (_o1[0]) != st)
							{
							  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
							}
						      else
						        _r1 = _o1[0];
						      res_op0 = _r1;
						    }
						    tree res_op1;
						    res_op1 =  build_zero_cst (st);
						    tree _r;
						    _r = fold_build2_loc (loc, GE_EXPR, type, res_op0, res_op1);
						    if (TREE_SIDE_EFFECTS (captures[2]))
						      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 579, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail705:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail706;
						      {
							tree res_op0;
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  if (TREE_TYPE (_o1[0]) != st)
							    {
							      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, st, _o1[0]);
							    }
							  else
							    _r1 = _o1[0];
							  res_op0 = _r1;
							}
							tree res_op1;
							res_op1 =  build_zero_cst (st);
							tree _r;
							_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
							if (TREE_SIDE_EFFECTS (captures[2]))
							  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 580, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail706:;
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
generic_simplify_451 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 651, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail796:;
  return NULL_TREE;
}

tree
generic_simplify_456 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[5], op, captures[1], bitop,
 captures[2], captures[3], captures[4], ERROR_MARK, NULL_TREE,
 NULL_TREE, pmop);
      if (utype
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail801;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail801;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail801;
	  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail801;
	  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail801;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail801;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[1];
		  if (TREE_TYPE (_o3[0]) != utype)
		    {
		      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
		    }
		  else
		    _r3 = _o3[0];
		  _o2[1] = _r3;
		}
		_r2 = fold_build2_loc (loc, op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		if (TREE_TYPE (_o2[0]) != utype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 655, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail801:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_471 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (code2),
 const enum tree_code ARG_UNUSED (code1))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 || ((INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, code2))
 || POINTER_TYPE_P (TREE_TYPE (captures[2])))
 && bitwise_equal_p (captures[2], captures[5]))
)
    {
      {
 bool one_before = false;
 bool one_after = false;
 int cmp = 0;
 bool allbits = true;
 if (TREE_CODE (captures[2]) == INTEGER_CST
 && TREE_CODE (captures[5]) == INTEGER_CST)
 {
 allbits = TYPE_PRECISION (TREE_TYPE (captures[2])) <= TYPE_PRECISION (TREE_TYPE (captures[5]));
 auto t1 = wi::to_wide (fold_convert (TREE_TYPE (captures[5]), captures[2]));
 auto t2 = wi::to_wide (captures[5]);
 cmp = wi::cmp (t1, t2, TYPE_SIGN (TREE_TYPE (captures[5])));
 if (cmp < 0
 && t1 == t2 - 1)
 one_before = true;
 if (cmp > 0
 && t1 == t2 + 1)
 one_after = true;
 }
 bool val;
 switch (code2)
 {
 case EQ_EXPR: val = (cmp == 0); break;
 case NE_EXPR: val = (cmp != 0); break;
 case LT_EXPR: val = (cmp < 0); break;
 case GT_EXPR: val = (cmp > 0); break;
 case LE_EXPR: val = (cmp <= 0); break;
 case GE_EXPR: val = (cmp >= 0); break;
 default: gcc_unreachable ();
 }
	  if (code1 == EQ_EXPR && val
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail818;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail818;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail818;
	      {
		tree _r;
		_r = captures[0];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 671, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail818:;
	    }
	  else
	    {
	      if (code1 == EQ_EXPR && !val
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail819;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail819;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail819;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 672, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail819:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail820;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail820;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail820;
		      {
			tree _r;
			_r = captures[3];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 673, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail820:;
		    }
		  else
		    {
		      if ((code1 == NE_EXPR
 && code2 == GE_EXPR
 && cmp == 0
 && allbits)
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, GT_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
			{
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail821;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail821;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail821;
			  {
			    tree res_op0;
			    res_op0 = captures[4];
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 674, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail821:;
			}
		      else
			{
			  if ((code1 == NE_EXPR
 && code2 == LE_EXPR
 && cmp == 0
 && allbits)
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, LT_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
			    {
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail822;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail822;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail822;
			      {
				tree res_op0;
				res_op0 = captures[4];
				tree res_op1;
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[2];
				  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
				    {
				      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
				    }
				  else
				    _r1 = _o1[0];
				  res_op1 = _r1;
				}
				tree _r;
				_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 675, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail822:;
			    }
			  else
			    {
			      if ((code1 == NE_EXPR
 && code2 == GT_EXPR
 && one_after
 && allbits)
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, GT_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
				{
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail823;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail823;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail823;
				  {
				    tree res_op0;
				    res_op0 = captures[4];
				    tree res_op1;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[2];
				      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					{
					  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					}
				      else
				        _r1 = _o1[0];
				      res_op1 = _r1;
				    }
				    tree _r;
				    _r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 676, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail823:;
				}
			      else
				{
				  if ((code1 == NE_EXPR
 && code2 == LT_EXPR
 && one_before
 && allbits)
 && ((VECTOR_BOOLEAN_TYPE_P (type)
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[2]), type, LT_EXPR))
 || !VECTOR_TYPE_P (TREE_TYPE (captures[2])))
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail824;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail824;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail824;
				      {
					tree res_op0;
					res_op0 = captures[4];
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[2];
					  if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
					    {
					      _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
					    }
					  else
					    _r1 = _o1[0];
					  res_op1 = _r1;
					}
					tree _r;
					_r = fold_build2_loc (loc, LT_EXPR, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 677, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail824:;
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
generic_simplify_501 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[2]))
 && (element_precision (TREE_TYPE (captures[2]))
 <= element_precision (TREE_TYPE (captures[3]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[3])))
)
    {
      {
 tree shift_type = TREE_TYPE (captures[2]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail890;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (TREE_TYPE (_o2[0]) != shift_type)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, shift_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail890:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_513 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if (!TYPE_OVERFLOW_SANITIZED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail903;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail903:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_521 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_CODE (type) != COMPLEX_TYPE
 && (! ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_UNDEFINED (type))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail912;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 724, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail912:;
    }
  return NULL_TREE;
}

tree
generic_simplify_530 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (maxmin))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail935;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, maxmin, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 735, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail935:;
  return NULL_TREE;
}

tree
generic_simplify_535 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_isnan (TREE_REAL_CST_PTR (captures[1]))
 && (!HONOR_SNANS (captures[1]) || !TREE_REAL_CST (captures[1]).signalling)
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail940;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 740, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail940:;
    }
  return NULL_TREE;
}

tree
generic_simplify_544 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail949;
	  {
	    tree res_op0;
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (TREE_TYPE (_o2[0]) != op_type)
		  {
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[3] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, cond_op, TREE_TYPE (_o1[1]), 4, _o1[0], _o1[1], _o1[2], _o1[3]);
	      if (!_r1)
	        goto next_after_fail949;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[5]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[5]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 744, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail949:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_555 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_MAX_VALUE (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (TREE_TYPE (captures[0])))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
    {
      if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail961;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[1];
	      {
		tree _o2[2], _r2;
		_o2[0] =  TYPE_MAX_VALUE (TREE_TYPE (captures[1]));
		_o2[1] = captures[2];
		_r2 = fold_build2_loc (loc, TRUNC_DIV_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		if (EXPR_P (_r2))
		  goto next_after_fail961;
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 756, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail961:;
	}
      else
	{
	  if (TYPE_MIN_VALUE (TREE_TYPE (captures[1]))
)
	    {
	      if (!TYPE_UNSIGNED (TREE_TYPE (captures[2])) && integer_minus_onep (captures[2])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail962;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  TYPE_MIN_VALUE (TREE_TYPE (captures[1]));
		      _r1 = fold_build2_loc (loc, EQ_EXPR, boolean_type_node, _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 757, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail962:;
		}
	      else
		{
		  {
 tree div = fold_convert (TREE_TYPE (captures[1]), captures[2]);
 tree lo = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MIN_VALUE (TREE_TYPE (captures[1])), div);
 tree hi = int_const_binop (TRUNC_DIV_EXPR,
 TYPE_MAX_VALUE (TREE_TYPE (captures[1])), div);
 tree etype = range_check_type (TREE_TYPE (captures[1]));
 if (etype)
 {
 if (wi::neg_p (wi::to_wide (div)))
 std::swap (lo, hi);
 lo = fold_convert (etype, lo);
 hi = fold_convert (etype, hi);
 hi = int_const_binop (MINUS_EXPR, hi, lo);
 }
		      if (etype
)
			{
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail963;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail963;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[1];
				  if (TREE_TYPE (_o3[0]) != etype)
				    {
				      _r3 = fold_build1_loc (loc, NOP_EXPR, etype, _o3[0]);
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] =  lo;
				_r2 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				_o1[0] = _r2;
			      }
			      _o1[1] =  hi;
			      _r1 = fold_build2_loc (loc, GT_EXPR, boolean_type_node, _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 758, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail963:;
			}
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_595 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1003;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail1003;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 798, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1003:;
    }
  return NULL_TREE;
}

tree
generic_simplify_605 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1013;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != t)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, t, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ctz, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail1013;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1013:;
  }
  return NULL_TREE;
}

tree
generic_simplify_614 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (PARITY))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, PARITY, type, 1, res_op0);
    if (!_r)
      goto next_after_fail1023;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 813, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail1023:;
  return NULL_TREE;
}

tree
generic_simplify_618 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1027;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (TREE_TYPE (_o1[0]) != type0)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type0, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, parity, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail1027;
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 815, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1027:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_VIEW_CONVERT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1088;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1088:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1089;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 865, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1089:;
	}
        break;
      }
    case BIT_FIELD_REF:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (is_gimple_reg_type (type)
 && (!INTEGRAL_TYPE_P (type)
 || !INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || (type_has_mode_precision_p (type)
 && type_has_mode_precision_p (TREE_TYPE (captures[0]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1090;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, BIT_FIELD_REF, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 866, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1090:;
	    }
	}
        break;
      }
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((INTEGRAL_TYPE_P (type) || POINTER_TYPE_P (type))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[0]))
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1091;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 867, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1091:;
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
 bool extended_bitint = false;
 if (BITINT_TYPE_P (TREE_TYPE (captures[0])))
 {
 struct bitint_info info;
 extended_bitint
 = targetm.c.bitint_type_info (TYPE_PRECISION (TREE_TYPE (captures[0])),
 &info);
 extended_bitint = extended_bitint && info.extended;
 }
	      if ((INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) || POINTER_TYPE_P (TREE_TYPE (captures[0])))
 && (INTEGRAL_TYPE_P (TREE_TYPE (captures[1])) || POINTER_TYPE_P (TREE_TYPE (captures[1])))
 && !extended_bitint
 && TYPE_SIZE (TREE_TYPE (captures[0])) == TYPE_SIZE (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 || (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1092;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 868, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1092:;
		}
	  }
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
	      if (CONSTRUCTOR_NELTS (ctor) == 0
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1093;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1093;
		  {
		    tree _r;
		    _r =  build_zero_cst (type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 869, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1093:;
		}
	      else
		{
		  if (CONSTRUCTOR_NELTS (ctor) == 1
 && VECTOR_TYPE_P (TREE_TYPE (ctor))
 && operand_equal_p (TYPE_SIZE (type),
 TYPE_SIZE (TREE_TYPE
 (CONSTRUCTOR_ELT (ctor, 0)->value)))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1094;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1094;
		      {
			tree res_op0;
			res_op0 =  CONSTRUCTOR_ELT (ctor, 0)->value;
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 870, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1094:;
		    }
		}
	  }
	}
        break;
      }
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
	  if (VECTOR_TYPE_P (type) && VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[2])))
 && tree_nop_conversion_p (TREE_TYPE (type), TREE_TYPE (TREE_TYPE (captures[2])))
 && (expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1095;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		      if (EXPR_P (_r1))
		        goto next_after_fail1095;
		    }
		  else
		    _r1 = _o1[0];
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
		      if (EXPR_P (_r1))
		        goto next_after_fail1095;
		    }
		  else
		    _r1 = _o1[0];
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 871, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1095:;
	    }
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify (location_t loc, enum tree_code code, const tree type ATTRIBUTE_UNUSED, tree _p0)
{
  switch (code)
    {
    case ABS_EXPR:
      return generic_simplify_ABS_EXPR (loc, code, type, _p0);
    CASE_CONVERT:
      return generic_simplify_CONVERT_EXPR (loc, code, type, _p0);
    case BIT_NOT_EXPR:
      return generic_simplify_BIT_NOT_EXPR (loc, code, type, _p0);
    case ABSU_EXPR:
      return generic_simplify_ABSU_EXPR (loc, code, type, _p0);
    case NEGATE_EXPR:
      return generic_simplify_NEGATE_EXPR (loc, code, type, _p0);
    case VIEW_CONVERT_EXPR:
      return generic_simplify_VIEW_CONVERT_EXPR (loc, code, type, _p0);
    case FLOAT_EXPR:
      return generic_simplify_FLOAT_EXPR (loc, code, type, _p0);
    case FIX_TRUNC_EXPR:
      return generic_simplify_FIX_TRUNC_EXPR (loc, code, type, _p0);
    case PAREN_EXPR:
      return generic_simplify_PAREN_EXPR (loc, code, type, _p0);
    case REALPART_EXPR:
      return generic_simplify_REALPART_EXPR (loc, code, type, _p0);
    case IMAGPART_EXPR:
      return generic_simplify_IMAGPART_EXPR (loc, code, type, _p0);
    case CONJ_EXPR:
      return generic_simplify_CONJ_EXPR (loc, code, type, _p0);
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_POINTER_PLUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1252;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1252;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1252:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1253;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 899, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1253:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1254;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    _o1[0] = captures[2];
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
		    tree _o1[2], _r1;
		    _o1[0] = captures[3];
		    _o1[1] = captures[4];
		    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op1 = _r1;
		  }
		  tree _r;
		  _r = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 900, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1254:;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1255;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1255;
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
	tree _r;
	_r = non_lvalue_loc (loc, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 901, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1255:;
    }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q70 = TREE_OPERAND (_q41, 0);
			  if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q50 };
				if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
1
 && type == TREE_TYPE (captures[3])))
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1256;
				    {
				      tree _r;
				      _r = captures[3];
				      if (TREE_SIDE_EFFECTS (captures[0]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1256:;
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
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
		    if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1257;
			{
			  tree res_op0;
			  res_op0 = captures[3];
			  tree _r;
			  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			  if (TREE_SIDE_EFFECTS (captures[4]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1257:;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      switch (TREE_CODE (_q31))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q31, 0);
		    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _p1, _q40 };
			  if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
 && ((
0
 && useless_type_conversion_p (type, TREE_TYPE (captures[3])))
 || (
1
 && type == TREE_TYPE (captures[3])))
)
			    {
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1258;
			      {
				tree _r;
				_r = captures[3];
				if (TREE_SIDE_EFFECTS (captures[0]))
				  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 902, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1258:;
			    }
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q31))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    tree _q51 = TREE_OPERAND (_q31, 1);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      switch (TREE_CODE (_q51))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q51 };
				      if (tree_int_cst_min_precision (captures[3], UNSIGNED) <= tree_ctz (captures[2])
)
					{
					  {
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[3]));
					      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1259;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1259;
					      {
						tree res_op0;
						{
						  tree _o1[2], _r1;
						  _o1[0] = captures[0];
						  _o1[1] =  algn;
						  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 = captures[2];
						tree _r;
						_r = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 904, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1259:;
					  }
					}
				    }
				    break;
				  }
			        default:;
			        }
			    }
			  switch (TREE_CODE (_q60))
			    {
			    case POINTER_PLUS_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				  {
				    switch (TREE_CODE (_q71))
				      {
				      case INTEGER_CST:
				        {
					  switch (TREE_CODE (_q51))
					    {
					    case INTEGER_CST:
					      {
						{
						  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q71, _q51 };
						  {
 auto mask_width = tree_int_cst_min_precision (captures[4], UNSIGNED);
						      if (mask_width <= tree_ctz (captures[2]) && mask_width <= tree_ctz (captures[3])
)
							{
							  {
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[4]));
							      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1260;
							      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1260;
							      {
								tree res_op0;
								{
								  tree _o1[2], _r1;
								  _o1[0] = captures[0];
								  _o1[1] =  algn;
								  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								  res_op0 = _r1;
								}
								tree res_op1;
								res_op1 = captures[2];
								tree _r;
								_r = fold_build2_loc (loc, POINTER_PLUS_EXPR, type, res_op0, res_op1);
								if (TREE_SIDE_EFFECTS (captures[3]))
								  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
								if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 905, __FILE__, __LINE__, true);
								return _r;
							      }
next_after_fail1260:;
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
    case POINTER_DIFF_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
	      if (TYPE_PRECISION (TREE_TYPE (captures[1])) >= TYPE_PRECISION (TREE_TYPE (captures[2]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1261;
		  {
		    tree res_op0;
		    res_op0 = captures[3];
		    tree _r;
		    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		    if (TREE_SIDE_EFFECTS (captures[4]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 903, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1261:;
		}
	    }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			switch (TREE_CODE (_q41))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
				{
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[1]));
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1262;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1262;
				    {
				      tree res_op0;
				      res_op0 = captures[0];
				      tree res_op1;
				      res_op1 =  algn;
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1262:;
				}
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_q50))
		      {
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_q41))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q61, _q41 };
					    if (tree_int_cst_min_precision (captures[2], UNSIGNED) <= tree_ctz (captures[1])
)
					      {
						{
 tree algn = wide_int_to_tree (TREE_TYPE (captures[0]), ~wi::to_wide (captures[2]));
						    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1263;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1263;
						    {
						      tree res_op0;
						      res_op0 = captures[0];
						      tree res_op1;
						      res_op1 =  algn;
						      tree _r;
						      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
						      if (TREE_SIDE_EFFECTS (captures[1]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 907, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1263:;
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

tree
generic_simplify_NE_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_202 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_202 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case CEIL_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR, CEIL_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR, FLOOR_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case ROUND_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR, ROUND_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case TRUNC_MOD_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_203 (loc, type, _p0, _p1, captures, NE_EXPR, TRUNC_MOD_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		    tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
      }
	switch (TREE_CODE (_q20))
	  {
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case EXACT_DIV_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
				      tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q41))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
			  tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
			  tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  switch (TREE_CODE (_q51))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_q51, 0);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
			      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
			      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q51, _q20 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case LSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q31, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
			      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	    switch (TREE_CODE (_q30))
	      {
	      CASE_CONVERT:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
			      tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q40 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q31))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q31, 0);
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30 };
		  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    tree _p1_pops[1];
    if (tree_nop_convert (_p1, _p1_pops))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		    tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if (tree_zero_one_valued_p (_q20))
	  {
	    switch (TREE_CODE (_q21))
	      {
	      case INTEGER_CST:
	        {
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			if (tree_fits_shwi_p (captures[1])
 && tree_to_shwi (captures[1]) > 0
 && tree_to_shwi (captures[1]) < TYPE_PRECISION (TREE_TYPE (captures[0]))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1516;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree _r;
			      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 984, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1516:;
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
  switch (TREE_CODE (_p1))
    {
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_204 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (tree_zero_one_valued_p (_q20))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		  tree res = generic_simplify_210 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
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
		case RSHIFT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				tree res = generic_simplify_211 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		  tree res = generic_simplify_212 (loc, type, _p0, _p1, captures, NE_EXPR, LT_EXPR);
		  if (res) return res;
		}
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
	switch (TREE_CODE (_p1))
	  {
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_213 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
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
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			  tree res = generic_simplify_214 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
			  tree res = generic_simplify_206 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case TRUNC_DIV_EXPR:
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
		      tree res = generic_simplify_215 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1517;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1517:;
		      }
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1518;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1518:;
		      }
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1519;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1519:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1520;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1520:;
		      }
		  }
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
			  tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
			  tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q30 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
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
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	      tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q21, _q20 };
	      tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_216 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
			  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q21 };
		    tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
	      tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1521;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1521:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1])))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1522;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1522:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
	      tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_DIFF_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
		    tree res = generic_simplify_219 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    tree res = generic_simplify_220 (loc, type, _p0, _p1, captures, NE_EXPR);
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
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	{
	  if (tree_truth_valued_p (_p1))
	    {
	      {
		tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		tree res = generic_simplify_208 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	    }
        }
    }
  }
  switch (TREE_CODE (_p1))
    {
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q30))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
		    tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
	      tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_207 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
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
	case PLUS_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q41))
	      {
	      CASE_CONVERT:
	        {
		  tree _q60 = TREE_OPERAND (_q41, 0);
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q40))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
			tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
		  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
		}
	      }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q41, _p0 };
		  tree res = generic_simplify_205 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
			  tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q20, _q41 };
		    tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  tree _q51 = TREE_OPERAND (_q40, 1);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
			      tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q20, _q51 };
			tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case POINTER_PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      CASE_CONVERT:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_p1))
		    {
		    CASE_CONVERT:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
			      tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q31 };
			tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		  tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case POINTER_PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
		    tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _p0, _q31 };
	      tree res = generic_simplify_217 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
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
	case POINTER_PLUS_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q40))
	      {
	      CASE_CONVERT:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
			tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _p0, _q41 };
		  tree res = generic_simplify_221 (loc, type, _p0, _p1, captures, NE_EXPR);
		  if (res) return res;
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
    case POINTER_PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_222 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case POINTER_PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q51 };
			    tree res = generic_simplify_223 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      tree _q31 = TREE_OPERAND (_p1, 1);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p0 };
		tree res = generic_simplify_222 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_218 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_224 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_q51))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_q51, 0);
				if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
				      tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q31))
		      {
		      CASE_CONVERT:
		        {
			  tree _q50 = TREE_OPERAND (_q31, 0);
			  switch (TREE_CODE (_p1))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				if ((_q70 == _q50 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q50, 0) && types_match (_q70, _q50)))
				  {
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
				      tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
				      if (res) return res;
				    }
				  }
			        break;
			      }
			    default:;
			    }
			  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      switch (TREE_CODE (_q40))
	        {
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case INTEGER_CST:
		        {
			  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q41, 0);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q21))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q21, 0);
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
		    tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_q41))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q41, 0);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
				if (res) return res;
			      }
			    }
		          break;
		        }
		      default:;
		      }
		    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_q31))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q31, 0);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			  tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    tree res = generic_simplify_225 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case LT_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1523;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1523:;
			  }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1524;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1524:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1525;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1525:;
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
    case LE_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1526;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1526:;
			  }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1527;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1527:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1528;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1528:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1529;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1529:;
			  }
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1530;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1530:;
			  }
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1531;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1531:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1532;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1532:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = GT_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1533;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1533:;
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1534;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1534:;
			  }
		      }
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1535;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1535:;
			  }
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1536;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1536:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1537;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1537:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = GE_EXPR;
			const enum tree_code rcmp = NE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1538;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1538:;
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
    case EQ_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1539;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1539:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1540;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1540:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1541;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1541:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = EQ_EXPR;
			const enum tree_code rcmp = LT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1542;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1542:;
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
    case NE_EXPR:
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1543;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1543:;
			  }
		      }
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
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1544;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1544:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LT_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GT_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1545;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1545:;
			  }
		      }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			const enum tree_code cmp1 = LE_EXPR;
			const enum tree_code cmp2 = NE_EXPR;
			const enum tree_code rcmp = GE_EXPR;
			if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 || POINTER_TYPE_P (TREE_TYPE (captures[0]))
 || (VECTOR_TYPE_P (TREE_TYPE (captures[1]))
 && expand_vec_cmp_expr_p (TREE_TYPE (captures[0]), type, rcmp))
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1546;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, rcmp, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 888, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1546:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1547;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1547:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1548;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1548:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1549;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1549:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1550;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, NE_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1550:;
			  }
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
if (tree_with_possible_nonzero_bits (_p0))
  {
    if (tree_with_known_nonzero_bits (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_226 (loc, type, _p0, _p1, captures, NE_EXPR);
	  if (res) return res;
	}
      }
  }
if (tree_with_known_nonzero_bits (_p0))
  {
    if (tree_with_possible_nonzero_bits (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  tree res = generic_simplify_226 (loc, type, _p0, _p1, captures, NE_EXPR);
	  if (res) return res;
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    case MIN_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MIN_EXPR, NE_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_228 (loc, type, _p0, _p1, captures, MAX_EXPR, NE_EXPR, LT_EXPR);
	      if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_229 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case MAX_EXPR:
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
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_230 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_231 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
			    tree res = generic_simplify_232 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
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
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  tree res = generic_simplify_233 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	      if (integer_onep (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q21 };
			    tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q30))
		{
		  if (integer_pow2p (_q21))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q21 };
			    tree res = generic_simplify_235 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
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
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  tree res = generic_simplify_236 (loc, type, _p0, _p1, captures, NE_EXPR);
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
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_onep (_q40))
		    {
		      if (integer_pow2p (_q21))
			{
			  if (integer_zerop (_p1))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q41, _q21 };
				tree res = generic_simplify_234 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
				if (res) return res;
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
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_237 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case LROTATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case LROTATE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_238 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
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
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, LROTATE_EXPR, RROTATE_EXPR, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case RROTATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RROTATE_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_238 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_239 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
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
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_240 (loc, type, _p0, _p1, captures, RROTATE_EXPR, LROTATE_EXPR, NE_EXPR);
		if (res) return res;
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1551;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1551;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1551;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1551:;
		      }
		  }
	        }
	      break;
	    }
          default:;
          }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
	  if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1552;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1552;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1552;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1552;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1552:;
	    }
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_BSWAP128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP128:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP128);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP16:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP16);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP32:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP32);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_BSWAP64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_243 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_BSWAP64:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_242 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_BSWAP64);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
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
 && (TREE_CODE_CLASS (NE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1553;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1553;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1553;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, NE_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1553;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1553:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_p1))
	  {
	  case COND_EXPR:
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
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
 && expr_no_side_effects_p (captures[1])
 && expr_no_side_effects_p (captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1554;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1554;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1554;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, NE_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 978, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1554:;
			  }
		      }
		    }
	        }
	      if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
		{
		  if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
 && expr_no_side_effects_p (captures[1])
 && expr_no_side_effects_p (captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1555;
			    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1555;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1555;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, EQ_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1555:;
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
	      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
		{
		  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
 && expr_no_side_effects_p (captures[1])
 && expr_no_side_effects_p (captures[2])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1556;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, NE_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 978, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1556:;
			  }
		      }
		    }
	        }
	      if ((_q61 == _q22 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q22, 0) && types_match (_q61, _q22)))
		{
		  if ((_q62 == _q21 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q21, 0) && types_match (_q62, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _q60 };
			const enum tree_code eqne = NE_EXPR;
			if (!HONOR_NANS (captures[1])
 && types_match (TREE_TYPE (captures[0]), TREE_TYPE (captures[3]))
 && types_match (type, TREE_TYPE (captures[0]))
 && expr_no_side_effects_p (captures[1])
 && expr_no_side_effects_p (captures[2])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1557;
			    {
			      tree res_op0;
			      {
				tree _o1[2], _r1;
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[0];
				  _o2[1] = captures[3];
				  _r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				  _o1[0] = _r2;
				}
				{
				  tree _o2[2], _r2;
				  _o2[0] = captures[1];
				  _o2[1] = captures[2];
				  _r2 = fold_build2_loc (loc, EQ_EXPR, type, _o2[0], _o2[1]);
				  _o1[1] = _r2;
				}
				_r1 = fold_build2_loc (loc, BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				res_op0 = _r1;
			      }
			      tree res_op1;
			      res_op1 =  constant_boolean_node (eqne != NE_EXPR, type);
			      tree res_op2;
			      res_op2 =  constant_boolean_node (eqne == NE_EXPR, type);
			      tree _r;
			      _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1557:;
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, LT_EXPR, GE_EXPR, UNGE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, LE_EXPR, GT_EXPR, UNGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR, EQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, GE_EXPR, LT_EXPR, UNLT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, GT_EXPR, LE_EXPR, UNLE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case ORDERED_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNLT_EXPR, GE_EXPR, GE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNLE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNLE_EXPR, GT_EXPR, GT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNGT_EXPR, LE_EXPR, LE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNGE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNGE_EXPR, LT_EXPR, LT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_299 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	      if (res) return res;
	    }
	  }
	if (integer_truep (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_300 (loc, type, _p0, _p1, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_246 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case POINTER_DIFF_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_247 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
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
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_249 (loc, type, _p0, _p1, captures, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		  tree res = generic_simplify_248 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_301 (loc, type, _p0, _p1, captures, NE_EXPR);
	if (res) return res;
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
		      tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	  tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, NE_EXPR);
	  if (res) return res;
	}
      }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q40 = _p1_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
		    tree res = generic_simplify_254 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	          break;
	        }
	      default:;
	      }
	  }
      }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
	    tree res = generic_simplify_253 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
{
  tree _p0_pops[1];
  if (tree_maybe_bit_not (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _q20 };
	tree res = generic_simplify_251 (loc, type, _p0, _p1, captures, NE_EXPR);
	if (res) return res;
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
	case BIT_NOT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
		    tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
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
		  case BIT_NOT_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
			tree res = generic_simplify_252 (loc, type, _p0, _p1, captures, NE_EXPR);
			if (res) return res;
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	  if (CONSTANT_CLASS_P (_p1))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
		tree res = generic_simplify_253 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_255 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, PLUS_EXPR, NE_EXPR);
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
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_256 (loc, type, _p0, _p1, captures, MINUS_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_257 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case FLOAT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case FLOAT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
		tree res = generic_simplify_260 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case REAL_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_261 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		tree res = generic_simplify_262 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (CONSTANT_CLASS_P (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	      const enum tree_code eqne = NE_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1558;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, eqne, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 980, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1558:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	      const enum tree_code eqne = NE_EXPR;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1559;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, eqne, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 980, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1559:;
	    }
	  }
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_265 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
	  tree res = generic_simplify_266 (loc, type, _p0, _p1, captures, NE_EXPR);
	  if (res) return res;
	}
	switch (TREE_CODE (_q20))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
			    tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case SSA_NAME:
      {
	switch (TREE_CODE (_p1))
	  {
	  case ADDR_EXPR:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		tree res = generic_simplify_268 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    case BIT_IOR_EXPR:
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
		      tree res = generic_simplify_267 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case BIT_XOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_p1))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_269 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF, NE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL, NE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT, NE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	case CFN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      tree res = generic_simplify_258 (loc, type, _p0, _p1, captures, CFN_SQRT, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
			    tree res = generic_simplify_259 (loc, type, _p0, _p1, captures, CFN_SQRT, NE_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    default:;
		    }
		  break;
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
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
	      tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_270 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
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
	      tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_271 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q31))
		      {
		      case INTEGER_CST:
		        {
			  switch (TREE_CODE (_p1))
			    {
			    CASE_CONVERT:
			      {
				tree _q70 = TREE_OPERAND (_p1, 0);
				if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q31 };
				      tree res = generic_simplify_272 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			    {
			      switch (TREE_CODE (_q51))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q50, _q20, _q51 };
				      tree res = generic_simplify_272 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
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
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_273 (loc, type, _p0, _p1, captures, NE_EXPR);
	      if (res) return res;
	    }
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
	  case BIT_XOR_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _p1 };
			    tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, NE_EXPR);
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
		      tree res = generic_simplify_274 (loc, type, _p0, _p1, captures, NE_EXPR);
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if (integer_zerop (_p1))
	{
	  {
	    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	    tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, NE_EXPR);
	    if (res) return res;
	  }
        }
    }
}
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_275 (loc, type, _p0, _p1, captures, NE_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_276 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		  tree res = generic_simplify_277 (loc, type, _p0, _p1, captures, NE_EXPR, EQ_EXPR);
		  if (res) return res;
		}
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_pow2p (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
			tree res = generic_simplify_278 (loc, type, _p0, _p1, captures, NE_EXPR, LT_EXPR);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	if (integer_pow2p (_q21))
	  {
	    if (integer_zerop (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _q21 };
		  tree res = generic_simplify_279 (loc, type, _p0, _p1, captures, NE_EXPR, LT_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, GE_EXPR, NE_EXPR, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
			tree res = generic_simplify_281 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case LT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_280 (loc, type, _p0, _p1, captures, LT_EXPR, NE_EXPR, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_q51))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
			tree res = generic_simplify_282 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_q40))
	        {
		case NE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			if (integer_zerop (_q51))
			  {
			    if (integer_zerop (_p1))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				  tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case NE_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_zerop (_q41))
		      {
			if ((_q21 == _q40 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q40, 0) && types_match (_q21, _q40)))
			  {
			    if (integer_zerop (_p1))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
				  tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			    tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
		    {
		      if (integer_zerop (_p1))
			{
			  {
			    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			    tree res = generic_simplify_283 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ADDR_EXPR:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
			    tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR);
			    if (res) return res;
			  }
		          break;
		        }
		      default:;
		      }
		    break;
		  }
		case ADDR_EXPR:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_284 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q30))
	        {
		case ADDR_EXPR:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
		      tree res = generic_simplify_285 (loc, type, _p0, _p1, captures, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		tree res = generic_simplify_285 (loc, type, _p0, _p1, captures, NE_EXPR);
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
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    tree res = generic_simplify_286 (loc, type, _p0, _p1, captures, NE_EXPR);
    if (res) return res;
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		tree res = generic_simplify_287 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			  tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
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
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			  tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			  tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
			  if (res) return res;
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
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			  tree res = generic_simplify_288 (loc, type, _p0, _p1, captures, EQ_EXPR, NE_EXPR);
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
        break;
      }
    default:;
    }
if (integer_zerop (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (TREE_CODE (TREE_TYPE (captures[0])) == BOOLEAN_TYPE
 && types_match (type, TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1560;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1560;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 985, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1560:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case VECTOR_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1561;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1561;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1561:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1562;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1562;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    if (TREE_TYPE (_o1[0]) != utype)
					      {
						_r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1562:;
				      }
				  }
			    }
			  }
		    }
		  }
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1563;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1563;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1563:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1564;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1564;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    if (TREE_TYPE (_o1[0]) != utype)
					      {
						_r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1564:;
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
	switch (TREE_CODE (_q20))
	  {
	  case VECTOR_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1565;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1565;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1565:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1566;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1566;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    if (TREE_TYPE (_o1[0]) != utype)
					      {
						_r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1566:;
				      }
				  }
			    }
			  }
		    }
		  }
	        }
	      break;
	    }
	  case INTEGER_CST:
	    {
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    const enum tree_code cmp = NE_EXPR;
		    const enum tree_code icmp = GT_EXPR;
		    {
 tree csts = bitmask_inv_cst_vector_p (captures[2]);
			if (csts && (VECTOR_TYPE_P (TREE_TYPE (captures[2])) || single_use (captures[0]))
)
			  {
			    {
 auto optab = VECTOR_TYPE_P (TREE_TYPE (captures[2]))
 ? optab_vector : optab_default;
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				if (target_supports_op_p (utype, icmp, optab)
 || (optimize_vectors_before_lowering_p ()
 && (!target_supports_op_p (type, cmp, optab)
 || !target_supports_op_p (type, BIT_AND_EXPR, optab)))
)
				  {
				    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1567;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1567;
					{
					  tree res_op0;
					  res_op0 = captures[1];
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1567:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1568;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1568;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[1];
					    if (TREE_TYPE (_o1[0]) != utype)
					      {
						_r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, utype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree res_op1;
					  res_op1 =  csts;
					  tree _r;
					  _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1568:;
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
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q31))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q31, 0);
			  switch (TREE_CODE (_q21))
			    {
			    case INTEGER_CST:
			      {
				if (integer_zerop (_p1))
				  {
				    {
				      tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q30, _q40, _q60, _q21 };
				      tree res = generic_simplify_289 (loc, type, _p0, _p1, captures, NE_EXPR);
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
	        default:;
	        }
	      break;
	    }
          default:;
          }
        break;
      }
    case PLUS_EXPR:
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
		      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, NE_EXPR);
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
    case MINUS_EXPR:
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
		      tree res = generic_simplify_290 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      tree res = generic_simplify_291 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_CLZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_292 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_294 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_297 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFS);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_REDUC_IOR:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_298 (loc, type, _p0, _p1, captures, NE_EXPR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_297 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_296 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_292 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_294 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_297 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_296 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTLL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_294 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_POPCOUNT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_296 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_POPCOUNT);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_CLZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_292 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_CLZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_293 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_CTZ:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_294 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_CTZ);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_295 (loc, type, _p0, _p1, captures, NE_EXPR);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_FFS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_297 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_FFS);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_296 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZIMAX:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_292 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZIMAX);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POPCOUNTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if (integer_zerop (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    tree res = generic_simplify_296 (loc, type, _p0, _p1, captures, NE_EXPR, NE_EXPR, CFN_BUILT_IN_POPCOUNTL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CLZLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_292 (loc, type, _p0, _p1, captures, NE_EXPR, GE_EXPR, CFN_BUILT_IN_CLZLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_CTZLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_294 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_CTZLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_FFSLL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      tree res = generic_simplify_297 (loc, type, _p0, _p1, captures, NE_EXPR, CFN_BUILT_IN_FFSLL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_VEC_COND_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (uniform_integer_cst_p (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if (uniform_integer_cst_p (_q51))
			{
			  if (uniform_integer_cst_p (_p2))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
				{
 tree cst1 = uniform_integer_cst_p (captures[1]);
 tree cst2 = uniform_integer_cst_p (captures[3]);
 tree cst3 = uniform_integer_cst_p (captures[4]);
				    if (wi::to_wide (cst1) + wi::to_wide (cst2) == wi::to_wide (cst3)
)
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1886;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1886;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (TREE_SIDE_EFFECTS (captures[4]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1037, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1886:;
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
    case VECTOR_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_all_onesp (captures[0])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1887;
	      {
		tree _r;
		_r = captures[1];
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1887:;
	    }
	  else
	    {
	      if (integer_zerop (captures[0])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1888;
		  {
		    tree _r;
		    _r = captures[2];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1888:;
		}
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	switch (TREE_CODE (_p2))
	  {
	  case VECTOR_CST:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
		if (VECTOR_BOOLEAN_TYPE_P (type)
 && types_match (type, TREE_TYPE (captures[0]))
)
		  {
		    if (integer_zerop (captures[1]) && integer_all_onesp (captures[2])
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1889;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree _r;
			  _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1075, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1889:;
		      }
		    else
		      {
			if (integer_all_onesp (captures[1]) && integer_zerop (captures[2])
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1890;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[1]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1076, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1890:;
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
  switch (TREE_CODE (_p0))
    {
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_538 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_538 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
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
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_539 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_539 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
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
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MAX_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_540 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case MULT_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1891;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1891;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1891:;
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = MULT_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1892;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1892;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1892:;
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
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1893;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1893;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1893:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1894;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1894;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1894:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1895;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1895;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1895:;
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
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case PLUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
				      const enum tree_code op = PLUS_EXPR;
				      if (ANY_INTEGRAL_TYPE_P (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1896;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1896;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1896:;
					}
				    }
				  }
			      }
			    break;
			  }
			case MULT_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1897;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1897;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1897:;
					}
				    }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if (uniform_integer_cst_p (_q81))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q81 };
				      if (wi::to_wide (uniform_integer_cst_p (captures[3])) == 2
)
					{
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1898;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1898;
					  {
					    tree _r;
					    _r = captures[2];
					    if (TREE_SIDE_EFFECTS (captures[3]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1898:;
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
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1899;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1899:;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VEC_COND_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	tree _q41 = TREE_OPERAND (_p2, 1);
	tree _q42 = TREE_OPERAND (_p2, 2);
	if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1900;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1900:;
	    }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
	  if (inverse_conditions_p (captures[0], captures[2])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1901;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (TREE_SIDE_EFFECTS (captures[4]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1901:;
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
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
	  if (inverse_conditions_p (captures[0], captures[1])
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1902;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[4];
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (TREE_SIDE_EFFECTS (captures[1]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1051, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1902:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p2 == _p1 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _p1, 0) && types_match (_p2, _p1)))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1903;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1903:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1904;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1904;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1904;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1904:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = EQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1905;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1905;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1905;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1905;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1905:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = EQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1906;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1906;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1906;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1906:;
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
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_541 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
          default:;
          }
        break;
      }
    case UNEQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1907;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1907;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1907;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1907:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    if (zerop (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p2, _q60 };
			const enum tree_code cmp = UNEQ_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1908;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1908;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1908;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1908;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1908:;
			  }
		      }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      const enum tree_code cmp = UNEQ_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1909;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1909;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1909;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1909:;
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
	      if (integer_zerop (_q21))
		{
		  if (integer_zerop (_p1))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p2 };
				      tree res = generic_simplify_541 (loc, type, _p0, _p1, _p2, captures, UNEQ_EXPR);
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
          default:;
          }
        break;
      }
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = NE_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1910;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1910;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1910:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = NE_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1911;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1911;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1911;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1911:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = NE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1912;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1912;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1912;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1912:;
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
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_542 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
    case LTGT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			const enum tree_code cmp = LTGT_EXPR;
			if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1913;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1913;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1913:;
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  if (integer_zerop (_p2))
	    {
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		const enum tree_code cmp = LTGT_EXPR;
		if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1914;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1914;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1914;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1914:;
		  }
	      }
	    }
	  }
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LTGT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1915;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1915;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1915;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1915:;
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
	      if (integer_zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      if (integer_zerop (_p2))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
			    tree res = generic_simplify_542 (loc, type, _p0, _p1, _p2, captures, LTGT_EXPR);
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = GE_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
				{
				  if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1916;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1916;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1916:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1917;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1917;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[2];
						  if (TREE_TYPE (_o1[0]) != stype)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1062, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1917:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1918;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1918;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1918:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = GE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
			  {
			    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1919;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1919;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1919:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1920;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1920;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (TREE_TYPE (_o1[0]) != stype)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1062, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1920:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1921;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1921;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1921:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1922;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1922;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1922;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1064, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1922:;
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = GT_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
				{
				  if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1923;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1923;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1923:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1924;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1924;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[2];
						  if (TREE_TYPE (_o1[0]) != stype)
						    {
						      _r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
						    }
						  else
						    _r1 = _o1[0];
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1062, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1924:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1925;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1925;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1925:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = GT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
			  {
			    if (TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1926;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1926;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1926:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1927;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1927;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    _o1[0] = captures[2];
					    if (TREE_TYPE (_o1[0]) != stype)
					      {
						_r1 = fold_build1_loc (loc, NOP_EXPR, stype, _o1[0]);
					      }
					    else
					      _r1 = _o1[0];
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1062, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1927:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1928;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1928;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1928:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = GT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (type, ABS_EXPR, optab_vector))
)
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1929;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1929;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1929;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1064, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1929:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = LE_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
				{
				  if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1930;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1930;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1930:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1931;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1931;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    {
						      tree _o3[1], _r3;
						      _o3[0] = captures[2];
						      if (TREE_TYPE (_o3[0]) != stype)
							{
							  _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
							}
						      else
						        _r3 = _o3[0];
						      _o2[0] = _r3;
						    }
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1066, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1931:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1932;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1932;
				      {
					tree res_op0;
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[2];
					    _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
					    _o1[0] = _r2;
					  }
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1067, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1932:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = LE_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1933;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1933;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      _o2[0] = captures[0];
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1933:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1934;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1934;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      {
						tree _o3[1], _r3;
						_o3[0] = captures[2];
						if (TREE_TYPE (_o3[0]) != stype)
						  {
						    _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
						  }
						else
						  _r3 = _o3[0];
						_o2[0] = _r3;
					      }
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1066, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1934:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1935;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1935;
				{
				  tree res_op0;
				  {
				    tree _o1[1], _r1;
				    {
				      tree _o2[1], _r2;
				      _o2[0] = captures[2];
				      _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      _o1[0] = _r2;
				    }
				    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1067, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1935:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LE_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1936;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1936;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1936;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1068, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1936:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1937;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1937;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1937;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1937:;
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (zerop (_q21))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p2, 0);
			if ((_q70 == _p1 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p1, 0) && types_match (_q70, _p1)))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			      const enum tree_code cmp = LT_EXPR;
			      if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
				{
				  if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
				    {
				      {
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
					  if (types_match (captures[0], stype)
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1938;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1938;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    _o2[0] = captures[0];
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (TREE_SIDE_EFFECTS (captures[2]))
						  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1938:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1939;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1939;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[1], _r2;
						    {
						      tree _o3[1], _r3;
						      _o3[0] = captures[2];
						      if (TREE_TYPE (_o3[0]) != stype)
							{
							  _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
							}
						      else
						        _r3 = _o3[0];
						      _o2[0] = _r3;
						    }
						    _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
						    _o1[0] = _r2;
						  }
						  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						  res_op0 = _r1;
						}
						tree _r;
						_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1066, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1939:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1940;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1940;
				      {
					tree res_op0;
					{
					  tree _o1[1], _r1;
					  {
					    tree _o2[1], _r2;
					    _o2[0] = captures[2];
					    _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
					    _o1[0] = _r2;
					  }
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op0 = _r1;
					}
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1067, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1940:;
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
	if (zerop (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q20, _p1 };
			const enum tree_code cmp = LT_EXPR;
			if (!HONOR_SIGNED_ZEROS (TREE_TYPE (captures[1]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && element_precision (captures[1])
 <= element_precision (captures[0])
 && bitwise_equal_p (captures[1], captures[2])
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
			  {
			    if ((ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && !TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2])))
 || TYPE_UNSIGNED (TREE_TYPE (captures[2]))
)
			      {
				{
 tree stype = signed_type_for (TREE_TYPE (captures[2]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
				    if (types_match (captures[0], stype)
)
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1941;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1941;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      _o2[0] = captures[0];
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1941:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1942;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1942;
					{
					  tree res_op0;
					  {
					    tree _o1[1], _r1;
					    {
					      tree _o2[1], _r2;
					      {
						tree _o3[1], _r3;
						_o3[0] = captures[2];
						if (TREE_TYPE (_o3[0]) != stype)
						  {
						    _r3 = fold_build1_loc (loc, NOP_EXPR, stype, _o3[0]);
						  }
						else
						  _r3 = _o3[0];
						_o2[0] = _r3;
					      }
					      _r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
					      _o1[0] = _r2;
					    }
					    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					    res_op0 = _r1;
					  }
					  tree _r;
					  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1066, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1942:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1943;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1943;
				{
				  tree res_op0;
				  {
				    tree _o1[1], _r1;
				    {
				      tree _o2[1], _r2;
				      _o2[0] = captures[2];
				      _r2 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      _o1[0] = _r2;
				    }
				    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1067, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1943:;
			      }
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (zerop (_q21))
		{
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      switch (TREE_CODE (_p2))
		        {
			case MINUS_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p2, 0);
			    tree _q81 = TREE_OPERAND (_p2, 1);
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
				      const enum tree_code cmp = LT_EXPR;
				      if (!HONOR_SIGNED_ZEROS (type)
 && !TYPE_UNSIGNED (type)
)
					{
					  if (ANY_INTEGRAL_TYPE_P (type)
 && !TYPE_OVERFLOW_WRAPS (type)
 && (!VECTOR_TYPE_P (type)
 || (target_supports_op_p (type, ABS_EXPR, optab_vector)
 && target_supports_op_p (type, NEGATE_EXPR, optab_vector)))
)
					    {
					      {
 tree utype = unsigned_type_for (type);
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1944;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1944;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1944;
						  {
						    tree res_op0;
						    {
						      tree _o1[1], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							_r2 = fold_build1_loc (loc, ABSU_EXPR, utype, _o2[0]);
							_o1[0] = _r2;
						      }
						      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						      res_op0 = _r1;
						    }
						    tree _r;
						    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1068, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1944:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1945;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1945;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1945;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1069, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1945:;
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
      if (tree_truth_valued_p (_q20))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (VEC_COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1946;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[2];
		  tree res_op2;
		  res_op2 = captures[1];
		  tree _r;
		  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1946:;
	      }
	  }
        }
    }
}
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q30) == 4)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _p2 };
			  tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _p2 };
		    tree res = generic_simplify_543 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_ADD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_AND:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_DIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_IOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MOD:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_MUL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHL:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SHR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_SUB:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_XOR:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_COPYSIGN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMAX:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMIN:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_RDIV:
	        if (call_expr_nargs (_q40) == 4)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    {
		      tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53 };
		      tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		      if (res) return res;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p2) == 4)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      {
		tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43 };
		tree res = generic_simplify_544 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		if (res) return res;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q30) == 5)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _p2 };
			  tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _p2 };
		    tree res = generic_simplify_545 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_FMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMA:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_FNMS:
	        if (call_expr_nargs (_q40) == 5)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54 };
		      tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		      if (res) return res;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p2) == 5)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      {
		tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44 };
		tree res = generic_simplify_546 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		if (res) return res;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q30) == 6)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _p2 };
			  tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 6)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _p2 };
		    tree res = generic_simplify_547 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_ADD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_AND:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_DIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_IOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MOD:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_MUL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHL:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SHR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_SUB:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_XOR:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMAX:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMIN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_RDIV:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_COPYSIGN:
	        if (call_expr_nargs (_q40) == 6)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55 };
		      tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		      if (res) return res;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_ADD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_ADD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_AND:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_AND);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_DIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_DIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_IOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_IOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MOD:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MOD);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_MUL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_MUL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHL:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHL);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SHR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SHR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_SUB:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_SUB);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_XOR:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_XOR);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMAX:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMAX);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMIN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMIN);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_RDIV:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_RDIV);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_COPYSIGN:
	  if (call_expr_nargs (_p2) == 6)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      {
		tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45 };
		tree res = generic_simplify_548 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_COPYSIGN);
		if (res) return res;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q30))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q30) == 7)
    {
		    tree _q40 = CALL_EXPR_ARG (_q30, 0);
		    tree _q41 = CALL_EXPR_ARG (_q30, 1);
		    tree _q42 = CALL_EXPR_ARG (_q30, 2);
		    tree _q43 = CALL_EXPR_ARG (_q30, 3);
		    tree _q44 = CALL_EXPR_ARG (_q30, 4);
		    tree _q45 = CALL_EXPR_ARG (_q30, 5);
		    tree _q46 = CALL_EXPR_ARG (_q30, 6);
		    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		      {
			{
			  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q41, _q42, _q43, _q44, _q45, _q46, _p2 };
			  tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
			  if (res) return res;
			}
		      }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p1) == 7)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      tree _q35 = CALL_EXPR_ARG (_p1, 5);
	      tree _q36 = CALL_EXPR_ARG (_p1, 6);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  {
		    tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _q33, _q34, _q35, _q36, _p2 };
		    tree res = generic_simplify_549 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case VIEW_CONVERT_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	switch (TREE_CODE (_q40))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q40))
	      {
	      case CFN_COND_LEN_FMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMA:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_COND_LEN_FNMS:
	        if (call_expr_nargs (_q40) == 7)
    {
		    tree _q50 = CALL_EXPR_ARG (_q40, 0);
		    tree _q51 = CALL_EXPR_ARG (_q40, 1);
		    tree _q52 = CALL_EXPR_ARG (_q40, 2);
		    tree _q53 = CALL_EXPR_ARG (_q40, 3);
		    tree _q54 = CALL_EXPR_ARG (_q40, 4);
		    tree _q55 = CALL_EXPR_ARG (_q40, 5);
		    tree _q56 = CALL_EXPR_ARG (_q40, 6);
		    {
		      tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q50, _q51, _q52, _q53, _q54, _q55, _q56 };
		      tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		      if (res) return res;
		    }
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p2))
        {
	case CFN_COND_LEN_FMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FMS);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMA:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMA);
		if (res) return res;
	      }
	    }
	  break;
	case CFN_COND_LEN_FNMS:
	  if (call_expr_nargs (_p2) == 7)
    {
	      tree _q40 = CALL_EXPR_ARG (_p2, 0);
	      tree _q41 = CALL_EXPR_ARG (_p2, 1);
	      tree _q42 = CALL_EXPR_ARG (_p2, 2);
	      tree _q43 = CALL_EXPR_ARG (_p2, 3);
	      tree _q44 = CALL_EXPR_ARG (_p2, 4);
	      tree _q45 = CALL_EXPR_ARG (_p2, 5);
	      tree _q46 = CALL_EXPR_ARG (_p2, 6);
	      {
		tree captures[9] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42, _q43, _q44, _q45, _q46 };
		tree res = generic_simplify_550 (loc, type, _p0, _p1, _p2, captures, CFN_COND_LEN_FNMS);
		if (res) return res;
	      }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_COND_ADD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_ADD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_AND:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_AND);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_DIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_DIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_552 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_552 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_IOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_IOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MOD:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MOD);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_MUL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_MUL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHL:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SHR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SHR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_SUB:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_SUB);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_XOR:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_XOR);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_COPYSIGN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMAX:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMAX);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FMIN:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FMIN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMA:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_552 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMA);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_FNMS:
	  if (call_expr_nargs (_p1) == 5)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      tree _q34 = CALL_EXPR_ARG (_p1, 4);
	      if ((_p2 == _q34 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q34, 0) && types_match (_p2, _q34)))
		{
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33, _q34 };
		    tree res = generic_simplify_552 (loc, type, _p0, _p1, _p2, captures, CFN_COND_FNMS);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COND_RDIV:
	  if (call_expr_nargs (_p1) == 4)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      tree _q32 = CALL_EXPR_ARG (_p1, 2);
	      tree _q33 = CALL_EXPR_ARG (_p1, 3);
	      if ((_p2 == _q33 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q33, 0) && types_match (_p2, _q33)))
		{
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _q33 };
		    tree res = generic_simplify_551 (loc, type, _p0, _p1, _p2, captures, CFN_COND_RDIV);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  return NULL_TREE;
}
#pragma GCC diagnostic pop
