/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_maybe_bit_not (tree t, tree *res_ops)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  switch (TREE_CODE (t))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { t };
	  {
	    res_ops[0] = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 8, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    default:;
    }
{
  tree t_pops[1];
  if (tree_bit_not_with_nop (t, t_pops))
    {
      tree _p0 = t_pops[0];
      {
	tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	{
	  res_ops[0] = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 9, __FILE__, __LINE__, false);
	  return true;
	}
      }
    }
}
{
  tree t_pops[1];
  if (tree_maybe_cmp (t, t_pops))
    {
      tree _p0 = t_pops[0];
      {
	tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
	{
	  res_ops[0] = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 10, __FILE__, __LINE__, false);
	  return true;
	}
      }
    }
}
{
  tree t_pops[2];
  if (tree_bit_xor_cst (t, t_pops))
    {
      tree _p0 = t_pops[0];
      tree _p1 = t_pops[1];
      {
	tree captures[3] ATTRIBUTE_UNUSED = { t, _p0, _p1 };
	{
	  res_ops[0] = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 11, __FILE__, __LINE__, false);
	  return true;
	}
      }
    }
}
  return false;
}

bool
tree_min_value (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  if (uniform_integer_cst_p (t))
    {
      {
	{
 tree int_cst = uniform_integer_cst_p (t);
 tree inner_type = TREE_TYPE (int_cst);
	    if ((INTEGRAL_TYPE_P (inner_type)
 || POINTER_TYPE_P (inner_type))
 && wi::eq_p (wi::to_wide (int_cst), wi::min_value (inner_type))
)
	      {
		{
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 41, __FILE__, __LINE__, false);
		  return true;
		}
	      }
	}
      }
    }
  return false;
}

tree
generic_simplify_1 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!flag_trapping_math
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail72;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 49, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail72:;
    }
  return NULL_TREE;
}

tree
generic_simplify_8 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bit_op == BIT_AND_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail79;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail79;
      {
	tree _r;
	_r =  build_zero_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 56, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail79:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail80;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail80;
      {
	tree _r;
	_r =  build_minus_one_cst (type);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 57, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail80:;
    }
  return NULL_TREE;
}

tree
generic_simplify_17 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail92;
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
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 65, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail92:;
  return NULL_TREE;
}

tree
generic_simplify_28 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (opo),
 const enum tree_code ARG_UNUSED (opi))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail103;
  {
    tree res_op0;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[1];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 76, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail103:;
  return NULL_TREE;
}

tree
generic_simplify_33 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!CONSTANT_CLASS_P (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail108;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] = captures[2];
	  _r1 = fold_build2_loc (loc, bitop, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  if (EXPR_P (_r1))
	    goto next_after_fail108;
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 80, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail108:;
    }
  else
    {
      {
 tree cst1 = const_binop (bitop, type, captures[0], captures[2]);
	  if (cst1
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail109;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail109;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail109;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  cst1;
		tree _r;
		_r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 81, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail109:;
	    }
	  else
	    {
	      {
 tree cst2 = const_binop (bitop, type, captures[1], captures[2]);
		  if (cst2
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail110;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail110;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail110;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail110;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  cst2;
			tree _r;
			_r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 82, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail110:;
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_48 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp),
 const enum tree_code ARG_UNUSED (ncmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 enum tree_code ic = invert_tree_comparison
 (cmp, HONOR_NANS (captures[0]));
      if (ic == icmp
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail126;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail126;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 94, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail126:;
	}
      else
	{
	  if (ic == ncmp
)
	    {
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail127;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail127;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 95, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail127:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_62 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type) || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      if (!CONSTANT_CLASS_P (captures[1])
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail149;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[1], _r2;
			_o2[0] = captures[0];
			if (TREE_TYPE (_o2[0]) != type)
			  {
			    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o2[0]);
			  }
			else
			  _r2 = _o2[0];
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[2];
		      _r1 = fold_build2_loc (loc, outer_op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      if (EXPR_P (_r1))
		        goto next_after_fail149;
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 117, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail149:;
		}
	    }
	  else
	    {
	      if (!ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail150;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      {
			tree _o2[2], _r2;
			_o2[0] = captures[0];
			{
			  tree _o3[1], _r3;
			  _o3[0] = captures[2];
			  if (TREE_TYPE (_o3[0]) != TREE_TYPE (_o2[0]))
			    {
			      _r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
			    }
			  else
			    _r3 = _o3[0];
			  _o2[1] = _r3;
			}
			_r2 = fold_build2_loc (loc, outer_op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
			if (EXPR_P (_r2))
			  goto next_after_fail150;
			_o1[0] = _r2;
		      }
		      _o1[1] = captures[1];
		      _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree _r;
		    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 118, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail150:;
		}
	      else
		{
		  if (types_match (type, captures[1]) && !TYPE_OVERFLOW_SANITIZED (type)
)
		    {
		      {
 tree cst = const_binop (outer_op, type, captures[0], captures[2]);
			  if (cst && !TREE_OVERFLOW (cst)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail151;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail151;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail151;
			      {
				tree res_op0;
				res_op0 =  cst;
				tree res_op1;
				res_op1 = captures[1];
				tree _r;
				_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 119, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail151:;
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
generic_simplify_85 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail176;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail176;
      {
	tree res_op0;
	res_op0 = unshare_expr (captures[1]);
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[4];
	  _o1[1] = captures[1];
	  _r1 = fold_build2_loc (loc, TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 144, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail176:;
    }
  return NULL_TREE;
}

tree
generic_simplify_93 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail184;
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
		  _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 151, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail184:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_104 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail201;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 168, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail201:;
    }
  return NULL_TREE;
}

tree
generic_simplify_110 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail207;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail207;
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
	  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 174, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail207:;
    }
  return NULL_TREE;
}

tree
generic_simplify_121 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail218;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail218;
      {
	tree _r;
	_r = captures[2];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 183, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail218:;
    }
  return NULL_TREE;
}

tree
generic_simplify_130 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail227;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 189, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail227:;
  return NULL_TREE;
}

tree
generic_simplify_141 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail242;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail242;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 196, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail242:;
  return NULL_TREE;
}

tree
generic_simplify_146 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail247;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail247;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 197, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail247:;
  return NULL_TREE;
}

tree
generic_simplify_153 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail258;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail258;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 207, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail258:;
  return NULL_TREE;
}

tree
generic_simplify_156 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail261;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail261;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail261;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 210, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail261:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail262;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail262;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail262;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 211, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail262:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail263;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail263;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail263;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail263:;
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
			  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail264;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail264;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail264;
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
next_after_fail264:;
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
			      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail265;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail265;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail265;
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
next_after_fail265:;
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
				  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail266;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail266;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail266;
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
next_after_fail266:;
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
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail267;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail267;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail267;
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
next_after_fail267:;
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
generic_simplify_199 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail339;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, SIN, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail339;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 254, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail339:;
    }
  return NULL_TREE;
}

tree
generic_simplify_204 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail344;
      {
	tree _r;
	_r =  constant_boolean_node (cmp != EQ_EXPR, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 259, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail344:;
    }
  return NULL_TREE;
}

tree
generic_simplify_212 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq),
 const enum tree_code ARG_UNUSED (ltge))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree itype = signed_type_for (TREE_TYPE (captures[1]));
      if (wi::to_wide (captures[2]) == element_precision (itype) - 1
 && (!VECTOR_TYPE_P (itype)
 || (cfun
 && cfun->after_inlining
 && VECTOR_BOOLEAN_TYPE_P (type)
 && (expand_vec_cmp_expr_p (itype, type, ltge)
 || !expand_vec_cmp_expr_p (TREE_TYPE (captures[0]),
 type, neeq))))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail355;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail355;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (TREE_TYPE (_o1[0]) != itype)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, itype, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op0 = _r1;
	    }
	    tree res_op1;
	    res_op1 =  build_zero_cst (itype);
	    tree _r;
	    _r = fold_build2_loc (loc, ltge, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 269, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail355:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_224 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (ocmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TREE_CODE (TREE_TYPE (captures[0])) != COMPLEX_TYPE
 && (VECTOR_TYPE_P (type) || !VECTOR_TYPE_P (TREE_TYPE (captures[0])))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail380;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail380;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, ocmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 293, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail380:;
    }
  return NULL_TREE;
}

