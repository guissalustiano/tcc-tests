/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "generic-match-auto.h"

bool
tree_truth_valued_p (tree t)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (t)) return false;
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 20, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case LT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case EQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case NE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case GT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case ORDERED_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNLE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNGE_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case UNEQ_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case LTGT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_AND_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ANDIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_OR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_ORIF_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_XOR_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	tree _p1 = TREE_OPERAND (t, 1);
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    case TRUTH_NOT_EXPR:
      {
	tree _p0 = TREE_OPERAND (t, 0);
	{
	  tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	  {
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
	    return true;
	  }
	}
        break;
      }
    default:;
    }
  return false;
}

tree
generic_simplify_41 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner_op),
 const enum tree_code ARG_UNUSED (outer_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool fail = false;
 wide_int zero_mask_not;
 wide_int C0;
 wide_int cst_emit;
 if (TREE_CODE (captures[1]) == SSA_NAME)
 zero_mask_not = get_nonzero_bits (captures[1]);
 else
 fail = true;
 if (inner_op == BIT_XOR_EXPR)
 {
 C0 = wi::bit_and_not (wi::to_wide (captures[2]), wi::to_wide (captures[3]));
 cst_emit = C0 | wi::to_wide (captures[3]);
 }
 else
 {
 C0 = wi::to_wide (captures[2]);
 cst_emit = C0 ^ wi::to_wide (captures[3]);
 }
      if (!fail && (C0 & zero_mask_not) == 0
)
	{
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail118;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail118;
	  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail118;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail118;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    res_op1 =  wide_int_to_tree (type, cst_emit);
	    tree _r;
	    _r = fold_build2_loc (loc, outer_op, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 89, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail118:;
	}
      else
	{
	  if (!fail && (wi::to_wide (captures[3]) & zero_mask_not) == 0
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail119;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail119;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail119;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail119;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  wide_int_to_tree (type, cst_emit);
		tree _r;
		_r = fold_build2_loc (loc, inner_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 90, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail119:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_56 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail137;
  {
    if (! tree_invariant_p (captures[2])) goto next_after_fail137;
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      _o1[1] = unshare_expr (captures[2]);
      _r1 = fold_build2_loc (loc, PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    {
      tree _o1[1], _r1;
      _o1[0] = captures[2];
      _r1 = fold_build1_loc (loc, BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 105, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail137:;
  return NULL_TREE;
}

tree
generic_simplify_65 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (TYPE_OVERFLOW_UNDEFINED (type)
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail154;
	      {
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[0]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 122, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail154:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_73 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
0
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail163;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 131, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail163:;
    }
  return NULL_TREE;
}

tree
generic_simplify_78 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && ! HONOR_NANS (type) && ! HONOR_INFINITIES (type)
 && ! flag_trapping_math
 && ! flag_errno_math
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail169;
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
	    _r = maybe_build_call_expr_loc (loc, logs, type, 1, res_op0);
	    if (!_r)
	      goto next_after_fail169;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 137, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail169:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_86 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail177;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = unshare_expr (captures[2]);
      _r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 = captures[2];
    tree _r;
    _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 145, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail177:;
  return NULL_TREE;
}

tree
generic_simplify_94 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail185;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 152, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail185:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_101 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail196;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree _r;
		_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 163, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail196:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_107 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (log1),
 const enum tree_code ARG_UNUSED (log2),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail204;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[4];
      _r1 = fold_build2_loc (loc, log2, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree _r;
    _r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
    if (!_r)
      goto next_after_fail204;
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 171, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail204:;
  return NULL_TREE;
}

tree
generic_simplify_111 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail208;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 175, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail208:;
  return NULL_TREE;
}

tree
generic_simplify_117 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail214;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail214;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 180, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail214:;
  return NULL_TREE;
}

tree
generic_simplify_124 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail221;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail221;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 182, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail221:;
  return NULL_TREE;
}

tree
generic_simplify_132 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail229;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail229;
  {
    tree _r;
    _r = captures[0];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 187, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail229:;
  return NULL_TREE;
}

tree
generic_simplify_140 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (rbitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[2], captures[0], wascmp)
 && (!wascmp || element_precision (type) == 1)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail241;
	  {
	    tree res_op0;
	    res_op0 = captures[2];
	    tree res_op1;
	    res_op1 = captures[1];
	    tree _r;
	    _r = fold_build2_loc (loc, bitop, type, res_op0, res_op1);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 195, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail241:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_148 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail250;
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
next_after_fail250:;
    }
  return NULL_TREE;
}

tree
generic_simplify_161 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail284;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail284;
  {
    tree _r;
    _r = captures[2];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 207, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail284:;
  return NULL_TREE;
}

tree
generic_simplify_165 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail289;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail289;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail289;
	      {
		tree _r;
		_r = captures[3];
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 210, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail289:;
	    }
	  else
	    {
	      if (code1 == NE_EXPR && val && allbits
)
		{
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail290;
		  if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail290;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail290;
		  {
		    tree _r;
		    _r =  constant_boolean_node (true, type);
		    if (TREE_SIDE_EFFECTS (captures[1]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 211, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail290:;
		}
	      else
		{
		  if (code1 == NE_EXPR && !val && allbits
)
		    {
		      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail291;
		      if (TREE_SIDE_EFFECTS (captures[5])) goto next_after_fail291;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail291;
		      {
			tree _r;
			_r = captures[0];
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 212, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail291:;
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
			  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail292;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail292;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail292;
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
next_after_fail292:;
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
			      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail293;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail293;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail293;
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
next_after_fail293:;
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
				  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail294;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail294;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail294;
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
next_after_fail294:;
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
				      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail295;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail295;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail295;
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
next_after_fail295:;
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
generic_simplify_206 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (captures[0]) >= element_precision (captures[1])
 && types_match (captures[1], captures[3])
)
    {
      if (wi::lt_p (wi::to_wide (captures[2]), 0, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	{
	  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail346;
	      {
		tree res_op0;
		res_op0 = captures[3];
		tree res_op1;
		res_op1 = captures[1];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 261, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail346:;
	    }
	  else
	    {
	      if (tree_expr_nonzero_p (captures[1]) && tree_expr_nonzero_p (captures[3])
)
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail347;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 262, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail347:;
		  }
		}
	    }
	}
      else
	{
	  if (wi::gt_p (wi::to_wide (captures[2]), 1, TYPE_SIGN (TREE_TYPE (captures[2])))
)
	    {
	      if (TYPE_UNSIGNED (TREE_TYPE (captures[1])) || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail348;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[3];
		    tree _r;
		    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail348:;
		}
	      else
		{
		  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail349;
		      {
			tree res_op0;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op0 = _r1;
			}
			tree res_op1;
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[3];
			  if (TREE_TYPE (_o1[0]) != utype)
			    {
			      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
			    }
			  else
			    _r1 = _o1[0];
			  res_op1 = _r1;
			}
			tree _r;
			_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
			if (TREE_SIDE_EFFECTS (captures[2]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 264, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail349:;
		  }
		}
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_237 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int cand = wi::ctz (wi::to_wide (captures[2])) - wi::ctz (wi::to_wide (captures[0]));
      if (cand < 0
 || (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) != wi::to_wide (captures[2]))
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail404;
	  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail404;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail404;
	  {
	    tree _r;
	    _r =  constant_boolean_node (cmp == NE_EXPR, type);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 317, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail404:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail405;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail405;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail405;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 =  build_int_cst (TREE_TYPE (captures[1]), cand);
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 318, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail405:;
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_248 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (scmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (captures[2])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail417;
      {
	tree res_op0;
	res_op0 = captures[2];
	tree res_op1;
	res_op1 = captures[3];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 329, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail417:;
    }
  else
    {
      if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && single_use (captures[0])
)
	{
	  if (tree_int_cst_sgn (captures[2]) < 0
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail418;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, scmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 330, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail418:;
	    }
	  else
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail419;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 331, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail419:;
	    }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_261 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (SCALAR_FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 && ! DECIMAL_FLOAT_TYPE_P (TREE_TYPE (captures[1]))
)
    {
      {
 tree itype = TREE_TYPE (captures[0]);
 format_helper fmt (REAL_MODE_FORMAT (TYPE_MODE (TREE_TYPE (captures[1]))));
 const REAL_VALUE_TYPE *cst = TREE_REAL_CST_PTR (captures[1]);
 bool exception_p = real_isnan (cst)
 && flag_trapping_math
 && ((cmp != EQ_EXPR && cmp != NE_EXPR)
 || (cst->signalling
 && HONOR_SNANS (TREE_TYPE (captures[1]))));
	  if (fmt.can_represent_integral_type_p (itype) && ! exception_p
)
	    {
	      {
 signop isign = TYPE_SIGN (itype);
 REAL_VALUE_TYPE imin, imax;
 real_from_integer (&imin, fmt, wi::min_value (itype), isign);
 real_from_integer (&imax, fmt, wi::max_value (itype), isign);
 REAL_VALUE_TYPE icst;
 if (cmp == GT_EXPR || cmp == GE_EXPR)
 real_ceil (&icst, fmt, cst);
 else if (cmp == LT_EXPR || cmp == LE_EXPR)
 real_floor (&icst, fmt, cst);
 else
 real_trunc (&icst, fmt, cst);
 bool cst_int_p = !real_isnan (cst) && real_identical (&icst, cst);
 bool overflow_p = false;
 wide_int icst_val
 = real_to_integer (&icst, &overflow_p, TYPE_PRECISION (itype));
		  if (real_compare (LT_EXPR, cst, &imin)
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail470;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail470;
		      {
			tree _r;
			_r =  constant_boolean_node (cmp == GT_EXPR || cmp == GE_EXPR || cmp == NE_EXPR,
 type);
			if (TREE_SIDE_EFFECTS (captures[0]))
			  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 381, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail470:;
		    }
		  else
		    {
		      if (real_compare (GT_EXPR, cst, &imax)
)
			{
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail471;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail471;
			  {
			    tree _r;
			    _r =  constant_boolean_node (cmp == LT_EXPR || cmp == LE_EXPR || cmp == NE_EXPR,
 type);
			    if (TREE_SIDE_EFFECTS (captures[0]))
			      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 382, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail471:;
			}
		      else
			{
			  if (cst_int_p
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail472;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail472;
			      {
				tree res_op0;
				res_op0 = captures[0];
				tree res_op1;
 gcc_assert (!overflow_p);				res_op1 = 
 wide_int_to_tree (itype, icst_val);
				tree _r;
				_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 383, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail472:;
			    }
			  else
			    {
			      if (cmp == EQ_EXPR || cmp == NE_EXPR
)
				{
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail473;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail473;
				  {
				    tree _r;
				    _r =  constant_boolean_node (cmp == NE_EXPR, type);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 384, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail473:;
				}
			      else
				{
				  {
 gcc_checking_assert (!overflow_p);
				      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail474;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail474;
				      {
					tree res_op0;
					res_op0 = captures[0];
					tree res_op1;
					res_op1 =  wide_int_to_tree (itype, icst_val);
					tree _r;
					_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 385, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail474:;
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
generic_simplify_276 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail506;
  {
    tree res_op0;
    {
      tree _o1[2], _r1;
      {
	tree _o2[2], _r2;
	_o2[0] = captures[1];
	_o2[1] = captures[4];
	_r2 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	_o1[0] = _r2;
      }
      _o1[1] = captures[2];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      res_op0 = _r1;
    }
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[2]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 410, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail506:;
  return NULL_TREE;
}

tree
generic_simplify_283 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail513;
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail513;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail513;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
    tree _r;
    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 415, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail513:;
  return NULL_TREE;
}

tree
generic_simplify_285 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[2], base0, base1,
 off0, off1,
1
);
      if (equal == 1
)
	{
	  if (cmp == EQ_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail522;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail522;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail522;
	      {
		tree _r;
		_r =  constant_boolean_node (known_eq (off0, off1), type);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 416, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail522:;
	    }
	  else
	    {
	      if (cmp == NE_EXPR && (known_eq (off0, off1) || known_ne (off0, off1))
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail523;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail523;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail523;
		  {
		    tree _r;
		    _r =  constant_boolean_node (known_ne (off0, off1), type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 417, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail523:;
		}
	      else
		{
		  if (cmp == LT_EXPR && (known_lt (off0, off1) || known_ge (off0, off1))
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail524;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail524;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail524;
		      {
			tree _r;
			_r =  constant_boolean_node (known_lt (off0, off1), type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 418, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail524:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR && (known_le (off0, off1) || known_gt (off0, off1))
)
			{
			  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail525;
			  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail525;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail525;
			  {
			    tree _r;
			    _r =  constant_boolean_node (known_le (off0, off1), type);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 419, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail525:;
			}
		      else
			{
			  if (cmp == GE_EXPR && (known_ge (off0, off1) || known_lt (off0, off1))
)
			    {
			      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail526;
			      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail526;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail526;
			      {
				tree _r;
				_r =  constant_boolean_node (known_ge (off0, off1), type);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 420, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail526:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR && (known_gt (off0, off1) || known_le (off0, off1))
)
				{
				  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail527;
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail527;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail527;
				  {
				    tree _r;
				    _r =  constant_boolean_node (known_gt (off0, off1), type);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 421, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail527:;
				}
			    }
			}
		    }
		}
	    }
	}
      else
	{
	  if (equal == 0
)
	    {
	      if (cmp == EQ_EXPR
)
		{
		  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail528;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail528;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail528;
		  {
		    tree _r;
		    _r =  constant_boolean_node (false, type);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 422, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail528:;
		}
	      else
		{
		  if (cmp == NE_EXPR
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail529;
		      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail529;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail529;
		      {
			tree _r;
			_r =  constant_boolean_node (true, type);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 423, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail529:;
		    }
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_300 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail563;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail563;
	      {
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		res_op1 = captures[2];
		tree _r;
		_r = fold_build2_loc (loc, icmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 457, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail563:;
	    }
	  else
	    {
	      if (ic == ncmp
)
		{
		  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail564;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail564;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree res_op1;
		    res_op1 = captures[2];
		    tree _r;
		    _r = fold_build2_loc (loc, ncmp, type, res_op0, res_op1);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 458, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail564:;
		}
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_312 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
 && !flag_non_call_exceptions
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail578;
      {
	tree _r;
	_r = captures[0];
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 470, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail578:;
    }
  return NULL_TREE;
}

tree
generic_simplify_318 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail585;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail585;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 =  wide_int_to_tree
 (type, wi::mask (TYPE_PRECISION (type)
 - wi::exact_log2 (wi::to_wide (captures[1])),
 false, TYPE_PRECISION (type)));
	tree _r;
	_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 477, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail585:;
    }
  return NULL_TREE;
}

tree
generic_simplify_323 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail590;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail590;
  {
    tree _r;
    _r =  build_zero_cst (type);
    if (TREE_SIDE_EFFECTS (captures[0]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 482, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail590:;
  return NULL_TREE;
}

tree
generic_simplify_331 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (SQRT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail600;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, SQRT, type, 1, res_op0);
	if (!_r)
	  goto next_after_fail600;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 492, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail600:;
    }
  return NULL_TREE;
}

tree
generic_simplify_338 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POW))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      if (!TREE_OVERFLOW (captures[2])
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail607;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      _o1[1] =  build_one_cst (type);
	      _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = maybe_build_call_expr_loc (loc, POW, type, 2, res_op0, res_op1);
	    if (!_r)
	      goto next_after_fail607;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 499, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail607:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_347 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && !TYPE_UNSIGNED (type)
)
    {
      {
 tree utype = unsigned_type_for (type);
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail622;
	  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail622;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail622;
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
	      _r1 = fold_build2_loc (loc, MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 514, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail622:;
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_354 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[0], captures[3])
 && expr_no_side_effects_p (captures[2])
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail629;
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail629;
      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail629;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail629;
      {
	tree _r;
	_r = captures[1];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 520, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail629:;
    }
  return NULL_TREE;
}

tree
generic_simplify_360 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail635;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail635;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail635;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 526, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail635:;
  return NULL_TREE;
}

tree
generic_simplify_367 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq),
 const combined_fn ARG_UNUSED (sign))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (neeq == NE_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail642;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail642;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 533, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail642:;
    }
  else
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail643;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail643;
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
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 534, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail643:;
    }
  return NULL_TREE;
}

tree
generic_simplify_380 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail660;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[2];
	tree _r;
	_r = fold_build2_loc (loc, op, type, res_op0, res_op1);
	if (TREE_SIDE_EFFECTS (captures[1]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 550, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail660:;
    }
  return NULL_TREE;
}

tree
generic_simplify_384 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (ltge),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_NANS (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail665;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree _r;
	_r = fold_build2_loc (loc, neeq, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 555, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail665:;
    }
  return NULL_TREE;
}

tree
generic_simplify_391 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (cmp2))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (TREE_TYPE (captures[0]), TREE_TYPE (captures[2]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[2])) && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && wi::gt_p (wi::to_wide (captures[1]), 0, TYPE_SIGN (TREE_TYPE (captures[1])))
)
    {
      {
 tree utype = TREE_TYPE (captures[2]);
 wide_int denom = wi::to_wide (captures[1]);
 wide_int right = wi::to_wide (captures[2]);
 wide_int smax = wi::sdiv_trunc (wi::max_value (TREE_TYPE (captures[0])), denom);
 wide_int smin = wi::sdiv_trunc (wi::min_value (TREE_TYPE (captures[0])), denom);
 bool small = wi::leu_p (right, smax);
 bool large = wi::geu_p (right, smin);
	  if (small || large
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail673;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail673;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail673;
	      {
		tree res_op0;
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (TREE_TYPE (_o1[0]) != utype)
		    {
		      _r1 = fold_build1_loc (loc, NOP_EXPR, utype, _o1[0]);
		    }
		  else
		    _r1 = _o1[0];
		  res_op0 = _r1;
		}
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[1];
		    if (TREE_TYPE (_o2[0]) != TREE_TYPE (res_op0))
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, TREE_TYPE (res_op0), _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  _r1 = fold_build2_loc (loc, MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op1 = _r1;
		}
		tree _r;
		_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 563, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail673:;
	    }
	  else
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail674;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail674;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail674;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 =  build_zero_cst (TREE_TYPE (captures[0]));
		tree _r;
		_r = fold_build2_loc (loc, cmp2, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 564, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail674:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_407 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail727;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail727;
      {
	tree res_op0;
	res_op0 = captures[1];
	tree res_op1;
	res_op1 = captures[0];
	tree _r;
	_r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 582, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail727:;
    }
  return NULL_TREE;
}

tree
generic_simplify_411 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs),
 const combined_fn ARG_UNUSED (exps),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      if (! HONOR_SIGN_DEPENDENT_ROUNDING (type)
 && ! HONOR_NANS (type) && ! HONOR_INFINITIES (type)
 && ! flag_trapping_math
 && ! flag_errno_math
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail731;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree res_op1;
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      _r1 = maybe_build_call_expr_loc (loc, exps, TREE_TYPE (_o1[0]), 1, _o1[0]);
	      if (!_r1)
	        goto next_after_fail731;
	      if (EXPR_P (_r1))
	        goto next_after_fail731;
	      res_op1 = _r1;
	    }
	    tree _r;
	    _r = fold_build2_loc (loc, cmp, type, res_op0, res_op1);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail731:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_419 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail743;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 612, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail743:;
  return NULL_TREE;
}

tree
generic_simplify_424 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bit_op),
 const enum tree_code ARG_UNUSED (shift))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[2]))
)
    {
      {
 tree mask = int_const_binop (shift, fold_convert (type, captures[3]), captures[4]);
	  if (mask
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail751;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail751;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail751;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (TREE_TYPE (_o2[0]) != type)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, type, _o2[0]);
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, shift, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  res_op0 = _r1;
		}
		tree res_op1;
		res_op1 =  mask;
		tree _r;
		_r = fold_build2_loc (loc, bit_op, type, res_op0, res_op1);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 618, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail751:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_430 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && types_match (captures[1], type) && int_fits_type_p (captures[2], type)
 && TYPE_SIGN (TREE_TYPE (captures[0])) == TYPE_SIGN (type)
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (type)
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail763;
      {
	tree res_op0;
	res_op0 = captures[1];
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
	_r = fold_build2_loc (loc, minmax, type, res_op0, res_op1);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 630, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail763:;
    }
  return NULL_TREE;
}

tree
generic_simplify_433 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail772;
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
next_after_fail772:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail773;
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
next_after_fail773:;
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
			  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail774;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail774;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail774;
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
next_after_fail774:;
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
				  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail775;
				  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail775;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail775;
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
next_after_fail775:;
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
generic_simplify_464 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool wascmp;
      if (bitwise_inverted_equal_p (captures[0], captures[2], wascmp)
 || bitwise_inverted_equal_p (captures[1], captures[2], wascmp)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail809;
	  {
	    tree _r;
	    _r =  wascmp ? constant_boolean_node (false, type) : build_zero_cst (type);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (TREE_SIDE_EFFECTS (captures[1]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 663, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail809:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_476 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail842;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail842;
      {
	tree _r;
	_r =  constant_boolean_node (false, type);
	if (TREE_SIDE_EFFECTS (captures[2]))
	  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail842:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail843;
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail843;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail843;
	  {
	    tree _r;
	    _r = captures[0];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail843:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_484 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail863;
  {
    tree res_op0;
    res_op0 = captures[1];
    tree res_op1;
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[3];
      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      if (EXPR_P (_r1))
        goto next_after_fail863;
      res_op1 = _r1;
    }
    tree _r;
    _r = fold_build2_loc (loc, MULT_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 688, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail863:;
  return NULL_TREE;
}

tree
generic_simplify_489 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[3])
 && tree_fits_uhwi_p (captures[4])
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
 unsigned HOST_WIDE_INT bits = tree_to_uhwi (captures[3]);
 unsigned HOST_WIDE_INT mask = tree_to_uhwi (captures[4]);
 unsigned HOST_WIDE_INT lo = bits & 7;
 unsigned HOST_WIDE_INT hi = bits - lo;
	  if (bits < prec
 && mask < (256u>>lo)
 && bits < TYPE_PRECISION (TREE_TYPE(captures[0]))
)
	    {
	      {
 unsigned HOST_WIDE_INT ns = (prec - (hi + 8)) + lo;
		  if (ns == 0
)
		    {
		      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail876;
		      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail876;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail876;
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
			res_op1 = captures[4];
			tree _r;
			_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 692, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail876:;
		    }
		  else
		    {
		      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
 tree nst = build_int_cst (integer_type_node, ns);
			  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail877;
			  if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail877;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail877;
			  {
			    tree res_op0;
			    {
			      tree _o1[1], _r1;
			      {
				tree _o2[2], _r2;
				{
				  tree _o3[1], _r3;
				  _o3[0] = captures[2];
				  if (TREE_TYPE (_o3[0]) != utype)
				    {
				      _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
				    }
				  else
				    _r3 = _o3[0];
				  _o2[0] = _r3;
				}
				_o2[1] = nst;
				_r2 = fold_build2_loc (loc, RSHIFT_EXPR, utype, _o2[0], _o2[1]);
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
			    res_op1 = captures[4];
			    tree _r;
			    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 693, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail877:;
		      }
		    }
	      }
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_491 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail879;
  {
    tree res_op0;
    res_op0 = captures[0];
    tree res_op1;
    res_op1 = captures[1];
    tree _r;
    _r = fold_build2_loc (loc, LTGT_EXPR, type, res_op0, res_op1);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 695, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail879:;
  return NULL_TREE;
}

tree
generic_simplify_492 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail880;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail880;
  {
    tree _r;
    _r = captures[1];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail880:;
  return NULL_TREE;
}

tree
generic_simplify_494 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && type_has_mode_precision_p (TREE_TYPE (captures[2]))
 && type_has_mode_precision_p (TREE_TYPE (captures[4]))
 && type_has_mode_precision_p (type)
 && TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (TREE_TYPE (captures[2]))
 && types_match (captures[2], captures[4])
 && (tree_int_cst_min_precision (captures[5], TYPE_SIGN (TREE_TYPE (captures[2])))
 <= TYPE_PRECISION (TREE_TYPE (captures[2])))
 && (wi::to_wide (captures[5])
 & wi::mask (TYPE_PRECISION (TREE_TYPE (captures[2])),
 true, TYPE_PRECISION (type))) == 0
)
    {
      if (TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[2]))
)
	{
	  {
 tree ntype = TREE_TYPE (captures[2]);
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[2];
		    _o2[1] = captures[4];
		    _r2 = fold_build2_loc (loc, op, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[5];
		    if (TREE_TYPE (_o2[0]) != ntype)
		      {
			_r2 = fold_build1_loc (loc, NOP_EXPR, ntype, _o2[0]);
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
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 697, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail882:;
	  }
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail883;
	      {
		tree res_op0;
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[2], _r2;
		    {
		      tree _o3[1], _r3;
		      _o3[0] = captures[2];
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
		      _o3[0] = captures[4];
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
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 698, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail883:;
	  }
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_525 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED(type)
)
    {
      if (minmax == MIN_EXPR
)
	{
	  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail917;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail917;
	  {
	    tree _r;
	    _r = captures[1];
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 729, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail917:;
	}
      else
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail918;
	  {
	    tree _r;
	    _r = captures[0];
	    if (TREE_SIDE_EFFECTS (captures[2]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 730, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail918:;
	}
    }
  return NULL_TREE;
}

tree
generic_simplify_534 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_signaling_nan_p (captures[0])
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail939;
      {
	tree _r;
	_r = captures[0];
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 739, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail939:;
    }
  return NULL_TREE;
}

tree
generic_simplify_539 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail944;
  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail944;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail944;
  {
    tree _r;
    _r = captures[2];
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 523, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail944:;
  return NULL_TREE;
}

tree
generic_simplify_545 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[4]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail950;
	  {
	    tree res_op0;
	    {
	      tree _o1[5], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      _o1[3] = captures[3];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[5];
		if (TREE_TYPE (_o2[0]) != op_type)
		  {
		    _r2 = fold_build1_loc (loc, VIEW_CONVERT_EXPR, op_type, _o2[0]);
		  }
		else
		  _r2 = _o2[0];
		_o1[4] = _r2;
	      }
	      _r1 = maybe_build_call_expr_loc (loc, cond_op, TREE_TYPE (_o1[1]), 5, _o1[0], _o1[1], _o1[2], _o1[3], _o1[4]);
	      if (!_r1)
	        goto next_after_fail950;
	      res_op0 = _r1;
	    }
	    tree _r;
	    _r = fold_build1_loc (loc, VIEW_CONVERT_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[4]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[4]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 745, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail950:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_554 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rotate),
 const enum tree_code ARG_UNUSED (orotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 auto prec = element_precision (TREE_TYPE (captures[0]));
      if (prec == wi::to_wide (captures[2])
)
	{
	  if (expr_not_equal_to (captures[3], wi::uhwi (prec,
 TYPE_PRECISION (TREE_TYPE (captures[3]))),
 gimple_match_ctx (captures[1]))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail959;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree _r;
		_r = fold_build2_loc (loc, orotate, type, res_op0, res_op1);
		if (TREE_SIDE_EFFECTS (captures[2]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 754, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail959:;
	    }
	  else
	    {
	      if (single_use (captures[1])
 && pow2p_hwi (prec)
 && cfun
 && (fold_before_rtl_expansion_p ()
 || !flag_tree_vrp
 || optimize_debug)
)
		{
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail960;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree res_op1;
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[3];
		      _o1[1] =  build_int_cst (TREE_TYPE (captures[3]), prec - 1);
		      _r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      res_op1 = _r1;
		    }
		    tree _r;
		    _r = fold_build2_loc (loc, orotate, type, res_op0, res_op1);
		    if (TREE_SIDE_EFFECTS (captures[2]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 755, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail960:;
		}
	    }
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_576 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail984;
  {
    tree _r;
    _r = captures[0];
    if (TREE_SIDE_EFFECTS (captures[1]))
      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 779, __FILE__, __LINE__, true);
    return _r;
  }
next_after_fail984:;
  return NULL_TREE;
}

tree
generic_simplify_581 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail989;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, FIX_TRUNC_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail989:;
    }
  return NULL_TREE;
}

tree
generic_simplify_589 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail997;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree res_op1;
	res_op1 = captures[1];
	tree res_op2;
	res_op2 = captures[2];
	tree _r;
	_r = maybe_build_call_expr_loc (loc, CFN_FMS, type, 3, res_op0, res_op1, res_op2);
	if (!_r)
	  goto next_after_fail997;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 792, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail997:;
    }
  return NULL_TREE;
}

tree
generic_simplify_599 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree ARG_UNUSED (_p1), tree ARG_UNUSED (_p2), tree ARG_UNUSED (_p3), tree ARG_UNUSED (_p4), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1007;
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
	_r = maybe_build_call_expr_loc (loc, CFN_COND_FNMA, type, 5, res_op0, res_op1, res_op2, res_op3, res_op4);
	if (!_r)
	  goto next_after_fail1007;
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 802, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1007:;
    }
  return NULL_TREE;
}

tree
generic_simplify_609 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
0
 || !TREE_SIDE_EFFECTS (captures[3]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
 tree type1 = TREE_TYPE (captures[1]);
 unsigned int prec0 = TYPE_PRECISION (type0);
 unsigned int prec1 = TYPE_PRECISION (type1);
	  if (prec0 == prec1 || (prec0 > prec1 && TYPE_UNSIGNED (type1))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1017;
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
		_r = maybe_build_call_expr_loc (loc, popcount, type, 1, res_op0);
		if (!_r)
		  goto next_after_fail1017;
		if (TREE_SIDE_EFFECTS (captures[3]))
		  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[3]), _r);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 809, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1017:;
	    }
      }
    }
  return NULL_TREE;
}

tree
generic_simplify_620 (location_t ARG_UNUSED (loc), const tree ARG_UNUSED (type),
 tree ARG_UNUSED (_p0), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (reduc))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctor = (TREE_CODE (captures[0]) == SSA_NAME
 ? gimple_assign_rhs1 (SSA_NAME_DEF_STMT (captures[0])) : captures[0]);
 tree elt = ctor_single_nonzero_element (ctor);
      if (elt
 && types_match (type, TREE_TYPE (elt))
 && !HONOR_SNANS (type)
 && !HONOR_SIGNED_ZEROS (type)
)
	{
	  if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1029;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1029;
	  {
	    tree _r;
	    _r =  elt;
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 817, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1029:;
	}
  }
  return NULL_TREE;
}

tree
generic_simplify_FLOAT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0)
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
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1096;
	{
	  tree _r;
	  _r = captures[0];
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 831, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1096:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1097;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1097:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1098;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1098:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1099;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1099:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1100;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1100:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1101;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1101:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1102;
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
next_after_fail1102:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1103;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1103:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1104;
		  {
		    tree res_op0;
		    res_op0 = captures[1];
		    tree _r;
		    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 832, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1104:;
		}
	      else
		{
		  if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
		    {
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1105;
		      {
			tree res_op0;
			res_op0 = captures[1];
			tree _r;
			_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
			return _r;
		      }
next_after_fail1105:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1106;
			  {
			    tree res_op0;
			    res_op0 = captures[1];
			    tree _r;
			    _r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 834, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1106:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1107;
			      {
				tree res_op0;
				res_op0 = captures[1];
				tree _r;
				_r = fold_build1_loc (loc, FLOAT_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 835, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1107:;
			    }
			  else
			    {
			      if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1108;
				  {
				    tree res_op0;
				    res_op0 = captures[1];
				    tree _r;
				    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1108:;
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
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1109;
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
next_after_fail1109:;
				    }
				  else
				    {
				      if (0
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1110;
					  {
					    tree res_op0;
					    res_op0 = captures[1];
					    tree _r;
					    _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 838, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1110:;
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
generic_simplify_MINUS_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1264;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1264;
	{
	  tree res_op0;
	  res_op0 = captures[0];
	  tree _r;
	  _r = non_lvalue_loc (loc, res_op0);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 883, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1264:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (fold_real_zero_addition_p (type, captures[0], captures[1], 1)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1265;
	    {
	      tree res_op0;
	      res_op0 = captures[0];
	      tree _r;
	      _r = non_lvalue_loc (loc, res_op0);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 908, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1265:;
	  }
      }
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_53 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR);
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_53 (loc, type, _p0, _p1, captures, MINUS_EXPR, MINUS_EXPR);
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (!FLOAT_TYPE_P (type)
 || (!tree_expr_maybe_nan_p (captures[0])
 && !tree_expr_maybe_infinite_p (captures[0])
 && (!HONOR_SIGN_DEPENDENT_ROUNDING (type)
 || !HONOR_SIGNED_ZEROS (type)))
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1266;
	    {
	      tree _r;
	      _r =  build_zero_cst (type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 909, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1266:;
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case MULT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    switch (TREE_CODE (_q50))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_q50, 0);
			  tree _q61 = TREE_OPERAND (_q50, 1);
			  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
			    {
			      if ((_q51 == _q61 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q61, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q61 };
				    tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
				    if (res) return res;
				  }
			        }
			    }
		          break;
		        }
		      default:;
		      }
		    switch (TREE_CODE (_q51))
		      {
		      case TRUNC_DIV_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q51, 0);
			  tree _q71 = TREE_OPERAND (_q51, 1);
			  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q20, 0))
			    {
			      if ((_q71 == _q50 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q50, 0))
				{
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q71, _q20, _q50 };
				    tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q20, _q51 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q40 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case MULT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		      {
			if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q51 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
	        }
	      switch (TREE_CODE (_q41))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_q41, 0);
		    tree _q61 = TREE_OPERAND (_q41, 1);
		    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _p0, 0))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _p0, _q40 };
			      tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _q41, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _p0, _q41 };
			tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q31))
	  {
	  case TRUNC_DIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_q31, 0);
	      tree _q51 = TREE_OPERAND (_q31, 1);
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
		{
		  if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q30, 0))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q30 };
			tree res = generic_simplify_84 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      tree _q41 = TREE_OPERAND (_q21, 1);
	      switch (TREE_CODE (_q40))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		      {
			if (integer_onep (_q41))
			  {
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q50 };
				  tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case TRUNC_DIV_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    if (integer_onep (_q31))
		      {
			if ((_q21 == _q41 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q41, 0) && types_match (_q21, _q41)))
			  {
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q20, _q30, _q40 };
				  tree res = generic_simplify_85 (loc, type, _p0, _p1, captures);
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
		    tree res = generic_simplify_55 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
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
	switch (TREE_CODE (_q21))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q21, 0);
	      switch (TREE_CODE (_p1))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
			      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
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
		case BIT_AND_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    tree _q61 = TREE_OPERAND (_p1, 1);
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
		      {
			if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
			      tree res = generic_simplify_86 (loc, type, _p0, _p1, captures);
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
	  case INTEGER_CST:
	    {
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				if (~wi::to_wide (captures[2]) == wi::to_wide (captures[4])
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1267;
				    {
				      if (! tree_invariant_p (captures[4])) goto next_after_fail1267;
				      tree res_op0;
				      {
					tree _o1[2], _r1;
					_o1[0] = captures[1];
					_o1[1] = unshare_expr (captures[4]);
					_r1 = fold_build2_loc (loc, BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op0 = _r1;
				      }
				      tree res_op1;
				      res_op1 = captures[4];
				      tree _r;
				      _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
				      if (TREE_SIDE_EFFECTS (captures[2]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1267:;
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
			      if (res) return res;
			    }
			  }
		      }
		    break;
		  }
	        default:;
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
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
			      tree res = generic_simplify_87 (loc, type, _p0, _p1, captures);
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
	  case PLUS_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
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
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
		      }
		    if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
		      {
			if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			  {
			    if (integer_onep (_q51))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
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
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q51))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
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
          default:;
          }
      {
	tree _p1_pops[1];
	if (tree_nop_convert (_p1, _p1_pops))
	  {
	    tree _q50 = _p1_pops[0];
	    switch (TREE_CODE (_q50))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_q50, 0);
		  tree _q61 = TREE_OPERAND (_q50, 1);
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
			  {
			    if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
			  {
			    if ((_q71 == _q20 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q20, 0) && types_match (_q71, _q20)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
		{
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
			      {
				if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q21 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q21, 0) && types_match (_q80, _q21)))
			      {
				if ((_q81 == _q20 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q20, 0) && types_match (_q81, _q20)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
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
	      default:;
	      }
	  }
      }
        break;
      }
    case BIT_NOT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		if (!TYPE_OVERFLOW_SANITIZED (type)
)
		  {
		    {
 tree utype = unsigned_type_for (type);
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1268;
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
			      _o2[0] = captures[0];
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
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1268:;
		    }
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
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1269;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 912, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1269:;
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1270;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, BIT_IOR_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 913, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1270:;
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_all_onesp (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			tree _q71 = TREE_OPERAND (_p1, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				  if (res) return res;
				}
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
		      tree _q70 = _p1_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
		    }
	          break;
	        }
	      default:;
	      }
	  }
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_90 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	switch (TREE_CODE (_p1))
	  {
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1271;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 914, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1271:;
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1272;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 915, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1272:;
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q30))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (_q30, 0);
		  tree _q41 = TREE_OPERAND (_q30, 1);
		  if (integer_all_onesp (_q31))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_p1, 0);
			    tree _q81 = TREE_OPERAND (_p1, 1);
			    if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
			      {
				if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			    if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
			      {
				if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
				      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
			  tree _q80 = _p1_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
				  {
				    if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
				  {
				    if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
		  case BIT_AND_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_q40, 0);
		      tree _q51 = TREE_OPERAND (_q40, 1);
		      if (integer_all_onesp (_q31))
			{
			  switch (TREE_CODE (_p1))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_p1, 0);
				tree _q91 = TREE_OPERAND (_p1, 1);
				if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
				  {
				    if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
				if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
				  {
				    if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					  tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
			      tree _q90 = _p1_pops[0];
			      switch (TREE_CODE (_q90))
			        {
				case BIT_IOR_EXPR:
				  {
				    tree _q100 = TREE_OPERAND (_q90, 0);
				    tree _q101 = TREE_OPERAND (_q90, 1);
				    if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
				      {
					if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
					      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				    if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
				      {
					if ((_q101 == _q50 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q50, 0) && types_match (_q101, _q50)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
					      tree res = generic_simplify_89 (loc, type, _p0, _p1, captures);
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
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	    break;
	  }
	case BIT_AND_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p1, 0);
		  tree _q61 = TREE_OPERAND (_p1, 1);
		  switch (TREE_CODE (_q60))
		    {
		    case BIT_IOR_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_q60, 0);
			tree _q71 = TREE_OPERAND (_q60, 1);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
			if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
			  {
			    if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
			      {
				if (integer_onep (_q61))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		        break;
		      }
		    default:;
		    }
		{
		  tree _q60_pops[1];
		  if (tree_nop_convert (_q60, _q60_pops))
		    {
		      tree _q70 = _q60_pops[0];
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q61))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
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
	      default:;
	      }
	  {
	    tree _p1_pops[1];
	    if (tree_nop_convert (_p1, _p1_pops))
	      {
		tree _q60 = _p1_pops[0];
		switch (TREE_CODE (_q60))
		  {
		  case PLUS_EXPR:
		    {
		      tree _q70 = TREE_OPERAND (_q60, 0);
		      tree _q71 = TREE_OPERAND (_q60, 1);
		      switch (TREE_CODE (_q70))
		        {
			case BIT_IOR_EXPR:
			  {
			    tree _q80 = TREE_OPERAND (_q70, 0);
			    tree _q81 = TREE_OPERAND (_q70, 1);
			    if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
			      {
				if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
			      {
				if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
				  {
				    if (integer_onep (_q71))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					  tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			    break;
			  }
		        default:;
		        }
		    {
		      tree _q70_pops[1];
		      if (tree_nop_convert (_q70, _q70_pops))
		        {
			  tree _q80 = _q70_pops[0];
			  switch (TREE_CODE (_q80))
			    {
			    case BIT_IOR_EXPR:
			      {
				tree _q90 = TREE_OPERAND (_q80, 0);
				tree _q91 = TREE_OPERAND (_q80, 1);
				if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
				  {
				    if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
					      if (res) return res;
					    }
					  }
				      }
				  }
				if ((_q90 == _q31 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q31, 0) && types_match (_q90, _q31)))
				  {
				    if ((_q91 == _q30 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q30, 0) && types_match (_q91, _q30)))
				      {
					if (integer_onep (_q71))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
					      tree res = generic_simplify_88 (loc, type, _p0, _p1, captures);
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
  if (tree_negate_expr_p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (!FIXED_POINT_TYPE_P (type)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1273;
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
	      _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 916, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1273:;
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case BIT_AND_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p1, _q40, _q51, _q20 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[5] ATTRIBUTE_UNUSED = { _q51, _p1, _q40, _q50, _q20 };
			  tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
			  if (res) return res;
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
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      tree _q41 = TREE_OPERAND (_p1, 1);
	      if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _p1, _q41, _q20 };
		    tree res = generic_simplify_92 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _p1, _q40, _q20 };
		    tree res = generic_simplify_92 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
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
		CASE_CONVERT:
		  {
		    tree _q40 = TREE_OPERAND (_p1, 0);
		    switch (TREE_CODE (_q40))
		      {
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q50 = TREE_OPERAND (_q40, 0);
			  tree _q51 = TREE_OPERAND (_q40, 1);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[1], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1274;
					{
					  tree res_op0;
					  res_op0 =  build_int_cst_type (type, diff);
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
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 917, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1274:;
				      }
				}
			      }
			  }
		          break;
		        }
		      default:;
		      }
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1275;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 918, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1275:;
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
	  case POINTER_PLUS_EXPR:
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
		      case ADDR_EXPR:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
			    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			      {
				{
 poly_int64 diff;
				    if (ptr_difference_const (captures[0], captures[2], &diff)
)
				      {
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
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
					  res_op1 =  build_int_cst_type (type, diff);
					  tree _r;
					  _r = fold_build2_loc (loc, PLUS_EXPR, type, res_op0, res_op1);
					  if (TREE_SIDE_EFFECTS (captures[0]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
					  if (TREE_SIDE_EFFECTS (captures[2]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 919, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1276:;
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		      if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
			{
			  {
 poly_int64 diff;
			      if (ptr_difference_const (captures[0], captures[1], &diff)
)
				{
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1277;
				  {
				    tree _r;
				    _r =  build_int_cst_type (type, diff);
				    if (TREE_SIDE_EFFECTS (captures[0]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 920, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1277:;
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
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case SSA_NAME:
        {
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (INTEGRAL_TYPE_P (type)
 && ssa_name_has_boolean_range (captures[1])
)
	      {
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1278;
		{
		  tree res_op0;
		  res_op0 = captures[1];
		  tree res_op1;
		  res_op1 = captures[0];
		  tree _r;
		  _r = fold_build2_loc (loc, BIT_XOR_EXPR, type, res_op0, res_op1);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 921, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1278:;
	      }
	  }
          break;
        }
      default:;
      }
  }
  switch (TREE_CODE (_p1))
    {
    CASE_CONVERT:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _q30, _q41, _p0 };
		    tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
		    tree res = generic_simplify_91 (loc, type, _p0, _p1, captures);
		    if (res) return res;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q30, _p1, _p1, _q31, _p0 };
	      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
	  {
	    {
	      tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
	      tree res = generic_simplify_92 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1279;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1279:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1280;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1280:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1281;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1281:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1282;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 922, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1282:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1283;
			{
			  tree res_op0;
			  res_op0 = captures[0];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 923, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1283:;
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1284;
			{
			  tree res_op0;
			  res_op0 = captures[2];
			  tree res_op1;
			  res_op1 = captures[1];
			  tree _r;
			  _r = fold_build2_loc (loc, MINUS_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[0]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 924, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1284:;
		      }
		  }
	        }
	      break;
	    }
          default:;
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
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1285;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  res_op1 = captures[3];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[2]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 925, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1285:;
		      }
		  }
	        }
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1286;
			{
			  tree res_op0;
			  res_op0 = captures[3];
			  tree res_op1;
			  res_op1 = captures[2];
			  tree _r;
			  _r = fold_build2_loc (loc, POINTER_DIFF_EXPR, type, res_op0, res_op1);
			  if (TREE_SIDE_EFFECTS (captures[1]))
			    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 926, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1286:;
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
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
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
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	  tree res = generic_simplify_93 (loc, type, _p0, _p1, captures);
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
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q21_pops[1];
	  if (tree_nop_convert (_q21, _q21_pops))
	    {
	      tree _q40 = _q21_pops[0];
	      if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
		    tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	{
	  tree _q20_pops[1];
	  if (tree_nop_convert (_q20, _q20_pops))
	    {
	      tree _q30 = _q20_pops[0];
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
		    tree res = generic_simplify_95 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_95 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q31_pops[1];
	      if (tree_nop_convert (_q31, _q31_pops))
	        {
		  tree _q50 = _q31_pops[0];
		  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
			tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
		  tree res = generic_simplify_94 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    {
	      tree _q30_pops[1];
	      if (tree_nop_convert (_q30, _q30_pops))
	        {
		  tree _q40 = _q30_pops[0];
		  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
			tree res = generic_simplify_95 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
		  tree res = generic_simplify_95 (loc, type, _p0, _p1, captures);
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
    case PLUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	{
	  tree _q31_pops[1];
	  if (tree_nop_convert (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
	      tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q30_pops[1];
	  if (tree_nop_convert (_q30, _q30_pops))
	    {
	      tree _q40 = _q30_pops[0];
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
		    tree res = generic_simplify_97 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	    }
	}
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
	      tree res = generic_simplify_97 (loc, type, _p0, _p1, captures);
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
	    {
	      tree _q40_pops[1];
	      if (tree_nop_convert (_q40, _q40_pops))
	        {
		  tree _q50 = _q40_pops[0];
		  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    {
	      tree _q41_pops[1];
	      if (tree_nop_convert (_q41, _q41_pops))
	        {
		  tree _q60 = _q41_pops[0];
		  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
		  tree res = generic_simplify_96 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	    break;
	  }
	case MINUS_EXPR:
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
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			tree res = generic_simplify_97 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	    }
	    if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	      {
		{
		  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
		  tree res = generic_simplify_97 (loc, type, _p0, _p1, captures);
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
    case PLUS_EXPR:
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
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
		    tree res = generic_simplify_98 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case MINUS_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (CONSTANT_CLASS_P (_q21))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		  if (res) return res;
		}
	      }
	  }
	if (CONSTANT_CLASS_P (_q20))
	  {
	    if (CONSTANT_CLASS_P (_p1))
	      {
		{
		  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		  tree res = generic_simplify_62 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
		tree res = generic_simplify_66 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		if (res) return res;
	      }
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_q20))
	  {
	  case NEGATE_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      if (integer_each_onep (_p1))
		{
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
		    tree res = generic_simplify_100 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
			  tree res = generic_simplify_101 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
		    tree res = generic_simplify_101 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
		    tree res = generic_simplify_101 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
	  case POINTER_PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q60 = TREE_OPERAND (_p1, 0);
		    if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
			  if (!TYPE_SATURATING (type)
)
			    {
			      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
				{
				  if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
				    {
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1287;
				      {
					tree res_op0;
					res_op0 = captures[1];
					tree _r;
					_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					if (TREE_SIDE_EFFECTS (captures[2]))
					  _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 927, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1287:;
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
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
			  tree res = generic_simplify_102 (loc, type, _p0, _p1, captures);
			  if (res) return res;
			}
		      }
		    if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
			  tree res = generic_simplify_102 (loc, type, _p0, _p1, captures);
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
    case NEGATE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	if (integer_each_onep (_p1))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
	      tree res = generic_simplify_100 (loc, type, _p0, _p1, captures);
	      if (res) return res;
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
	case PLUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    break;
	  }
	case MINUS_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    if (CONSTANT_CLASS_P (_q31))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_61 (loc, type, _p0, _p1, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR);
		      if (res) return res;
		    }
		  }
	      }
	    if (CONSTANT_CLASS_P (_q30))
	      {
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
		      tree res = generic_simplify_62 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
if (CONSTANT_CLASS_P (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
	  if (CONSTANT_CLASS_P (_q30))
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		tree res = generic_simplify_99 (loc, type, _p0, _p1, captures);
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
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if (CONSTANT_CLASS_P (_q40))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
		    tree res = generic_simplify_99 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
      }
  }
  }
if (integer_all_onesp (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (!TYPE_SATURATING (type)
)
	{
	  if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	    {
	      if (TREE_CODE (type) != COMPLEX_TYPE
)
		{
		  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1288;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1288;
		  {
		    tree res_op0;
		    res_op0 = captures[0];
		    tree _r;
		    _r = fold_build1_loc (loc, BIT_NOT_EXPR, type, res_op0);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 928, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1288:;
		}
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
	  case PLUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures);
		    if (res) return res;
		  }
	        }
	      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
		    tree res = generic_simplify_102 (loc, type, _p0, _p1, captures);
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
	switch (TREE_CODE (_p1))
	  {
	  CASE_CONVERT:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      switch (TREE_CODE (_q40))
	        {
		case POINTER_PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_q40, 0);
		    tree _q51 = TREE_OPERAND (_q40, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1289;
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 929, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1289:;
				      }
				    }
				  else
				    {
				      if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0)
)
					{
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1290;
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
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 930, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1290:;
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
	switch (TREE_CODE (_q20))
	  {
	  case PLUS_EXPR:
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
		      case PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
				tree res = generic_simplify_103 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
				tree res = generic_simplify_103 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
				tree res = generic_simplify_103 (loc, type, _p0, _p1, captures);
				if (res) return res;
			      }
			    }
			  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
				tree res = generic_simplify_103 (loc, type, _p0, _p1, captures);
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
	  case POINTER_PLUS_EXPR:
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
		      case POINTER_PLUS_EXPR:
		        {
			  tree _q70 = TREE_OPERAND (_q60, 0);
			  tree _q71 = TREE_OPERAND (_q60, 1);
			  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
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
)
					  {
					    {
 tree utype = unsigned_type_for (type);
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1291;
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
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 931, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1291:;
					    }
					  }
					else
					  {
					    if (element_precision (type) <= element_precision (TREE_TYPE (captures[1]))
 || (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && TREE_CODE (captures[1]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[1]) == 0
 && TREE_CODE (captures[2]) == INTEGER_CST
 && tree_int_cst_sign_bit (captures[2]) == 0)
)
					      {
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1292;
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
						  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 932, __FILE__, __LINE__, true);
						  return _r;
						}
next_after_fail1292:;
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
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, MINUS_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_69 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
    case MULT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
	      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
	      tree res = generic_simplify_70 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MULT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_71 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_71 (loc, type, _p0, _p1, captures, MINUS_EXPR);
	      if (res) return res;
	    }
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
	switch (TREE_CODE (_q30))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  if (tree_zero_one_valued_p (_q31))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
			tree res = generic_simplify_104 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      break;
	    }
          default:;
          }
      if (tree_zero_one_valued_p (_q30))
	{
	  switch (TREE_CODE (_q31))
	    {
	    case MINUS_EXPR:
	      {
		tree _q50 = TREE_OPERAND (_q31, 0);
		tree _q51 = TREE_OPERAND (_q31, 1);
		if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
		      tree res = generic_simplify_104 (loc, type, _p0, _p1, captures);
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1293;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1293;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1293;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1293:;
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1294;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1294;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1294;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1294;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1294:;
	    }
	}
        break;
      }
    default:;
    }
if (integer_zerop (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1295;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1295;
      {
	tree res_op0;
	res_op0 = captures[0];
	tree _r;
	_r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 933, __FILE__, __LINE__, true);
	return _r;
      }
next_after_fail1295:;
    }
  }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (fold_real_zero_addition_p (type, captures[1], captures[0], 0)
)
	{
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1296;
	  {
	    tree res_op0;
	    res_op0 = captures[1];
	    tree _r;
	    _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
	    if (TREE_SIDE_EFFECTS (captures[0]))
	      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 934, __FILE__, __LINE__, true);
	    return _r;
	  }
next_after_fail1296:;
	}
    }
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1297;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1297;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MINUS_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1297;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1297:;
	    }
	}
	if (integer_each_onep (_q31))
	  {
	    if (integer_zerop (_q32))
	      {
		{
		  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		  tree res = generic_simplify_105 (loc, type, _p0, _p1, captures);
		  if (res) return res;
		}
	      }
	  }
        break;
      }
    case VIEW_CONVERT_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	switch (TREE_CODE (_q30))
	  {
	  case VEC_COND_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      tree _q42 = TREE_OPERAND (_q30, 2);
	      if (integer_each_onep (_q41))
		{
		  if (integer_zerop (_q42))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
			tree res = generic_simplify_105 (loc, type, _p0, _p1, captures);
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
  switch (TREE_CODE (_p0))
    {
    case RDIV_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_p1))
	  {
	  case RDIV_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
		    tree res = generic_simplify_77 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTLL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTLL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL);
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
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_POPCOUNT:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_POPCOUNT:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTIMAX:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTIMAX:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX);
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
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    switch (TREE_CODE (_q21))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q21))
		          {
			  case CFN_BUILT_IN_POPCOUNTL:
			    if (call_expr_nargs (_q21) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q21, 0);
				switch (TREE_CODE (_p1))
				  {
				  case CALL_EXPR:
				    switch (get_call_combined_fn (_p1))
				      {
				      case CFN_BUILT_IN_POPCOUNTL:
				        if (call_expr_nargs (_p1) == 1)
    {
					    tree _q70 = CALL_EXPR_ARG (_p1, 0);
					    switch (TREE_CODE (_q70))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
					          break;
					        }
					      case BIT_IOR_EXPR:
					        {
						  tree _q80 = TREE_OPERAND (_q70, 0);
						  tree _q81 = TREE_OPERAND (_q70, 1);
						  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
						    {
						      if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
							    if (res) return res;
							  }
						        }
						    }
						  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
						    {
						      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
							{
							  {
							    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
							    tree res = generic_simplify_107 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL);
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
	          }
	        break;
	      default:;
	      }
	    break;
          default:;
          }
        break;
      }
    case VEC_PERM_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	tree _q22 = TREE_OPERAND (_p0, 2);
	switch (TREE_CODE (_q20))
	  {
	  case MULT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (tree_vec_same_elem_p (_q31))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
			tree res = generic_simplify_108 (loc, type, _p0, _p1, captures);
			if (res) return res;
		      }
		    }
	        }
	      if (tree_vec_same_elem_p (_q30))
		{
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      {
			tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
			tree res = generic_simplify_108 (loc, type, _p0, _p1, captures);
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
    case CALL_EXPR:
      switch (get_call_combined_fn (_p0))
        {
	case CFN_BUILT_IN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG);
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
	case CFN_BUILT_IN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2);
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
	case CFN_BUILT_IN_LOGF:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGF:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGF);
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
	case CFN_BUILT_IN_LOGL:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOGL:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOGL);
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
	case CFN_BUILT_IN_LOG10F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10F);
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
	case CFN_BUILT_IN_LOG10L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10L);
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
	case CFN_LOG:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_LOG);
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
	case CFN_LOG2:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG2:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_LOG2);
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
	case CFN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_LOG10);
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
	case CFN_BUILT_IN_LOG10:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG10:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG10);
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
	case CFN_BUILT_IN_LOG2F:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2F:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2F);
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
	case CFN_BUILT_IN_LOG2L:
	  if (call_expr_nargs (_p0) == 1)
    {
	      tree _q20 = CALL_EXPR_ARG (_p0, 0);
	      switch (TREE_CODE (_p1))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_p1))
		    {
		    case CFN_BUILT_IN_LOG2L:
		      if (call_expr_nargs (_p1) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_p1, 0);
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_106 (loc, type, _p0, _p1, captures, CFN_BUILT_IN_LOG2L);
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
    case BIT_AND_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	switch (TREE_CODE (_q30))
	  {
	  case MAX_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_q30, 0);
	      tree _q41 = TREE_OPERAND (_q30, 1);
	      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
		{
		  switch (TREE_CODE (_q41))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_q31))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
				{
 auto i = wi::neg (wi::to_wide (captures[2]));
				    if (wi::popcount (i) == 1
 && (wi::to_wide (captures[1])) == (i - 1)
)
				      {
					if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1298;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1298;
					    {
					      tree res_op0;
					      res_op0 = captures[0];
					      tree res_op1;
					      res_op1 = captures[1];
					      tree _r;
					      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 935, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1298:;
					  }
					else
					  {
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1299;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1299;
					    {
					      if (! tree_invariant_p (captures[0])) goto next_after_fail1299;
					      if (! tree_invariant_p (captures[1])) goto next_after_fail1299;
					      tree res_op0;
					      {
						tree _o1[2], _r1;
						_o1[0] = unshare_expr (captures[0]);
						_o1[1] = unshare_expr (captures[1]);
						_r1 = fold_build2_loc (loc, LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
						res_op0 = _r1;
					      }
					      tree res_op1;
					      res_op1 = unshare_expr (captures[0]);
					      tree res_op2;
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[0];
						_o1[1] = captures[1];
						_r1 = fold_build2_loc (loc, BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						res_op2 = _r1;
					      }
					      tree _r;
					      _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 936, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1299:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1300;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1300:;
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
					tree res = generic_simplify_83 (loc, type, _p0, _p1, captures, MINUS_EXPR);
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
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_LSHIFT_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case TRUNC_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_415 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, TRUNC_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    case FLOOR_MOD_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	{
	  tree _q31_pops[1];
	  if (tree_power_of_two_cand (_q31, _q31_pops))
	    {
	      tree _q50 = _q31_pops[0];
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q50 };
		tree res = generic_simplify_415 (loc, type, _p0, _p1, captures, LSHIFT_EXPR, FLOOR_MOD_EXPR);
		if (res) return res;
	      }
	    }
	}
        break;
      }
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      tree res = generic_simplify_416 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
      if (res) return res;
    }
  }
  switch (TREE_CODE (_p0))
    {
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case LT_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_zerop (_q31))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
			  if (TYPE_SIGN (TREE_TYPE (captures[0])) == SIGNED
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (TREE_TYPE (captures[0])) - 1)
)
			    {
			      {
 wide_int wone = wi::one (TYPE_PRECISION (type));
				  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1651;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1651;
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
				    res_op1 =  wide_int_to_tree (type,
 wi::lshift (wone, wi::to_wide (captures[2])));
				    tree _r;
				    _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				    if (TREE_SIDE_EFFECTS (captures[1]))
				      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1001, __FILE__, __LINE__, true);
				    return _r;
				  }
next_after_fail1651:;
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
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q30))
	        {
		case RSHIFT_EXPR:
		  {
		    tree _q40 = TREE_OPERAND (_q30, 0);
		    tree _q41 = TREE_OPERAND (_q30, 1);
		    switch (TREE_CODE (_q41))
		      {
		      case INTEGER_CST:
		        {
			  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
				if (wi::ltu_p (wi::to_wide (captures[2]), element_precision (type))
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (type) == TYPE_PRECISION (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (TREE_TYPE (captures[0])) >= TYPE_PRECISION (type)
 || wi::geu_p (wi::to_wide (captures[2]),
 TYPE_PRECISION (type)
 - TYPE_PRECISION (TREE_TYPE (captures[0]))))
)
				  {
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1652;
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
					tree _o1[2], _r1;
					_o1[0] =  build_minus_one_cst (type);
					_o1[1] = captures[2];
					_r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					res_op1 = _r1;
				      }
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1002, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1652:;
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
    case RSHIFT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		{
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    tree res = generic_simplify_417 (loc, type, _p0, _p1, captures);
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
	case RSHIFT_EXPR:
	  {
	    tree _q30 = TREE_OPERAND (_q20, 0);
	    tree _q31 = TREE_OPERAND (_q20, 1);
	    switch (TREE_CODE (_q31))
	      {
	      case INTEGER_CST:
	        {
		  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			tree res = generic_simplify_417 (loc, type, _p0, _p1, captures);
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
    }
}
if (integer_onep (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case MINUS_EXPR:
        {
	  tree _q30 = TREE_OPERAND (_p1, 0);
	  tree _q31 = TREE_OPERAND (_p1, 1);
	  switch (TREE_CODE (_q30))
	    {
	    case INTEGER_CST:
	      {
		{
		  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
		  if (INTEGRAL_TYPE_P (type)
 && wi::eq_p (wi::to_wide (captures[2]), TYPE_PRECISION (type) - 1)
 && single_use (captures[1])
)
		    {
		      if (TYPE_UNSIGNED (type)
)
			{
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1653;
			  {
			    tree res_op0;
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[2];
			      _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      res_op0 = _r1;
			    }
			    tree res_op1;
			    res_op1 = captures[3];
			    tree _r;
			    _r = fold_build2_loc (loc, RSHIFT_EXPR, type, res_op0, res_op1);
			    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			    return _r;
			  }
next_after_fail1653:;
			}
		      else
			{
			  {
 tree utype = unsigned_type_for (type);
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1654;
			      {
				tree res_op0;
				{
				  tree _o1[2], _r1;
				  {
				    tree _o2[2], _r2;
				    {
				      tree _o3[1], _r3;
				      _o3[0] = captures[0];
				      if (TREE_TYPE (_o3[0]) != utype)
					{
					  _r3 = fold_build1_loc (loc, NOP_EXPR, utype, _o3[0]);
					}
				      else
				        _r3 = _o3[0];
				      _o2[0] = _r3;
				    }
				    _o2[1] = captures[2];
				    _r2 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _r1 = fold_build2_loc (loc, RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  res_op0 = _r1;
				}
				tree _r;
				_r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
				if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1004, __FILE__, __LINE__, true);
				return _r;
			      }
next_after_fail1654:;
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
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_418 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	tree res = generic_simplify_419 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_420 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
	}
        break;
      }
    case CONSTRUCTOR:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_421 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
	  if (res) return res;
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
		      tree res = generic_simplify_422 (loc, type, _p0, _p1, captures, LSHIFT_EXPR);
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
    CASE_CONVERT:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
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
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_423 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
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
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_423 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
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
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _p1 };
			    tree res = generic_simplify_423 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
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
    case BIT_AND_EXPR:
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_424 (loc, type, _p0, _p1, captures, BIT_AND_EXPR, LSHIFT_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case INTEGER_CST:
		  {
		    {
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_424 (loc, type, _p0, _p1, captures, BIT_XOR_EXPR, LSHIFT_EXPR);
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
		      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21, _p1 };
		      tree res = generic_simplify_424 (loc, type, _p0, _p1, captures, BIT_IOR_EXPR, LSHIFT_EXPR);
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1655;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1655;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1655;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1655:;
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1656;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1656;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1656;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1656;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1656:;
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
 && (TREE_CODE_CLASS (LSHIFT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1657;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1657;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1657;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1657;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1657:;
	    }
	}
        break;
      }
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1658;
				{
				  tree res_op0;
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
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
next_after_fail1658:;
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
  return NULL_TREE;
}

tree
generic_simplify_MIN_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_517 (loc, type, _p0, _p1, captures, MIN_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case MIN_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
	      tree res = generic_simplify_518 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
	      tree res = generic_simplify_518 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
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
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
	      tree res = generic_simplify_519 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
	      tree res = generic_simplify_519 (loc, type, _p0, _p1, captures, MIN_EXPR);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case MAX_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
	      tree res = generic_simplify_520 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
	      tree res = generic_simplify_520 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case MAX_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	tree _q31 = TREE_OPERAND (_p1, 1);
	if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
	      tree res = generic_simplify_520 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
	      tree res = generic_simplify_520 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    case NEGATE_EXPR:
      {
	tree _q30 = TREE_OPERAND (_p1, 0);
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	      tree res = generic_simplify_521 (loc, type, _p0, _p1, captures);
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
	      tree res = generic_simplify_521 (loc, type, _p0, _p1, captures);
	      if (res) return res;
	    }
	  }
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (INTEGRAL_TYPE_P (type)
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1722;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1722:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1723;
	    {
	      tree _r;
	      _r = captures[0];
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1723:;
	  }
      }
  }
  switch (TREE_CODE (_p0))
    {
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_522 (loc, type, _p0, _p1, captures, MIN_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
		    tree res = generic_simplify_522 (loc, type, _p0, _p1, captures, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
		    tree res = generic_simplify_522 (loc, type, _p0, _p1, captures, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
		    tree res = generic_simplify_522 (loc, type, _p0, _p1, captures, MIN_EXPR);
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
	      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		{
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
		      {
			if (tree_int_cst_sgn (captures[2]) > 0
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1724;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1724:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1725;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1725;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1725:;
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
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
		    tree res = generic_simplify_523 (loc, type, _p0, _p1, captures, MIN_EXPR);
		    if (res) return res;
		  }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
		    tree res = generic_simplify_523 (loc, type, _p0, _p1, captures, MIN_EXPR);
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
    case PLUS_EXPR:
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
		    if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
)
		      {
			if (tree_int_cst_sgn (captures[2]) > 0
)
			  {
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1726;
			    {
			      tree _r;
			      _r = captures[0];
			      if (TREE_SIDE_EFFECTS (captures[2]))
				_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[2]), _r);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1021, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1726:;
			  }
			else
			  {
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1727;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1727;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1022, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1727:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1728;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1728:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1729;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1729:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1730;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1730:;
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
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1731;
			    {
			      tree res_op0;
			      res_op0 = captures[0];
			      tree res_op1;
			      res_op1 = captures[1];
			      tree _r;
			      _r = fold_build2_loc (loc, MIN_EXPR, type, res_op0, res_op1);
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 889, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1731:;
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
    case BIT_AND_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
				tree res = generic_simplify_524 (loc, type, _p0, _p1, captures, MIN_EXPR);
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
  switch (TREE_CODE (_p1))
    {
    case BIT_AND_EXPR:
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
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
		    tree res = generic_simplify_525 (loc, type, _p0, _p1, captures, MIN_EXPR);
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
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
			    tree res = generic_simplify_526 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		      tree res = generic_simplify_527 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
		      tree res = generic_simplify_528 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		tree res = generic_simplify_529 (loc, type, _p0, _p1, captures, MIN_EXPR, LT_EXPR);
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
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
		  {
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1732;
		    {
		      tree res_op0;
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			_r1 = fold_build2_loc (loc, MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			res_op0 = _r1;
		      }
		      tree _r;
		      _r = fold_build1_loc (loc, NEGATE_EXPR, type, res_op0);
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1023, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1732:;
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_NOT_EXPR:
	    {
	      tree _q40 = TREE_OPERAND (_p1, 0);
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
		tree res = generic_simplify_530 (loc, type, _p0, _p1, captures, MIN_EXPR, MAX_EXPR);
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1733;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1733;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1733;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1733:;
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1734;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1734;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1734;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1734;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1734:;
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
 && (TREE_CODE_CLASS (MIN_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1735;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1735;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1735;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, MIN_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1735;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1735:;
	    }
	}
        break;
      }
    default:;
    }
  if (tree_zero_one_valued_p (_p0))
    {
      if (tree_zero_one_valued_p (_p1))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    tree res = generic_simplify_531 (loc, type, _p0, _p1, captures, MIN_EXPR, BIT_AND_EXPR);
	    if (res) return res;
	  }
        }
    }
  return NULL_TREE;
}

tree
generic_simplify_ORDERED_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1757;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1757;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1757;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1757:;
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1758;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1758;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1758;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1758;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1758:;
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
 && (TREE_CODE_CLASS (ORDERED_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1759;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1759;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1759;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, ORDERED_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1759;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1759:;
	    }
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
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
		tree res = generic_simplify_260 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
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
		tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
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
	    tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, ORDERED_EXPR, ORDERED_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_560 (loc, type, _p0, _p1, captures, ORDERED_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (tree_expr_nan_p (captures[0]) || tree_expr_nan_p (captures[1])
)
      {
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1760;
	{
	  tree _r;
	  _r =  constant_boolean_node (false, type);
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (TREE_SIDE_EFFECTS (captures[1]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1032, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1760:;
      }
    else
      {
	if (!tree_expr_maybe_nan_p (captures[0]) && !tree_expr_maybe_nan_p (captures[1])
)
	  {
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1761;
	    {
	      tree _r;
	      _r =  constant_boolean_node (true, type);
	      if (TREE_SIDE_EFFECTS (captures[0]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	      if (TREE_SIDE_EFFECTS (captures[1]))
		_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
	      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1033, __FILE__, __LINE__, true);
	      return _r;
	    }
next_after_fail1761:;
	  }
      }
  }
  return NULL_TREE;
}

tree
generic_simplify_UNEQ_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1774;
			{
			  tree res_op0;
			  res_op0 = captures[1];
			  tree res_op1;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[5];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1774;
			    res_op1 = _r1;
			  }
			  tree res_op2;
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[6];
			    _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
			    if (EXPR_P (_r1))
			      goto next_after_fail1774;
			    res_op2 = _r1;
			  }
			  tree _r;
			  _r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
			  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 890, __FILE__, __LINE__, true);
			  return _r;
			}
next_after_fail1774:;
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1775;
	      {
		if (! tree_invariant_p (captures[4])) goto next_after_fail1775;
		tree res_op0;
		res_op0 = captures[1];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[2];
		  _o1[1] = unshare_expr (captures[4]);
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1775;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[3];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1775;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 892, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1775:;
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
 && (TREE_CODE_CLASS (UNEQ_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
	    {
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1776;
	      {
		if (! tree_invariant_p (captures[0])) goto next_after_fail1776;
		tree res_op0;
		res_op0 = captures[2];
		tree res_op1;
		{
		  tree _o1[2], _r1;
		  _o1[0] = unshare_expr (captures[0]);
		  _o1[1] = captures[3];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1776;
		  res_op1 = _r1;
		}
		tree res_op2;
		{
		  tree _o1[2], _r1;
		  _o1[0] = captures[0];
		  _o1[1] = captures[4];
		  _r1 = fold_build2_loc (loc, UNEQ_EXPR, type, _o1[0], _o1[1]);
		  if (EXPR_P (_r1))
		    goto next_after_fail1776;
		  res_op2 = _r1;
		}
		tree _r;
		_r = fold_build3_loc (loc, VEC_COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1776:;
	    }
	}
        break;
      }
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	tree res = generic_simplify_562 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	if (res) return res;
      }
    }
  switch (TREE_CODE (_p0))
    {
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
		tree res = generic_simplify_260 (loc, type, _p0, _p1, captures, UNEQ_EXPR, EQ_EXPR);
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
		tree res = generic_simplify_263 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
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
	    tree res = generic_simplify_264 (loc, type, _p0, _p1, captures, UNEQ_EXPR, UNEQ_EXPR);
	    if (res) return res;
	  }
        }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  tree res = generic_simplify_560 (loc, type, _p0, _p1, captures, UNEQ_EXPR);
	  if (res) return res;
	}
        break;
      }
    default:;
    }
  return NULL_TREE;
}

tree
generic_simplify_COND_EXPR (location_t ARG_UNUSED (loc), enum tree_code ARG_UNUSED (code), const tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case LT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case SSA_NAME:
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q31))
		          {
			  case CFN_BUILT_IN_FLOORF:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEILF:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOORF:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEILF:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF);
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
									        break;
									      }
									    default:;
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
			  case CFN_BUILT_IN_FLOORL:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEILL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOORL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEILL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL);
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
									        break;
									      }
									    default:;
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
			  case CFN_FLOOR:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_CEIL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_FLOOR:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_CEIL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_FLOOR, CFN_CEIL, CFN_FLOOR, CFN_CEIL);
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
									        break;
									      }
									    default:;
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
			  case CFN_BUILT_IN_FLOOR:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEIL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOOR:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEIL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL);
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
									        break;
									      }
									    default:;
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
			  default:;
		          }
		        break;
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
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
	      if (integer_zerop (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case MIN_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			  {
			    switch (TREE_CODE (_q61))
			      {
			      case INTEGER_CST:
			        {
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q30, _q21, _p1, _q61, _p2 };
					  tree res = generic_simplify_346 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
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
		        break;
		      }
		    default:;
		    }
	        }
	    }
	}
	if (integer_zerop (_q21))
	  {
	    if (tree_expr_nonnegative_p (_p1))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case MIN_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, _p2, captures);
				if (res) return res;
			      }
			    }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			    {
			      {
				tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
				tree res = generic_simplify_347 (loc, type, _p0, _p1, _p2, captures);
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
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
	      case ABS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			    tree res = generic_simplify_349 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
    case GE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case SSA_NAME:
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case CALL_EXPR:
		        switch (get_call_combined_fn (_q31))
		          {
			  case CFN_BUILT_IN_FLOORF:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEILF:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEILF:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOORF:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEILF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF);
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
									        break;
									      }
									    default:;
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
			  case CFN_BUILT_IN_FLOORL:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEILL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEILL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOORL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL);
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
									        break;
									      }
									    default:;
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
			  case CFN_FLOOR:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_CEIL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_CEIL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_FLOOR:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_CEIL, CFN_FLOOR, CFN_FLOOR, CFN_CEIL);
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
									        break;
									      }
									    default:;
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
			  case CFN_BUILT_IN_FLOOR:
			    if (call_expr_nargs (_q31) == 1)
    {
				tree _q50 = CALL_EXPR_ARG (_q31, 0);
				if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
				  {
				    switch (TREE_CODE (_q50))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						switch (TREE_CODE (_q80))
						  {
						  case CALL_EXPR:
						    switch (get_call_combined_fn (_q80))
						      {
						      case CFN_BUILT_IN_CEIL:
						        if (call_expr_nargs (_q80) == 1)
    {
							    tree _q90 = CALL_EXPR_ARG (_q80, 0);
							    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
							      {
								switch (TREE_CODE (_q90))
								  {
								  case SSA_NAME:
								    {
								      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
									{
									  switch (TREE_CODE (_q81))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEIL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q30 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q30, 0) && types_match (_q140, _q30)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOOR:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q30 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q30, 0) && types_match (_q170, _q30)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q21 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEIL, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL);
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
									        break;
									      }
									    default:;
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
			  default:;
		          }
		        break;
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
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
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
	      if (integer_zerop (_q21))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case MAX_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			  {
			    switch (TREE_CODE (_q61))
			      {
			      case INTEGER_CST:
			        {
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q30, _q21, _p1, _q61, _p2 };
					  tree res = generic_simplify_346 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
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
		        break;
		      }
		    default:;
		    }
	        }
	    }
	}
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
	      case ABS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    tree res = generic_simplify_349 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
    case GT_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_q30))
		    {
		    case CFN_BUILT_IN_CEIL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOOR:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOOR:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEIL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_CEIL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_FLOOR:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_FLOOR:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_CEIL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_FLOOR, CFN_CEIL, CFN_FLOOR, CFN_CEIL);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_CEILF:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOORF:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOORF:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEILF:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_CEILL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOORL:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_FLOORL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_CEILL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL);
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
	      break;
	    }
          default:;
          }
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MIN_EXPR);
		    if (res) return res;
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GT_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (integer_zerop (_q20))
	  {
	    {
	      tree _q21_pops[1];
	      if (tree_nop_convert (_q21, _q21_pops))
	        {
		  tree _q40 = _q21_pops[0];
		  switch (TREE_CODE (_p1))
		    {
		    case MIN_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
			  {
			    switch (TREE_CODE (_q61))
			      {
			      case INTEGER_CST:
			        {
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q20, _p1, _q61, _p2 };
					  tree res = generic_simplify_346 (loc, type, _p0, _p1, _p2, captures, LT_EXPR, MIN_EXPR);
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
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
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
	      case ABS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    tree res = generic_simplify_349 (loc, type, _p0, _p1, _p2, captures, GT_EXPR);
			    if (res) return res;
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
	  case PLUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_onep (_q31))
		{
		  switch (TREE_CODE (_p1))
		    {
		    case NEGATE_EXPR:
		      {
			tree _q70 = TREE_OPERAND (_p1, 0);
			if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
			  {
			    if (integer_onep (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				  if (TYPE_UNSIGNED (type)
)
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1813;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1813;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1813;
				      {
					tree res_op0;
					{
					  tree _o1[2], _r1;
					  _o1[0] = unshare_expr (captures[0]);
					  _o1[1] = captures[1];
					  _r1 = fold_build2_loc (loc, GE_EXPR, boolean_type_node, _o1[0], _o1[1]);
					  res_op0 = _r1;
					}
					tree res_op1;
					{
					  tree _o1[1], _r1;
					  _o1[0] = captures[0];
					  _r1 = fold_build1_loc (loc, NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					  res_op1 = _r1;
					}
					tree res_op2;
					res_op2 = captures[2];
					tree _r;
					_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1035, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1813:;
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
    case LE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	switch (TREE_CODE (_q20))
	  {
	  case MINUS_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q30))
	        {
		case CALL_EXPR:
		  switch (get_call_combined_fn (_q30))
		    {
		    case CFN_BUILT_IN_CEIL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOOR:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEIL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOOR:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEIL, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_FLOOR, CFN_BUILT_IN_CEIL);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_CEIL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_FLOOR:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_CEIL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_FLOOR:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_CEIL, CFN_FLOOR, CFN_FLOOR, CFN_CEIL);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_CEILF:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOORF:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEILF:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOORF:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEILF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_FLOORF, CFN_BUILT_IN_CEILF);
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
				  }
			        break;
			      }
			    default:;
			    }
		        }
		      break;
		    case CFN_BUILT_IN_CEILL:
		      if (call_expr_nargs (_q30) == 1)
    {
			  tree _q40 = CALL_EXPR_ARG (_q30, 0);
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      {
				if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
				  {
				    switch (TREE_CODE (_q31))
				      {
				      case SSA_NAME:
				        {
					  switch (TREE_CODE (_q21))
					    {
					    case MINUS_EXPR:
					      {
						tree _q80 = TREE_OPERAND (_q21, 0);
						tree _q81 = TREE_OPERAND (_q21, 1);
						if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
						  {
						    switch (TREE_CODE (_q80))
						      {
						      case SSA_NAME:
						        {
							  switch (TREE_CODE (_q81))
							    {
							    case CALL_EXPR:
							      switch (get_call_combined_fn (_q81))
							        {
								case CFN_BUILT_IN_FLOORL:
								  if (call_expr_nargs (_q81) == 1)
    {
								      tree _q110 = CALL_EXPR_ARG (_q81, 0);
								      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
									{
									  switch (TREE_CODE (_q110))
									    {
									    case SSA_NAME:
									      {
										switch (TREE_CODE (_p1))
										  {
										  case CALL_EXPR:
										    switch (get_call_combined_fn (_p1))
										      {
										      case CFN_BUILT_IN_CEILL:
										        if (call_expr_nargs (_p1) == 1)
    {
											    tree _q140 = CALL_EXPR_ARG (_p1, 0);
											    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
											      {
												switch (TREE_CODE (_q140))
												  {
												  case SSA_NAME:
												    {
												      switch (TREE_CODE (_p2))
												        {
													case CALL_EXPR:
													  switch (get_call_combined_fn (_p2))
													    {
													    case CFN_BUILT_IN_FLOORL:
													      if (call_expr_nargs (_p2) == 1)
    {
														  tree _q170 = CALL_EXPR_ARG (_p2, 0);
														  if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
														    {
														      switch (TREE_CODE (_q170))
														        {
															case SSA_NAME:
															  {
															    {
															      tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q40, _q20 };
															      tree res = generic_simplify_340 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_CEILL);
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
	      break;
	    }
          default:;
          }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  if (integer_zerop (_p2))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
				if (ANY_INTEGRAL_TYPE_P (type) && TYPE_OVERFLOW_UNDEFINED (type)
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1814;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1814;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1814;
				    {
				      tree res_op0;
				      res_op0 = captures[2];
				      tree res_op1;
				      res_op1 = captures[1];
				      tree _r;
				      _r = fold_build2_loc (loc, MAX_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1036, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1814:;
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
	switch (TREE_CODE (_p1))
	  {
	  case BIT_IOR_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
				if (res) return res;
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    switch (TREE_CODE (_p1))
		      {
		      case PLUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, PLUS_EXPR);
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
		          break;
		        }
		      case MINUS_EXPR:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  tree _q61 = TREE_OPERAND (_p1, 1);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_q61))
			        {
				case INTEGER_CST:
				  {
				    switch (TREE_CODE (_p2))
				      {
				      case INTEGER_CST:
				        {
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q21, _q61, _p2 };
					    tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MINUS_EXPR);
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
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, LE_EXPR);
			  if (res) return res;
			}
		        break;
		      }
		    default:;
		    }
	        }
	      switch (TREE_CODE (_p1))
	        {
		case PLUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, PLUS_EXPR);
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
		    break;
		  }
		case MINUS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    tree _q51 = TREE_OPERAND (_p1, 1);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_q51))
			  {
			  case INTEGER_CST:
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _p2 };
				      tree res = generic_simplify_343 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MINUS_EXPR);
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
	  case MIN_EXPR:
	    {
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MIN_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q21, _q20, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MIN_EXPR);
		    if (res) return res;
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q51, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
		    tree res = generic_simplify_345 (loc, type, _p0, _p1, _p2, captures, LE_EXPR, MAX_EXPR);
		    if (res) return res;
		  }
	        }
	      break;
	    }
          default:;
          }
	if (integer_zerop (_q20))
	  {
	    {
	      tree _q21_pops[1];
	      if (tree_nop_convert (_q21, _q21_pops))
	        {
		  tree _q40 = _q21_pops[0];
		  switch (TREE_CODE (_p1))
		    {
		    case MAX_EXPR:
		      {
			tree _q60 = TREE_OPERAND (_p1, 0);
			tree _q61 = TREE_OPERAND (_p1, 1);
			if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
			  {
			    switch (TREE_CODE (_q61))
			      {
			      case INTEGER_CST:
			        {
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q20, _p1, _q61, _p2 };
					  tree res = generic_simplify_346 (loc, type, _p0, _p1, _p2, captures, GE_EXPR, MAX_EXPR);
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
		        break;
		      }
		    default:;
		    }
	        }
	    }
	  }
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
	      case ABS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			    tree res = generic_simplify_349 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
    case NE_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  {
		    tree _q50_pops[1];
		    if (tree_nop_convert (_q50, _q50_pops))
		      {
			tree _q60 = _q50_pops[0];
			if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			  {
			    if (integer_all_onesp (_q51))
			      {
				if (integer_zerop (_p2))
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q50 };
				      tree res = generic_simplify_350 (loc, type, _p0, _p1, _p2, captures);
				      if (res) return res;
				    }
				  }
			      }
			  }
		      }
		  }
		  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		    {
		      if (integer_all_onesp (_q51))
			{
			  if (integer_zerop (_p2))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q50 };
				tree res = generic_simplify_351 (loc, type, _p0, _p1, _p2, captures);
				if (res) return res;
			      }
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
		  case PLUS_EXPR:
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
				if (integer_all_onesp (_q61))
				  {
				    if (integer_zerop (_p2))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q60 };
					  tree res = generic_simplify_350 (loc, type, _p0, _p1, _p2, captures);
					  if (res) return res;
					}
				      }
				  }
			      }
			  }
		      }
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  if (integer_all_onesp (_q61))
			    {
			      if (integer_zerop (_p2))
				{
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q60 };
				    tree res = generic_simplify_351 (loc, type, _p0, _p1, _p2, captures);
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
	  }
	if (tree_zero_one_valued_p (_q20))
	  {
	    if (integer_zerop (_q21))
	      {
		switch (TREE_CODE (_p1))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case BIT_IOR_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case PLUS_EXPR:
		    {
		      tree _q50 = TREE_OPERAND (_p1, 0);
		      tree _q51 = TREE_OPERAND (_p1, 1);
		      if ((_p2 == _q51 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q51, 0) && types_match (_p2, _q51)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
			    tree res = generic_simplify_352 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
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
	    switch (TREE_CODE (_p1))
	      {
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_353 (loc, type, _p0, _p1, _p2, captures, TRUNC_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case CEIL_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_353 (loc, type, _p0, _p1, _p2, captures, CEIL_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case FLOOR_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_353 (loc, type, _p0, _p1, _p2, captures, FLOOR_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case ROUND_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_353 (loc, type, _p0, _p1, _p2, captures, ROUND_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_353 (loc, type, _p0, _p1, _p2, captures, EXACT_DIV_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_354 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q51, _q50 };
			tree res = generic_simplify_354 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  tree _q51 = TREE_OPERAND (_p1, 1);
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q50, _q51 };
			tree res = generic_simplify_354 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _q20, _p1, _q51, _q50 };
			tree res = generic_simplify_354 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  }
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
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1815;
					if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1815;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1815;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1037, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1815:;
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
	switch (TREE_CODE (_q20))
	  {
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case BIT_AND_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_p1, 0);
			      tree _q71 = TREE_OPERAND (_p1, 1);
			      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
				{
				  switch (TREE_CODE (_q71))
				    {
				    case INTEGER_CST:
				      {
					if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _p1, _q71 };
					      if (wi::to_wide (captures[3]) == ~wi::to_wide (captures[1])
)
						{
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1816;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1816;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1816;
						  {
						    tree _r;
						    _r = captures[2];
						    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1038, __FILE__, __LINE__, true);
						    return _r;
						  }
next_after_fail1816:;
						}
					    }
					  }
					switch (TREE_CODE (_p2))
					  {
					  case BIT_IOR_EXPR:
					    {
					      tree _q100 = TREE_OPERAND (_p2, 0);
					      tree _q101 = TREE_OPERAND (_p2, 1);
					      if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
						{
						  if ((_q101 == _q31 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q31, 0) && types_match (_q101, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q71 };
							tree res = generic_simplify_355 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
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
			  case PLUS_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_p1, 0);
			      tree _q71 = TREE_OPERAND (_p1, 1);
			      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
				{
				  switch (TREE_CODE (_q71))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p2))
					  {
					  case BIT_IOR_EXPR:
					    {
					      tree _q100 = TREE_OPERAND (_p2, 0);
					      tree _q101 = TREE_OPERAND (_p2, 1);
					      if ((_q100 == _q30 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q30, 0) && types_match (_q100, _q30)))
						{
						  if ((_q101 == _q31 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q31, 0) && types_match (_q101, _q31)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q71 };
							tree res = generic_simplify_355 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
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
			    tree res = generic_simplify_356 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_356 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_357 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_357 (loc, type, _p0, _p1, _p2, captures);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MIN_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MIN_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MIN_EXPR);
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
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
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
		  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		    {
		      if ((_p2 == _q20 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q20, 0) && types_match (_p2, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_p2 == _q21 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q21, 0) && types_match (_p2, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p1 };
			    tree res = generic_simplify_358 (loc, type, _p0, _p1, _p2, captures, MAX_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q51 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q51, 0) && types_match (_q81, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q51 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q51, 0) && types_match (_q80, _q51)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q51, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
		        break;
		      }
		    default:;
		    }
	        }
	      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
		{
		  switch (TREE_CODE (_p2))
		    {
		    case MAX_EXPR:
		      {
			tree _q80 = TREE_OPERAND (_p2, 0);
			tree _q81 = TREE_OPERAND (_p2, 1);
			if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q80 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
			      if (res) return res;
			    }
			  }
			if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _q21, _q20, _q50, _q81 };
			      tree res = generic_simplify_344 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, MAX_EXPR);
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1817;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1817;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1817:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1818;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1818;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1818:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1819;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1819;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1819:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1820;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1820;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1820;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1820:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1821;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1821;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1821;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1821:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1822;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1822;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1822:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1823;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1823;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1823;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1823:;
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
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1824;
					  if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1824;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1824;
					  {
					    tree _r;
					    _r = captures[2];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1040, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1824:;
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		case NEGATE_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (!TYPE_SATURATING (type)
 && (TYPE_OVERFLOW_WRAPS (type)
 || !wi::only_sign_bit_p (wi::to_wide (captures[1])))
 && wi::eq_p (wi::neg (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1825;
				    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1825;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1825;
				    {
				      tree _r;
				      _r = captures[2];
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1041, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1825:;
				  }
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
		case BIT_NOT_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::eq_p (wi::bit_not (wi::to_wide (captures[1])), wi::to_wide (captures[3]))
)
				  {
				    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1826;
				    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1826;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1826;
				    {
				      tree _r;
				      _r = captures[2];
				      if (TREE_SIDE_EFFECTS (captures[1]))
					_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1042, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1826:;
				  }
			      }
			      break;
			    }
		          default:;
		          }
		      }
		    break;
		  }
		case ABS_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
				  {
				    if (ABS_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
				      {
					{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
					    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1827;
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1827;
					    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1827;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1827;
					    {
					      tree res_op0;
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[0];
						_r1 = fold_build1_loc (loc, ABSU_EXPR, utype, _o1[0]);
						res_op0 = _r1;
					      }
					      tree _r;
					      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					      if (TREE_SIDE_EFFECTS (captures[1]))
						_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1827:;
					}
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1828;
					if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1828;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1828;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1828:;
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
		case ABSU_EXPR:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				if (wi::abs (wi::to_wide (captures[1])) == wi::to_wide (captures[3])
)
				  {
				    if (ABSU_EXPR != ABSU_EXPR && wi::only_sign_bit_p (wi::to_wide (captures[1]))
)
				      {
					{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
					    if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1829;
					    if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1829;
					    if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1829;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1829;
					    {
					      tree res_op0;
					      {
						tree _o1[1], _r1;
						_o1[0] = captures[0];
						_r1 = fold_build1_loc (loc, ABSU_EXPR, utype, _o1[0]);
						res_op0 = _r1;
					      }
					      tree _r;
					      _r = fold_build1_loc (loc, NOP_EXPR, type, res_op0);
					      if (TREE_SIDE_EFFECTS (captures[1]))
						_r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
					      return _r;
					    }
next_after_fail1829:;
					}
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1830;
					if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1830;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1830;
					{
					  tree _r;
					  _r = captures[2];
					  if (TREE_SIDE_EFFECTS (captures[1]))
					    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[1]), _r);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1830:;
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
    case EQ_EXPR:
      {
	tree _q20 = TREE_OPERAND (_p0, 0);
	tree _q21 = TREE_OPERAND (_p0, 1);
	if (tree_zero_one_valued_p (_q20))
	  {
	    if (integer_zerop (_q21))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case BIT_XOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case BIT_IOR_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
		  case PLUS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      tree _q61 = TREE_OPERAND (_p2, 1);
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q60 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		      if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q61 };
			    tree res = generic_simplify_359 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
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
	    switch (TREE_CODE (_p2))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, PLUS_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, BIT_IOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_360 (loc, type, _p0, _p1, _p2, captures, BIT_XOR_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case POINTER_PLUS_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_361 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_onep (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_362 (loc, type, _p0, _p1, _p2, captures, TRUNC_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case CEIL_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_362 (loc, type, _p0, _p1, _p2, captures, CEIL_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case FLOOR_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_362 (loc, type, _p0, _p1, _p2, captures, FLOOR_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case ROUND_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_362 (loc, type, _p0, _p1, _p2, captures, ROUND_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_362 (loc, type, _p0, _p1, _p2, captures, EXACT_DIV_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_363 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_363 (loc, type, _p0, _p1, _p2, captures, MULT_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  }
	if (integer_all_onesp (_q21))
	  {
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  tree _q61 = TREE_OPERAND (_p2, 1);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_364 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
			  }
		        }
		    }
		  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		    {
		      if ((_q61 == _p1 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _p1, 0) && types_match (_q61, _p1)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
			    tree res = generic_simplify_364 (loc, type, _p0, _p1, _p2, captures, BIT_AND_EXPR);
			    if (res) return res;
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
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      switch (TREE_CODE (_q31))
	        {
		case INTEGER_CST:
		  {
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case BIT_IOR_EXPR:
			    {
			      tree _q70 = TREE_OPERAND (_p1, 0);
			      tree _q71 = TREE_OPERAND (_p1, 1);
			      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
				{
				  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
				    {
				      switch (TREE_CODE (_q71))
				        {
					case INTEGER_CST:
					  {
					    if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
					      {
						{
						  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						  if (wi::popcount (wi::to_wide (captures[1])) == 1
)
						    {
						      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1831;
						      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1831;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1831;
						      {
							tree _r;
							_r = captures[2];
							if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
							return _r;
						      }
next_after_fail1831:;
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
	      tree _q50 = TREE_OPERAND (_p1, 0);
	      tree _q51 = TREE_OPERAND (_p1, 1);
	      switch (TREE_CODE (_q51))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p2))
		      {
		      case BIT_AND_EXPR:
		        {
			  tree _q80 = TREE_OPERAND (_p2, 0);
			  tree _q81 = TREE_OPERAND (_p2, 1);
			  if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
			    {
			      switch (TREE_CODE (_q81))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50, _q51, _p2, _q81 };
				      tree res = generic_simplify_341 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
	switch (TREE_CODE (_q20))
	  {
	  CASE_CONVERT:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      switch (TREE_CODE (_q21))
	        {
		case INTEGER_CST:
		  {
		    switch (TREE_CODE (_p1))
		      {
		      CASE_CONVERT:
		        {
			  tree _q60 = TREE_OPERAND (_p1, 0);
			  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
			    {
			      switch (TREE_CODE (_p2))
			        {
				case INTEGER_CST:
				  {
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				      tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
		    if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
	switch (TREE_CODE (_q21))
	  {
	  case INTEGER_CST:
	    {
	      switch (TREE_CODE (_p1))
	        {
		CASE_CONVERT:
		  {
		    tree _q50 = TREE_OPERAND (_p1, 0);
		    if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
		      {
			switch (TREE_CODE (_p2))
			  {
			  case INTEGER_CST:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
				tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
		  switch (TREE_CODE (_p2))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_342 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
      if (tree_expr_nonnegative_p (_q21))
	{
	  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	    {
	      switch (TREE_CODE (_p2))
	        {
		case ABS_EXPR:
		  {
		    tree _q60 = TREE_OPERAND (_p2, 0);
		    if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			  tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
			  if (res) return res;
			}
		      }
		    break;
		  }
	        default:;
	        }
	    }
        }
	if (tree_expr_nonnegative_p (_q20))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_348 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	    if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _p2 };
			    tree res = generic_simplify_365 (loc, type, _p0, _p1, _p2, captures);
			    if (res) return res;
			  }
		        }
		      break;
		    }
	          default:;
	          }
	      }
	  }
	if (tree_expr_nonnegative_p (_q21))
	  {
	    if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
	      {
		switch (TREE_CODE (_p2))
		  {
		  case ABS_EXPR:
		    {
		      tree _q60 = TREE_OPERAND (_p2, 0);
		      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p2 };
			    tree res = generic_simplify_365 (loc, type, _p0, _p1, _p2, captures);
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
    case INTEGER_CST:
      {
	{
	  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _p2 };
	  if (integer_zerop (captures[0])
)
	    {
	      if (!VOID_TYPE_P (TREE_TYPE (captures[2])) || VOID_TYPE_P (type)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1832;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1832;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1832;
		  {
		    tree _r;
		    _r = captures[2];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1832:;
		}
	    }
	  else
	    {
	      if (!VOID_TYPE_P (TREE_TYPE (captures[1])) || VOID_TYPE_P (type)
)
		{
		  if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1833;
		  if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1833;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1833;
		  {
		    tree _r;
		    _r = captures[1];
		    if (TREE_SIDE_EFFECTS (captures[0]))
		      _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
		    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
		    return _r;
		  }
next_after_fail1833:;
		}
	    }
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
	if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q31, _q32, _p2 };
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1834;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1834;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1834;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1834;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1834;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1834:;
	    }
	  }
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case COND_EXPR:
      {
	tree _q40 = TREE_OPERAND (_p2, 0);
	tree _q41 = TREE_OPERAND (_p2, 1);
	tree _q42 = TREE_OPERAND (_p2, 2);
	if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
	  {
	    {
	      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q41, _q42 };
	      if (TREE_SIDE_EFFECTS (captures[0])) goto next_after_fail1835;
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1835;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1835;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1835;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1835;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1835:;
	    }
	  }
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
	  if (inverse_conditions_p (captures[0], captures[2])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1836;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1836;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1836;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1836;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1836;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[1];
		tree res_op2;
		res_op2 = captures[3];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1050, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1836:;
	    }
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
	{
	  tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32, _p2 };
	  if (inverse_conditions_p (captures[0], captures[1])
)
	    {
	      if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1837;
	      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1837;
	      if (TREE_SIDE_EFFECTS (captures[3])) goto next_after_fail1837;
	      if (TREE_SIDE_EFFECTS (captures[4])) goto next_after_fail1837;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1837;
	      {
		tree res_op0;
		res_op0 = captures[0];
		tree res_op1;
		res_op1 = captures[3];
		tree res_op2;
		res_op2 = captures[4];
		tree _r;
		_r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1051, __FILE__, __LINE__, true);
		return _r;
	      }
next_after_fail1837:;
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
	if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1838;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1838;
	{
	  tree _r;
	  _r = captures[1];
	  if (TREE_SIDE_EFFECTS (captures[0]))
	    _r = build2_loc (loc, COMPOUND_EXPR, type, fold_ignored_result (captures[0]), _r);
	  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1052, __FILE__, __LINE__, true);
	  return _r;
	}
next_after_fail1838:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1839;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1839;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1839;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1839:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1840;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1840;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1840;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1840;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1840:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1841;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1841;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1841;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1841:;
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
				      tree res = generic_simplify_366 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR);
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_SIGNBITF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBITF);
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
	      case CFN_BUILT_IN_SIGNBITL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBITL);
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
	      case CFN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_SIGNBIT);
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
	      case CFN_BUILT_IN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, EQ_EXPR, CFN_BUILT_IN_SIGNBIT);
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
	      default:;
	      }
	    break;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1842;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1842;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1842;
			    {
			      tree _r;
			      _r = captures[2];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1053, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1842:;
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1843;
			    if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1843;
			    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1843;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1843;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1054, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1843:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1844;
					  if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1844;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1844;
					  {
					    tree _r;
					    _r = captures[3];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1055, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1844:;
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
				      tree res = generic_simplify_366 (loc, type, _p0, _p1, _p2, captures, UNEQ_EXPR);
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1845;
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1845;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1845;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1845:;
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
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1846;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1846;
		    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1846;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1846;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1846:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1847;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1847;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1847;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1847:;
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
			    tree res = generic_simplify_368 (loc, type, _p0, _p1, _p2, captures, NE_EXPR);
			    if (res) return res;
			  }
		        }
		    }
	        }
	      break;
	    }
	  case BIT_AND_EXPR:
	    {
	      tree _q30 = TREE_OPERAND (_q20, 0);
	      tree _q31 = TREE_OPERAND (_q20, 1);
	      if (integer_pow2p (_q31))
		{
		  if (integer_zerop (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				  if (!POINTER_TYPE_P (type) && integer_pow2p (captures[2])
)
				    {
				      {
 int shift = (wi::exact_log2 (wi::to_wide (captures[2]))
 - wi::exact_log2 (wi::to_wide (captures[1])));
					  if (shift > 0
)
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1848;
					      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1848;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1848;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1848;
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
						  _o1[1] =  build_int_cst (integer_type_node, shift);
						  _r1 = fold_build2_loc (loc, LSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						  res_op0 = _r1;
						}
						tree res_op1;
						res_op1 = captures[2];
						tree _r;
						_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1059, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1848:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1849;
					      if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1849;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1849;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1849;
					      {
						tree res_op0;
						{
						  tree _o1[1], _r1;
						  {
						    tree _o2[2], _r2;
						    _o2[0] = captures[0];
						    _o2[1] =  build_int_cst (integer_type_node, -shift);
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
						res_op1 = captures[2];
						tree _r;
						_r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1060, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1849:;
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
	  case CALL_EXPR:
	    switch (get_call_combined_fn (_q20))
	      {
	      case CFN_BUILT_IN_SIGNBITF:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBITF);
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
	      case CFN_BUILT_IN_SIGNBITL:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBITL);
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
	      case CFN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_SIGNBIT);
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
	      case CFN_BUILT_IN_SIGNBIT:
	        if (call_expr_nargs (_q20) == 1)
    {
		    tree _q30 = CALL_EXPR_ARG (_q20, 0);
		    if (integer_zerop (_q21))
		      {
			switch (TREE_CODE (_p1))
			  {
			  case NEGATE_EXPR:
			    {
			      tree _q60 = TREE_OPERAND (_p1, 0);
			      if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
				{
				  if ((_p2 == _q30 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q30, 0) && types_match (_p2, _q30)))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					tree res = generic_simplify_367 (loc, type, _p0, _p1, _p2, captures, NE_EXPR, CFN_BUILT_IN_SIGNBIT);
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
	      default:;
	      }
	    break;
          default:;
          }
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case CALL_EXPR:
	        switch (get_call_combined_fn (_p1))
	          {
		  case CFN_PARITY:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_PARITY);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_PARITY);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFS:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFS);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFS);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNT:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNT);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNT);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_POPCOUNT:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_POPCOUNT);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_POPCOUNT);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_370 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBL);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_371 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBL);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_FFS:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_FFS);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_FFS);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITY:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITY);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITY);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTIMAX);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTIMAX);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBIMAX:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_370 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBIMAX);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_371 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBIMAX);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSBLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_370 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBLL);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_371 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSBLL);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_CLRSB:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_370 (loc, type, _p0, _p1, _p2, captures, CFN_CLRSB);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_371 (loc, type, _p0, _p1, _p2, captures, CFN_CLRSB);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP128:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP128);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP128);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_POPCOUNTL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_POPCOUNTL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_CLRSB:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  switch (TREE_CODE (_p2))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
					  tree res = generic_simplify_370 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSB);
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
			if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
			  {
			    switch (TREE_CODE (_p2))
			      {
			      case INTEGER_CST:
			        {
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _q50, _p2 };
				    tree res = generic_simplify_371 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_CLRSB);
				    if (res) return res;
				  }
			          break;
			        }
			      default:;
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_FFSLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_FFSLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_PARITYLL:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYLL);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_PARITYLL);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP16:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP16);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP16);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP32:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP32);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP32);
				  if (res) return res;
				}
			      }
			  }
		      }
		    break;
		  case CFN_BUILT_IN_BSWAP64:
		    if (call_expr_nargs (_p1) == 1)
    {
			tree _q50 = CALL_EXPR_ARG (_p1, 0);
			switch (TREE_CODE (_q50))
			  {
			  CASE_CONVERT:
			    {
			      tree _q60 = TREE_OPERAND (_q50, 0);
			      if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				{
				  if (integer_zerop (_p2))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
					tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP64);
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
			    if (integer_zerop (_p2))
			      {
				{
				  tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _p1, _p2 };
				  tree res = generic_simplify_369 (loc, type, _p0, _p1, _p2, captures, CFN_BUILT_IN_BSWAP64);
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
			    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1850;
			    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1850;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1850;
			    {
			      tree _r;
			      _r = captures[1];
			      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1056, __FILE__, __LINE__, true);
			      return _r;
			    }
next_after_fail1850:;
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
		    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1851;
		    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1851;
		    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1851;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1851;
		    {
		      tree _r;
		      _r = captures[1];
		      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1057, __FILE__, __LINE__, true);
		      return _r;
		    }
next_after_fail1851:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1852;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1852;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1852;
					  {
					    tree _r;
					    _r = captures[0];
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1058, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1852:;
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
			    tree res = generic_simplify_368 (loc, type, _p0, _p1, _p2, captures, LTGT_EXPR);
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1853;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1853;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1853;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1853:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1854;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1854;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1854;
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
next_after_fail1854:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1855;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1855;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1855;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1855:;
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1856;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1856;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1856;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1856:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1857;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1857;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1857;
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
next_after_fail1857:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1858;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1858;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1858;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1858:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1859;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1859;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1859;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1064, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1859:;
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
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_372 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			tree res = generic_simplify_373 (loc, type, _p0, _p1, _p2, captures, GE_EXPR);
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1860;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1860;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1860;
					      {
						tree res_op0;
						res_op0 = captures[0];
						tree _r;
						_r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1860:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1861;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1861;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1861;
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
next_after_fail1861:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1862;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1862;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1862;
				      {
					tree res_op0;
					res_op0 = captures[2];
					tree _r;
					_r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
					return _r;
				      }
next_after_fail1862:;
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1863;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1863;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1863;
					{
					  tree res_op0;
					  res_op0 = captures[0];
					  tree _r;
					  _r = fold_build1_loc (loc, ABSU_EXPR, type, res_op0);
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1061, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1863:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1864;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1864;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1864;
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
next_after_fail1864:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1865;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1865;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1865;
				{
				  tree res_op0;
				  res_op0 = captures[2];
				  tree _r;
				  _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
				  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1063, __FILE__, __LINE__, true);
				  return _r;
				}
next_after_fail1865:;
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
					  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1866;
					  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1866;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1866;
					  {
					    tree res_op0;
					    res_op0 = captures[0];
					    tree _r;
					    _r = fold_build1_loc (loc, ABS_EXPR, type, res_op0);
					    if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1064, __FILE__, __LINE__, true);
					    return _r;
					  }
next_after_fail1866:;
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1867;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1867;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1867;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1867:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1868;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1868;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1868;
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
next_after_fail1868:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1869;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1869;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1869;
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
next_after_fail1869:;
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1870;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1870;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1870;
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
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1870:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1871;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1871;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1871;
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
next_after_fail1871:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1872;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1872;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1872;
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
next_after_fail1872:;
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
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1873;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1873;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1873;
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
next_after_fail1873:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1874;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1874;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1874;
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
next_after_fail1874:;
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
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1875;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1875;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1875;
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
						if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
						return _r;
					      }
next_after_fail1875:;
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1876;
					      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1876;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1876;
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
next_after_fail1876:;
					    }
				      }
				    }
				  else
				    {
				      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1877;
				      if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1877;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1877;
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
next_after_fail1877:;
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
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1878;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1878;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1878;
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
					  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1065, __FILE__, __LINE__, true);
					  return _r;
					}
next_after_fail1878:;
				      }
				    else
				      {
					if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1879;
					if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1879;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1879;
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
next_after_fail1879:;
				      }
				}
			      }
			    else
			      {
				if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1880;
				if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1880;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1880;
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
next_after_fail1880:;
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
						  if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1881;
						  if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1881;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1881;
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
next_after_fail1881:;
					      }
					    }
					  else
					    {
					      if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1882;
					      if (TREE_SIDE_EFFECTS (_p1)) goto next_after_fail1882;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1882;
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
next_after_fail1882:;
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
	if (integer_zerop (_q21))
	  {
	    switch (TREE_CODE (_p1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q50 = TREE_OPERAND (_p1, 0);
		  if ((_p2 == _q50 && ! TREE_SIDE_EFFECTS (_p2)) || (operand_equal_p (_p2, _q50, 0) && types_match (_p2, _q50)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q50 };
			tree res = generic_simplify_372 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p2))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q60 = TREE_OPERAND (_p2, 0);
		  if ((_q60 == _p1 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p1, 0) && types_match (_q60, _p1)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			tree res = generic_simplify_373 (loc, type, _p0, _p1, _p2, captures, LT_EXPR);
			if (res) return res;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	    switch (TREE_CODE (_p1))
	      {
	      case INTEGER_CST:
	        {
		  if (integer_zerop (_p2))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			if (integer_pow2p (captures[1])
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
			  {
			    {
 int shift = element_precision (captures[0]) - wi::exact_log2 (wi::to_wide (captures[1])) - 1;
				if (shift >= 0
)
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1883;
				    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1883;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1883;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1883;
				    {
				      tree res_op0;
				      {
					tree _o1[1], _r1;
					{
					  tree _o2[2], _r2;
					  _o2[0] = captures[0];
					  _o2[1] =  build_int_cst (integer_type_node, shift);
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
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1070, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1883:;
				  }
				else
				  {
				    if (TREE_SIDE_EFFECTS (_p0)) goto next_after_fail1884;
				    if (TREE_SIDE_EFFECTS (_p2)) goto next_after_fail1884;
				    if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1884;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1884;
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
				      res_op1 = captures[1];
				      tree _r;
				      _r = fold_build2_loc (loc, BIT_AND_EXPR, type, res_op0, res_op1);
				      if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
				      return _r;
				    }
next_after_fail1884:;
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
{
  tree _p0_pops[1];
  if (tree_logical_inverted_value (_p0, _p0_pops))
    {
      tree _q20 = _p0_pops[0];
      if (tree_truth_valued_p (_q20))
	{
	  {
	    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
	    if (COND_EXPR == VEC_COND_EXPR
 || TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
	      {
		if (TREE_SIDE_EFFECTS (captures[1])) goto next_after_fail1885;
		if (TREE_SIDE_EFFECTS (captures[2])) goto next_after_fail1885;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1885;
		{
		  tree res_op0;
		  res_op0 = captures[0];
		  tree res_op1;
		  res_op1 = captures[2];
		  tree res_op2;
		  res_op2 = captures[1];
		  tree _r;
		  _r = fold_build3_loc (loc, COND_EXPR, type, res_op0, res_op1, res_op2);
		  if (UNLIKELY (debug_dump)) generic_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
		  return _r;
		}
next_after_fail1885:;
	      }
	  }
        }
    }
}
  return NULL_TREE;
}
#pragma GCC diagnostic pop