tree
generic_simplify_232 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int c1 = wi::clz (wi::to_wide (captures[0]));
 int c2 = wi::clz (wi::to_wide (captures[2]));
      if (c1 < c2
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail390;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail390;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail390;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail390;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR ? false : true, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail390:;
	}
      else
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail391;
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail391;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail391;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail391;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  build_int_cst (TREE_TYPE (captures[1]), c1 - c2);
	    tree _r;
	    _r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 304, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail391:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_242 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail410;
      {
	tree res_op0;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (TREE_TYPE (_o1[0]) != ctype)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, ctype, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op0 = _r1;
	}
	tree res_op1;
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (TREE_TYPE (_o1[0]) != ctype)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, ctype, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 323, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail410:;
  }
  return NULL_TREE;
}

tree
generic_simplify_250 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || ! tree_expr_maybe_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail423;
      {
	tree _r;
	_r =  constant_boolean_node (true, type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 335, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail423:;
    }
  else
    {
      if (cmp != EQ_EXPR
 && (! FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || ! flag_trapping_math)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail424;
	  {
	    tree res_op0;
	    res_op0 = unshare_expr (captures[0]);
	    tree res_op1;
	    res_op1 = captures[0];
	    tree _r;
	    _r = fold_build2_loc (loc, EQ_EXPR, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 336, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail424:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_257 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_associative_math
)
    {
      {
 tree tem = const_binop (MINUS_EXPR, TREE_TYPE (captures[1]), captures[0], captures[2]);
	  if (tem && !TREE_OVERFLOW (tem)
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail445;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail445;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail445;
	      {
		tree res_op0;
		res_op0 =  tem;
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 356, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail445:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_263 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (cmp == EQ_EXPR
 || cmp == NE_EXPR
 || TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail478;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 389, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail478:;
    }
  return NULL_TREE;
}

tree
generic_simplify_266 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !(targetm.have_canonicalize_funcptr_for_compare ()
 && ((POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[1]))))
 || (POINTER_TYPE_P (TREE_TYPE (captures[3]))
 && FUNC_OR_METHOD_TYPE_P (TREE_TYPE (TREE_TYPE (captures[3]))))))
 && single_use (captures[0])
)
    {
      if (TYPE_PRECISION (TREE_TYPE (captures[1])) == TYPE_PRECISION (TREE_TYPE (captures[0]))
 && (TREE_CODE (captures[3]) == INTEGER_CST
 || captures[2] != captures[3])
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1])) == TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 || cmp == NE_EXPR
 || cmp == EQ_EXPR)
 && !POINTER_TYPE_P (TREE_TYPE (captures[1]))
 && (TREE_CODE (TREE_TYPE (captures[1])) != BOOLEAN_TYPE
 || TREE_CODE (TREE_TYPE (captures[3])) == BOOLEAN_TYPE)
)
	{
	  if (TREE_CODE (captures[2]) == INTEGER_CST
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail487;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail487;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  force_fit_type (TREE_TYPE (captures[1]),
 wide_int::from (wi::to_wide (captures[2]),
 MAX (TYPE_PRECISION (TREE_TYPE (captures[2])),
 TYPE_PRECISION (TREE_TYPE (captures[1]))),
 TYPE_SIGN (TREE_TYPE (captures[2]))),
 0, TREE_OVERFLOW (captures[2]));
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 391, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail487:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail488;
	      {
		tree res_op0;
		res_op0 = captures[1];
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
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 392, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail488:;
	    }
	}
      else
	{
	  if (TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
	    {
	      if ((cmp == EQ_EXPR || cmp == NE_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0])) == TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))))
 && (types_match (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]))
 || ((TYPE_PRECISION (TREE_TYPE (captures[1]))
 >= TYPE_PRECISION (TREE_TYPE (captures[3])))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 == TYPE_UNSIGNED (TREE_TYPE (captures[3]))))
 || (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && int_fits_type_p (captures[2], TREE_TYPE (captures[1]))))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail489;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (TREE_TYPE (_o1[0]) != TREE_TYPE (res_op0))
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 393, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail489:;
		}
	      else
		{
		  if (TREE_CODE (captures[2]) == INTEGER_CST
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && !int_fits_type_p (captures[2], TREE_TYPE (captures[1]))
)
		    {
		      {
 tree min = lower_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 tree max = upper_bound_in_type (TREE_TYPE (captures[3]), TREE_TYPE (captures[1]));
 bool above = integer_nonzerop (const_binop (LT_EXPR, type, max, captures[2]));
 bool below = integer_nonzerop (const_binop (LT_EXPR, type, captures[2], min));
			  if (above || below
)
			    {
			      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail490;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == EQ_EXPR ? false : true, type);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (TREE_SIDE_EFFECTS (captures[2]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 394, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail490:;
				}
			      else
				{
				  if (cmp == LT_EXPR || cmp == LE_EXPR
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail491;
				      {
					tree _r;
					_r =  constant_boolean_node (above ? true : false, type);
					if (TREE_SIDE_EFFECTS (captures[1]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					if (TREE_SIDE_EFFECTS (captures[2]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 395, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail491:;
				    }
				  else
				    {
				      if (cmp == GT_EXPR || cmp == GE_EXPR
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail492;
					  {
					    tree _r;
					    _r =  constant_boolean_node (above ? false : true, type);
					    if (TREE_SIDE_EFFECTS (captures[1]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					    if (TREE_SIDE_EFFECTS (captures[2]))
					      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 396, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail492:;
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
  else
    {
      if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[1])))
 && (DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[3])))
)
	{
	  {
 tree type1 = TREE_TYPE (captures[3]);
 if (TREE_CODE (captures[3]) == REAL_CST && !DECIMAL_FLOAT_TYPE_P (type1))
 {
 REAL_VALUE_TYPE orig = TREE_REAL_CST (captures[3]);
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (float_type_node)
 && exact_real_truncate (TYPE_MODE (float_type_node), &orig))
 type1 = float_type_node;
 if (TYPE_PRECISION (type1) > TYPE_PRECISION (double_type_node)
 && exact_real_truncate (TYPE_MODE (double_type_node), &orig))
 type1 = double_type_node;
 }
 tree newtype
 = (element_precision (TREE_TYPE (captures[1])) > element_precision (type1)
 ? TREE_TYPE (captures[1]) : type1);
	      if (element_precision (TREE_TYPE (captures[0])) > element_precision (newtype)
 && (!VECTOR_TYPE_P (type) || is_truth_type_for (newtype, type))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail493;
		  {
		    tree res_op0;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (TREE_TYPE (_o1[0]) != newtype)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[3];
		      if (TREE_TYPE (_o1[0]) != newtype)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 397, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail493:;
		}
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_295 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 HOST_WIDE_INT zero_val = tree_to_shwi (captures[2]);
 tree type0 = TREE_TYPE (captures[1]);
 int prec = TYPE_PRECISION (type0);
      if (prec <= MAX_FIXED_MODE_SIZE
)
	{
	  if (tree_int_cst_sgn (captures[3]) < 0 || wi::to_widest (captures[3]) >= prec
)
	    {
	      if (zero_val != wi::to_widest (captures[3])
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail555;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail555;
		  {
		    tree _r;
		    _r =  constant_boolean_node (op == EQ_EXPR ? false : true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (TREE_SIDE_EFFECTS (captures[3]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 449, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail555:;
		}
	    }
	  else
	    {
	      if (zero_val < 0 || zero_val >= prec
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail556;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail556;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail556;
		  {
		    tree res_op0;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (type0,
 wi::mask (tree_to_uhwi (captures[3]) + 1,
 false, prec));
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op0 = _r1;
		    }
		    tree res_op1;
		    res_op1 =  wide_int_to_tree (type0,
 wi::shifted_mask (tree_to_uhwi (captures[3]), 1,
 false, prec));
		    tree _r;
		    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 450, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail556:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_306 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail570;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail570;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 464, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail570:;
  return NULL_TREE;
}

tree
generic_simplify_313 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!ALL_FRACT_MODE_P (TYPE_MODE (type))
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail579;
      {
	tree _r;
	_r =  build_one_cst (type);
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 471, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail579:;
    }
  return NULL_TREE;
}

tree
generic_simplify_319 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type)
)
    {
      if (TYPE_OVERFLOW_UNDEFINED (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail586;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 478, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail586:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_322 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!integer_zerop (captures[1])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail589;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 481, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail589:;
    }
  return NULL_TREE;
}

tree
generic_simplify_330 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (type)
 && ! HONOR_NANS (type)
 && ! HONOR_INFINITIES (type)
)
    {
      if (types_match (type, float_type_node)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail597;
	  {
	    tree res_op0;
	    res_op0 =  build_one_cst (type);
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_COPYSIGNF, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail597;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 489, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail597:;
	}
      else
	{
	  if (types_match (type, double_type_node)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail598;
	      {
		tree res_op0;
		res_op0 =  build_one_cst (type);
		tree res_op1;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (TREE_TYPE (_o1[0]) != type)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op1 = _r1;
		}
		tree _r;
		_r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_COPYSIGN, type, 2, res_op0, res_op1);
		if (!_r)
		  goto next_after_fail598;
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 490, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail598:;
	    }
	  else
	    {
	      if (types_match (type, long_double_type_node)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail599;
		  {
		    tree res_op0;
		    res_op0 =  build_one_cst (type);
		    tree res_op1;
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[0];
		      if (TREE_TYPE (_o1[0]) != type)
			{
			  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
			}
		      else
		        _r1 = _o1[0];
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_COPYSIGNL, type, 2, res_op0, res_op1);
		    if (!_r)
		      goto next_after_fail599;
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 491, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail599:;
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_350 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 tree itype = TREE_TYPE (captures[2]);
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail625;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail625;
	  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail625;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail625;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (TREE_TYPE (_o2[0]) != itype)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, itype, _o2[0]);
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
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 517, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail625:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_357 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail632;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail632;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail632;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 523, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail632:;
  return NULL_TREE;
}

tree
generic_simplify_364 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail639;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail639;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail639;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 530, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail639:;
  return NULL_TREE;
}

tree
generic_simplify_371 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_widest (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[3])) - 1
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail647;
      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail647;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail647;
      {
	tree _r;
	_r = captures[2];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 537, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail647:;
    }
  return NULL_TREE;
}

tree
generic_simplify_379 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && (CONSTANT_CLASS_P (captures[1]) || single_use (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail659;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 =  build_zero_cst (TREE_TYPE (captures[1]));
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 549, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail659:;
    }
  return NULL_TREE;
}

tree
generic_simplify_385 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail666;
  {
    tree _r;
    _r =  constant_boolean_node (cmp == GE_EXPR || cmp == LE_EXPR, type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 556, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail666:;
  return NULL_TREE;
}

tree
generic_simplify_395 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
 && ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail708;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 581, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail708:;
    }
  return NULL_TREE;
}

tree
generic_simplify_400 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (neg_cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      {
 tree tem = const_binop (RDIV_EXPR, type, captures[2], captures[1]);
	  if (tem
 && !(REAL_VALUE_ISINF (TREE_REAL_CST (tem))
 || (real_zerop (tem) && !real_zerop (captures[1])))
)
	    {
	      if (real_less (&dconst0, TREE_REAL_CST_PTR (captures[1]))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail713;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail713;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail713;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    res_op1 =  tem;
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 586, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail713:;
		}
	      else
		{
		  if (real_less (TREE_REAL_CST_PTR (captures[1]), &dconst0)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail714;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail714;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail714;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			res_op1 =  tem;
			tree _r;
			_r = fold_build2_loc (loc, neg_cmp, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 587, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail714:;
		    }
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_409 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (out))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && types_match (TREE_TYPE (captures[1]), TREE_TYPE (captures[2]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail729;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail729;
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
next_after_fail729:;
    }
  return NULL_TREE;
}

tree
generic_simplify_414 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && !TYPE_UNSIGNED (type)
 && !TYPE_OVERFLOW_TRAPS (type)
 && tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
 && (expr_not_equal_to (captures[0], wi::to_wide (TYPE_MIN_VALUE (type)))
 || expr_not_equal_to (captures[2], wi::minus_one (TYPE_PRECISION
 (TREE_TYPE (captures[2]))),
 gimple_match_ctx (captures[1])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail738;
      {
	tree res_op0;
	res_op0 = captures[0];
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
	_r = fold_build2_loc (loc, TRUNC_MOD_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 607, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail738:;
    }
  return NULL_TREE;
}

tree
generic_simplify_421 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail745;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 =  tem;
	    tree _r;
	    _r = fold_build2_loc (loc, shiftrotate, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 613, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail745:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_428 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (0
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TREE_CODE (captures[3]) != INTEGER_CST
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[2])) > TYPE_PRECISION (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail759;
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
	  tree _o1[1], _r1;
	  _o1[0] = captures[3];
	  if (TREE_TYPE (_o1[0]) != type)
	    {
	      _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
	    }
	  else
	    _r1 = _o1[0];
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 626, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail759:;
    }
  else
    {
      if (0
 && INTEGRAL_TYPE_P (type)
 && types_match (type, TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail760;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 627, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail760:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_434 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && op != MULT_EXPR
 && op != RDIV_EXPR
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && type_has_mode_precision_p (TREE_TYPE (captures[4]))
 && type_has_mode_precision_p (type)
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], type)
 && (types_match (captures[2], captures[4])
 || poly_int_tree_p (captures[3]))
)
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail776;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (TREE_TYPE (_o1[0]) != type)
		{
		  _r1 = fold_build1_loc (loc, NOP_EXPR, type, _o1[0]);
		}
	      else
	        _r1 = _o1[0];
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 631, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail776:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail777;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
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
		    _o2[0] = captures[4];
		    if (TREE_TYPE (_o2[0]) != utype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, utype, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 632, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail777:;
	  }
	}
    }
  else
    {
      if (FLOAT_TYPE_P (type)
 && DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 == DECIMAL_FLOAT_TYPE_P (type)
)
	{
	  {
 tree arg0 = strip_float_extensions (captures[2]);
 tree arg1 = strip_float_extensions (captures[4]);
 tree itype = TREE_TYPE (captures[0]);
 tree ty1 = TREE_TYPE (arg0);
 tree ty2 = TREE_TYPE (arg1);
 enum tree_code code = TREE_CODE (itype);
	      if (FLOAT_TYPE_P (ty1)
 && FLOAT_TYPE_P (ty2)
)
		{
		  {
 tree newtype = type;
 if (TYPE_MODE (ty1) == SDmode
 || TYPE_MODE (ty2) == SDmode
 || TYPE_MODE (type) == SDmode)
 newtype = dfloat32_type_node;
 if (TYPE_MODE (ty1) == DDmode
 || TYPE_MODE (ty2) == DDmode
 || TYPE_MODE (type) == DDmode)
 newtype = dfloat64_type_node;
 if (TYPE_MODE (ty1) == TDmode
 || TYPE_MODE (ty2) == TDmode
 || TYPE_MODE (type) == TDmode)
 newtype = dfloat128_type_node;
		      if ((newtype == dfloat32_type_node
 || newtype == dfloat64_type_node
 || newtype == dfloat128_type_node)
 && newtype == type
 && types_match (newtype, type)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail778;
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail778;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail778;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (TREE_TYPE (_o1[0]) != newtype)
				{
				  _r1 = fold_build1_loc (loc, NOP_EXPR, newtype, _o1[0]);
				}
			      else
			        _r1 = _o1[0];
			      res_op1 = _r1;
			    }
			    tree _r;
			    _r = fold_build2_loc (loc, op, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 633, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail778:;
			}
		      else
			{
			  {
 if (element_precision (ty1) > element_precision (newtype))
 newtype = ty1;
 if (element_precision (ty2) > element_precision (newtype))
 newtype = ty2;
			      if (element_precision (newtype) < element_precision (itype)
 && (!VECTOR_MODE_P (TYPE_MODE (newtype))
 || target_supports_op_p (newtype, op, optab_default))
 && (flag_unsafe_math_optimizations
 || (element_precision (newtype) == element_precision (type)
 && real_can_shorten_arithmetic (element_mode (itype),
 element_mode (type))
 && !excess_precision_type (newtype)))
 && !types_match (itype, newtype)
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail779;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail779;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail779;
				  {
				    tree res_op0;
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (TREE_TYPE (_o2[0]) != newtype)
					  {
					    _r2 = fold_build1_loc (loc, NOP_EXPR, newtype, _o2[0]);
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				      res_op0 = _r1;
				    }
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 634, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail779:;
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
generic_simplify_466 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (fold_before_rtl_expansion_p ()
)
    {
      if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail811;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail811;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree res_op1;
	    res_op1 = captures[3];
	    tree res_op2;
	    res_op2 =  build_zero_cst (type);
	    tree _r;
	    _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 665, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail811:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_475 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail841;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail841;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 685, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail841:;
  return NULL_TREE;
}

tree
generic_simplify_480 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail859;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail859;
      {
	tree res_op0;
	res_op0 = captures[3];
	tree res_op1;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op1 = _r1;
	}
	tree _r;
	_r = fold_build2_loc (loc, GT_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 687, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail859:;
    }
  return NULL_TREE;
}

tree
generic_simplify_487 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail870;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail870;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail870;
	      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail870;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail870;
	      {
		tree _r;
		_r =  build_int_cst (type, 0);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 689, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail870:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail871;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail871;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail871;
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
next_after_fail871:;
					}
				      else
					{
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail872;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail872;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail872;
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
next_after_fail872:;
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
generic_simplify_497 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail886;
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
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 701, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail886:;
  return NULL_TREE;
}

tree
generic_simplify_503 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail892;
      {
	tree res_op0;
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[1];
	    _r2 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    _o1[1] = _r2;
	  }
	  _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  res_op0 = _r1;
	}
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 707, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail892:;
    }
  return NULL_TREE;
}

tree
generic_simplify_511 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (type) && !TYPE_OVERFLOW_SANITIZED (type)
)
    {
      {
 tree ptrdifftype = TREE_TYPE (captures[0]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail901;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[1];
	      _r1 = fold_build2_loc (loc, POINTER_DIFF_EXPR, ptrdifftype, _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail901:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_518 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail909;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail909;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail909:;
  return NULL_TREE;
}

tree
generic_simplify_526 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail919;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail919;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail919;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 731, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail919:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail920;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail920;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail920;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 732, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail920:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail921;
		  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail921;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail921;
		  {
		    tree _r;
		    _r = captures[0];
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 733, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail921:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail922;
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail922;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail922;
		      {
			tree _r;
			_r = captures[2];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 734, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail922:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_547 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail952;
	  {
	    tree res_op0;
	    {
	      tree _o1[6], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[6];
		if (TREE_TYPE (_o2[0]) != op_type)
		  {
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[3] = _r2;
	      }
	      _o1[4] = captures[4];
	      _o1[5] = captures[5];
	      _r1 = maybe_build_call_expr_loc (loc, cond_len_op, TREE_TYPE (_o1[1]), 6, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4], _o1[5]);
	      if (!_r1)
	        goto next_after_fail952;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[3]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 747, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail952:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_557 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail965;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 760, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail965:;
  return NULL_TREE;
}

tree
generic_simplify_563 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ovf))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) || TYPE_UNSIGNED (TREE_TYPE (captures[1])))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail971;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, ovf, type, 2, res_op0, res_op1);
	if (!_r)
	  goto next_after_fail971;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 766, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail971:;
    }
  return NULL_TREE;
}

tree
generic_simplify_571 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail979;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree _r;
    _r = maybe_build_call_expr_loc (loc, fns, type, 1, res_op0);
    if (!_r)
      goto next_after_fail979;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 774, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail979:;
  return NULL_TREE;
}

tree
generic_simplify_579 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail987;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, tos, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail987;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 782, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail987:;
    }
  return NULL_TREE;
}

tree
generic_simplify_587 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail995;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FNMA, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail995;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail995:;
    }
  return NULL_TREE;
}

tree
generic_simplify_597 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree ARG_UNUSED (_p3), tree ARG_UNUSED (_p4), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1005;
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
	_r = maybe_build_call_expr_loc (loc, CFN_COND_FNMS, type, 5, res_op0, res_op1, res_op2, res_op3, res_op4);
	if (!_r)
	  goto next_after_fail1005;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 800, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1005:;
    }
  return NULL_TREE;
}

tree
generic_simplify_607 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ctz))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree t = TREE_TYPE (captures[0]);
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1015;
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
	  goto next_after_fail1015;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 807, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1015:;
  }
  return NULL_TREE;
}

tree
generic_simplify_617 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1026;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		if (TREE_TYPE (_o2[0]) != type1)
		  {
		    _r2 = fold_build1_loc (loc, NOP_EXPR, type1, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
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
	      goto next_after_fail1026;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 814, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1026:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_ABSU_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case ABSU_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[1]))
)
		  {
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1069;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1069;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 849, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1069:;
		  }
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
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1070;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 850, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1070:;
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1071;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, type, _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1071;
	      res_op1 = _r1;
	    }
	    tree res_op2;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[3];
	      _r1 = fold_build1_loc (loc, ABSU_EXPR, type, _o1[0]);
	      if (EXPR_P (_r1))
	        goto next_after_fail1071;
	      res_op2 = _r1;
	    }
	    tree _r;
	    _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 824, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1071:;
	}
        break;
      }
    default:;
    }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1072;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 851, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1072:;
    }
  }
  return NULL_TREE;
}

tree
generic_simplify_IMAGPART_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case COMPLEX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1141;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 878, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1141:;
	}
        break;
      }
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case CONJ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1142;
		{
		  tree res_op0;
		  {
		    tree _o1[1], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1142:;
	      }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = PLUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1143;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 876, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1143:;
	      }
	      break;
	    }
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
		const enum tree_code op = MINUS_EXPR;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1144;
		{
		  tree res_op0;
		  {
		    tree _o1[2], _r1;
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[2];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[0] = _r2;
		    }
		    {
		      tree _o2[1], _r2;
		      _o2[0] = captures[3];
		      _r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		      _o1[1] = _r2;
		    }
		    _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		    res_op0 = _r1;
		  }
		  tree _r;
		  _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 876, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1144:;
	      }
	      break;
	    }
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_CEXPIF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (single_use (captures[1]) && single_use (captures[0])
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1145;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1145;
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1145:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPIL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (single_use (captures[1]) && single_use (captures[0])
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1146;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1146;
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1146:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CEXPI:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
		      if (single_use (captures[1]) && single_use (captures[0])
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1147;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      _r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
			      if (!_r1)
			        goto next_after_fail1147;
			      res_op0 = _r1;
			    }
			    tree _r;
			    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1147:;
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
    case CONJ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1148;
	  {
	    tree res_op0;
	    {
	      tree _o1[1], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1148:;
	}
        break;
      }
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = PLUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1149;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 876, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1149:;
	}
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
	  const enum tree_code op = MINUS_EXPR;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1150;
	  {
	    tree res_op0;
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[2];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		_r2 = fold_build1_loc (loc, IMAGPART_EXPR, TREE_TYPE (TREE_TYPE (_o2[0])), _o2[0]);
		_o1[1] = _r2;
	      }
	      _r1 = fold_build2_loc (loc, op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 876, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1150:;
	}
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_MUL_OVERFLOW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (integer_nonzerop (_q21))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_555 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	      if (integer_nonzerop (_q20))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
		    tree res = generic_simplify_555 (loc, type, _p0, captures);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (single_use (captures[1]) && single_use (captures[0])
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1151;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINF, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1151;
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1151:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPIL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (single_use (captures[1]) && single_use (captures[0])
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1152;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SINL, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1152;
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1152:;
		  }
	      }
	    }
	  break;
	case CFN_BUILT_IN_CEXPI:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		if (single_use (captures[1]) && single_use (captures[0])
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1153;
		    {
		      tree res_op0;
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			_r1 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SIN, TREE_TYPE (_o1[0]), 1, _o1[0]);
			if (!_r1)
			  goto next_after_fail1153;
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 880, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1153:;
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

tree
generic_simplify_MULT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (initializer_each_zero_or_onep (captures[1])
 && !HONOR_SNANS (type)
 && !HONOR_SIGNED_ZEROS (type)
)
	    {
	      {
 tree itype = FLOAT_TYPE_P (type) ? unsigned_type_for (type) : type;
		  if (itype
 && (!VECTOR_MODE_P (TYPE_MODE (type))
 || (VECTOR_MODE_P (TYPE_MODE (itype))
 && optab_handler (and_optab,
 TYPE_MODE (itype)) != CODE_FOR_nothing))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1386;
		      {
			tree res_op0;
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[0];
			    if (TREE_TYPE (_o2[0]) != itype)
			      {
				_r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, itype, _o2[0]);
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  {
			    tree _o2[2], _r2;
			    _o2[0] = captures[1];
			    _o2[1] =  build_zero_cst (type);
			    _r2 = fold_build2_loc (loc, NE_EXPR, itype, _o2[0], _o2[1]);
			    _o1[1] = _r2;
			  }
			  _r1 = fold_build2_loc (loc, BIT_AND_EXPR, itype, _o1[0], _o1[1]);
			  res_op0 = _r1;
			}
			tree _r;
			_r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 955, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1386:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1387;
      {
	tree _r;
	_r = captures[1];
	if (TREE_SIDE_EFFECTS (captures[0]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 956, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1387:;
    }
  }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (!tree_expr_maybe_nan_p (captures[0])
 && (!HONOR_NANS (type) || !tree_expr_maybe_infinite_p (captures[0]))
 && (!HONOR_SIGNED_ZEROS (type) || tree_expr_nonnegative_p (captures[0]))
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1388;
	  {
	    tree _r;
	    _r = captures[1];
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 957, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1388:;
	}
    }
  }
if (real_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1389;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1389;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = non_lvalue_loc (loc, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1389:;
	}
    }
  }
if (real_minus_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (!tree_expr_maybe_signaling_nan_p (captures[0])
 && (!HONOR_SIGNED_ZEROS (type)
 || !COMPLEX_FLOAT_TYPE_P (type))
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1390;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1390;
	  {
	    tree res_op0;
	    res_op0 = captures[0];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 959, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1390:;
	}
    }
  }
  switch (TREE_CODE (_p0))
    {
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case RSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (uniform_integer_cst_p (_q31))
		{
		  if (uniform_integer_cst_p (_q21))
		    {
		      if (uniform_integer_cst_p (_p1))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			    {
 tree rshift_cst = uniform_integer_cst_p (captures[1]);
 tree bit_and_cst = uniform_integer_cst_p (captures[2]);
 tree mult_cst = uniform_integer_cst_p (captures[3]);
				if (VECTOR_TYPE_P (type)
 && tree_fits_uhwi_p (rshift_cst)
 && tree_fits_uhwi_p (mult_cst)
 && tree_fits_uhwi_p (bit_and_cst)
)
				  {
				    {
 HOST_WIDE_INT vec_elem_bits = vector_element_bits (type);
 poly_int64 vec_nelts = TYPE_VECTOR_SUBPARTS (type);
 poly_int64 vec_bits = vec_elem_bits * vec_nelts;
 unsigned HOST_WIDE_INT cmp_bits_i, bit_and_i, mult_i;
 unsigned HOST_WIDE_INT target_mult_i, target_bit_and_i;
 cmp_bits_i = tree_to_uhwi (rshift_cst) + 1;
 mult_i = tree_to_uhwi (mult_cst);
 target_mult_i = (HOST_WIDE_INT_1U << cmp_bits_i) - 1;
 bit_and_i = tree_to_uhwi (bit_and_cst);
 target_bit_and_i = 0;
 for (unsigned i = 0; i < vec_elem_bits / cmp_bits_i; i++)
 target_bit_and_i = (target_bit_and_i << cmp_bits_i) | 1U;
					if ((exact_log2 (cmp_bits_i)) >= 0
 && cmp_bits_i < HOST_BITS_PER_WIDE_INT
 && multiple_p (vec_bits, cmp_bits_i)
 && vec_elem_bits <= HOST_BITS_PER_WIDE_INT
 && target_mult_i == mult_i
 && target_bit_and_i == bit_and_i
)
					  {
					    {
 tree cmp_type = build_nonstandard_integer_type (cmp_bits_i, 0);
 poly_int64 vector_type_nelts = exact_div (vec_bits, cmp_bits_i);
 tree vec_cmp_type = build_vector_type (cmp_type, vector_type_nelts);
 tree vec_truth_type = truth_type_for (vec_cmp_type);
 tree zeros = build_zero_cst (vec_cmp_type);
 tree ones = build_all_ones_cst (vec_cmp_type);
						if (expand_vec_cmp_expr_p (vec_cmp_type, vec_truth_type, LT_EXPR)
 && expand_vec_cond_expr_p (vec_cmp_type, vec_truth_type)
)
						  {
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1391;
						    {
						      tree res_op0;
						      {
							tree _o1[3], _r1;
							{
							  tree _o2[2], _r2;
							  {
							    tree _o3[1], _r3;
							    _o3[0] = captures[0];
							    if (TREE_TYPE (_o3[0]) != vec_cmp_type)
							      {
								_r3 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, vec_cmp_type, _o3[0]);
							      }
							    else
							      _r3 = _o3[0];
							    _o2[0] = _r3;
							  }
							  _o2[1] =  zeros;
							  _r2 = fold_build2_loc (loc, LT_EXPR, vec_truth_type, _o2[0], _o2[1]);
							  _o1[0] = _r2;
							}
							_o1[1] =  ones;
							_o1[2] =  zeros;
							_r1 = fold_build3_loc (loc, VEC_COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
							res_op0 = _r1;
						      }
						      tree _r;
						      _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
						      if (TREE_SIDE_EFFECTS (captures[1]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
						      if (TREE_SIDE_EFFECTS (captures[2]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
						      if (TREE_SIDE_EFFECTS (captures[3]))
							_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
						      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 960, __FILE__, __LINE__, true);
						      return _r;
						    }
next_after_fail1391:;
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
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1392;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1392;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1392:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1393;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1393;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1393:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1394;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1394;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1394:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_onep (_q31))
			{
			  if (real_minus_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1395;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1395;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1395:;
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
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1396;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1396;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1396:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1397;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1397;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1397:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1398;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1398;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1398:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1399;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1399;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1399:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1400;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1400;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1400:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1401;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1401;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1401:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (real_zerop (_q31))
		{
		  if (real_onep (_q21))
		    {
		      if (real_minus_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1402;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1402;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 961, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1402:;
				  }
			      }
			    }
		        }
		    }
		  if (real_minus_onep (_q21))
		    {
		      if (real_onep (_q22))
			{
			  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1403;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1403;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1403:;
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
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1404;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1404;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1404:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1405;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1405;
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
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1405:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1406;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1406;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1406:;
				  }
			      }
			    }
		        }
		    }
	        }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (real_zerop (_q41))
		    {
		      if (real_minus_onep (_q31))
			{
			  if (real_onep (_q32))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
				if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1407;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1407;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[0];
					_r1 = fold_build1_loc (loc, ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					res_op0 = _r1;
				      }
				      tree _r;
				      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1407:;
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_176 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
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
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
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
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
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
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
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
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
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
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
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
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
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
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
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
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
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
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
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
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if (real_onep (_q20))
		{
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q21 };
			tree res = generic_simplify_177 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
			if (res) return res;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q40 = TREE_OPERAND (_q21, 0);
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
			      tree res = generic_simplify_178 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
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
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
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
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
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
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
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
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
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
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
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
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
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
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
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
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
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
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
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
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if (real_onep (_q30))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q31, 0);
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			      tree res = generic_simplify_179 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
	default:;
        }
      break;
    default:;
    }
if (integer_onep (_p1))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      tree res = generic_simplify_180 (loc, type, _p0, _p1, captures, MULT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
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
		      {
 wi::overflow_type overflow;
 wide_int mul = wi::mul (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (type), &overflow);
			  if (!overflow || TYPE_OVERFLOW_WRAPS (type)
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1408;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1408;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1408;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
				res_op1 =  wide_int_to_tree (type, mul);
				tree _r;
				_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 963, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1408:;
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
    case PLUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
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
			    case INTEGER_CST:
			      {
				{
				  tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q21, _p1 };
				  {
 bool overflowed = true;
 wi::overflow_type ovf1, ovf2;
 wide_int mul = wi::mul (wi::to_wide (captures[3]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf1);
 wide_int add = wi::mul (wi::to_wide (captures[4]), wi::to_wide (captures[5]),
 TYPE_SIGN (type), &ovf2);
 if (TYPE_OVERFLOW_UNDEFINED (type))
 {
 }
 else
 overflowed = false;
				      if (!overflowed
)
					{
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1409;
					  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1409;
					  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail1409;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1409;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      _o1[0] = captures[2];
					      _o1[1] =  wide_int_to_tree (type, mul);
					      _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree res_op1;
					    res_op1 =  wide_int_to_tree (type, add);
					    tree _r;
					    _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1409:;
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
    case TRUNC_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_pow2p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
		      {
			tree res_op0;
			res_op0 = captures[0];
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 965, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1410:;
		    }
		}
	      }
	  }
        break;
      }
    case ABS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1411;
	      {
		if (! tree_invariant_p (captures[1])) goto next_after_fail1411;
		tree res_op0;
		res_op0 = unshare_expr (captures[1]);
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 966, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1411:;
	    }
	  }
        break;
      }
    case ABSU_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20 };
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1412;
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
		  captures[2] = _r1;
		}
		res_op0 = unshare_expr (captures[2]);
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 967, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1412:;
	    }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COPYSIGNF16:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF128:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF32X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF64X:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGN);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNF);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_COPYSIGNL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_COPYSIGNL);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_COPYSIGN:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    tree res = generic_simplify_181 (loc, type, _p0, _p1, captures, CFN_COPYSIGN);
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
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (integer_onep (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case LSHIFT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q30))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _q31 };
		    tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
			tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
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
    case LSHIFT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if (integer_onep (_q30))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
	      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case LSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_onep (_q20))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
	      tree res = generic_simplify_182 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			tree res = generic_simplify_184 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    if (integer_zerop (_q31))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		  tree res = generic_simplify_184 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
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
	if (integer_zerop (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		{
		  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		  tree res = generic_simplify_183 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
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
	switch (TREE_CODE (_q30))
	  {
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1413;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1413;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1413:;
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
    case VEC_COND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q22))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1414;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 968, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1414:;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q22 };
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1415;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1415;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1415:;
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
  switch (TREE_CODE (_p1))
    {
    case VEC_COND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	tree _q32 = TREE_OPERAND (_p1, 2);
	switch (TREE_CODE (_q30))
	  {
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (integer_zerop (_q41))
		    {
		      if (integer_zerop (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q32 };
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1416;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1416;
			    {
			      tree _r;
			      _r =  build_zero_cst (type);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 969, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1416:;
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
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case REAL_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      if (flag_associative_math
 && single_use (captures[0])
)
			{
			  {
 tree tem = const_binop (MULT_EXPR, type, captures[1], captures[3]);
			      if (tem
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1417;
				  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1417;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1417;
				  {
				    tree res_op0;
				    res_op0 =  tem;
				    tree res_op1;
				    res_op1 = captures[2];
				    tree _r;
				    _r = fold_build2_loc (loc, RDIV_EXPR, type, res_op0, res_op1);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 970, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1417:;
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
{
  tree _p0_pops[1];
  if (tree_nop_convert (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q30_pops[1];
	    if (tree_nop_convert (_q30, _q30_pops))
	      {
		tree _q40 = _q30_pops[0];
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      switch (TREE_CODE (_q50))
		        {
			CASE_CONVERT:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    switch (TREE_CODE (_q60))
			      {
			      case LT_EXPR:
			        {
				  tree _q70 = TREE_OPERAND (_q60, 0);
				  tree _q71 = TREE_OPERAND (_q60, 1);
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree _p1_pops[1];
					    if (tree_nop_convert (_p1, _p1_pops))
					      {
						tree _q110 = _p1_pops[0];
						if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
						  {
						    {
						      tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						      tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
						      if (res) return res;
						    }
						  }
					      }
					  }
					  if ((_p1 == _q70 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q70, 0) && types_match (_p1, _q70)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q70 };
						tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q60 = TREE_OPERAND (_q50, 0);
			    tree _q61 = TREE_OPERAND (_q50, 1);
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree _p1_pops[1];
				      if (tree_nop_convert (_p1, _p1_pops))
				        {
					  tree _q100 = _p1_pops[0];
					  if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
						if (res) return res;
					      }
					    }
				        }
				    }
				    if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					  tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
	  }
	    break;
	  }
        default:;
        }
      switch (TREE_CODE (_p1))
        {
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_p1, 0);
	    tree _q41 = TREE_OPERAND (_p1, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
				      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q41))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	    case BIT_IOR_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q40, 0);
		tree _q51 = TREE_OPERAND (_q40, 1);
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			CASE_CONVERT:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    switch (TREE_CODE (_q70))
			      {
			      case LT_EXPR:
			        {
				  tree _q80 = TREE_OPERAND (_q70, 0);
				  tree _q81 = TREE_OPERAND (_q70, 1);
				  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				    {
				      if (integer_zerop (_q81))
					{
					  if (integer_onep (_q51))
					    {
					      {
						tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q51))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	      {
		tree _q50_pops[1];
		if (tree_nop_convert (_q50, _q50_pops))
		  {
		    tree _q60 = _q50_pops[0];
		    switch (TREE_CODE (_q60))
		      {
		      case NEGATE_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  switch (TREE_CODE (_q70))
			    {
			    CASE_CONVERT:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				switch (TREE_CODE (_q80))
				  {
				  case LT_EXPR:
				    {
				      tree _q90 = TREE_OPERAND (_q80, 0);
				      tree _q91 = TREE_OPERAND (_q80, 1);
				      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
					{
					  if (integer_zerop (_q91))
					    {
					      if (integer_onep (_q51))
						{
						  {
						    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
						    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
			    case LT_EXPR:
			      {
				tree _q80 = TREE_OPERAND (_q70, 0);
				tree _q81 = TREE_OPERAND (_q70, 1);
				if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
				  {
				    if (integer_zerop (_q81))
				      {
					if (integer_onep (_q51))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
					      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	      }
	        break;
	      }
	    default:;
	    }
        }
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  switch (TREE_CODE (_q60))
			    {
			    case LT_EXPR:
			      {
				tree _q70 = TREE_OPERAND (_q60, 0);
				tree _q71 = TREE_OPERAND (_q60, 1);
				if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				  {
				    if (integer_zerop (_q71))
				      {
					if (integer_onep (_q41))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
		    break;
		  }
	        default:;
	        }
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  switch (TREE_CODE (_q50))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  CASE_CONVERT:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      switch (TREE_CODE (_q70))
			        {
				case LT_EXPR:
				  {
				    tree _q80 = TREE_OPERAND (_q70, 0);
				    tree _q81 = TREE_OPERAND (_q70, 1);
				    if ((_q80 == _p0 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _p0, 0) && types_match (_q80, _p0)))
				      {
					if (integer_zerop (_q81))
					  {
					    if (integer_onep (_q41))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
						  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case BIT_IOR_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case LT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  if (integer_zerop (_q51))
			    {
			      if (integer_onep (_q21))
				{
				  {
				    tree _p1_pops[1];
				    if (tree_nop_convert (_p1, _p1_pops))
				      {
					tree _q90 = _p1_pops[0];
					if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					  {
					    {
					      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					      tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_zerop (_q41))
		      {
			if (integer_onep (_q21))
			  {
			    {
			      tree _p1_pops[1];
			      if (tree_nop_convert (_p1, _p1_pops))
			        {
				  tree _q80 = _p1_pops[0];
				  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
					tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
					if (res) return res;
				      }
				    }
			        }
			    }
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _q40 };
				  tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
      {
	tree _q20_pops[1];
	if (tree_nop_convert (_q20, _q20_pops))
	  {
	    tree _q30 = _q20_pops[0];
	    switch (TREE_CODE (_q30))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  switch (TREE_CODE (_q40))
		    {
		    CASE_CONVERT:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			switch (TREE_CODE (_q50))
			  {
			  case LT_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      tree _q61 = TREE_OPERAND (_q50, 1);
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q21))
				    {
				      {
					tree _p1_pops[1];
					if (tree_nop_convert (_p1, _p1_pops))
					  {
					    tree _q100 = _p1_pops[0];
					    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
					      {
						{
						  tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
						  tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
						  if (res) return res;
						}
					      }
					  }
				      }
				      if ((_p1 == _q60 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q60, 0) && types_match (_p1, _q60)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q60 };
					    tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q50 = TREE_OPERAND (_q40, 0);
			tree _q51 = TREE_OPERAND (_q40, 1);
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q21))
			      {
				{
				  tree _p1_pops[1];
				  if (tree_nop_convert (_p1, _p1_pops))
				    {
				      tree _q90 = _p1_pops[0];
				      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
					    tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
					    if (res) return res;
					  }
				        }
				    }
				}
				if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q50 };
				      tree res = generic_simplify_185 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      switch (TREE_CODE (_q40))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    switch (TREE_CODE (_q50))
		      {
		      case LT_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			    {
			      if (integer_zerop (_q61))
				{
				  if (integer_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
		case LT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		      {
			if (integer_zerop (_q51))
			  {
			    if (integer_onep (_q31))
			      {
				{
				  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
      {
	tree _q30_pops[1];
	if (tree_nop_convert (_q30, _q30_pops))
	  {
	    tree _q40 = _q30_pops[0];
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    CASE_CONVERT:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			switch (TREE_CODE (_q60))
			  {
			  case LT_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_q60, 0);
			      tree _q71 = TREE_OPERAND (_q60, 1);
			      if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
				{
				  if (integer_zerop (_q71))
				    {
				      if (integer_onep (_q31))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q31))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	case BIT_IOR_EXPR:
	  {
	    tree _q40 = TREE_OPERAND (_q30, 0);
	    tree _q41 = TREE_OPERAND (_q30, 1);
	    switch (TREE_CODE (_q40))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_q40, 0);
		  switch (TREE_CODE (_q50))
		    {
		    case LT_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_q50, 0);
			tree _q61 = TREE_OPERAND (_q50, 1);
			if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			  {
			    if (integer_zerop (_q61))
			      {
				if (integer_onep (_q41))
				  {
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
				      tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	  {
	    tree _q40_pops[1];
	    if (tree_nop_convert (_q40, _q40_pops))
	      {
		tree _q50 = _q40_pops[0];
		switch (TREE_CODE (_q50))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_q50, 0);
		      switch (TREE_CODE (_q60))
		        {
			case LT_EXPR:
			  {
			    tree _q70 = TREE_OPERAND (_q60, 0);
			    tree _q71 = TREE_OPERAND (_q60, 1);
			    if ((_q70 == _p0 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _p0, 0) && types_match (_q70, _p0)))
			      {
				if (integer_zerop (_q71))
				  {
				    if (integer_onep (_q41))
				      {
					{
					  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					  tree res = generic_simplify_186 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if (tree_negate_expr_p (_q50))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q50 };
			  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    if (tree_negate_expr_p (_p1))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p1 };
		  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	      break;
	    }
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q30, _q31, _p1 };
		tree res = generic_simplify_188 (loc, type, _p0, _p1, captures, LTGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_q20))
	{
	  switch (TREE_CODE (_p1))
	    {
	    CASE_CONVERT:
	      {
		tree _q40 = TREE_OPERAND (_p1, 0);
		switch (TREE_CODE (_q40))
		  {
		  case NEGATE_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q20 };
			tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
		tree _q40 = TREE_OPERAND (_p1, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
		  if (res) return res;
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      if (tree_negate_expr_p (_q40))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		    tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      if (tree_negate_expr_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
	    tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
if (tree_negate_expr_p (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      CASE_CONVERT:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  switch (TREE_CODE (_q30))
	    {
	    case NEGATE_EXPR:
	      {
		tree _q40 = TREE_OPERAND (_q30, 0);
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _p0 };
		  tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
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
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	    tree res = generic_simplify_187 (loc, type, _p0, _p1, captures);
	    if (res) return res;
	  }
          break;
        }
      default:;
      }
  }
if (tree_zero_one_valued_p (_p0))
  {
    if (tree_zero_one_valued_p (_p1))
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1418;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 971, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1418:;
	    }
	}
      }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case LT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, LT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, LE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case EQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, EQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case NE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, NE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, GE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case GT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, GT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case ORDERED_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNLT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNLE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNLE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNGT_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNGE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNGE_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case UNEQ_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
		if (res) return res;
	      }
	      break;
	    }
	  case LTGT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q40, _q41, _p0 };
		tree res = generic_simplify_189 (loc, type, _p0, _p1, captures, LTGT_EXPR);
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1419:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1420;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1420:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1421;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1421:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1422;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1422:;
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case RSHIFT_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  switch (TREE_CODE (_q51))
			    {
			    case INTEGER_CST:
			      {
				switch (TREE_CODE (_q31))
				  {
				  case INTEGER_CST:
				    {
				      switch (TREE_CODE (_p1))
				        {
					case INTEGER_CST:
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
					      tree res = generic_simplify_190 (loc, type, _p0, _p1, captures);
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
	  case EXACT_DIV_EXPR:
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
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
			  tree res = generic_simplify_191 (loc, type, _p0, _p1, captures);
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q31 };
		    tree res = generic_simplify_191 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if (poly_int_tree_p (_p1))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			  tree res = generic_simplify_192 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  switch (TREE_CODE (_q51))
			    {
			    case INTEGER_CST:
			      {
				if (poly_int_tree_p (_q31))
				  {
				    if (poly_int_tree_p (_p1))
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
					  tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if (poly_int_tree_p (_q31))
			    {
			      if (poly_int_tree_p (_p1))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
				    tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case EXACT_DIV_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  switch (TREE_CODE (_q51))
			    {
			    case INTEGER_CST:
			      {
				if (poly_int_tree_p (_q31))
				  {
				    if (poly_int_tree_p (_p1))
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q31, _p1 };
					  tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if (poly_int_tree_p (_q31))
			    {
			      if (poly_int_tree_p (_p1))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q31, _p1 };
				    tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
    case BIT_AND_EXPR:
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
			    case INTEGER_CST:
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
				  tree res = generic_simplify_190 (loc, type, _p0, _p1, captures);
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
    case EXACT_DIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q21, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
		    tree res = generic_simplify_191 (loc, type, _p0, _p1, captures);
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q21 };
	      tree res = generic_simplify_191 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if (poly_int_tree_p (_p1))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		    tree res = generic_simplify_192 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if (poly_int_tree_p (_q21))
			    {
			      if (poly_int_tree_p (_p1))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
				    tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if (poly_int_tree_p (_q21))
		      {
			if (poly_int_tree_p (_p1))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, PLUS_EXPR);
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
    case MINUS_EXPR:
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
		case EXACT_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if (poly_int_tree_p (_q21))
			    {
			      if (poly_int_tree_p (_p1))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _q21, _p1 };
				    tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	  case EXACT_DIV_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if (poly_int_tree_p (_q21))
		      {
			if (poly_int_tree_p (_p1))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q21, _p1 };
			      tree res = generic_simplify_193 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
  if (integer_minus_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1423;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1423;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 972, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1423:;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		tree res = generic_simplify_194 (loc, type, _p0, _p1, captures);
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q31))
	  {
	  case INTEGER_CST:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q31, _p0 };
		tree res = generic_simplify_194 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1424;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1424;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1424;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1424:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1425;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1425;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1425;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1425;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1425:;
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
 && (TREE_CODE_CLASS (MULT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1426;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1426;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1426;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MULT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1426;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1426:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_p1))
	      {
	      case CFN_BUILT_IN_LDEXPF:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXPL:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_LDEXP:
	        if (call_expr_nargs (_p1) == 2)
    {
		    tree _q30 = CALL_EXPR_ARG (_p1, 0);
		    tree _q31 = CALL_EXPR_ARG (_p1, 1);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
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
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_SQRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1427;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1427;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1427:;
			      }
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
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTL);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1428;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1428;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1428:;
			      }
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
	case CFN_BUILT_IN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1429;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1429;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1429:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1430;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1430;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1430;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1430:;
					}
				    }
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
	    }
	  break;
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1431;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1431;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1431;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1431:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1432;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1432;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1432;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1432:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1433;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1433;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1433;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1433:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1434;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1434;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1434;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1434:;
					}
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
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1435;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1435;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1435:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1436;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1436;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1436;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1436:;
					}
				    }
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
	    }
	  break;
	case CFN_BUILT_IN_EXP10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXP10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1437;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1437;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1437:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1438;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1438;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1438;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1438:;
					}
				    }
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
	    }
	  break;
	case CFN_BUILT_IN_CBRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1439;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1439;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1439:;
			      }
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
	case CFN_BUILT_IN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1440;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1440;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1440;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1440:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1441;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1441;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1441:;
			      }
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
	case CFN_BUILT_IN_EXPF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1442;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1442;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1442:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1443;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1443;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1443;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1443:;
					}
				    }
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
	    }
	  break;
	case CFN_BUILT_IN_EXPL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_EXPL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1444;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1444;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1444:;
			      }
			  }
		        }
		      break;
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1445;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1445;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1445;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1445:;
					}
				    }
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
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1446;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1446;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1446;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1446:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPF:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1447;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGF, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1447;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPF, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1447;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1447:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1448;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1448;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1448;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1448:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2F:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1449;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1449;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1449;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1449:;
					}
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
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_BUILT_IN_EXP10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1450;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1450;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1450;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1450:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXPL:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1451;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOGL, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1451;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXPL, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1451;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1451:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_POW10L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1452;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1452;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1452;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1452:;
					}
				    }
				}
			      }
			    break;
			  case CFN_BUILT_IN_EXP2L:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1453;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1453;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1453;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1453:;
					}
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
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRT:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1454;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1454;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1454:;
			      }
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
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF128:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF16:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF16);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF32:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF32);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_BUILT_IN_SQRTF64:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF64);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_EXP:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1455;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1455;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1455:;
			      }
			  }
		        }
		      break;
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1456;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1456;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1456;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1456:;
					}
				    }
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
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_p1))
		          {
			  case CFN_EXP:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1457;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1457;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1457;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1457:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP2:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1458;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1458;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1458;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1458:;
					}
				    }
				}
			      }
			    break;
			  case CFN_EXP10:
			    if (call_expr_nargs (_p1) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_p1, 0);
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1459;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1459;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1459;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1459:;
					}
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
	        default:;
	        }
	      switch (TREE_CODE (_q21))
	        {
		case REAL_CST:
		  {
		    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1460;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1460;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1460;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1460:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1461;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1461;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1461:;
			      }
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
	case CFN_BUILT_IN_POW10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1462;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1462;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1462;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1462:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1463;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1463;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1463:;
			      }
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
	case CFN_BUILT_IN_SQRTF128X:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_SQRTF128X);
		    if (res) return res;
		  }
	        }
	    }
	  break;
	case CFN_EXP2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1464;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG2, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1464;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1464;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1464:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_EXP2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1465;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP2, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1465;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1465:;
			      }
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
	      if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    tree res = generic_simplify_195 (loc, type, _p0, _p1, captures, CFN_SQRT);
		    if (res) return res;
		  }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_SQRT:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1466;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_SQRT, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1466;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1466:;
			      }
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
	case CFN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1467;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1467;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1467;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1467:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_EXP10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1468;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1468;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1468:;
			      }
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
	case CFN_BUILT_IN_CBRTF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1469;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTF, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1469;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1469:;
			      }
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
	case CFN_BUILT_IN_CBRTL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_CBRTL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1470;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_CBRTL, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1470;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1470:;
			      }
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
	case CFN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_EXP10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1471;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1471;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1471;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1471:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1472;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1472;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1472:;
			      }
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
	case CFN_BUILT_IN_EXP2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1473;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2F, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1473;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1473;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1473:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1474;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2F, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1474;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1474:;
			      }
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
	case CFN_BUILT_IN_EXP2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1475;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG2L, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1475;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1475;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1475:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1476;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_EXP2L, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1476;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1476:;
			      }
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
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_197 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q20))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _q21 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_POW10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  tree _q41 = CALL_EXPR_ARG (_p1, 1);
			  switch (TREE_CODE (_q40))
			    {
			    case REAL_CST:
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q40, _q41, _p0, _q20 };
				  if (flag_unsafe_math_optimizations
)
				    {
				      if (real_compare (GT_EXPR, TREE_REAL_CST_PTR (captures[1]), &dconst0)
 && real_isfinite (TREE_REAL_CST_PTR (captures[1]))
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1477;
					  {
					    tree res_op0;
					    {
					      tree _o1[2], _r1;
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[1];
						  _r3 = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_LOG10, TREE_TYPE (_o3[0]), 1, _o3[0]);
						  if (!_r3)
						    goto next_after_fail1477;
						  _o2[0] = _r3;
						}
						_o2[1] = captures[2];
						_r2 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
						_o1[0] = _r2;
					      }
					      _o1[1] = captures[4];
					      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					      res_op0 = _r1;
					    }
					    tree _r;
					    _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
					    if (!_r)
					      goto next_after_fail1477;
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 975, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1477:;
					}
				    }
				}
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_POW10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    if (flag_unsafe_math_optimizations
)
			      {
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1478;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[3];
				    _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    res_op0 = _r1;
				  }
				  tree _r;
				  _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POW10, type, 1, res_op0);
				  if (!_r)
				    goto next_after_fail1478;
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 974, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1478:;
			      }
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p1))
        {
	case CFN_BUILT_IN_LDEXPF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPF);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXPL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXPL);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_LDEXP);
		      if (res) return res;
		    }
		    break;
		  }
	        default:;
	        }
	    }
	  break;
	case CFN_BUILT_IN_LDEXP:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      switch (TREE_CODE (_q30))
	        {
		case REAL_CST:
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      tree res = generic_simplify_198 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LDEXP);
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
  switch (TREE_CODE (_p0))
    {
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
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
	    }
	  break;
	case CFN_BUILT_IN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TAN, CFN_BUILT_IN_COS, CFN_BUILT_IN_SIN);
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
	    }
	  break;
	case CFN_BUILT_IN_COSF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
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
	    }
	  break;
	case CFN_BUILT_IN_COSL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_TANL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
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
	    }
	  break;
	case CFN_BUILT_IN_TANF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANF, CFN_BUILT_IN_COSF, CFN_BUILT_IN_SINF);
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
	    }
	  break;
	case CFN_BUILT_IN_TANL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_COSL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_TANL, CFN_BUILT_IN_COSL, CFN_BUILT_IN_SINL);
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
	    }
	  break;
	case CFN_COS:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_TAN:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q20, _p0 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
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
	    }
	  break;
	case CFN_TAN:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_COS:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				tree res = generic_simplify_199 (loc, type, _p0, _p1, captures, CFN_TAN, CFN_COS, CFN_SIN);
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
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p1) == 2)
    {
	      tree _q30 = CALL_EXPR_ARG (_p1, 0);
	      tree _q31 = CALL_EXPR_ARG (_p1, 1);
	      if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		{
		  switch (TREE_CODE (_q31))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			  tree res = generic_simplify_196 (loc, type, _p0, _p1, captures, CFN_POW);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  break;
	default:;
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1479;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1479:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_q22))
	      {
	      case VECTOR_CST:
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
				switch (TREE_CODE (_q62))
				  {
				  case VECTOR_CST:
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
					tree res = generic_simplify_83 (loc, type, _p0, _p1, captures, MULT_EXPR);
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
	          break;
	        }
	      default:;
	      }
	  }
        break;
      }
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_200 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POW);
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
	    }
	  break;
	case CFN_BUILT_IN_POWF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_200 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWF);
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
	    }
	  break;
	case CFN_BUILT_IN_POWI:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWI:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1480;
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
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWI, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1480;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1480:;
				  }
			      }
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
	case CFN_BUILT_IN_POWL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_200 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_POWL);
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
	    }
	  break;
	case CFN_POW:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_POW:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_200 (loc, type, _p0, _p1, captures, CFN_POW);
				if (res) return res;
			      }
			    }
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				tree res = generic_simplify_201 (loc, type, _p0, _p1, captures, CFN_POW);
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
	    }
	  break;
	case CFN_BUILT_IN_POWIF:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIF:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1481;
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
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIF, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1481;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1481:;
				  }
			      }
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
	case CFN_BUILT_IN_POWIL:
	  if (call_expr_nargs (_p0) == 2)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      tree _q21 = CALL_EXPR_ARG (_p0, 1);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_POWIL:
		      if (call_expr_nargs (_p1) == 2)
    {
			  tree _q50 = CALL_EXPR_ARG (_p1, 0);
			  tree _q51 = CALL_EXPR_ARG (_p1, 1);
			  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
				if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1482;
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
				      _r = maybe_build_call_expr_loc (loc, CFN_BUILT_IN_POWIL, type, 2, res_op0, res_op1);
				      if (!_r)
				        goto next_after_fail1482;
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 976, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1482:;
				  }
			      }
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
  return NULL_TREE;
}
#pragma GCC diagnostic pop
