/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_truth_valued_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type) && TYPE_PRECISION (type) == 1
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 21, __FILE__, __LINE__, false);
	  return true;
	}
      }
  }
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNORDERED_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case ORDERED_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case UNEQ_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_ANDIF_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_OR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_ORIF_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_XOR_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 22, __FILE__, __LINE__, false);
		      return true;
		    }
		  }
	          break;
	        }
	      case TRUTH_NOT_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    {
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 23, __FILE__, __LINE__, false);
		      return true;
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
  return false;
}

bool
gimple_unsigned_integer_sat_mul (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (t))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, t))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MIN_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  {
				    tree _q20_pops[2];
				    if (gimple_usmul_widen_mult (_q20, _q20_pops, valueize))
				      {
					tree _q30 = _q20_pops[0];
					tree _q31 = _q20_pops[1];
					switch (TREE_CODE (_q21))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q21 };
						if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
						  {
						    if (types_match (type, captures[0], captures[1])
)
						      {
							{
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c2_is_max_p = wi::eq_p (wi::to_wide (captures[3]), max);
							    if (c2_is_max_p
)
							      {
								{
								  res_ops[0] = captures[0];
								  res_ops[1] = captures[1];
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 89, __FILE__, __LINE__, false);
								  return true;
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
				  }
			          break;
			        }
			      case COND_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  tree _q22 = gimple_assign_rhs3 (_a2);
				  _q22 = do_valueize (valueize, _q22);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EQ_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case RSHIFT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case MULT_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q50))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q50))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      CASE_CONVERT:
											        {
												  tree _q60 = gimple_assign_rhs1 (_a6);
												  _q60 = do_valueize (valueize, _q60);
												  switch (TREE_CODE (_q51))
												    {
												    case SSA_NAME:
												      if (gimple *_d7 = get_def (valueize, _q51))
												        {
													  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													    switch (gimple_assign_rhs_code (_a7))
													      {
													      CASE_CONVERT:
													        {
														  tree _q80 = gimple_assign_rhs1 (_a7);
														  _q80 = do_valueize (valueize, _q80);
														  switch (TREE_CODE (_q41))
														    {
														    case INTEGER_CST:
														      {
															if (integer_zerop (_q31))
															  {
															    if ((_q21 == _q40 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q40, 0) && types_match (_q21, _q40)))
															      {
																switch (TREE_CODE (_q22))
																  {
																  case INTEGER_CST:
																    {
																      {
																	tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q80, _q40, _q41, _q22 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		    if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			  return true;
																			}
																		      }
																		}
																	      }
																	  }
																      }
																      {
																	tree captures[5] ATTRIBUTE_UNUSED = { _q80, _q60, _q40, _q41, _q22 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		    if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			  return true;
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
												    default:;
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
									        }
									      default:;
									      }
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
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case EQ_EXPR:
				      {
					tree _q30 = TREE_OPERAND (_q20, 0);
					if ((TREE_CODE (_q30) == SSA_NAME
					     || is_gimple_min_invariant (_q30)))
					  {
					    _q30 = do_valueize (valueize, _q30);
					    tree _q31 = TREE_OPERAND (_q20, 1);
					    if ((TREE_CODE (_q31) == SSA_NAME
					         || is_gimple_min_invariant (_q31)))
					      {
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case RSHIFT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case MULT_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q50))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q50))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    CASE_CONVERT:
											      {
												tree _q60 = gimple_assign_rhs1 (_a5);
												_q60 = do_valueize (valueize, _q60);
												switch (TREE_CODE (_q51))
												  {
												  case SSA_NAME:
												    if (gimple *_d6 = get_def (valueize, _q51))
												      {
													if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													  switch (gimple_assign_rhs_code (_a6))
													    {
													    CASE_CONVERT:
													      {
														tree _q80 = gimple_assign_rhs1 (_a6);
														_q80 = do_valueize (valueize, _q80);
														switch (TREE_CODE (_q41))
														  {
														  case INTEGER_CST:
														    {
														      if (integer_zerop (_q31))
															{
															  if ((_q21 == _q40 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q40, 0) && types_match (_q21, _q40)))
															    {
															      switch (TREE_CODE (_q22))
															        {
																case INTEGER_CST:
																  {
																    {
																      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q80, _q40, _q41, _q22 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		  if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			return true;
																		      }
																		    }
																	      }
																	    }
																	}
																    }
																    {
																      tree captures[5] ATTRIBUTE_UNUSED = { _q80, _q60, _q40, _q41, _q22 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		  if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			return true;
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
											          default:;
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
									      }
									    default:;
									    }
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
			  else if (gphi *_a2 = dyn_cast <gphi *> (_d2))
			    {
			      basic_block _b2 = gimple_bb (_a2);
			      tree _q21, _q22;
			      gcond *_cond_2 = match_cond_with_binary_phi (_a2, &_q21, &_q22);
			      if (_cond_2)
				{
				  tree _cond_lhs_2 = gimple_cond_lhs (_cond_2);
				  tree _cond_rhs_2 = gimple_cond_rhs (_cond_2);
				  tree _q20 = build2 (gimple_cond_code (_cond_2), boolean_type_node, _cond_lhs_2, _cond_rhs_2);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case EQ_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  tree _q31 = gimple_assign_rhs2 (_a3);
						  _q31 = do_valueize (valueize, _q31);
						  if (tree_swap_operands_p (_q30, _q31))
						    std::swap (_q30, _q31);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case RSHIFT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case MULT_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q50))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q50))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      CASE_CONVERT:
											        {
												  tree _q60 = gimple_assign_rhs1 (_a6);
												  _q60 = do_valueize (valueize, _q60);
												  switch (TREE_CODE (_q51))
												    {
												    case SSA_NAME:
												      if (gimple *_d7 = get_def (valueize, _q51))
												        {
													  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													    switch (gimple_assign_rhs_code (_a7))
													      {
													      CASE_CONVERT:
													        {
														  tree _q80 = gimple_assign_rhs1 (_a7);
														  _q80 = do_valueize (valueize, _q80);
														  switch (TREE_CODE (_q41))
														    {
														    case INTEGER_CST:
														      {
															if (integer_zerop (_q31))
															  {
															    if ((_q21 == _q40 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q40, 0) && types_match (_q21, _q40)))
															      {
																switch (TREE_CODE (_q22))
																  {
																  case INTEGER_CST:
																    {
																      {
																	tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q80, _q40, _q41, _q22 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		    if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			  return true;
																			}
																		      }
																		}
																	      }
																	  }
																      }
																      {
																	tree captures[5] ATTRIBUTE_UNUSED = { _q80, _q60, _q40, _q41, _q22 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		    if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			  return true;
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
												    default:;
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
									        }
									      default:;
									      }
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
						    default:;
						    }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case EQ_EXPR:
				      {
					tree _q30 = TREE_OPERAND (_q20, 0);
					if ((TREE_CODE (_q30) == SSA_NAME
					     || is_gimple_min_invariant (_q30)))
					  {
					    _q30 = do_valueize (valueize, _q30);
					    tree _q31 = TREE_OPERAND (_q20, 1);
					    if ((TREE_CODE (_q31) == SSA_NAME
					         || is_gimple_min_invariant (_q31)))
					      {
						_q31 = do_valueize (valueize, _q31);
						if (tree_swap_operands_p (_q30, _q31))
						  std::swap (_q30, _q31);
						switch (TREE_CODE (_q30))
						  {
						  case SSA_NAME:
						    if (gimple *_d3 = get_def (valueize, _q30))
						      {
							if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							  switch (gimple_assign_rhs_code (_a3))
							    {
							    case RSHIFT_EXPR:
							      {
								tree _q40 = gimple_assign_rhs1 (_a3);
								_q40 = do_valueize (valueize, _q40);
								tree _q41 = gimple_assign_rhs2 (_a3);
								_q41 = do_valueize (valueize, _q41);
								switch (TREE_CODE (_q40))
								  {
								  case SSA_NAME:
								    if (gimple *_d4 = get_def (valueize, _q40))
								      {
									if (gassign *_a4 = dyn_cast <gassign *> (_d4))
									  switch (gimple_assign_rhs_code (_a4))
									    {
									    case MULT_EXPR:
									      {
										tree _q50 = gimple_assign_rhs1 (_a4);
										_q50 = do_valueize (valueize, _q50);
										tree _q51 = gimple_assign_rhs2 (_a4);
										_q51 = do_valueize (valueize, _q51);
										if (tree_swap_operands_p (_q50, _q51))
										  std::swap (_q50, _q51);
										switch (TREE_CODE (_q50))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _q50))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    CASE_CONVERT:
											      {
												tree _q60 = gimple_assign_rhs1 (_a5);
												_q60 = do_valueize (valueize, _q60);
												switch (TREE_CODE (_q51))
												  {
												  case SSA_NAME:
												    if (gimple *_d6 = get_def (valueize, _q51))
												      {
													if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													  switch (gimple_assign_rhs_code (_a6))
													    {
													    CASE_CONVERT:
													      {
														tree _q80 = gimple_assign_rhs1 (_a6);
														_q80 = do_valueize (valueize, _q80);
														switch (TREE_CODE (_q41))
														  {
														  case INTEGER_CST:
														    {
														      if (integer_zerop (_q31))
															{
															  if ((_q21 == _q40 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q40, 0) && types_match (_q21, _q40)))
															    {
															      switch (TREE_CODE (_q22))
															        {
																case INTEGER_CST:
																  {
																    {
																      tree captures[5] ATTRIBUTE_UNUSED = { _q60, _q80, _q40, _q41, _q22 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		  if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			return true;
																		      }
																		    }
																	      }
																	    }
																	}
																    }
																    {
																      tree captures[5] ATTRIBUTE_UNUSED = { _q80, _q60, _q40, _q41, _q22 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int c4 = wi::to_wide (captures[4]);
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c4_is_max_p = wi::eq_p (c4, max);
 unsigned c2 = tree_to_uhwi (captures[3]);
 bool c2_is_type_precision_p = c2 == prec;
																		  if (widen_prec > prec && c2_is_type_precision_p && c4_is_max_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 90, __FILE__, __LINE__, false);
																			return true;
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
											          default:;
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
									      }
									    default:;
									    }
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
		      break;
		    default:;
		    }
	          break;
	        }
	      case COND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  tree _p2 = gimple_assign_rhs3 (_a1);
		  _p2 = do_valueize (valueize, _p2);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_MUL_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    if (integer_minus_onep (_p1))
									      {
										switch (TREE_CODE (_p2))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _p2))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case REALPART_EXPR:
											      {
												tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												if ((TREE_CODE (_q90) == SSA_NAME
												     || is_gimple_min_invariant (_q90)))
												  {
												    _q90 = do_valueize (valueize, _q90);
												    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														    return true;
														  }
														}
													    }
													}
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														    return true;
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
									          default:;
									          }
									      }
									  }
								      }
								    break;
								  default:;
								  }
							    }
							  break;
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
			        }
			      default:;
			      }
		        }
		      break;
		    case NE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_MUL_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  if (integer_minus_onep (_p1))
									    {
									      switch (TREE_CODE (_p2))
									        {
										case SSA_NAME:
										  if (gimple *_d4 = get_def (valueize, _p2))
										    {
										      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										        switch (gimple_assign_rhs_code (_a4))
											  {
											  case REALPART_EXPR:
											    {
											      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											      if ((TREE_CODE (_q90) == SSA_NAME
											           || is_gimple_min_invariant (_q90)))
											        {
												  _q90 = do_valueize (valueize, _q90);
												  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														  return true;
														}
													      }
													  }
												      }
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														  return true;
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
									        default:;
									        }
									    }
								        }
								    }
								  break;
								default:;
								}
						          }
						        break;
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
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case NEGATE_EXPR:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      CASE_CONVERT:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      case NE_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  if (tree_swap_operands_p (_q50, _q51))
										    std::swap (_q50, _q51);
										  switch (TREE_CODE (_q50))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q50))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      CASE_CONVERT:
											        {
												  tree _q60 = gimple_assign_rhs1 (_a6);
												  _q60 = do_valueize (valueize, _q60);
												  switch (TREE_CODE (_q60))
												    {
												    case SSA_NAME:
												      if (gimple *_d7 = get_def (valueize, _q60))
												        {
													  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													    switch (gimple_assign_rhs_code (_a7))
													      {
													      case RSHIFT_EXPR:
													        {
														  tree _q70 = gimple_assign_rhs1 (_a7);
														  _q70 = do_valueize (valueize, _q70);
														  tree _q71 = gimple_assign_rhs2 (_a7);
														  _q71 = do_valueize (valueize, _q71);
														  switch (TREE_CODE (_q71))
														    {
														    case INTEGER_CST:
														      {
															if (integer_zerop (_q51))
															  {
															    switch (TREE_CODE (_p1))
															      {
															      case SSA_NAME:
															        if (gimple *_d8 = get_def (valueize, _p1))
															          {
																    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																      switch (gimple_assign_rhs_code (_a8))
																	{
																	CASE_CONVERT:
																	  {
																	    tree _q110 = gimple_assign_rhs1 (_a8);
																	    _q110 = do_valueize (valueize, _q110);
																	    if ((_q110 == _q70 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q70, 0) && types_match (_q110, _q70)))
																	      {
																		{
																		  tree _q110_pops[2];
																		  if (gimple_usmul_widen_mult (_q110, _q110_pops, valueize))
																		    {
																		      tree _q130 = _q110_pops[0];
																		      tree _q131 = _q110_pops[1];
																		      {
																			tree captures[4] ATTRIBUTE_UNUSED = { _q130, _q131, _q70, _q71 };
																			if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																			  {
																			    if (types_match (type, captures[0], captures[1])
)
																			      {
																				{
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																				    if (c2_is_type_precision_p
)
																				      {
																					{
																					  res_ops[0] = captures[0];
																					  res_ops[1] = captures[1];
																					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																					  return true;
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
															          }
															        break;
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
												    default:;
												    }
											          break;
											        }
											      case RSHIFT_EXPR:
											        {
												  tree _q60 = gimple_assign_rhs1 (_a6);
												  _q60 = do_valueize (valueize, _q60);
												  tree _q61 = gimple_assign_rhs2 (_a6);
												  _q61 = do_valueize (valueize, _q61);
												  switch (TREE_CODE (_q61))
												    {
												    case INTEGER_CST:
												      {
													if (integer_zerop (_q51))
													  {
													    switch (TREE_CODE (_p1))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _p1))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a7);
															    _q100 = do_valueize (valueize, _q100);
															    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
															      {
																{
																  tree _q100_pops[2];
																  if (gimple_usmul_widen_mult (_q100, _q100_pops, valueize))
																    {
																      tree _q120 = _q100_pops[0];
																      tree _q121 = _q100_pops[1];
																      {
																	tree captures[4] ATTRIBUTE_UNUSED = { _q120, _q121, _q60, _q61 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																		    if (c2_is_type_precision_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																			  return true;
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
													          }
													        break;
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
										    default:;
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
							        }
							      default:;
							      }
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
				    default:;
				    }
				{
				  tree _q20_pops[2];
				  if (gimple_usmul_widen_mult (_q20, _q20_pops, valueize))
				    {
				      tree _q30 = _q20_pops[0];
				      tree _q31 = _q20_pops[1];
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  CASE_CONVERT:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  case NEGATE_EXPR:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      switch (TREE_CODE (_q70))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q70))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  CASE_CONVERT:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  case NE_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if (tree_swap_operands_p (_q90, _q91))
												        std::swap (_q90, _q91);
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d7 = get_def (valueize, _q90))
													    {
													      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													        switch (gimple_assign_rhs_code (_a7))
														  {
														  CASE_CONVERT:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a7);
														      _q100 = do_valueize (valueize, _q100);
														      switch (TREE_CODE (_q100))
														        {
															case SSA_NAME:
															  if (gimple *_d8 = get_def (valueize, _q100))
															    {
															      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
															        switch (gimple_assign_rhs_code (_a8))
																  {
																  case RSHIFT_EXPR:
																    {
																      tree _q110 = gimple_assign_rhs1 (_a8);
																      _q110 = do_valueize (valueize, _q110);
																      tree _q111 = gimple_assign_rhs2 (_a8);
																      _q111 = do_valueize (valueize, _q111);
																      if ((_q110 == _q20 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q20, 0) && types_match (_q110, _q20)))
																	{
																	  switch (TREE_CODE (_q111))
																	    {
																	    case INTEGER_CST:
																	      {
																		if (integer_zerop (_q91))
																		  {
																		    {
																		      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q111 };
																		      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																			{
																			  if (types_match (type, captures[0], captures[1])
)
																			    {
																			      {
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																				  if (c2_is_type_precision_p
)
																				    {
																				      {
																					res_ops[0] = captures[0];
																					res_ops[1] = captures[1];
																					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																					return true;
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
															    }
															  break;
														        default:;
														        }
														      break;
														    }
														  case RSHIFT_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a7);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a7);
														      _q101 = do_valueize (valueize, _q101);
														      if ((_q100 == _q20 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q20, 0) && types_match (_q100, _q20)))
															{
															  switch (TREE_CODE (_q101))
															    {
															    case INTEGER_CST:
															      {
																if (integer_zerop (_q91))
																  {
																    {
																      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q101 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																		  if (c2_is_type_precision_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																			return true;
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
										        default:;
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
								    }
								  default:;
								  }
							    }
							  break;
						        default:;
						        }
						      break;
						    }
						  case NEGATE_EXPR:
						    {
						      tree _q60 = gimple_assign_rhs1 (_a3);
						      _q60 = do_valueize (valueize, _q60);
						      switch (TREE_CODE (_q60))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q60))
							    {
							      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							        switch (gimple_assign_rhs_code (_a4))
								  {
								  CASE_CONVERT:
								    {
								      tree _q70 = gimple_assign_rhs1 (_a4);
								      _q70 = do_valueize (valueize, _q70);
								      switch (TREE_CODE (_q70))
								        {
									case SSA_NAME:
									  if (gimple *_d5 = get_def (valueize, _q70))
									    {
									      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									        switch (gimple_assign_rhs_code (_a5))
										  {
										  case NE_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      if (tree_swap_operands_p (_q80, _q81))
										        std::swap (_q80, _q81);
										      switch (TREE_CODE (_q80))
										        {
											case SSA_NAME:
											  if (gimple *_d6 = get_def (valueize, _q80))
											    {
											      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											        switch (gimple_assign_rhs_code (_a6))
												  {
												  CASE_CONVERT:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      switch (TREE_CODE (_q90))
												        {
													case SSA_NAME:
													  if (gimple *_d7 = get_def (valueize, _q90))
													    {
													      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
													        switch (gimple_assign_rhs_code (_a7))
														  {
														  case RSHIFT_EXPR:
														    {
														      tree _q100 = gimple_assign_rhs1 (_a7);
														      _q100 = do_valueize (valueize, _q100);
														      tree _q101 = gimple_assign_rhs2 (_a7);
														      _q101 = do_valueize (valueize, _q101);
														      if ((_q100 == _q20 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q20, 0) && types_match (_q100, _q20)))
															{
															  switch (TREE_CODE (_q101))
															    {
															    case INTEGER_CST:
															      {
																if (integer_zerop (_q81))
																  {
																    {
																      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q101 };
																      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	{
																	  if (types_match (type, captures[0], captures[1])
)
																	    {
																	      {
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																		  if (c2_is_type_precision_p
)
																		    {
																		      {
																			res_ops[0] = captures[0];
																			res_ops[1] = captures[1];
																			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																			return true;
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
													    }
													  break;
												        default:;
												        }
												      break;
												    }
												  case RSHIFT_EXPR:
												    {
												      tree _q90 = gimple_assign_rhs1 (_a6);
												      _q90 = do_valueize (valueize, _q90);
												      tree _q91 = gimple_assign_rhs2 (_a6);
												      _q91 = do_valueize (valueize, _q91);
												      if ((_q90 == _q20 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q20, 0) && types_match (_q90, _q20)))
													{
													  switch (TREE_CODE (_q91))
													    {
													    case INTEGER_CST:
													      {
														if (integer_zerop (_q81))
														  {
														    {
														      tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q91 };
														      if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
															{
															  if (types_match (type, captures[0], captures[1])
)
															    {
															      {
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																  if (c2_is_type_precision_p
)
																    {
																      {
																	res_ops[0] = captures[0];
																	res_ops[1] = captures[1];
																	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																	return true;
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
											    }
											  break;
										        default:;
										        }
										      break;
										    }
										  case GT_EXPR:
										    {
										      tree _q80 = gimple_assign_rhs1 (_a5);
										      _q80 = do_valueize (valueize, _q80);
										      tree _q81 = gimple_assign_rhs2 (_a5);
										      _q81 = do_valueize (valueize, _q81);
										      if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
											{
											  switch (TREE_CODE (_q81))
											    {
											    case INTEGER_CST:
											      {
												{
												  tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q20, _q81 };
												  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												    {
												      if (types_match (type, captures[0], captures[1])
)
													{
													  {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c2_is_max_p = wi::eq_p (wi::to_wide (captures[3]), max);
													      if (c2_is_max_p
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 93, __FILE__, __LINE__, false);
														    return true;
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
						        default:;
						        }
						      break;
						    }
						  default:;
						  }
					    }
					  break;
				        default:;
				        }
				    }
				}
			          break;
			        }
			      case NEGATE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q30 = gimple_assign_rhs1 (_a3);
						  _q30 = do_valueize (valueize, _q30);
						  switch (TREE_CODE (_q30))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q30))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case NE_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  if (tree_swap_operands_p (_q40, _q41))
								    std::swap (_q40, _q41);
								  switch (TREE_CODE (_q40))
								    {
								    case SSA_NAME:
								      if (gimple *_d5 = get_def (valueize, _q40))
								        {
									  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
									    switch (gimple_assign_rhs_code (_a5))
									      {
									      CASE_CONVERT:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  switch (TREE_CODE (_q50))
										    {
										    case SSA_NAME:
										      if (gimple *_d6 = get_def (valueize, _q50))
										        {
											  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
											    switch (gimple_assign_rhs_code (_a6))
											      {
											      case RSHIFT_EXPR:
											        {
												  tree _q60 = gimple_assign_rhs1 (_a6);
												  _q60 = do_valueize (valueize, _q60);
												  tree _q61 = gimple_assign_rhs2 (_a6);
												  _q61 = do_valueize (valueize, _q61);
												  switch (TREE_CODE (_q61))
												    {
												    case INTEGER_CST:
												      {
													if (integer_zerop (_q41))
													  {
													    switch (TREE_CODE (_p1))
													      {
													      case SSA_NAME:
													        if (gimple *_d7 = get_def (valueize, _p1))
													          {
														    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
														      switch (gimple_assign_rhs_code (_a7))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a7);
															    _q100 = do_valueize (valueize, _q100);
															    if ((_q100 == _q60 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q60, 0) && types_match (_q100, _q60)))
															      {
																{
																  tree _q100_pops[2];
																  if (gimple_usmul_widen_mult (_q100, _q100_pops, valueize))
																    {
																      tree _q120 = _q100_pops[0];
																      tree _q121 = _q100_pops[1];
																      {
																	tree captures[4] ATTRIBUTE_UNUSED = { _q120, _q121, _q60, _q61 };
																	if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
																	  {
																	    if (types_match (type, captures[0], captures[1])
)
																	      {
																		{
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																		    if (c2_is_type_precision_p
)
																		      {
																			{
																			  res_ops[0] = captures[0];
																			  res_ops[1] = captures[1];
																			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																			  return true;
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
													          }
													        break;
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
										    default:;
										    }
									          break;
									        }
									      case RSHIFT_EXPR:
									        {
										  tree _q50 = gimple_assign_rhs1 (_a5);
										  _q50 = do_valueize (valueize, _q50);
										  tree _q51 = gimple_assign_rhs2 (_a5);
										  _q51 = do_valueize (valueize, _q51);
										  switch (TREE_CODE (_q51))
										    {
										    case INTEGER_CST:
										      {
											if (integer_zerop (_q41))
											  {
											    switch (TREE_CODE (_p1))
											      {
											      case SSA_NAME:
											        if (gimple *_d6 = get_def (valueize, _p1))
											          {
												    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
												      switch (gimple_assign_rhs_code (_a6))
													{
													CASE_CONVERT:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a6);
													    _q90 = do_valueize (valueize, _q90);
													    if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
													      {
														{
														  tree _q90_pops[2];
														  if (gimple_usmul_widen_mult (_q90, _q90_pops, valueize))
														    {
														      tree _q110 = _q90_pops[0];
														      tree _q111 = _q90_pops[1];
														      {
															tree captures[4] ATTRIBUTE_UNUSED = { _q110, _q111, _q50, _q51 };
															if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
															  {
															    if (types_match (type, captures[0], captures[1])
)
															      {
																{
 unsigned prec = TYPE_PRECISION (type);
 bool c2_is_type_precision_p = tree_to_uhwi (captures[3]) == prec;
																    if (c2_is_type_precision_p
)
																      {
																	{
																	  res_ops[0] = captures[0];
																	  res_ops[1] = captures[1];
																	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 92, __FILE__, __LINE__, false);
																	  return true;
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
											          }
											        break;
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
								    default:;
								    }
							          break;
							        }
							      case GT_EXPR:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
								  tree _q41 = gimple_assign_rhs2 (_a4);
								  _q41 = do_valueize (valueize, _q41);
								  switch (TREE_CODE (_q41))
								    {
								    case INTEGER_CST:
								      {
									switch (TREE_CODE (_p1))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _p1))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    CASE_CONVERT:
										      {
											tree _q70 = gimple_assign_rhs1 (_a5);
											_q70 = do_valueize (valueize, _q70);
											if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
											  {
											    {
											      tree _q70_pops[2];
											      if (gimple_usmul_widen_mult (_q70, _q70_pops, valueize))
											        {
												  tree _q90 = _q70_pops[0];
												  tree _q91 = _q70_pops[1];
												  {
												    tree captures[4] ATTRIBUTE_UNUSED = { _q90, _q91, _q40, _q41 };
												    if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
												      {
													if (types_match (type, captures[0], captures[1])
)
													  {
													    {
 unsigned prec = TYPE_PRECISION (type);
 unsigned widen_prec = TYPE_PRECISION (TREE_TYPE (captures[2]));
 wide_int max = wi::mask (prec, false, widen_prec);
 bool c2_is_max_p = wi::eq_p (wi::to_wide (captures[3]), max);
														if (c2_is_max_p
)
														  {
														    {
														      res_ops[0] = captures[0];
														      res_ops[1] = captures[1];
														      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 93, __FILE__, __LINE__, false);
														      return true;
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
						      break;
						    default:;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gphi *_a1 = dyn_cast <gphi *> (_d1))
	    {
	      basic_block _b1 = gimple_bb (_a1);
	      tree _p1, _p2;
	      gcond *_cond_1 = match_cond_with_binary_phi (_a1, &_p1, &_p2);
	      if (_cond_1)
		{
		  tree _cond_lhs_1 = gimple_cond_lhs (_cond_1);
		  tree _cond_rhs_1 = gimple_cond_rhs (_cond_1);
		  tree _p0 = build2 (gimple_cond_code (_cond_1), boolean_type_node, _cond_lhs_1, _cond_rhs_1);
		  switch (TREE_CODE (_p0))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p0))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  if (tree_swap_operands_p (_q20, _q21))
				    std::swap (_q20, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case IMAGPART_EXPR:
					        {
						  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a3), 0);
						  if ((TREE_CODE (_q30) == SSA_NAME
						       || is_gimple_min_invariant (_q30)))
						    {
						      _q30 = do_valueize (valueize, _q30);
						      switch (TREE_CODE (_q30))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _q30))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_MUL_OVERFLOW:
								    if (gimple_call_num_args (_c4) == 2)
								      {
									tree _q40 = gimple_call_arg (_c4, 0);
									_q40 = do_valueize (valueize, _q40);
									tree _q41 = gimple_call_arg (_c4, 1);
									_q41 = do_valueize (valueize, _q41);
									if (tree_swap_operands_p (_q40, _q41))
									  std::swap (_q40, _q41);
									if (integer_zerop (_q21))
									  {
									    if (integer_minus_onep (_p1))
									      {
										switch (TREE_CODE (_p2))
										  {
										  case SSA_NAME:
										    if (gimple *_d5 = get_def (valueize, _p2))
										      {
											if (gassign *_a5 = dyn_cast <gassign *> (_d5))
											  switch (gimple_assign_rhs_code (_a5))
											    {
											    case REALPART_EXPR:
											      {
												tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a5), 0);
												if ((TREE_CODE (_q90) == SSA_NAME
												     || is_gimple_min_invariant (_q90)))
												  {
												    _q90 = do_valueize (valueize, _q90);
												    if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												      {
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														    return true;
														  }
														}
													    }
													}
													{
													  tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q30 };
													  if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													    {
													      if (types_match (type, captures[0], captures[1])
)
														{
														  {
														    res_ops[0] = captures[0];
														    res_ops[1] = captures[1];
														    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														    return true;
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
									          default:;
									          }
									      }
									  }
								      }
								    break;
								  default:;
								  }
							    }
							  break;
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
			        }
			      default:;
			      }
		        }
		      break;
		    case NE_EXPR:
		      {
			tree _q20 = TREE_OPERAND (_p0, 0);
			if ((TREE_CODE (_q20) == SSA_NAME
			     || is_gimple_min_invariant (_q20)))
			  {
			    _q20 = do_valueize (valueize, _q20);
			    tree _q21 = TREE_OPERAND (_p0, 1);
			    if ((TREE_CODE (_q21) == SSA_NAME
			         || is_gimple_min_invariant (_q21)))
			      {
				_q21 = do_valueize (valueize, _q21);
				if (tree_swap_operands_p (_q20, _q21))
				  std::swap (_q20, _q21);
				switch (TREE_CODE (_q20))
				  {
				  case SSA_NAME:
				    if (gimple *_d2 = get_def (valueize, _q20))
				      {
					if (gassign *_a2 = dyn_cast <gassign *> (_d2))
					  switch (gimple_assign_rhs_code (_a2))
					    {
					    case IMAGPART_EXPR:
					      {
						tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a2), 0);
						if ((TREE_CODE (_q30) == SSA_NAME
						     || is_gimple_min_invariant (_q30)))
						  {
						    _q30 = do_valueize (valueize, _q30);
						    switch (TREE_CODE (_q30))
						      {
						      case SSA_NAME:
						        if (gimple *_d3 = get_def (valueize, _q30))
						          {
							    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
							      switch (gimple_call_combined_fn (_c3))
								{
								case CFN_MUL_OVERFLOW:
								  if (gimple_call_num_args (_c3) == 2)
								    {
								      tree _q40 = gimple_call_arg (_c3, 0);
								      _q40 = do_valueize (valueize, _q40);
								      tree _q41 = gimple_call_arg (_c3, 1);
								      _q41 = do_valueize (valueize, _q41);
								      if (tree_swap_operands_p (_q40, _q41))
								        std::swap (_q40, _q41);
								      if (integer_zerop (_q21))
									{
									  if (integer_minus_onep (_p1))
									    {
									      switch (TREE_CODE (_p2))
									        {
										case SSA_NAME:
										  if (gimple *_d4 = get_def (valueize, _p2))
										    {
										      if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										        switch (gimple_assign_rhs_code (_a4))
											  {
											  case REALPART_EXPR:
											    {
											      tree _q90 = TREE_OPERAND (gimple_assign_rhs1 (_a4), 0);
											      if ((TREE_CODE (_q90) == SSA_NAME
											           || is_gimple_min_invariant (_q90)))
											        {
												  _q90 = do_valueize (valueize, _q90);
												  if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
												    {
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														  return true;
														}
													      }
													  }
												      }
												      {
													tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _q30 };
													if (INTEGRAL_TYPE_P (type) && TYPE_UNSIGNED (type)
)
													  {
													    if (types_match (type, captures[0], captures[1])
)
													      {
														{
														  res_ops[0] = captures[0];
														  res_ops[1] = captures[1];
														  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 91, __FILE__, __LINE__, false);
														  return true;
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
									        default:;
									        }
									    }
								        }
								    }
								  break;
								default:;
								}
						          }
						        break;
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
    default:;
    }
  return false;
}

bool
gimple_simplify_79 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
1
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail717;
      {
	res_op->set_op (COND_EXPR, type, 3);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (boolean_type_node != TREE_TYPE (_o1[0]) /* XXX */
	      && !useless_type_conversion_p (boolean_type_node, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, boolean_type_node, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail717;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 209, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail717:;
    }
  return false;
}

bool
gimple_simplify_83 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail722;
      {
	res_op->set_op (RDIV_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[2];
	  gimple_match_op tem_op (res_op->cond.any_else (), op, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail722;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 214, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail722:;
    }
  return false;
}

bool
gimple_simplify_85 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (wi::bit_and (widest_int::from (tree_nonzero_bits (captures[1]), UNSIGNED),
 widest_int::from (tree_nonzero_bits (captures[3]), UNSIGNED))
 == 0)
)
    {
      {
 tree utype = TREE_TYPE (captures[1]);
 if (TYPE_PRECISION (utype) < TYPE_PRECISION (TREE_TYPE (captures[3])))
 utype = TREE_TYPE (captures[3]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[2])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail724;
	  {
	    res_op->set_op (POPCOUNT, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail724;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (utype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail724;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail724;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 216, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail724:;
      }
    }
  return false;
}

bool
gimple_simplify_91 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 || (VECTOR_INTEGER_TYPE_P (type)
 && ((optimize_vectors_before_lowering_p ()
 && TREE_CODE (TYPE_SIZE (type)) == INTEGER_CST)
 || target_supports_op_p (type, TRUNC_MOD_EXPR,
 optab_vector)))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail730;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[1];
	  (*res_op).set_op (TRUNC_MOD_EXPR, TREE_TYPE (_o1[0]), 2);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).ops[1] = _o1[1];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail730;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 222, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail730:;
    }
  return false;
}

bool
gimple_simplify_94 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail733;
  {
    res_op->set_op (MINUS_EXPR, type, 2);
    res_op->ops[0] = captures[2];
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail733;
      res_op->ops[1] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 225, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail733:;
  return false;
}

bool
gimple_simplify_98 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail737;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[3];
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail737;
	    _o1[0] = _r2;
	  }
	  _o1[1] = captures[0];
	  (*res_op).set_op (BIT_AND_EXPR, TREE_TYPE (_o1[0]), 2);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).ops[1] = _o1[1];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail737;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 229, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail737:;
    }
  return false;
}

bool
gimple_simplify_102 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!ANY_INTEGRAL_TYPE_P (type)
 || TYPE_OVERFLOW_WRAPS (type)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail741;
	      {
		res_op->set_op (NEGATE_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail741;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 232, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail741:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail742;
	      {
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  (*res_op).set_op (NEGATE_EXPR, TREE_TYPE (_o1[0]), 1);
		  (*res_op).ops[0] = _o1[0];
		  (*res_op).resimplify (lseq, valueize);
		}
		if (type != res_op->type
		    && !useless_type_conversion_p (type, res_op->type))
		  {
		    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail742;
		    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		    res_op->resimplify (lseq, valueize);
		  }
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 233, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail742:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_107 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_SATURATING (type)
)
    {
      if ((!FLOAT_TYPE_P (type) || flag_associative_math)
 && !FIXED_POINT_TYPE_P (type)
)
	{
	  if (!TYPE_OVERFLOW_TRAPS (type)
 && TREE_CODE (type) != COMPLEX_TYPE
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail750;
	      {
		res_op->set_op (BIT_NOT_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[0];
		  if (type != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail750;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 241, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail750:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_111 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (
1
 || !TREE_SIDE_EFFECTS (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail756;
      {
	res_op->set_op (COND_EXPR, type, 3);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (boolean_type_node != TREE_TYPE (_o1[0]) /* XXX */
	      && !useless_type_conversion_p (boolean_type_node, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, boolean_type_node, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail756;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 247, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail756:;
    }
  return false;
}

bool
gimple_simplify_112 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_TYPE_P (type)
 && known_eq (TYPE_VECTOR_SUBPARTS (type),
 TYPE_VECTOR_SUBPARTS (TREE_TYPE (captures[3])))
 && (TYPE_MODE (TREE_TYPE (type))
 == TYPE_MODE (TREE_TYPE (TREE_TYPE (captures[3]))))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[1])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail757;
      {
	res_op->set_op (PLUS_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _r1;
	  gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
	  {
	    tree _o2[3], _r2;
	    _o2[0] = captures[2];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[3];
	      gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o3[0]), _o3[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r3) goto next_after_fail757;
	      _o2[1] = _r3;
	    }
	    _o2[2] = captures[4];
	    tem_op.set_op (VEC_COND_EXPR, TREE_TYPE (_o2[1]), 3);
	    tem_op.ops[0] = _o2[0];
	    tem_op.ops[1] = _o2[1];
	    tem_op.ops[2] = _o2[2];
	    tem_op.resimplify (lseq, valueize);
	  }
	  if (type != tem_op.type
	      && !useless_type_conversion_p (type, tem_op.type))
	    {
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail757;
	      tem_op.set_op (VIEW_CONVERT_EXPR, type, 1);
	      tem_op.ops[0] = _r1;
	      tem_op.resimplify (lseq, valueize);
	    }
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail757;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 248, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail757:;
    }
  return false;
}

bool
gimple_simplify_116 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[2]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == TYPE_PRECISION (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail761;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[2];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0]) /* XXX */
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail761;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_IOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail761;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 252, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail761:;
    }
  return false;
}

bool
gimple_simplify_121 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail766;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 255, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail766:;
  return false;
}

bool
gimple_simplify_123 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail768;
      {
	res_op->set_op (BIT_IOR_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_one_cst (type);
	  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail768;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 258, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail768:;
    }
  return false;
}

bool
gimple_simplify_129 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail774;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[3];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 263, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail774:;
  return false;
}

bool
gimple_simplify_133 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) == 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail778;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 262, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail778:;
    }
  return false;
}

bool
gimple_simplify_137 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail782;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 266, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail782:;
  return false;
}

bool
gimple_simplify_140 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail785;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 260, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail785:;
  return false;
}

bool
gimple_simplify_143 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[3]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[6]))
)
    {
      if (single_use (captures[4]) && single_use (captures[5])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail789;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[6];
	      if (type != TREE_TYPE (_o1[0]) /* XXX */
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail789;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 271, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail789:;
	}
      else
	{
	  if (single_use (captures[0]) && single_use (captures[1])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail790;
	      {
		res_op->set_op (op, type, 2);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[3];
		  if (type != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail790;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[4];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 272, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail790:;
	    }
	}
    }
  return false;
}

bool
gimple_simplify_147 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail796;
	  {
	    res_op->set_op (bitop, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 274, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail796:;
	}
  }
  return false;
}

bool
gimple_simplify_150 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (bitwise_equal_p (captures[4], captures[7])
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[1])
              || !single_use (captures[2])
              || !single_use (captures[3])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail799;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[2], _r1;
	  {
	    tree _o2[2], _r2;
	    _o2[0] = captures[5];
	    {
	      tree _o3[1], _r3;
	      _o3[0] = captures[6];
	      if (TREE_TYPE (_o2[0]) != TREE_TYPE (_o3[0]) /* XXX */
	          && !useless_type_conversion_p (TREE_TYPE (_o2[0]), TREE_TYPE (_o3[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o2[0]), _o3[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r3) goto next_after_fail799;
	        }
	      else
	        _r3 = _o3[0];
	      _o2[1] = _r3;
	    }
	    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o2[0]), _o2[0], _o2[1]);
	    tem_op.resimplify (lseq, valueize);
	    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
	    if (!_r2) goto next_after_fail799;
	    _o1[0] = _r2;
	  }
	  {
	    tree _o2[1], _r2;
	    _o2[0] = captures[4];
	    if (TREE_TYPE (_o1[0]) != TREE_TYPE (_o2[0]) /* XXX */
	        && !useless_type_conversion_p (TREE_TYPE (_o1[0]), TREE_TYPE (_o2[0])))
	      {
		gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, TREE_TYPE (_o1[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail799;
	      }
	    else
	      _r2 = _o2[0];
	    _o1[1] = _r2;
	  }
	  (*res_op).set_op (BIT_IOR_EXPR, TREE_TYPE (_o1[0]), 2);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).ops[1] = _o1[1];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail799;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 277, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail799:;
    }
  return false;
}

bool
gimple_simplify_157 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && invert_tree_comparison (cmp, HONOR_NANS (captures[1])) == icmp
 && canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail807;
      {
	res_op->set_op (BIT_AND_EXPR, type, 2);
	{
	  tree _o1[3], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  _o1[2] = captures[5];
	  gimple_match_op tem_op (res_op->cond.any_else (), COND_EXPR, TREE_TYPE (_o1[1]), _o1[0], _o1[1], _o1[2]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail807;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] =  build_one_cst (type);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 280, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail807:;
    }
  return false;
}

bool
gimple_simplify_160 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail813;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail813:;
  return false;
}

bool
gimple_simplify_162 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail815;
      {
	res_op->set_op (LE_EXPR, type, 2);
	res_op->ops[0] = captures[3];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail815;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 288, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail815:;
    }
  return false;
}

bool
gimple_simplify_166 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail837;
  {
    res_op->set_op (BIT_IOR_EXPR, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] =  build_zero_cst (TREE_TYPE (captures[0]));
      _o1[1] = captures[3];
      gimple_match_op tem_op (res_op->cond.any_else (), cmp, type, _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail837;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[4];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 303, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail837:;
  return false;
}

bool
gimple_simplify_168 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail839;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 286, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail839:;
  return false;
}

bool
gimple_simplify_169 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail840;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 305, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail840:;
  return false;
}

bool
gimple_simplify_171 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail842;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 306, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail842:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail843;
	  {
	    tree tem;
	    tem =  constant_boolean_node (true, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail843:;
	}
    }
  return false;
}

bool
gimple_simplify_174 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail858;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 305, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail858:;
  return false;
}

bool
gimple_simplify_175 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail859;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 306, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail859:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail860;
	  {
	    tree tem;
	    tem =  constant_boolean_node (true, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 307, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail860:;
	}
    }
  return false;
}

bool
gimple_simplify_176 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail861;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 308, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail861:;
  return false;
}

bool
gimple_simplify_179 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail864;
  {
    res_op->set_op (neeq, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] = captures[1];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 309, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail864:;
  return false;
}

bool
gimple_simplify_182 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail867;
  {
    res_op->set_op (neeq, type, 2);
    res_op->ops[0] = captures[2];
    res_op->ops[1] = captures[3];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 311, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail867:;
  return false;
}

bool
gimple_simplify_186 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (type_has_mode_precision_p (type)
 && tree_fits_uhwi_p (captures[1])
 && tree_fits_uhwi_p (captures[3])
 && tree_fits_uhwi_p (captures[4])
 && ((~((HOST_WIDE_INT_1U << tree_to_uhwi (captures[1])) - 1)) & tree_to_uhwi (captures[4])) == 0
 && (tree_to_uhwi (captures[1]) + tree_to_uhwi (captures[3])) == TYPE_PRECISION (type)
 && TYPE_UNSIGNED (type)
 && captures[0] == captures[2]
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail871;
      {
	res_op->set_op (BIT_XOR_EXPR, type, 2);
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[0];
	  _o1[1] = captures[3];
	  gimple_match_op tem_op (res_op->cond.any_else (), RROTATE_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail871;
	  res_op->ops[0] = _r1;
	}
	res_op->ops[1] = captures[4];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 314, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail871:;
    }
  return false;
}

bool
gimple_simplify_191 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail877;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  (*res_op).set_op (ABS_EXPR, TREE_TYPE (_o1[0]), 1);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail877;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 320, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail877:;
    }
  return false;
}

bool
gimple_simplify_196 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail882;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail882;
	  res_op->ops[0] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 321, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail882:;
    }
  return false;
}

bool
gimple_simplify_202 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail888;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  (*res_op).set_op (ABS_EXPR, TREE_TYPE (_o1[0]), 1);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail888;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 321, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail888:;
    }
  return false;
}

bool
gimple_simplify_208 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!tree_expr_maybe_nan_p (captures[0]) && !HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail894;
      {
	res_op->set_op (ABS_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 322, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail894:;
    }
  return false;
}

bool
gimple_simplify_214 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail900;
	  {
	    res_op->set_op (ABSU_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 326, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail900:;
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail901;
	  {
	    res_op->set_op (ABS_EXPR, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 327, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail901:;
	}
    }
  return false;
}

bool
gimple_simplify_220 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
 && wi::ltu_p (wi::to_widest (captures[1]), TYPE_PRECISION (type))
)
    {
      {
 unsigned int shift = tree_to_uhwi (captures[1]);
 unsigned int prec = TYPE_PRECISION (type);
	  if ((prec <= TYPE_PRECISION (TREE_TYPE (captures[2])) + shift
 || tree_int_cst_sgn (captures[2]) >= 0)
 && wi::to_wide (captures[3]) == wi::set_bit_in_zero (shift, prec)
)
	    {
	      {
 auto mask = wide_int::from (wi::to_wide (captures[2]), prec, UNSIGNED);
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail908;
		  {
		    res_op->set_op (BIT_AND_EXPR, type, 2);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[0];
		      if (type != TREE_TYPE (_o1[0]) /* XXX */
		          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail908;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  wide_int_to_tree (type, mask << shift);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 331, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail908:;
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_229 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (TAN),
 const combined_fn ARG_UNUSED (COS),
 const combined_fn ARG_UNUSED (SIN))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail918;
      {
	res_op->set_op (SIN, type, 1);
	res_op->ops[0] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 341, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail918:;
    }
  return false;
}

bool
gimple_simplify_233 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail922;
	  {
	    res_op->set_op (cmp, type, 2);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (utype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail922;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (utype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail922;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      gimple_match_op tem_op (res_op->cond.any_else (), mod, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail922;
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (utype != TREE_TYPE (_o1[0]) /* XXX */
	          && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail922;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 345, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail922:;
      }
    }
  return false;
}

bool
gimple_simplify_243 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && tree_expr_nonzero_p (captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail935;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 357, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail935:;
    }
  return false;
}

bool
gimple_simplify_246 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail951;
  {
    res_op->set_op (op, type, 2);
    res_op->ops[0] = captures[1];
    res_op->ops[1] = captures[2];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 373, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail951:;
  return false;
}

bool
gimple_simplify_249 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail954;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[3];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 376, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail954:;
    }
  return false;
}

bool
gimple_simplify_253 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (neeq))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 diff; tree inner_type = TREE_TYPE (captures[1]);
      if (ptr_difference_const (captures[0], captures[2], &diff)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail958;
	  {
	    res_op->set_op (neeq, type, 2);
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_int_cst_type (inner_type, diff);
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), PLUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail958;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 379, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail958:;
	}
  }
  return false;
}

bool
gimple_simplify_260 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::gt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail966;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 387, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail966:;
    }
  else
    {
      if (wi::lt_p (wi::to_wide (captures[1]), wi::to_wide (captures[2]),
 TYPE_SIGN (TREE_TYPE (captures[0])))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail967;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 388, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail967:;
	}
    }
  return false;
}

bool
gimple_simplify_265 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (icmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail974;
      {
	res_op->set_op (icmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[0]),
 wi::exact_log2 (wi::to_wide (captures[1])));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 395, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail974:;
    }
  return false;
}

bool
gimple_simplify_268 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail984;
	  {
	    tree tem;
	    tem =  constant_boolean_node (cmp == NE_EXPR, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 405, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail984:;
	}
      else
	{
	  if (!integer_zerop (captures[2])
 && wi::lshift (wi::to_wide (captures[0]), cand) == wi::to_wide (captures[2])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail985;
	      {
		res_op->set_op (cmp, type, 2);
		res_op->ops[0] = captures[1];
		res_op->ops[1] =  build_int_cst (TREE_TYPE (captures[1]), cand);
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 406, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail985:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_273 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree ctype = TREE_TYPE (captures[0]);
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail990;
      {
	res_op->set_op (cmp, type, 2);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[1];
	  if (ctype != TREE_TYPE (_o1[0]) /* XXX */
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail990;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[0] = _r1;
	}
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[2];
	  if (ctype != TREE_TYPE (_o1[0]) /* XXX */
	      && !useless_type_conversion_p (ctype, TREE_TYPE (_o1[0])))
	    {
	      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, ctype, _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail990;
	    }
	  else
	    _r1 = _o1[0];
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 411, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail990:;
  }
  return false;
}

bool
gimple_simplify_278 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (single_use (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail996;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 416, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail996:;
    }
  return false;
}

bool
gimple_simplify_281 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (! FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || ! tree_expr_maybe_nan_p (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1003;
      {
	tree tem;
	tem =  constant_boolean_node (true, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 423, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1003:;
    }
  else
    {
      if (cmp != EQ_EXPR
 && (! FLOAT_TYPE_P (TREE_TYPE (captures[0]))
 || ! flag_trapping_math)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1004;
	  {
	    res_op->set_op (EQ_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 424, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1004:;
	}
    }
  return false;
}

bool
gimple_simplify_286 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1009;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] =  build_real (TREE_TYPE (captures[1]), dconst0);
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 428, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1009:;
    }
  else
    {
      if (TREE_CODE (captures[0]) == REAL_CST
 && REAL_VALUE_MINUS_ZERO (TREE_REAL_CST (captures[0]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1010;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] =  build_real (TREE_TYPE (captures[0]), dconst0);
	    res_op->ops[1] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 429, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1010:;
	}
      else
	{
	  if (REAL_VALUE_ISNAN (TREE_REAL_CST (captures[1]))
 && (cmp == EQ_EXPR || cmp == NE_EXPR || !flag_trapping_math)
 && !tree_expr_signaling_nan_p (captures[1])
 && !tree_expr_maybe_signaling_nan_p (captures[0])
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1011;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 430, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1011:;
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1012;
		  {
		    tree tem;
		    tem =  constant_boolean_node (cmp == NE_EXPR, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 431, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1012:;
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
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1013;
			      {
				tree tem;
				tem =  constant_boolean_node (false, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 432, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1013:;
			    }
			  else
			    {
			      if (code == LE_EXPR
)
				{
				  if (! HONOR_NANS (captures[0])
)
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1014;
				      {
					tree tem;
					tem =  constant_boolean_node (true, type);
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 433, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail1014:;
				    }
				  else
				    {
				      if (!flag_trapping_math
)
					{
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1015;
					  {
					    res_op->set_op (EQ_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] = captures[0];
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 434, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1015:;
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
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1016;
					      {
						res_op->set_op (LT_EXPR, type, 2);
						res_op->ops[0] = captures[0];
						res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 435, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail1016:;
					    }
					  else
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1017;
					      {
						res_op->set_op (GT_EXPR, type, 2);
						res_op->ops[0] = captures[0];
						res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 436, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail1017:;
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
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1018;
						  {
						    res_op->set_op (GE_EXPR, type, 2);
						    res_op->ops[0] = captures[0];
						    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 437, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail1018:;
						}
					      else
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1019;
						  {
						    res_op->set_op (LE_EXPR, type, 2);
						    res_op->ops[0] = captures[0];
						    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 438, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail1019:;
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
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1020;
							  {
							    res_op->set_op (GE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 439, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail1020:;
							}
						      else
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1021;
							  {
							    res_op->set_op (LE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 440, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail1021:;
							}
						    }
						  else
						    {
						      if (neg
)
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1022;
							  {
							    res_op->set_op (UNGE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 441, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail1022:;
							}
						      else
							{
							  gimple_seq *lseq = seq;
							  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1023;
							  {
							    res_op->set_op (UNLE_EXPR, type, 2);
							    res_op->ops[0] = captures[0];
							    res_op->ops[1] =  build_real (TREE_TYPE (captures[0]), max);
							    res_op->resimplify (lseq, valueize);
							    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 442, __FILE__, __LINE__, true);
							    return true;
							  }
next_after_fail1023:;
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
  return false;
}

bool
gimple_simplify_304 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1083;
  {
    res_op->set_op (cmp, type, 2);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[0];
      {
	tree _o2[1], _r2;
	_o2[0] = captures[1];
	gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
	tem_op.resimplify (NULL, valueize);
	_r2 = maybe_push_res_to_seq (&tem_op, NULL);
	if (!_r2) goto next_after_fail1083;
	_o1[1] = _r2;
      }
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1083;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 495, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1083:;
  return false;
}

bool
gimple_simplify_306 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonzero_p (captures[0])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1085;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == NE_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 497, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1085:;
    }
  return false;
}

bool
gimple_simplify_310 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1089;
	  {
	    res_op->set_op (ncmp, type, 2);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[1];
	      if (stype != TREE_TYPE (_o1[0]) /* XXX */
	          && !useless_type_conversion_p (stype, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1089;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] =  build_zero_cst (stype);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 500, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1089:;
      }
    }
  return false;
}

bool
gimple_simplify_314 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1093;
  {
    res_op->set_op (cmp, type, 2);
    res_op->ops[0] = captures[0];
    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[0]));
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 503, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1093:;
  return false;
}

bool
gimple_simplify_319 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (inner),
 const enum tree_code ARG_UNUSED (outer))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 bool cst1 = integer_onep (captures[1]);
 bool cst0 = integer_zerop (captures[1]);
 bool innereq = inner == EQ_EXPR;
 bool outereq = outer == EQ_EXPR;
      if (innereq ? cst0 : cst1
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1112;
	  {
	    tree tem;
	    tem =  constant_boolean_node (!outereq, type);
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 514, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1112:;
	}
      else
	{
	  if (innereq ? cst1 : cst0
)
	    {
	      {
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
 tree ucst1 = build_one_cst (utype);
		  if (!outereq
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1113;
		      {
			res_op->set_op (GT_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (utype != TREE_TYPE (_o1[0]) /* XXX */
			      && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1113;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  ucst1;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 515, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1113:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1114;
		      {
			res_op->set_op (LE_EXPR, type, 2);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  if (utype != TREE_TYPE (_o1[0]) /* XXX */
			      && !useless_type_conversion_p (utype, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1114;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  ucst1;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 516, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1114:;
		    }
	      }
	    }
	  else
	    {
	      {
 tree value = build_int_cst (TREE_TYPE (captures[0]), !innereq);
		  if (outereq
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1115;
		      {
			res_op->set_op (EQ_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  value;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 517, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1115:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1116;
		      {
			res_op->set_op (NE_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] =  value;
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 518, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1116:;
		    }
	      }
	    }
	}
  }
  return false;
}

bool
gimple_simplify_329 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const combined_fn ARG_UNUSED (ffs))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int prec = TYPE_PRECISION (TREE_TYPE (captures[1]));
      if (integer_zerop (captures[2])
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1139;
	  {
	    res_op->set_op (cmp, type, 2);
	    res_op->ops[0] = captures[1];
	    res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 541, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1139:;
	}
      else
	{
	  if (tree_int_cst_sgn (captures[2]) < 0 || wi::to_widest (captures[2]) > prec
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1140;
	      {
		tree tem;
		tem =  constant_boolean_node (cmp == NE_EXPR ? true : false, type);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 542, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1140:;
	    }
	  else
	    {
	      if (single_use (captures[0])
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1141;
		  {
		    res_op->set_op (cmp, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[1];
		      _o1[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::mask (tree_to_uhwi (captures[2]),
 false, prec));
		      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1141;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  wide_int_to_tree (TREE_TYPE (captures[1]),
 wi::shifted_mask (tree_to_uhwi (captures[2]) - 1, 1,
 false, prec));
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 543, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1141:;
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_338 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (COPYSIGN_ALL))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1152;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 554, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1152:;
  return false;
}

bool
gimple_simplify_343 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1159;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 559, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1159:;
    }
  return false;
}

bool
gimple_simplify_347 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_OVERFLOW_UNDEFINED (type)
 && !integer_zerop (captures[0])
 && (!flag_non_call_exceptions || tree_expr_nonzero_p (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1163;
      {
	tree tem;
	tem =  build_minus_one_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 563, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1163:;
    }
  return false;
}

bool
gimple_simplify_351 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (div))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1168;
      {
	res_op->set_op (RSHIFT_EXPR, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] =  build_int_cst (integer_type_node,
 wi::exact_log2 (wi::to_wide (captures[1])));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 568, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1168:;
    }
  return false;
}

bool
gimple_simplify_357 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (floor_divmod),
 const enum tree_code ARG_UNUSED (trunc_divmod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((INTEGRAL_TYPE_P (type) || VECTOR_INTEGER_TYPE_P (type))
 && TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1177;
      {
	res_op->set_op (trunc_divmod, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 577, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1177:;
    }
  return false;
}

bool
gimple_simplify_360 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!TYPE_UNSIGNED (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1180;
      {
	tree tem;
	tem =  build_zero_cst (type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 580, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1180:;
    }
  return false;
}

bool
gimple_simplify_364 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (mod))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((TYPE_UNSIGNED (type) || tree_expr_nonnegative_p (captures[0]))
 && INTEGRAL_TYPE_P (type)
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_PRECISION (type) <= TYPE_PRECISION (TREE_TYPE (captures[1]))
 || TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || !TYPE_UNSIGNED (type))
 && integer_pow2p (captures[2]) && tree_int_cst_sgn (captures[2]) > 0
)
    {
      {
 tree utype = TREE_TYPE (captures[1]);
 if (!TYPE_OVERFLOW_WRAPS (utype))
 utype = unsigned_type_for (utype);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1184;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    {
	      tree _r1;
	      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] = captures[1];
		  if (utype != TREE_TYPE (_o3[0]) /* XXX */
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1184;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		_o2[1] =  build_one_cst (utype);
		tem_op.set_op (MINUS_EXPR, TREE_TYPE (_o2[0]), 2);
		tem_op.ops[0] = _o2[0];
		tem_op.ops[1] = _o2[1];
		tem_op.resimplify (lseq, valueize);
	      }
	      if (type != tem_op.type
	          && !useless_type_conversion_p (type, tem_op.type))
		{
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1184;
		  tem_op.set_op (NOP_EXPR, type, 1);
		  tem_op.ops[0] = _r1;
		  tem_op.resimplify (lseq, valueize);
		}
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1184;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 584, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1184:;
      }
    }
  return false;
}

bool
gimple_simplify_378 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      {
 tree itype = TREE_TYPE (captures[2]);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1200;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      _o1[0] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[0];
		if (COMPARISON_CLASS_P (_o2[0]))
		  {
		    if (!seq) return false;
		    _o2[0] = gimple_build (seq, TREE_CODE (_o2[0]), TREE_TYPE (_o2[0]), TREE_OPERAND (_o2[0], 0), TREE_OPERAND (_o2[0], 1));
		  }
		if (itype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (itype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, itype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1200;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      (*res_op).set_op (MINUS_EXPR, TREE_TYPE (_o1[0]), 2);
	      (*res_op).ops[0] = _o1[0];
	      (*res_op).ops[1] = _o1[1];
	      (*res_op).resimplify (lseq, valueize);
	    }
	    if (type != res_op->type
	        && !useless_type_conversion_p (type, res_op->type))
	      {
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1200;
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 600, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1200:;
      }
    }
  return false;
}

bool
gimple_simplify_389 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1211;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 610, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1211:;
  return false;
}

bool
gimple_simplify_395 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1219;
		  {
		    res_op->set_op (op, type, 2);
		    {
		      tree _o1[2], _r1;
		      _o1[0] = captures[0];
		      _o1[1] =  wide_int_to_tree (from_type, real_c1);
		      gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1219;
		      res_op->ops[0] = _r1;
		    }
		    res_op->ops[1] =  wide_int_to_tree (from_type, c2);
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 618, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1219:;
		}
	      else
		{
		  if (code == MIN_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1220;
		      {
			res_op->set_op (op, type, 2);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[0];
			  _o1[1] =  wide_int_to_tree (from_type, real_c1);
			  gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1220;
			  res_op->ops[0] = _r1;
			}
			res_op->ops[1] =  wide_int_to_tree (from_type, c2);
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 619, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1220:;
		    }
		}
	  }
	}
  }
  return false;
}

bool
gimple_simplify_401 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree_code code = minmax_from_comparison (cmp, captures[0], captures[1], captures[0], captures[4]);
      if ((cmp == LT_EXPR || cmp == LE_EXPR)
 && code == MIN_EXPR
 && integer_nonzerop (fold_build2 (LE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1271;
	  {
	    res_op->set_op (MIN_EXPR, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[4];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 634, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1271:;
	}
      else
	{
	  if ((cmp == GT_EXPR || cmp == GE_EXPR)
 && code == MAX_EXPR
 && integer_nonzerop (fold_build2 (GE_EXPR, boolean_type_node, captures[3], captures[4]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1272;
	      {
		res_op->set_op (MAX_EXPR, type, 2);
		res_op->ops[0] = captures[2];
		res_op->ops[1] = captures[4];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 635, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1272:;
	    }
	}
  }
  return false;
}

bool
gimple_simplify_403 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && INTEGRAL_TYPE_P (type)
 && (wi::to_widest (captures[3]) + 1 == wi::to_widest (captures[4])
 || wi::to_widest (captures[3]) == wi::to_widest (captures[4]) + 1)
)
    {
      {
 int_range_max r;
 if (!gimple_match_range_of_expr (r, captures[1], captures[0]))
 r.set_varying (TREE_TYPE (captures[1]));
 wide_int min = r.lower_bound ();
 wide_int max = r.upper_bound ();
	  if (min + 1 == max
 && (wi::to_wide (captures[2]) == min
 || wi::to_wide (captures[2]) == max)
)
	    {
	      {
 tree arg0 = captures[3], arg1 = captures[4];
 tree type1;
 if ((eqne == EQ_EXPR) ^ (wi::to_wide (captures[2]) == min))
 std::swap (arg0, arg1);
 if (TYPE_PRECISION (TREE_TYPE (captures[1])) > TYPE_PRECISION (type))
 type1 = TREE_TYPE (captures[1]);
 else
 type1 = type;
 auto prec = TYPE_PRECISION (type1);
 auto unsign = TYPE_UNSIGNED (type1);
 if (TREE_CODE (type1) == BOOLEAN_TYPE)
 type1 = build_nonstandard_integer_type (prec, unsign);
 min = wide_int::from (min, prec,
 TYPE_SIGN (TREE_TYPE (captures[1])));
 wide_int a = wide_int::from (wi::to_wide (arg0), prec,
 TYPE_SIGN (type));
 enum tree_code code;
 wi::overflow_type ovf;
 if (tree_int_cst_lt (arg0, arg1))
 {
 code = PLUS_EXPR;
 a -= min;
 if (!unsign)
 {
 wi::add (min + (wi::neg_p (a) ? 0 : 1), a, SIGNED, &ovf);
 if (ovf)
 type1 = unsigned_type_for (type1);
 }
 }
 else
 {
 code = MINUS_EXPR;
 a += min;
 if (!unsign)
 {
 wi::sub (a, min + (wi::neg_p (min) ? 0 : 1), SIGNED, &ovf);
 if (ovf)
 type1 = unsigned_type_for (type1);
 }
 }
 tree arg = wide_int_to_tree (type1, a);
		  if (code == PLUS_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1275;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    if (type1 != TREE_TYPE (_o2[0]) /* XXX */
			        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1275;
			      }
			    else
			      _r2 = _o2[0];
			    _o1[0] = _r2;
			  }
			  _o1[1] =  arg;
			  (*res_op).set_op (PLUS_EXPR, TREE_TYPE (_o1[0]), 2);
			  (*res_op).ops[0] = _o1[0];
			  (*res_op).ops[1] = _o1[1];
			  (*res_op).resimplify (lseq, valueize);
			}
			if (type != res_op->type
			    && !useless_type_conversion_p (type, res_op->type))
			  {
			    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1275;
			    res_op->set_op (NOP_EXPR, type, 1);
			    res_op->resimplify (lseq, valueize);
			  }
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 638, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1275:;
		    }
		  else
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1276;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[2], _r1;
			  _o1[0] =  arg;
			  {
			    tree _o2[1], _r2;
			    _o2[0] = captures[1];
			    if (type1 != TREE_TYPE (_o2[0]) /* XXX */
			        && !useless_type_conversion_p (type1, TREE_TYPE (_o2[0])))
			      {
				gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type1, _o2[0]);
				tem_op.resimplify (lseq, valueize);
				_r2 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r2) goto next_after_fail1276;
			      }
			    else
			      _r2 = _o2[0];
			    _o1[1] = _r2;
			  }
			  (*res_op).set_op (MINUS_EXPR, TREE_TYPE (_o1[0]), 2);
			  (*res_op).ops[0] = _o1[0];
			  (*res_op).ops[1] = _o1[1];
			  (*res_op).resimplify (lseq, valueize);
			}
			if (type != res_op->type
			    && !useless_type_conversion_p (type, res_op->type))
			  {
			    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1276;
			    res_op->set_op (NOP_EXPR, type, 1);
			    res_op->resimplify (lseq, valueize);
			  }
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 639, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1276:;
		    }
	      }
	    }
      }
    }
  return false;
}

bool
gimple_simplify_422 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1297;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 652, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1297:;
    }
  return false;
}

bool
gimple_simplify_426 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[2])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1301;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 656, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1301:;
    }
  return false;
}

bool
gimple_simplify_431 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1306;
      {
	tree tem;
	tem = captures[3];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 657, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1306:;
    }
  return false;
}

bool
gimple_simplify_437 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (!HONOR_SIGNED_ZEROS (type)
 && bitwise_equal_p (captures[0], captures[1])
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1313;
      {
	tree tem;
	tem = captures[1];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 659, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1313:;
    }
  return false;
}

bool
gimple_simplify_443 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  if (cmp == LT_EXPR
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1323;
	      {
		res_op->set_op (BIT_XOR_EXPR, type, 2);
		{
		  tree _r1;
		  gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
		  {
		    tree _o2[2], _r2;
		    _o2[0] = captures[0];
		    _o2[1] = shifter;
		    tem_op.set_op (RSHIFT_EXPR, TREE_TYPE (_o2[0]), 2);
		    tem_op.ops[0] = _o2[0];
		    tem_op.ops[1] = _o2[1];
		    tem_op.resimplify (lseq, valueize);
		  }
		  if (type != tem_op.type
		      && !useless_type_conversion_p (type, tem_op.type))
		    {
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1323;
		      tem_op.set_op (NOP_EXPR, type, 1);
		      tem_op.ops[0] = _r1;
		      tem_op.resimplify (lseq, valueize);
		    }
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1323;
		  res_op->ops[0] = _r1;
		}
		res_op->ops[1] = captures[1];
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 669, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1323:;
	    }
	  else
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1324;
	      {
		res_op->set_op (BIT_NOT_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _r2;
		    gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
		    {
		      tree _o3[2], _r3;
		      _o3[0] = captures[0];
		      _o3[1] = shifter;
		      tem_op.set_op (RSHIFT_EXPR, TREE_TYPE (_o3[0]), 2);
		      tem_op.ops[0] = _o3[0];
		      tem_op.ops[1] = _o3[1];
		      tem_op.resimplify (lseq, valueize);
		    }
		    if (type != tem_op.type
		        && !useless_type_conversion_p (type, tem_op.type))
		      {
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1324;
			tem_op.set_op (NOP_EXPR, type, 1);
			tem_op.ops[0] = _r2;
			tem_op.resimplify (lseq, valueize);
		      }
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1324;
		    _o1[0] = _r2;
		  }
		  _o1[1] = captures[1];
		  gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1324;
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 670, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1324:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_453 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
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
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1348;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[1], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[0];
		    gimple_match_op tem_op (res_op->cond.any_else (), ABSU_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1348;
		    _o1[0] = _r2;
		  }
		  (*res_op).set_op (NEGATE_EXPR, TREE_TYPE (_o1[0]), 1);
		  (*res_op).ops[0] = _o1[0];
		  (*res_op).resimplify (lseq, valueize);
		}
		if (type != res_op->type
		    && !useless_type_conversion_p (type, res_op->type))
		  {
		    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1348;
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->resimplify (lseq, valueize);
		  }
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 676, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1348:;
	  }
	}
      else
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1349;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[0];
	      gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1349;
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 677, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1349:;
	}
    }
  return false;
}

bool
gimple_simplify_456 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1354;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 682, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1354:;
  return false;
}

bool
gimple_simplify_458 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::to_widest (captures[4]) == TYPE_PRECISION (TREE_TYPE (captures[3])) - 1
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1356;
      {
	tree tem;
	tem = captures[2];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 683, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1356:;
    }
  return false;
}

bool
gimple_simplify_463 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (func))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 int val;
 internal_fn ifn = IFN_LAST;
 if (TREE_CODE (TREE_TYPE (captures[2])) == BITINT_TYPE)
 {
 if (tree_fits_shwi_p (captures[3]))
 {
 HOST_WIDE_INT valw = tree_to_shwi (captures[3]);
 if ((int) valw == valw)
 {
 val = valw;
 ifn = IFN_CTZ;
 }
 }
 }
 else if (direct_internal_fn_supported_p (IFN_CTZ, TREE_TYPE (captures[2]),
 OPTIMIZE_FOR_BOTH)
 && CTZ_DEFINED_VALUE_AT_ZERO
 (SCALAR_INT_TYPE_MODE (TREE_TYPE (captures[2])), val) == 2)
 ifn = IFN_CTZ;
      if (ifn == IFN_CTZ && wi::to_widest (captures[3]) == val
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1361;
	  {
	    res_op->set_op (CFN_CTZ, type, 2);
	    res_op->ops[0] = captures[2];
	    res_op->ops[1] = captures[3];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 686, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1361:;
	}
  }
  return false;
}

bool
gimple_simplify_470 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1369;
      {
	tree tem;
	tem =  constant_boolean_node (cmp == LT_EXPR, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 691, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1369:;
    }
  return false;
}

bool
gimple_simplify_474 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[1]))
 && (CONSTANT_CLASS_P (captures[1]) || single_use (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1374;
      {
	res_op->set_op (op, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] =  build_zero_cst (TREE_TYPE (captures[1]));
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 696, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1374:;
    }
  return false;
}

bool
gimple_simplify_482 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1383;
      {
	res_op->set_op (cmp, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 705, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1383:;
    }
  return false;
}

bool
gimple_simplify_488 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1406;
		  {
		    tree tem;
		    tem =  constant_boolean_node (false, type);
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 712, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1406:;
		}
	      else
		{
		  if (cmp == GE_EXPR
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1407;
		      {
			res_op->set_op (EQ_EXPR, type, 2);
			res_op->ops[0] = captures[0];
			res_op->ops[1] = captures[2];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 713, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1407:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1408;
			  {
			    tree tem;
			    tem =  constant_boolean_node (true, type);
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 714, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1408:;
			}
		      else
			{
			  if (cmp == LT_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1409;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[2];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 715, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1409:;
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
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1410;
		      {
			tree tem;
			tem =  constant_boolean_node (false, type);
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 716, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1410:;
		    }
		  else
		    {
		      if (cmp == LE_EXPR
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1411;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] = captures[2];
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 717, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1411:;
			}
		      else
			{
			  if (cmp == GE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1412;
			      {
				tree tem;
				tem =  constant_boolean_node (true, type);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 718, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1412:;
			    }
			  else
			    {
			      if (cmp == GT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1413;
				  {
				    res_op->set_op (NE_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[2];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 719, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1413:;
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
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1414;
			  {
			    res_op->set_op (EQ_EXPR, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 720, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1414:;
			}
		      else
			{
			  if (cmp == LE_EXPR
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1415;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 + 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 721, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1415:;
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
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1416;
			      {
				res_op->set_op (NE_EXPR, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 722, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1416:;
			    }
			  else
			    {
			      if (cmp == LT_EXPR
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1417;
				  {
				    res_op->set_op (EQ_EXPR, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] =  build_uniform_cst (TREE_TYPE (captures[2]),
 wide_int_to_tree (TREE_TYPE (cst),
 wi::to_wide (cst)
 - 1));
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 723, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1417:;
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
					  gimple_seq *lseq = seq;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1418;
					  {
					    res_op->set_op (GE_EXPR, type, 2);
					    {
					      tree _o1[1], _r1;
					      _o1[0] = captures[1];
					      if (st != TREE_TYPE (_o1[0]) /* XXX */
					          && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						{
						  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						  tem_op.resimplify (lseq, valueize);
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1418;
					        }
					      else
					        _r1 = _o1[0];
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  build_zero_cst (st);
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 724, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1418:;
					}
				      else
					{
					  if (cst == captures[2] && cmp == GT_EXPR
)
					    {
					      gimple_seq *lseq = seq;
					      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1419;
					      {
						res_op->set_op (LT_EXPR, type, 2);
						{
						  tree _o1[1], _r1;
						  _o1[0] = captures[1];
						  if (st != TREE_TYPE (_o1[0]) /* XXX */
						      && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, st, _o1[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r1) goto next_after_fail1419;
						    }
						  else
						    _r1 = _o1[0];
						  res_op->ops[0] = _r1;
						}
						res_op->ops[1] =  build_zero_cst (st);
						res_op->resimplify (lseq, valueize);
						if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 725, __FILE__, __LINE__, true);
						return true;
					      }
next_after_fail1419:;
					    }
					  else
					    {
					      if (cmp == LE_EXPR
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1420;
						  {
						    res_op->set_op (GE_EXPR, type, 2);
						    {
						      tree _o1[1], _r1;
						      _o1[0] = captures[1];
						      if (st != TREE_TYPE (_o1[0]) /* XXX */
						          && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r1) goto next_after_fail1420;
						        }
						      else
						        _r1 = _o1[0];
						      res_op->ops[0] = _r1;
						    }
						    res_op->ops[1] =  build_zero_cst (st);
						    res_op->resimplify (lseq, valueize);
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 726, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail1420:;
						}
					      else
						{
						  if (cmp == GT_EXPR
)
						    {
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1421;
						      {
							res_op->set_op (LT_EXPR, type, 2);
							{
							  tree _o1[1], _r1;
							  _o1[0] = captures[1];
							  if (st != TREE_TYPE (_o1[0]) /* XXX */
							      && !useless_type_conversion_p (st, TREE_TYPE (_o1[0])))
							    {
							      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, st, _o1[0]);
							      tem_op.resimplify (lseq, valueize);
							      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							      if (!_r1) goto next_after_fail1421;
							    }
							  else
							    _r1 = _o1[0];
							  res_op->ops[0] = _r1;
							}
							res_op->ops[1] =  build_zero_cst (st);
							res_op->resimplify (lseq, valueize);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 727, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail1421:;
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
  return false;
}

bool
gimple_simplify_534 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1488;
	  {
	    res_op->set_op (op, type, 2);
	    res_op->ops[0] = captures[2];
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[4];
	      if (type != TREE_TYPE (_o1[0]) /* XXX */
	          && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1488;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1488:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1489;
	      {
		res_op->set_op (NOP_EXPR, type, 1);
		{
		  tree _o1[2], _r1;
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[2];
		    if (utype != TREE_TYPE (_o2[0]) /* XXX */
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1489;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[0] = _r2;
		  }
		  {
		    tree _o2[1], _r2;
		    _o2[0] = captures[4];
		    if (utype != TREE_TYPE (_o2[0]) /* XXX */
		        && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		      {
			gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
			tem_op.resimplify (lseq, valueize);
			_r2 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r2) goto next_after_fail1489;
		      }
		    else
		      _r2 = _o2[0];
		    _o1[1] = _r2;
		  }
		  (*res_op).set_op (op, TREE_TYPE (_o1[0]), 2);
		  (*res_op).ops[0] = _o1[0];
		  (*res_op).ops[1] = _o1[1];
		  (*res_op).resimplify (lseq, valueize);
		}
		if (type != res_op->type
		    && !useless_type_conversion_p (type, res_op->type))
		  {
		    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1489;
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->resimplify (lseq, valueize);
		  }
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1489:;
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
			  gimple_seq *lseq = seq;
			  if (lseq
			      && (!single_use (captures[0])))
			    lseq = NULL;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1490;
			  {
			    res_op->set_op (op, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[2];
			      if (newtype != TREE_TYPE (_o1[0]) /* XXX */
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1490;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[4];
			      if (newtype != TREE_TYPE (_o1[0]) /* XXX */
			          && !useless_type_conversion_p (newtype, TREE_TYPE (_o1[0])))
				{
				  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1490;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 789, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1490:;
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
				  gimple_seq *lseq = seq;
				  if (lseq
				      && (!single_use (captures[0])))
				    lseq = NULL;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1491;
				  {
				    res_op->set_op (NOP_EXPR, type, 1);
				    {
				      tree _o1[2], _r1;
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[2];
					if (newtype != TREE_TYPE (_o2[0]) /* XXX */
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1491;
					  }
					else
					  _r2 = _o2[0];
					_o1[0] = _r2;
				      }
				      {
					tree _o2[1], _r2;
					_o2[0] = captures[4];
					if (newtype != TREE_TYPE (_o2[0]) /* XXX */
					    && !useless_type_conversion_p (newtype, TREE_TYPE (_o2[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, newtype, _o2[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r2) goto next_after_fail1491;
					  }
					else
					  _r2 = _o2[0];
					_o1[1] = _r2;
				      }
				      (*res_op).set_op (op, TREE_TYPE (_o1[0]), 2);
				      (*res_op).ops[0] = _o1[0];
				      (*res_op).ops[1] = _o1[1];
				      (*res_op).resimplify (lseq, valueize);
				    }
				    if (type != res_op->type
				        && !useless_type_conversion_p (type, res_op->type))
				      {
					if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1491;
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->resimplify (lseq, valueize);
				      }
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1491:;
				}
			  }
			}
		  }
		}
	  }
	}
    }
  return false;
}

bool
gimple_simplify_570 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (bitop))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree pmop[2];
 tree utype = fold_bit_and_mask (TREE_TYPE (captures[1]), captures[4], NEGATE_EXPR, captures[1],
 bitop, captures[2], captures[3], NULL_TREE, ERROR_MARK,
 NULL_TREE, NULL_TREE, pmop);
      if (utype
)
	{
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1538;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] =  pmop[0];
		  if (utype != TREE_TYPE (_o3[0]) /* XXX */
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1538;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
		tem_op.resimplify (lseq, valueize);
		_r2 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r2) goto next_after_fail1538;
		_o1[0] = _r2;
	      }
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[4];
		if (utype != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1538;
		  }
		else
		  _r2 = _o2[0];
		_o1[1] = _r2;
	      }
	      (*res_op).set_op (BIT_AND_EXPR, TREE_TYPE (_o1[0]), 2);
	      (*res_op).ops[0] = _o1[0];
	      (*res_op).ops[1] = _o1[1];
	      (*res_op).resimplify (lseq, valueize);
	    }
	    if (type != res_op->type
	        && !useless_type_conversion_p (type, res_op->type))
	      {
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1538;
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 824, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1538:;
	}
  }
  return false;
}

bool
gimple_simplify_587 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1576;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 852, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1576:;
  return false;
}

bool
gimple_simplify_592 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[1]))
)
    {
      gimple_seq *lseq = seq;
      if (lseq
          && (!single_use (captures[0])
              || !single_use (captures[2])))
        lseq = NULL;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1594;
      {
	res_op->set_op (GT_EXPR, type, 2);
	res_op->ops[0] = captures[3];
	{
	  tree _o1[2], _r1;
	  _o1[0] = captures[1];
	  _o1[1] =  build_int_cst (TREE_TYPE (captures[1]), 1);
	  gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1594;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1594:;
    }
  return false;
}

bool
gimple_simplify_598 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])
	              || !single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1600;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 857, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1600:;
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
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1601;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    {
					      tree _r1;
					      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
					      {
						tree _o2[2], _r2;
						{
						  tree _o3[1], _r3;
						  _o3[0] = captures[2];
						  if (shift_type != TREE_TYPE (_o3[0]) /* XXX */
						      && !useless_type_conversion_p (shift_type, TREE_TYPE (_o3[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, shift_type, _o3[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r3) goto next_after_fail1601;
						    }
						  else
						    _r3 = _o3[0];
						  _o2[0] = _r3;
						}
						_o2[1] = captures[4];
						tem_op.set_op (shift, shift_type, 2);
						tem_op.ops[0] = _o2[0];
						tem_op.ops[1] = _o2[1];
						tem_op.resimplify (lseq, valueize);
					      }
					      if (type != tem_op.type
					          && !useless_type_conversion_p (type, tem_op.type))
						{
						  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						  if (!_r1) goto next_after_fail1601;
						  tem_op.set_op (NOP_EXPR, type, 1);
						  tem_op.ops[0] = _r1;
						  tem_op.resimplify (lseq, valueize);
						}
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1601;
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 858, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1601:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1602;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 859, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1602:;
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
  return false;
}

bool
gimple_simplify_603 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (bswap))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (BITS_PER_UNIT == 8
 && tree_fits_uhwi_p (captures[2])
 && tree_to_uhwi (captures[2]) < 256
)
    {
      {
 unsigned HOST_WIDE_INT prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 tree utype = unsigned_type_for (TREE_TYPE (captures[1]));
 tree nst = build_int_cst (integer_type_node, prec - 8);
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1614;
	  {
	    res_op->set_op (BIT_AND_EXPR, type, 2);
	    {
	      tree _r1;
	      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
	      {
		tree _o2[2], _r2;
		{
		  tree _o3[1], _r3;
		  _o3[0] = captures[1];
		  if (utype != TREE_TYPE (_o3[0]) /* XXX */
		      && !useless_type_conversion_p (utype, TREE_TYPE (_o3[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o3[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r3 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r3) goto next_after_fail1614;
		    }
		  else
		    _r3 = _o3[0];
		  _o2[0] = _r3;
		}
		_o2[1] = nst;
		tem_op.set_op (RSHIFT_EXPR, utype, 2);
		tem_op.ops[0] = _o2[0];
		tem_op.ops[1] = _o2[1];
		tem_op.resimplify (lseq, valueize);
	      }
	      if (type != tem_op.type
	          && !useless_type_conversion_p (type, tem_op.type))
		{
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1614;
		  tem_op.set_op (NOP_EXPR, type, 1);
		  tem_op.ops[0] = _r1;
		  tem_op.resimplify (lseq, valueize);
		}
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1614;
	      res_op->ops[0] = _r1;
	    }
	    res_op->ops[1] = captures[2];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 862, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1614:;
      }
    }
  return false;
}

bool
gimple_simplify_621 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
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
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[0])
	          || !single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1635;
	  {
	    res_op->set_op (NOP_EXPR, type, 1);
	    {
	      tree _o1[2], _r1;
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[3];
		if (rotate_type != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (rotate_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, rotate_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1635;
		  }
		else
		  _r2 = _o2[0];
		_o1[0] = _r2;
	      }
	      _o1[1] = captures[4];
	      (*res_op).set_op (rotate, TREE_TYPE (_o1[0]), 2);
	      (*res_op).ops[0] = _o1[0];
	      (*res_op).ops[1] = _o1[1];
	      (*res_op).resimplify (lseq, valueize);
	    }
	    if (type != res_op->type
	        && !useless_type_conversion_p (type, res_op->type))
	      {
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1635;
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1635:;
      }
    }
  return false;
}

bool
gimple_simplify_634 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 poly_int64 off0, off1;
 tree base0, base1;
 int equal = address_compare (cmp, TREE_TYPE (captures[0]), captures[1], captures[3], base0, base1,
 off0, off1,
0
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1651;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1651:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1652;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1652:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1653;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1653:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1654;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 896, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1654:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_647 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp),
 const enum tree_code ARG_UNUSED (minmax),
 const enum tree_code ARG_UNUSED (MINMAX))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (VECTOR_INTEGER_TYPE_P (type)
 && target_supports_op_p (type, MINMAX, optab_vector)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1676;
      {
	res_op->set_op (minmax, type, 2);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 906, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1676:;
    }
  return false;
}

bool
gimple_simplify_657 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[5]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1686;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (op_type != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1686;
		  }
		else
		  _r2 = _o2[0];
		_o1[3] = _r2;
	      }
	      (*res_op).set_op (cond_op, TREE_TYPE (_o1[1]), 4);
	      (*res_op).ops[0] = _o1[0];
	      (*res_op).ops[1] = _o1[1];
	      (*res_op).ops[2] = _o1[2];
	      (*res_op).ops[3] = _o1[3];
	      (*res_op).resimplify (lseq, valueize);
	    }
	    if (type != res_op->type
	        && !useless_type_conversion_p (type, res_op->type))
	      {
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1686;
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 911, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1686:;
	}
  }
  return false;
}

bool
gimple_simplify_665 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[1])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1694;
  {
    res_op->set_op (cond_op, type, 5);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[2];
      _o1[1] = captures[0];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1694;
      res_op->ops[0] = _r1;
    }
    res_op->ops[1] = captures[3];
    res_op->ops[2] = captures[4];
    res_op->ops[3] = captures[5];
    res_op->ops[4] = captures[6];
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 919, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1694:;
  return false;
}

bool
gimple_simplify_675 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (cmp))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1707;
  {
    tree tem;
    tem =  constant_boolean_node (true, type);
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 932, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1707:;
  return false;
}

bool
gimple_simplify_680 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (logs),
 const combined_fn ARG_UNUSED (pows))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1712;
      {
	res_op->set_op (MULT_EXPR, type, 2);
	res_op->ops[0] = captures[1];
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  gimple_match_op tem_op (res_op->cond.any_else (), logs, TREE_TYPE (_o1[0]), _o1[0]);
	  tem_op.resimplify (lseq, valueize);
	  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	  if (!_r1) goto next_after_fail1712;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 937, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1712:;
    }
  return false;
}

bool
gimple_simplify_687 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (froms),
 const combined_fn ARG_UNUSED (tos))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize && canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1719;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  (*res_op).set_op (tos, TREE_TYPE (_o1[0]), 1);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1719;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 944, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1719:;
    }
  return false;
}

bool
gimple_simplify_696 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (ifn),
 const combined_fn ARG_UNUSED (lfn),
 const combined_fn ARG_UNUSED (llfn))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      if (TYPE_PRECISION (long_long_integer_type_node)
 == TYPE_PRECISION (long_integer_type_node)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1728;
	  {
	    res_op->set_op (lfn, type, 1);
	    res_op->ops[0] = captures[0];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 953, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1728:;
	}
    }
  return false;
}

bool
gimple_simplify_705 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1737;
      {
	res_op->set_op (CFN_FMA, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 962, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1737:;
    }
  return false;
}

bool
gimple_simplify_714 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1746;
      {
	res_op->set_op (CFN_COND_FMS, type, 5);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->ops[3] = captures[3];
	res_op->ops[4] = captures[4];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 971, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1746:;
    }
  return false;
}

bool
gimple_simplify_723 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (popcount))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
1
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
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[1])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1757;
	      {
		res_op->set_op (popcount, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[2];
		  if (type0 != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1757;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 979, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1757:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_731 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (rot),
 const combined_fn ARG_UNUSED (parity))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (
1
 || !TREE_SIDE_EFFECTS (captures[3]))
 && TYPE_PRECISION (TREE_TYPE (captures[0]))
 >= TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 tree type0 = TREE_TYPE (captures[0]);
	  gimple_seq *lseq = seq;
	  if (lseq
	      && (!single_use (captures[1])))
	    lseq = NULL;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1768;
	  {
	    res_op->set_op (parity, type, 1);
	    {
	      tree _o1[1], _r1;
	      _o1[0] = captures[2];
	      if (type0 != TREE_TYPE (_o1[0]) /* XXX */
	          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		{
		  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		  tem_op.resimplify (lseq, valueize);
		  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		  if (!_r1) goto next_after_fail1768;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 988, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1768:;
      }
    }
  return false;
}

bool
gimple_simplify_736 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (FFS))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_FFS;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 0);
 }
 type0 = signed_type_for (type0);
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_FFS, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_FFS;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_FFS,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (integer_type_node))
 cfn = CFN_BUILT_IN_FFS;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_integer_type_node))
 cfn = CFN_BUILT_IN_FFSLL;
 }
	  if (cfn == CFN_FFS
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1775;
	      {
		res_op->set_op (CFN_FFS, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1775;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 993, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1775:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_FFS
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1776;
		  {
		    res_op->set_op (CFN_BUILT_IN_FFS, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0]) /* XXX */
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1776;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 994, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1776:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_FFSLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1777;
		      {
			res_op->set_op (CFN_BUILT_IN_FFSLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0]) /* XXX */
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1777;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 995, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1777:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COSH (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1823;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1823:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    const combined_fn coss = CFN_BUILT_IN_COSH;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1824;
		    {
		      res_op->set_op (coss, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1024, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1824:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_539 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_COSH))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_539 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_COSH))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_539 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_COSH))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_ATANH:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		      if (gimple_simplify_541 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COSH, CFN_BUILT_IN_ATANH, CFN_BUILT_IN_SQRT))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_539 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_COSH))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CCOSHL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1850;
		    {
		      res_op->set_op (CFN_BUILT_IN_CCOSHL, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1039, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1850:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_BIT_NOT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_611 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_611 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_612 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_612 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1866;
				    {
				      res_op->set_op (PLUS_EXPR, type, 2);
				      res_op->ops[0] = captures[0];
				      res_op->ops[1] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1043, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1866:;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1867;
		    {
		      res_op->set_op (PLUS_EXPR, type, 2);
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[1];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			tem_op.resimplify (lseq, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, lseq);
			if (!_r1) goto next_after_fail1867;
			res_op->ops[0] = _r1;
		      }
		      res_op->ops[1] = captures[2];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1044, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1867:;
		  }
		  if (integer_each_onep (_q21))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_613 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    if (gimple_simplify_614 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				    if (gimple_simplify_614 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case INTEGER_CST:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if ((INTEGRAL_TYPE_P (type)
 && TYPE_UNSIGNED (type))
 || (!TYPE_OVERFLOW_SANITIZED (type)
 && may_negate_without_overflow_p (captures[2]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (lseq
			          && (!single_use (captures[0])))
			        lseq = NULL;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1868;
			      {
				res_op->set_op (PLUS_EXPR, type, 2);
				{
				  tree _o1[1], _r1;
				  _o1[0] = captures[1];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail1868;
				  res_op->ops[0] = _r1;
				}
				res_op->ops[1] =  const_unop (NEGATE_EXPR, type, captures[2]);
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1045, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail1868:;
			    }
			}
		        break;
		      }
		    default:;
		    }
		if (integer_all_onesp (_q21))
		  {
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_615 (res_op, seq, valueize, type, captures))
		        return true;
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		    if (!TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1869;
			{
			  res_op->set_op (RSHIFT_EXPR, type, 2);
			  {
			    tree _o1[1], _r1;
			    _o1[0] = captures[1];
			    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail1869;
			    res_op->ops[0] = _r1;
			  }
			  res_op->ops[1] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1046, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1869:;
		      }
		    else
		      {
			if (INTEGRAL_TYPE_P (type)
 && !wi::neg_p (tree_nonzero_bits (captures[1]))
)
			  {
			    {
 tree stype = signed_type_for (TREE_TYPE (captures[1]));
				gimple_seq *lseq = seq;
				if (lseq
				    && (!single_use (captures[0])))
				  lseq = NULL;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1870;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  {
				    tree _o1[2], _r1;
				    {
				      tree _o2[1], _r2;
				      {
					tree _o3[1], _r3;
					_o3[0] = captures[1];
					if (stype != TREE_TYPE (_o3[0]) /* XXX */
					    && !useless_type_conversion_p (stype, TREE_TYPE (_o3[0])))
					  {
					    gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, stype, _o3[0]);
					    tem_op.resimplify (lseq, valueize);
					    _r3 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r3) goto next_after_fail1870;
					  }
					else
					  _r3 = _o3[0];
					_o2[0] = _r3;
				      }
				      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				      tem_op.resimplify (NULL, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, NULL);
				      if (!_r2) goto next_after_fail1870;
				      _o1[0] = _r2;
				    }
				    _o1[1] = captures[2];
				    (*res_op).set_op (RSHIFT_EXPR, TREE_TYPE (_o1[0]), 2);
				    (*res_op).ops[0] = _o1[0];
				    (*res_op).ops[1] = _o1[1];
				    (*res_op).resimplify (lseq, valueize);
				  }
				  if (type != res_op->type
				      && !useless_type_conversion_p (type, res_op->type))
				    {
				      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1870;
				      res_op->set_op (NOP_EXPR, type, 1);
				      res_op->resimplify (lseq, valueize);
				    }
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1047, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1870:;
			    }
			  }
		      }
		  }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_616 (res_op, seq, valueize, type, captures))
						      return true;
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
			        }
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_616 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1871;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1048, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1871:;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				    if (gimple_simplify_617 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_each_onep (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_613 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if (integer_all_onesp (_q31))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_615 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      case BIT_XOR_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					{
					  tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					  if (gimple_simplify_618 (res_op, seq, valueize, type, captures))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
						    if (gimple_simplify_619 (res_op, seq, valueize, type, captures))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    default:;
				    }
				  switch (TREE_CODE (_q31))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q31))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  {
						    tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
						    if (gimple_simplify_619 (res_op, seq, valueize, type, captures))
						      return true;
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
			        }
			      case RSHIFT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_620 (res_op, seq, valueize, type, captures))
								      return true;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_620 (res_op, seq, valueize, type, captures))
						      return true;
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
			        }
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_621 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
								      return true;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_621 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
						      return true;
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
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case BIT_NOT_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  {
								    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q31 };
								    if (gimple_simplify_621 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
								      return true;
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
					        }
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
						    if (gimple_simplify_621 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
						      return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (gimple_simplify_617 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (gimple_simplify_618 (res_op, seq, valueize, type, captures))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				    if (gimple_simplify_619 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				    if (gimple_simplify_619 (res_op, seq, valueize, type, captures))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  if (gimple_truth_valued_p (_q20, valueize))
		    {
		      if (gimple_truth_valued_p (_q21, valueize))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[1])) == 1
)
			      {
				gimple_seq *lseq = seq;
				if (lseq
				    && (!single_use (captures[0])))
				  lseq = NULL;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1872;
				{
				  res_op->set_op (NOP_EXPR, type, 1);
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[1];
				    _o1[1] = captures[2];
				    (*res_op).set_op (EQ_EXPR, boolean_type_node, 2);
				    (*res_op).ops[0] = _o1[0];
				    (*res_op).ops[1] = _o1[1];
				    (*res_op).resimplify (lseq, valueize);
				  }
				  if (type != res_op->type
				      && !useless_type_conversion_p (type, res_op->type))
				    {
				      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1872;
				      res_op->set_op (NOP_EXPR, type, 1);
				      res_op->resimplify (lseq, valueize);
				    }
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1049, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1872:;
			      }
			  }
		        }
		    }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_622 (res_op, seq, valueize, type, captures, MIN_EXPR, MAX_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_622 (res_op, seq, valueize, type, captures, MIN_EXPR, MAX_EXPR))
				      return true;
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
	        }
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q21 };
				    if (gimple_simplify_622 (res_op, seq, valueize, type, captures, MAX_EXPR, MIN_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q20 };
				    if (gimple_simplify_622 (res_op, seq, valueize, type, captures, MAX_EXPR, MIN_EXPR))
				      return true;
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
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_623 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
						      return true;
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
			        }
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_623 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
				      return true;
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
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q21 };
						    if (gimple_simplify_623 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
						      return true;
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
			        }
			      case BIT_NOT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q30, _q21 };
				    if (gimple_simplify_623 (res_op, seq, valueize, type, captures, RROTATE_EXPR))
				      return true;
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
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1873;
		    {
		      res_op->set_op (VEC_COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, type, _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1873;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, type, _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1873;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1006, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1873:;
		  }
	          break;
	        }
	      case LT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR, UNGE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case LE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR, UNGT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case EQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, EQ_EXPR, NE_EXPR, NE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case NE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, NE_EXPR, EQ_EXPR, EQ_EXPR))
		      return true;
		  }
	          break;
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR, UNLT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case GT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR, UNLE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNORDERED_EXPR, ORDERED_EXPR, ORDERED_EXPR))
		      return true;
		  }
	          break;
	        }
	      case ORDERED_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, ORDERED_EXPR, UNORDERED_EXPR, UNORDERED_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNLT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNLT_EXPR, GE_EXPR, GE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNLE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNLE_EXPR, GT_EXPR, GT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNGT_EXPR, LE_EXPR, LE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNGE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNGE_EXPR, LT_EXPR, LT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case UNEQ_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, UNEQ_EXPR, LTGT_EXPR, LTGT_EXPR))
		      return true;
		  }
	          break;
	        }
	      case LTGT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		    if (gimple_simplify_624 (res_op, seq, valueize, type, captures, LTGT_EXPR, UNEQ_EXPR, UNEQ_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CBRTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2068;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real_truncate (type, dconst_sixth ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1079, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2068:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2069;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2069;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2069:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2070;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXPL, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2070;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2070:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2071;
			      {
				res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] =  build_real_truncate (type, dconst_third ());
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2071;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1081, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2071:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2072;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2072;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2072:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2073;
			      {
				res_op->set_op (CFN_BUILT_IN_POWL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_real_truncate (type, dconst_ninth ());
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1082, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2073:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2074;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2L, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2074;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2074:;
			}
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_TRUNCF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOOR))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_FLOORF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_FLOORL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORL, CFN_BUILT_IN_TRUNCL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEILL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_CEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL, CFN_BUILT_IN_CEILF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CEILL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEILL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_687 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL, CFN_BUILT_IN_ROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL, CFN_BUILT_IN_ROUNDF))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_ROUNDL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_NEARBYINTF32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_NEARBYINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_NEARBYINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_NEARBYINT))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_NEARBYINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINTF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_RINTF32X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF32X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINTF32X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IFLOORL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL, CFN_BUILT_IN_IFLOOR))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL, CFN_BUILT_IN_IFLOORF))
			  return true;
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
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_693 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL))
        return true;
    }
  }
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IFLOORL, CFN_BUILT_IN_LFLOORL, CFN_BUILT_IN_LLFLOORL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IROUNDL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_double_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL, CFN_BUILT_IN_IROUND))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL, CFN_BUILT_IN_IROUNDF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IROUNDL, CFN_BUILT_IN_LROUNDL, CFN_BUILT_IN_LLROUNDL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ICEIL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEIL, CFN_BUILT_IN_ICEILF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEIL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEIL, CFN_BUILT_IN_LCEIL, CFN_BUILT_IN_LLCEIL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LRINT (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LRINT, CFN_BUILT_IN_LRINTF))
			  return true;
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
if (integer_valued_real_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_697 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LRINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_LLFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_693 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_LLFLOOR))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_696 (res_op, seq, valueize, type, captures, CFN_IFLOOR, CFN_LFLOOR, CFN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_LLROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_LLROUND))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_696 (res_op, seq, valueize, type, captures, CFN_IROUND, CFN_LROUND, CFN_LLROUND))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CPROJ (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (!HONOR_INFINITIES (type)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2081;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1084, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2081:;
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COMPLEX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (tree_expr_nonnegative_p (_q21))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			      if (real_isinf (TREE_REAL_CST_PTR (captures[0]))
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2082;
				  {
				    tree tem;
				    tem =  build_complex_inf (type, false);
				    res_op->set_value (tem);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1085, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2082:;
				}
			    }
			  }
		        break;
		      }
		    default:;
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (real_isinf (TREE_REAL_CST_PTR (captures[1]))
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2083;
			      {
				tree tem;
				tem =  build_complex_inf (type, TREE_REAL_CST_PTR (captures[1])->sign);
				res_op->set_value (tem);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1086, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2083:;
			    }
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
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POPCOUNTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_723 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
				      return true;
				  }
			          break;
			        }
			      case RROTATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
				    if (gimple_simplify_723 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
				      return true;
				  }
			          break;
			        }
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q31))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case NEGATE_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _q30 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q30, 0) && types_match (_q50, _q30)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
							if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
							  return true;
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
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case NEGATE_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  if ((_q31 == _q40 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _q40, 0) && types_match (_q31, _q40)))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q30 };
							if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
							  return true;
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
			        }
			      default:;
			      }
			  else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP16:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP32:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      case CFN_BUILT_IN_BSWAP64:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q30 };
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
				        return true;
				    }
			          }
			        break;
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_725 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      case LROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_727 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      case RROTATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
		    if (gimple_simplify_727 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTL))
		      return true;
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _q20, 0) && types_match (_q40, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
					if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
					  return true;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  if ((_q21 == _q30 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q30, 0) && types_match (_q21, _q30)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q20 };
					if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
					  return true;
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
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP16:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP32:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_BSWAP64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q20 };
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_728 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_FFS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_736 (res_op, seq, valueize, type, captures, CFN_FFS))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (tree_expr_nonzero_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_735 (res_op, seq, valueize, type, captures, CFN_FFS, CFN_CTZ))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_MIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2091;
			  {
			    res_op->set_op (MIN_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_MIN, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2091;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_MIN, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2091;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1087, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2091:;
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
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CONSTANT_P (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree _p0_pops[1];
    if (gimple_nop_convert (_p0, _p0_pops, valueize))
      {
	tree _q20 = _p0_pops[0];
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2095;
	  {
	    res_op->set_op (CFN_BUILT_IN_CONSTANT_P, type, 1);
	    res_op->ops[0] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1088, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2095:;
	}
      }
  }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0)
{
  switch (code.get_rep())
    {
    case ABS_EXPR:
      return gimple_simplify_ABS_EXPR (res_op, seq, valueize, code, type, _p0);
    CASE_CONVERT:
      return gimple_simplify_CONVERT_EXPR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COSF:
      return gimple_simplify_CFN_BUILT_IN_COSF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COS:
      return gimple_simplify_CFN_BUILT_IN_COS (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COSL:
      return gimple_simplify_CFN_BUILT_IN_COSL (res_op, seq, valueize, code, type, _p0);
    case -CFN_COS:
      return gimple_simplify_CFN_COS (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COSHF:
      return gimple_simplify_CFN_BUILT_IN_COSHF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COSH:
      return gimple_simplify_CFN_BUILT_IN_COSH (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_COSHL:
      return gimple_simplify_CFN_BUILT_IN_COSHL (res_op, seq, valueize, code, type, _p0);
    case -CFN_COSH:
      return gimple_simplify_CFN_COSH (res_op, seq, valueize, code, type, _p0);
    case NEGATE_EXPR:
      return gimple_simplify_NEGATE_EXPR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOSF:
      return gimple_simplify_CFN_BUILT_IN_CCOSF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOS:
      return gimple_simplify_CFN_BUILT_IN_CCOS (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOSL:
      return gimple_simplify_CFN_BUILT_IN_CCOSL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOSHF:
      return gimple_simplify_CFN_BUILT_IN_CCOSHF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOSH:
      return gimple_simplify_CFN_BUILT_IN_CCOSH (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CCOSHL:
      return gimple_simplify_CFN_BUILT_IN_CCOSHL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CABSF:
      return gimple_simplify_CFN_BUILT_IN_CABSF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CABS:
      return gimple_simplify_CFN_BUILT_IN_CABS (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CABSL:
      return gimple_simplify_CFN_BUILT_IN_CABSL (res_op, seq, valueize, code, type, _p0);
    case BIT_NOT_EXPR:
      return gimple_simplify_BIT_NOT_EXPR (res_op, seq, valueize, code, type, _p0);
    case ABSU_EXPR:
      return gimple_simplify_ABSU_EXPR (res_op, seq, valueize, code, type, _p0);
    case VIEW_CONVERT_EXPR:
      return gimple_simplify_VIEW_CONVERT_EXPR (res_op, seq, valueize, code, type, _p0);
    case FLOAT_EXPR:
      return gimple_simplify_FLOAT_EXPR (res_op, seq, valueize, code, type, _p0);
    case FIX_TRUNC_EXPR:
      return gimple_simplify_FIX_TRUNC_EXPR (res_op, seq, valueize, code, type, _p0);
    case PAREN_EXPR:
      return gimple_simplify_PAREN_EXPR (res_op, seq, valueize, code, type, _p0);
    case REALPART_EXPR:
      return gimple_simplify_REALPART_EXPR (res_op, seq, valueize, code, type, _p0);
    case IMAGPART_EXPR:
      return gimple_simplify_IMAGPART_EXPR (res_op, seq, valueize, code, type, _p0);
    case CONJ_EXPR:
      return gimple_simplify_CONJ_EXPR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_BSWAP16:
      return gimple_simplify_CFN_BUILT_IN_BSWAP16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_BSWAP32:
      return gimple_simplify_CFN_BUILT_IN_BSWAP32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_BSWAP64:
      return gimple_simplify_CFN_BUILT_IN_BSWAP64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_BSWAP128:
      return gimple_simplify_CFN_BUILT_IN_BSWAP128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOGF:
      return gimple_simplify_CFN_BUILT_IN_LOGF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG:
      return gimple_simplify_CFN_BUILT_IN_LOG (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOGL:
      return gimple_simplify_CFN_BUILT_IN_LOGL (res_op, seq, valueize, code, type, _p0);
    case -CFN_LOG:
      return gimple_simplify_CFN_LOG (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG2F:
      return gimple_simplify_CFN_BUILT_IN_LOG2F (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG2:
      return gimple_simplify_CFN_BUILT_IN_LOG2 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG2L:
      return gimple_simplify_CFN_BUILT_IN_LOG2L (res_op, seq, valueize, code, type, _p0);
    case -CFN_LOG2:
      return gimple_simplify_CFN_LOG2 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG10F:
      return gimple_simplify_CFN_BUILT_IN_LOG10F (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG10:
      return gimple_simplify_CFN_BUILT_IN_LOG10 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LOG10L:
      return gimple_simplify_CFN_BUILT_IN_LOG10L (res_op, seq, valueize, code, type, _p0);
    case -CFN_LOG10:
      return gimple_simplify_CFN_LOG10 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXPF:
      return gimple_simplify_CFN_BUILT_IN_EXPF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP:
      return gimple_simplify_CFN_BUILT_IN_EXP (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXPL:
      return gimple_simplify_CFN_BUILT_IN_EXPL (res_op, seq, valueize, code, type, _p0);
    case -CFN_EXP:
      return gimple_simplify_CFN_EXP (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP2F:
      return gimple_simplify_CFN_BUILT_IN_EXP2F (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP2:
      return gimple_simplify_CFN_BUILT_IN_EXP2 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP2L:
      return gimple_simplify_CFN_BUILT_IN_EXP2L (res_op, seq, valueize, code, type, _p0);
    case -CFN_EXP2:
      return gimple_simplify_CFN_EXP2 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP10F:
      return gimple_simplify_CFN_BUILT_IN_EXP10F (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP10:
      return gimple_simplify_CFN_BUILT_IN_EXP10 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_EXP10L:
      return gimple_simplify_CFN_BUILT_IN_EXP10L (res_op, seq, valueize, code, type, _p0);
    case -CFN_EXP10:
      return gimple_simplify_CFN_EXP10 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POW10F:
      return gimple_simplify_CFN_BUILT_IN_POW10F (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POW10:
      return gimple_simplify_CFN_BUILT_IN_POW10 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POW10L:
      return gimple_simplify_CFN_BUILT_IN_POW10L (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SQRTF:
      return gimple_simplify_CFN_BUILT_IN_SQRTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SQRT:
      return gimple_simplify_CFN_BUILT_IN_SQRT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SQRTL:
      return gimple_simplify_CFN_BUILT_IN_SQRTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_SQRT:
      return gimple_simplify_CFN_SQRT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CBRTF:
      return gimple_simplify_CFN_BUILT_IN_CBRTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CBRT:
      return gimple_simplify_CFN_BUILT_IN_CBRT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CBRTL:
      return gimple_simplify_CFN_BUILT_IN_CBRTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TANF:
      return gimple_simplify_CFN_BUILT_IN_TANF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TAN:
      return gimple_simplify_CFN_BUILT_IN_TAN (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TANL:
      return gimple_simplify_CFN_BUILT_IN_TANL (res_op, seq, valueize, code, type, _p0);
    case -CFN_TAN:
      return gimple_simplify_CFN_TAN (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SINF:
      return gimple_simplify_CFN_BUILT_IN_SINF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SIN:
      return gimple_simplify_CFN_BUILT_IN_SIN (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SINL:
      return gimple_simplify_CFN_BUILT_IN_SINL (res_op, seq, valueize, code, type, _p0);
    case -CFN_SIN:
      return gimple_simplify_CFN_SIN (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SINHF:
      return gimple_simplify_CFN_BUILT_IN_SINHF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SINH:
      return gimple_simplify_CFN_BUILT_IN_SINH (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SINHL:
      return gimple_simplify_CFN_BUILT_IN_SINHL (res_op, seq, valueize, code, type, _p0);
    case -CFN_SINH:
      return gimple_simplify_CFN_SINH (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNC:
      return gimple_simplify_CFN_BUILT_IN_TRUNC (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCL:
      return gimple_simplify_CFN_BUILT_IN_TRUNCL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF16:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF32:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF64:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF128:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF32X:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF64X:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_TRUNCF128X:
      return gimple_simplify_CFN_BUILT_IN_TRUNCF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_TRUNC:
      return gimple_simplify_CFN_TRUNC (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF:
      return gimple_simplify_CFN_BUILT_IN_FLOORF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOOR:
      return gimple_simplify_CFN_BUILT_IN_FLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORL:
      return gimple_simplify_CFN_BUILT_IN_FLOORL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF16:
      return gimple_simplify_CFN_BUILT_IN_FLOORF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF32:
      return gimple_simplify_CFN_BUILT_IN_FLOORF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF64:
      return gimple_simplify_CFN_BUILT_IN_FLOORF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF128:
      return gimple_simplify_CFN_BUILT_IN_FLOORF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF32X:
      return gimple_simplify_CFN_BUILT_IN_FLOORF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF64X:
      return gimple_simplify_CFN_BUILT_IN_FLOORF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FLOORF128X:
      return gimple_simplify_CFN_BUILT_IN_FLOORF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_FLOOR:
      return gimple_simplify_CFN_FLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF:
      return gimple_simplify_CFN_BUILT_IN_CEILF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEIL:
      return gimple_simplify_CFN_BUILT_IN_CEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILL:
      return gimple_simplify_CFN_BUILT_IN_CEILL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF16:
      return gimple_simplify_CFN_BUILT_IN_CEILF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF32:
      return gimple_simplify_CFN_BUILT_IN_CEILF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF64:
      return gimple_simplify_CFN_BUILT_IN_CEILF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF128:
      return gimple_simplify_CFN_BUILT_IN_CEILF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF32X:
      return gimple_simplify_CFN_BUILT_IN_CEILF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF64X:
      return gimple_simplify_CFN_BUILT_IN_CEILF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEILF128X:
      return gimple_simplify_CFN_BUILT_IN_CEILF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_CEIL:
      return gimple_simplify_CFN_CEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUND:
      return gimple_simplify_CFN_BUILT_IN_ROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDL:
      return gimple_simplify_CFN_BUILT_IN_ROUNDL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF16:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF32:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF64:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF128:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF32X:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF64X:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ROUNDF128X:
      return gimple_simplify_CFN_BUILT_IN_ROUNDF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_ROUND:
      return gimple_simplify_CFN_ROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINT:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTL:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF16:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF32:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF64:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF128:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF32X:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF64X:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_NEARBYINTF128X:
      return gimple_simplify_CFN_BUILT_IN_NEARBYINTF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_NEARBYINT:
      return gimple_simplify_CFN_NEARBYINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF:
      return gimple_simplify_CFN_BUILT_IN_RINTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINT:
      return gimple_simplify_CFN_BUILT_IN_RINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTL:
      return gimple_simplify_CFN_BUILT_IN_RINTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF16:
      return gimple_simplify_CFN_BUILT_IN_RINTF16 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF32:
      return gimple_simplify_CFN_BUILT_IN_RINTF32 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF64:
      return gimple_simplify_CFN_BUILT_IN_RINTF64 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF128:
      return gimple_simplify_CFN_BUILT_IN_RINTF128 (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF32X:
      return gimple_simplify_CFN_BUILT_IN_RINTF32X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF64X:
      return gimple_simplify_CFN_BUILT_IN_RINTF64X (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_RINTF128X:
      return gimple_simplify_CFN_BUILT_IN_RINTF128X (res_op, seq, valueize, code, type, _p0);
    case -CFN_RINT:
      return gimple_simplify_CFN_RINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEXPF:
      return gimple_simplify_CFN_BUILT_IN_CEXPF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEXP:
      return gimple_simplify_CFN_BUILT_IN_CEXP (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CEXPL:
      return gimple_simplify_CFN_BUILT_IN_CEXPL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IFLOORL:
      return gimple_simplify_CFN_BUILT_IN_IFLOORL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LFLOORL:
      return gimple_simplify_CFN_BUILT_IN_LFLOORL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLFLOORL:
      return gimple_simplify_CFN_BUILT_IN_LLFLOORL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ICEILL:
      return gimple_simplify_CFN_BUILT_IN_ICEILL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LCEILL:
      return gimple_simplify_CFN_BUILT_IN_LCEILL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLCEILL:
      return gimple_simplify_CFN_BUILT_IN_LLCEILL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IROUNDL:
      return gimple_simplify_CFN_BUILT_IN_IROUNDL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LROUNDL:
      return gimple_simplify_CFN_BUILT_IN_LROUNDL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLROUNDL:
      return gimple_simplify_CFN_BUILT_IN_LLROUNDL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IRINTL:
      return gimple_simplify_CFN_BUILT_IN_IRINTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LRINTL:
      return gimple_simplify_CFN_BUILT_IN_LRINTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLRINTL:
      return gimple_simplify_CFN_BUILT_IN_LLRINTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IFLOOR:
      return gimple_simplify_CFN_BUILT_IN_IFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LFLOOR:
      return gimple_simplify_CFN_BUILT_IN_LFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLFLOOR:
      return gimple_simplify_CFN_BUILT_IN_LLFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ICEIL:
      return gimple_simplify_CFN_BUILT_IN_ICEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LCEIL:
      return gimple_simplify_CFN_BUILT_IN_LCEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLCEIL:
      return gimple_simplify_CFN_BUILT_IN_LLCEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IROUND:
      return gimple_simplify_CFN_BUILT_IN_IROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LROUND:
      return gimple_simplify_CFN_BUILT_IN_LROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLROUND:
      return gimple_simplify_CFN_BUILT_IN_LLROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IRINT:
      return gimple_simplify_CFN_BUILT_IN_IRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LRINT:
      return gimple_simplify_CFN_BUILT_IN_LRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLRINT:
      return gimple_simplify_CFN_BUILT_IN_LLRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IFLOORF:
      return gimple_simplify_CFN_BUILT_IN_IFLOORF (res_op, seq, valueize, code, type, _p0);
    case -CFN_IFLOOR:
      return gimple_simplify_CFN_IFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LFLOORF:
      return gimple_simplify_CFN_BUILT_IN_LFLOORF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LFLOOR:
      return gimple_simplify_CFN_LFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLFLOORF:
      return gimple_simplify_CFN_BUILT_IN_LLFLOORF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LLFLOOR:
      return gimple_simplify_CFN_LLFLOOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_ICEILF:
      return gimple_simplify_CFN_BUILT_IN_ICEILF (res_op, seq, valueize, code, type, _p0);
    case -CFN_ICEIL:
      return gimple_simplify_CFN_ICEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LCEILF:
      return gimple_simplify_CFN_BUILT_IN_LCEILF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LCEIL:
      return gimple_simplify_CFN_LCEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLCEILF:
      return gimple_simplify_CFN_BUILT_IN_LLCEILF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LLCEIL:
      return gimple_simplify_CFN_LLCEIL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IROUNDF:
      return gimple_simplify_CFN_BUILT_IN_IROUNDF (res_op, seq, valueize, code, type, _p0);
    case -CFN_IROUND:
      return gimple_simplify_CFN_IROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LROUNDF:
      return gimple_simplify_CFN_BUILT_IN_LROUNDF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LROUND:
      return gimple_simplify_CFN_LROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLROUNDF:
      return gimple_simplify_CFN_BUILT_IN_LLROUNDF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LLROUND:
      return gimple_simplify_CFN_LLROUND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_IRINTF:
      return gimple_simplify_CFN_BUILT_IN_IRINTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_IRINT:
      return gimple_simplify_CFN_IRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LRINTF:
      return gimple_simplify_CFN_BUILT_IN_LRINTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LRINT:
      return gimple_simplify_CFN_LRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_LLRINTF:
      return gimple_simplify_CFN_BUILT_IN_LLRINTF (res_op, seq, valueize, code, type, _p0);
    case -CFN_LLRINT:
      return gimple_simplify_CFN_LLRINT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CPROJF:
      return gimple_simplify_CFN_BUILT_IN_CPROJF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CPROJ:
      return gimple_simplify_CFN_BUILT_IN_CPROJ (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CPROJL:
      return gimple_simplify_CFN_BUILT_IN_CPROJL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SIGNBITF:
      return gimple_simplify_CFN_BUILT_IN_SIGNBITF (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SIGNBIT:
      return gimple_simplify_CFN_BUILT_IN_SIGNBIT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_SIGNBITL:
      return gimple_simplify_CFN_BUILT_IN_SIGNBITL (res_op, seq, valueize, code, type, _p0);
    case -CFN_SIGNBIT:
      return gimple_simplify_CFN_SIGNBIT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CTZ:
      return gimple_simplify_CFN_BUILT_IN_CTZ (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CTZL:
      return gimple_simplify_CFN_BUILT_IN_CTZL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CTZLL:
      return gimple_simplify_CFN_BUILT_IN_CTZLL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CTZIMAX:
      return gimple_simplify_CFN_BUILT_IN_CTZIMAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_CTZ:
      return gimple_simplify_CFN_CTZ (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POPCOUNT:
      return gimple_simplify_CFN_BUILT_IN_POPCOUNT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POPCOUNTL:
      return gimple_simplify_CFN_BUILT_IN_POPCOUNTL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POPCOUNTLL:
      return gimple_simplify_CFN_BUILT_IN_POPCOUNTLL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_POPCOUNTIMAX:
      return gimple_simplify_CFN_BUILT_IN_POPCOUNTIMAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_POPCOUNT:
      return gimple_simplify_CFN_POPCOUNT (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_PARITY:
      return gimple_simplify_CFN_BUILT_IN_PARITY (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_PARITYL:
      return gimple_simplify_CFN_BUILT_IN_PARITYL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_PARITYLL:
      return gimple_simplify_CFN_BUILT_IN_PARITYLL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_PARITYIMAX:
      return gimple_simplify_CFN_BUILT_IN_PARITYIMAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_PARITY:
      return gimple_simplify_CFN_PARITY (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FFS:
      return gimple_simplify_CFN_BUILT_IN_FFS (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FFSL:
      return gimple_simplify_CFN_BUILT_IN_FFSL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FFSLL:
      return gimple_simplify_CFN_BUILT_IN_FFSLL (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_FFSIMAX:
      return gimple_simplify_CFN_BUILT_IN_FFSIMAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_FFS:
      return gimple_simplify_CFN_FFS (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_PLUS:
      return gimple_simplify_CFN_REDUC_PLUS (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_IOR:
      return gimple_simplify_CFN_REDUC_IOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_XOR:
      return gimple_simplify_CFN_REDUC_XOR (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_MAX:
      return gimple_simplify_CFN_REDUC_MAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_MIN:
      return gimple_simplify_CFN_REDUC_MIN (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_FMAX:
      return gimple_simplify_CFN_REDUC_FMAX (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_FMIN:
      return gimple_simplify_CFN_REDUC_FMIN (res_op, seq, valueize, code, type, _p0);
    case -CFN_REDUC_AND:
      return gimple_simplify_CFN_REDUC_AND (res_op, seq, valueize, code, type, _p0);
    case -CFN_BUILT_IN_CONSTANT_P:
      return gimple_simplify_CFN_BUILT_IN_CONSTANT_P (res_op, seq, valueize, code, type, _p0);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2525;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2525:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2526;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2526:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2527;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2527:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2528;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2528:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2529;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2529:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2530;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2530:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF16;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2531;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2531:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF16;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2532;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2532:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF16:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF32 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF32;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2533;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2533:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF32;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2534;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2534:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF128 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF128;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2537;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2537:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF128;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2538;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2538:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_COPYSIGNF64X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF64X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2541;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2541:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF64X;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2542;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2542:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_COPYSIGN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_COPYSIGN;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2545;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2545:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn copysigns = CFN_COPYSIGN;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2546;
		    {
		      res_op->set_op (copysigns, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1196, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2546:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_334 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
	    return true;
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
	  if (gimple_simplify_335 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_336 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_337 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
			if (gimple_simplify_338 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
			  return true;
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
if (tree_expr_nonnegative_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_339 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CEIL_DIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_211 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_342 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_344 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_343 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
        return true;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_345 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
						  return true;
					      }
					      break;
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
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_349 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case MULT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
						    if (gimple_simplify_354 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
						      return true;
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_353 (res_op, seq, valueize, type, captures, CEIL_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2557;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2557;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2557;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2557:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2558;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2558;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2558;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2558:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (CEIL_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2559;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2559;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2559;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2559:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2560;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2560;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2560;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2560:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2561;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2561;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), CEIL_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2561;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2561:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_FLOOR_DIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_211 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_342 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_344 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_343 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
        return true;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_345 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
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
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_357 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR, TRUNC_DIV_EXPR))
      return true;
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_349 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
						  return true;
					      }
					      break;
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
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_349 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
				  return true;
			      }
			      break;
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
      break;
    default:;
    }
  if (integer_pow2p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_351 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case MULT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
						    if (gimple_simplify_354 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
						      return true;
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_353 (res_op, seq, valueize, type, captures, FLOOR_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (FLOOR_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2562;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2562;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2562;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2562:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (FLOOR_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2563;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2563;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2563;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2563:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (FLOOR_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2564;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2564;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2564;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2564:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2565;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2565;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2565;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2565:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2566;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2566;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), FLOOR_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2566;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2566:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_EXACT_DIV_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_onep (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_211 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case LSHIFT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (integer_onep (_q50))
						    {
						      {
							tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q50, _q51 };
							if (gimple_simplify_340 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
							  return true;
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
			        }
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (integer_onep (_q40))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _q41 };
					if (gimple_simplify_340 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (integer_onep (_q40))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q40, _q41 };
					if (gimple_simplify_341 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
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
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (integer_onep (_q30))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q30, _q31 };
			if (gimple_simplify_341 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
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
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_342 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_344 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
if (integer_minus_onep (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_343 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
        return true;
    }
  }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_345 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_346 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_347 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_348 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_AND_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_349 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
						  return true;
					      }
					      break;
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
		      break;
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_349 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_pow2p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_350 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			      return true;
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
  if (integer_pow2p (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_351 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_352 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case MULT_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
						    if (gimple_simplify_354 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
						      return true;
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
			  case INTEGER_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_353 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q41 };
					if (gimple_simplify_355 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q41, _q40 };
					if (gimple_simplify_355 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
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
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q30, _q31 };
					if (gimple_simplify_355 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _q31, _q30 };
					if (gimple_simplify_355 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
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
				{
 wide_int c = wi::to_wide (captures[2]);
 wide_int n = wi::to_wide (captures[3]);
 bool shift = EXACT_DIV_EXPR == RSHIFT_EXPR;
 int_range_max vr0, vr1, vr3;
				    if (INTEGRAL_TYPE_P (type)
 && gimple_match_range_of_expr (vr0, captures[1], captures[0])
)
				      {
					if ((shift ? wi::ctz (
c
) >= n.to_shwi ()
 : wi::multiple_of_p (
c
, n, TYPE_SIGN (type)))
 && gimple_match_range_of_expr (vr1, captures[2])
 && range_op_handler (PLUS_EXPR).overflow_free_p (vr0, vr1)
 && gimple_match_range_of_expr (vr3, captures[0])
 && !vr3.undefined_p ()
 && (TYPE_UNSIGNED (type)
 || (vr0.nonnegative_p () && vr3.nonnegative_p ())
 || (vr0.nonpositive_p () && vr3.nonpositive_p ()))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2572;
					    {
					      res_op->set_op (PLUS_EXPR, type, 2);
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[1];
						_o1[1] = captures[3];
						gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						tem_op.resimplify (lseq, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, lseq);
						if (!_r1) goto next_after_fail2572;
						res_op->ops[0] = _r1;
					      }
					      res_op->ops[1] =  wide_int_to_tree (type,
(shift ? wi::rshift (
c
, n, TYPE_SIGN (type))
 : wi::div_trunc (
c
, n, TYPE_SIGN (type)))
);
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1199, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2572:;
					  }
					else
					  {
					    if (!vr0.undefined_p () && TYPE_UNSIGNED (type) && c.sign_mask () < 0
 &&
(shift ? wi::ctz (
-c
) >= n.to_shwi ()
 : wi::multiple_of_p (
-c
, n, TYPE_SIGN (type)))
 && wi::geu_p (vr0.lower_bound (), -c)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2573;
						{
						  res_op->set_op (PLUS_EXPR, type, 2);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] = captures[3];
						    gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail2573;
						    res_op->ops[0] = _r1;
						  }
						  res_op->ops[1] =  wide_int_to_tree (type, -
(shift ? wi::rshift (
-c
, n, TYPE_SIGN (type))
 : wi::div_trunc (
-c
, n, TYPE_SIGN (type)))
);
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1200, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2573:;
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_p1 == _q41 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q41, 0) && types_match (_p1, _q41)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q41 };
					if (gimple_simplify_356 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
				      }
				    }
				  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q41, _q40 };
					if (gimple_simplify_356 (res_op, seq, valueize, type, captures, EXACT_DIV_EXPR))
					  return true;
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
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2574;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2574;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2574;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2574:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2575;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2575;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2575;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2575:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (EXACT_DIV_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2576;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2576;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2576;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2576:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2577;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2577;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2577;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2577:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2578;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2578;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), EXACT_DIV_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2578;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2578:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_LT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (real_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_467 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
					if (gimple_simplify_469 (res_op, seq, valueize, type, captures, GT_EXPR))
					  return true;
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
		{
		  tree _p1_pops[1];
		  if (gimple_nop_convert (_p1, _p1_pops, valueize))
		    {
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
					    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, GT_EXPR))
					      return true;
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
		    }
		}
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case EXACT_DIV_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
									      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, LT_EXPR))
									        return true;
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
						      }
						    default:;
						    }
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
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case LSHIFT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
					    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
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
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, LT_EXPR))
			      return true;
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
    }
}
  {
    tree _p1_pops[1];
    if (gimple_nop_convert (_p1, _p1_pops, valueize))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _q30))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case LSHIFT_EXPR:
		      {
			tree _q40 = gimple_assign_rhs1 (_a1);
			_q40 = do_valueize (valueize, _q40);
			tree _q41 = gimple_assign_rhs2 (_a1);
			_q41 = do_valueize (valueize, _q41);
			if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			      if (gimple_simplify_468 (res_op, seq, valueize, type, captures, GT_EXPR))
			        return true;
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
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
					if (gimple_simplify_469 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
			if (gimple_simplify_469 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
			if (gimple_simplify_469 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_470 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
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
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case EXACT_DIV_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, LT_EXPR))
					        return true;
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
		      }
		    default:;
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_245 (res_op, seq, valueize, type, captures, LT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case PLUS_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					      if (gimple_simplify_473 (res_op, seq, valueize, type, captures, LT_EXPR))
					        return true;
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
		      }
		    default:;
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_475 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_476 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
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
	        }
	      case POINTER_DIFF_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_DIFF_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					if (gimple_simplify_249 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
					if (gimple_simplify_250 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (tree_expr_nonnegative_p (_q20))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, LT_EXPR, BIT_IOR_EXPR))
			      return true;
			  }
		        }
		    }
		  if (tree_expr_nonnegative_p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, LT_EXPR, BIT_IOR_EXPR))
			      return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q30))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, GT_EXPR, BIT_AND_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, GT_EXPR, BIT_AND_EXPR))
			      return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_478 (res_op, seq, valueize, type, captures, GT_EXPR))
					      return true;
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
	        }
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_479 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
					      return true;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR, GT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
			  return true;
		      }
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MAX_EXPR, LT_EXPR, BIT_AND_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MIN_EXPR, LT_EXPR, BIT_IOR_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_zero_one_valued_p (_q30, valueize))
				    {
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					    if (gimple_simplify_482 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
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
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (gimple_zero_one_valued_p (_q20, valueize))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_482 (res_op, seq, valueize, type, captures, LT_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2624;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2624;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2624;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2624:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2625;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2625;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2625;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2625:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (LT_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2626;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2626;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2626;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2626:;
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
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_483 (res_op, seq, valueize, type, captures, LT_EXPR, LE_EXPR))
        return true;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      if (gimple_simplify_279 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
			        return true;
			    }
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
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_333 (res_op, seq, valueize, type, captures, LT_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_285 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		{
		  tree _p1_pops[1];
		  if (gimple_nop_convert (_p1, _p1_pops, valueize))
		    {
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
					if (gimple_simplify_285 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
		}
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      if (gimple_simplify_284 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
		        return true;
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
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_NOT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
					if (gimple_simplify_283 (res_op, seq, valueize, type, captures, LT_EXPR))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    {
		      tree _p1_pops[1];
		      if (gimple_nop_convert (_p1, _p1_pops, valueize))
		        {
			  tree _q50 = _p1_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case BIT_NOT_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
					    if (gimple_simplify_283 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		        }
		    }
		    if (CONSTANT_CLASS_P (_p1))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			  if (gimple_simplify_284 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
			    return true;
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
    }
}
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_286 (res_op, seq, valueize, type, captures, LT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, PLUS_EXPR, LT_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case INTEGER_CST:
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q21 };
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, MINUS_EXPR, LT_EXPR))
				  return true;
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
				if (gimple_simplify_288 (res_op, seq, valueize, type, captures, LT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, LT_EXPR, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_292 (res_op, seq, valueize, type, captures, LT_EXPR, LE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_485 (res_op, seq, valueize, type, captures, LT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_486 (res_op, seq, valueize, type, captures, LT_EXPR, GE_EXPR))
						  return true;
					      }
					      break;
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
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_296 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, LT_EXPR))
		      return true;
		  }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case ADDR_EXPR:
			        {
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
								    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
							    return true;
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
						    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
					    return true;
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
		    case ADDR_EXPR:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
						if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
						  return true;
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
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LT_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
		  if (uniform_integer_cst_p (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			if (gimple_simplify_487 (res_op, seq, valueize, type, captures, LT_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_295 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
		        return true;
		    }
		  }
	          break;
	        }
	      case ADDR_EXPR:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
						    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
					    return true;
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
				    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, LT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, LT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, LT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, LT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, LT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, LT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_SQRT, LT_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_SQRT, LT_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    CASE_CONVERT:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
				if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
				  return true;
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
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LT_EXPR))
		  return true;
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
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_zerop (_q41))
					{
					  {
					    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
					    if (TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2627;
						{
						  tree tem;
						  tem =  constant_boolean_node (false, type);
						  res_op->set_value (tem);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1213, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2627:;
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
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
      if (gimple_simplify_488 (res_op, seq, valueize, type, captures, LT_EXPR))
        return true;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    if (gimple_simplify_320 (res_op, seq, valueize, type, captures, LT_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
		    if (gimple_simplify_320 (res_op, seq, valueize, type, captures, GT_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q31))
						    {
						    case INTEGER_CST:
						      {
							if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
							        return true;
							    }
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
				    default:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      switch (TREE_CODE (_q41))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0, _q41 };
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR))
							        return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0, _q31 };
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, GT_EXPR, LE_EXPR))
			        return true;
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
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			if (gimple_simplify_490 (res_op, seq, valueize, type, captures, GT_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_minus_onep (_q21))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					    if (gimple_simplify_491 (res_op, seq, valueize, type, captures, LT_EXPR))
					      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_SUB_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
					      if (gimple_simplify_492 (res_op, seq, valueize, type, captures, GT_EXPR, NE_EXPR))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_ADD_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q30 = gimple_call_arg (_c2, 0);
					_q30 = do_valueize (valueize, _q30);
					tree _q31 = gimple_call_arg (_c2, 1);
					_q31 = do_valueize (valueize, _q31);
					if (tree_swap_operands_p (_q30, _q31))
					  std::swap (_q30, _q31);
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
					      if (gimple_simplify_493 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
					        return true;
					    }
					  }
					if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q31, _q30 };
					      if (gimple_simplify_493 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_all_onesp (_q20))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _p1 };
			if (gimple_simplify_494 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_495 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, LT_EXPR, GT_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, LT_EXPR, GT_EXPR))
				  return true;
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
				if (gimple_simplify_323 (res_op, seq, valueize, type, captures, LT_EXPR, GT_EXPR))
				  return true;
			      }
			      break;
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CTZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, CFN_BUILT_IN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, CFN_BUILT_IN_CTZL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, CFN_BUILT_IN_CTZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_CTZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, CFN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_498 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LT_EXPR, NE_EXPR, CFN_BUILT_IN_CTZLL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_GE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case REAL_CST:
		      {
			if (real_zerop (_p1))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_467 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case LSHIFT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _q20, 0) && types_match (_q41, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q40, _q20 };
					if (gimple_simplify_469 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
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
		{
		  tree _p1_pops[1];
		  if (gimple_nop_convert (_p1, _p1_pops, valueize))
		    {
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q40, _q50, _q20 };
					    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, LE_EXPR))
					      return true;
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
		    }
		}
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _p1))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    CASE_CONVERT:
						      {
							tree _q60 = gimple_assign_rhs1 (_a3);
							_q60 = do_valueize (valueize, _q60);
							switch (TREE_CODE (_q60))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q60))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case EXACT_DIV_EXPR:
								      {
									tree _q70 = gimple_assign_rhs1 (_a4);
									_q70 = do_valueize (valueize, _q70);
									tree _q71 = gimple_assign_rhs2 (_a4);
									_q71 = do_valueize (valueize, _q71);
									if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
									  {
									    {
									      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q70 };
									      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, GE_EXPR))
									        return true;
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
						      }
						    default:;
						    }
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
		      break;
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case LSHIFT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  CASE_CONVERT:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q31, 0) && types_match (_q60, _q31)))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
					    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
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
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
			    if (gimple_simplify_468 (res_op, seq, valueize, type, captures, GE_EXPR))
			      return true;
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
    }
}
  {
    tree _p1_pops[1];
    if (gimple_nop_convert (_p1, _p1_pops, valueize))
      {
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _q30))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case LSHIFT_EXPR:
		      {
			tree _q40 = gimple_assign_rhs1 (_a1);
			_q40 = do_valueize (valueize, _q40);
			tree _q41 = gimple_assign_rhs2 (_a1);
			_q41 = do_valueize (valueize, _q41);
			if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0 };
			      if (gimple_simplify_468 (res_op, seq, valueize, type, captures, LE_EXPR))
			        return true;
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
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
					if (gimple_simplify_469 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
			if (gimple_simplify_469 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0 };
			if (gimple_simplify_469 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_470 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MULT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
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
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case EXACT_DIV_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, GE_EXPR))
					        return true;
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
		      }
		    default:;
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_245 (res_op, seq, valueize, type, captures, GE_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case PLUS_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					      if (gimple_simplify_473 (res_op, seq, valueize, type, captures, GE_EXPR))
					        return true;
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
		      }
		    default:;
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_475 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_476 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
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
	        }
	      case POINTER_DIFF_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case POINTER_DIFF_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q50 };
					if (gimple_simplify_249 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
					if (gimple_simplify_250 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p0, _q21 };
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (tree_expr_nonnegative_p (_q20))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, GE_EXPR, BIT_IOR_EXPR))
			      return true;
			  }
		        }
		    }
		  if (tree_expr_nonnegative_p (_q21))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, GE_EXPR, BIT_IOR_EXPR))
			      return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q30))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, LE_EXPR, BIT_AND_EXPR))
			      return true;
			  }
		        }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      if (tree_expr_nonnegative_p (_q31))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, LE_EXPR, BIT_AND_EXPR))
			      return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_478 (res_op, seq, valueize, type, captures, LE_EXPR))
					      return true;
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
	        }
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (gimple_simplify_479 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
					      return true;
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR, LE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR))
			  return true;
		      }
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MAX_EXPR, GE_EXPR, BIT_IOR_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR, BIT_AND_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case GE_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (gimple_zero_one_valued_p (_q30, valueize))
				    {
				      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					    if (gimple_simplify_482 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
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
	        }
	      case GE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (gimple_zero_one_valued_p (_q20, valueize))
		    {
		      if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_482 (res_op, seq, valueize, type, captures, GE_EXPR))
			      return true;
			  }
		        }
		    }
	          break;
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2635;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2635;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2635;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2635:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2636;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2636;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2636;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2636:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (GE_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2637;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2637;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), GE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2637;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2637:;
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
if (uniform_integer_cst_p (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_483 (res_op, seq, valueize, type, captures, GE_EXPR, GT_EXPR))
        return true;
    }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			if (integer_zerop (_p1))
			  {
			    {
			      tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			      if (gimple_simplify_279 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
			        return true;
			    }
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
    default:;
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_281 (res_op, seq, valueize, type, captures, GE_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_285 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		{
		  tree _p1_pops[1];
		  if (gimple_nop_convert (_p1, _p1_pops, valueize))
		    {
		      tree _q40 = _p1_pops[0];
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q40, _q50 };
					if (gimple_simplify_285 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
		}
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
		      if (gimple_simplify_284 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
		        return true;
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
{
  tree _p0_pops[1];
  if (gimple_nop_convert (_p0, _p0_pops, valueize))
    {
      tree _q20 = _p0_pops[0];
      switch (TREE_CODE (_q20))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q20))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case BIT_NOT_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _p1, _q50 };
					if (gimple_simplify_283 (res_op, seq, valueize, type, captures, GE_EXPR))
					  return true;
				      }
				      break;
				    }
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    {
		      tree _p1_pops[1];
		      if (gimple_nop_convert (_p1, _p1_pops, valueize))
		        {
			  tree _q50 = _p1_pops[0];
			  switch (TREE_CODE (_q50))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q50))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case BIT_NOT_EXPR:
				        {
					  tree _q60 = gimple_assign_rhs1 (_a2);
					  _q60 = do_valueize (valueize, _q60);
					  {
					    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q50, _q60 };
					    if (gimple_simplify_283 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
					  }
				          break;
				        }
				      default:;
				      }
			        }
			      break;
			    default:;
			    }
		        }
		    }
		    if (CONSTANT_CLASS_P (_p1))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _p1 };
			  if (gimple_simplify_284 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
			    return true;
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
    }
}
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_286 (res_op, seq, valueize, type, captures, GE_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, PLUS_EXPR, GE_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    case INTEGER_CST:
		      {
			if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q20, _q21 };
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
			        return true;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, MINUS_EXPR, GE_EXPR))
				  return true;
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
				if (gimple_simplify_288 (res_op, seq, valueize, type, captures, GE_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, GE_EXPR, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if (gimple_simplify_292 (res_op, seq, valueize, type, captures, GE_EXPR, GE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case EXACT_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_485 (res_op, seq, valueize, type, captures, GE_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case EXACT_DIV_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  switch (TREE_CODE (_q31))
				    {
				    case INTEGER_CST:
				      {
					switch (TREE_CODE (_p1))
					  {
					  case INTEGER_CST:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
						if (gimple_simplify_486 (res_op, seq, valueize, type, captures, GE_EXPR, LT_EXPR))
						  return true;
					      }
					      break;
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
		      break;
		    default:;
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_296 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
		    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, GE_EXPR))
		      return true;
		  }
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case ADDR_EXPR:
			        {
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
								    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
							    return true;
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
						    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
					    return true;
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
		    case ADDR_EXPR:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case ADDR_EXPR:
						      {
							{
							  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
						if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
						  return true;
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
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
				if (gimple_simplify_315 (res_op, seq, valueize, type, captures, GE_EXPR))
				  return true;
			      }
			      break;
			    }
		          default:;
		          }
		        break;
		      }
		    default:;
		    }
		  if (uniform_integer_cst_p (_p1))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			if (gimple_simplify_487 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_295 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
		        return true;
		    }
		  }
	          break;
	        }
	      case ADDR_EXPR:
	        {
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
						    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
					    return true;
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
				    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, GE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRTL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, GE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_BUILT_IN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, GE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _p1))
		          {
			    if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			      switch (gimple_call_combined_fn (_c2))
				{
				case CFN_SQRT:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_SQRT, GE_EXPR))
					  return true;
				      }
				    }
				  break;
				default:;
				}
		          }
		        break;
		      case REAL_CST:
		        {
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_SQRT, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    CASE_CONVERT:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case ADDR_EXPR:
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _q30 };
				if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
				  return true;
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
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
		if (gimple_simplify_316 (res_op, seq, valueize, type, captures, GE_EXPR))
		  return true;
	      }
	      break;
	    }
          default:;
          }
        break;
      }
    default:;
    }
  if (uniform_integer_cst_p (_p1))
    {
      {
	tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p0, _p1 };
	if (gimple_simplify_488 (res_op, seq, valueize, type, captures, GE_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    if (gimple_simplify_320 (res_op, seq, valueize, type, captures, GE_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q32, _p0 };
		    if (gimple_simplify_320 (res_op, seq, valueize, type, captures, LE_EXPR))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q31))
						    {
						    case INTEGER_CST:
						      {
							if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q40, _q31 };
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
							        return true;
							    }
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
				    default:;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
						    {
						      switch (TREE_CODE (_q41))
						        {
							case INTEGER_CST:
							  {
							    {
							      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q30, _q40, _p0, _q41 };
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR))
							        return true;
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
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[5] ATTRIBUTE_UNUSED = { _p1, _p1, _q30, _p0, _q31 };
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR))
			        return true;
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
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			if (gimple_simplify_490 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (integer_minus_onep (_q21))
				    {
				      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					    if (gimple_simplify_491 (res_op, seq, valueize, type, captures, GE_EXPR))
					      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_SUB_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
					      if (gimple_simplify_492 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case REALPART_EXPR:
	        {
		  tree _q20 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q20) == SSA_NAME
		       || is_gimple_min_invariant (_q20)))
		    {
		      _q20 = do_valueize (valueize, _q20);
		      switch (TREE_CODE (_q20))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q20))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_ADD_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q30 = gimple_call_arg (_c2, 0);
					_q30 = do_valueize (valueize, _q30);
					tree _q31 = gimple_call_arg (_c2, 1);
					_q31 = do_valueize (valueize, _q31);
					if (tree_swap_operands_p (_q30, _q31))
					  std::swap (_q30, _q31);
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
					      if (gimple_simplify_493 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
					        return true;
					    }
					  }
					if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q31, _q30 };
					      if (gimple_simplify_493 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
					        return true;
					    }
					  }
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (integer_all_onesp (_q20))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _p1 };
			if (gimple_simplify_494 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
			  return true;
		      }
		    }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_495 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, GE_EXPR, LE_EXPR))
				  return true;
			      }
			      break;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, GE_EXPR, LE_EXPR))
				  return true;
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
				if (gimple_simplify_323 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
				  return true;
			      }
			      break;
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_CTZ:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXPL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOGF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOGL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_CTZ:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			    if (gimple_simplify_498 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR, CFN_CTZ))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_LOG:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_LOG2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_CTZLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR, CFN_BUILT_IN_CTZLL))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_LOG10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_LOG2L:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _p1 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gcall *_c1 = dyn_cast <gcall *> (_d1))
		  switch (gimple_call_combined_fn (_c1))
		    {
		    case CFN_BUILT_IN_EXP:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP10F:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP10L:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXPF:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXPL:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG2:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOGF:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOGL:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG10F:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG10L:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_EXP:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_LOG:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_EXP2:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_LOG2:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_EXP10:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_LOG10:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP10:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2F:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_EXP2L:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG10:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG2F:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    case CFN_BUILT_IN_LOG2L:
		      if (gimple_call_num_args (_c1) == 1)
		        {
			  tree _q30 = gimple_call_arg (_c1, 0);
			  _q30 = do_valueize (valueize, _q30);
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q30, _p0 };
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR))
			      return true;
			  }
		        }
		      break;
		    default:;
		    }
	      }
	    break;
          default:;
          }
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_POW (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2721;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1224, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2721:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case REAL_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  const combined_fn pows = CFN_POW;
			  {
 HOST_WIDE_INT n;
			      if (real_isinteger (&TREE_REAL_CST (captures[1]), &n) && (n & 1) == 0
)
				{
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2722;
				  {
				    res_op->set_op (pows, type, 2);
				    res_op->ops[0] = captures[0];
				    res_op->ops[1] = captures[1];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1224, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail2722:;
				}
			  }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_543 (res_op, seq, valueize, type, captures, CFN_POW))
			  return true;
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_EXP:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2723;
			  {
			    res_op->set_op (CFN_EXP, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2723;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1226, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2723:;
			}
		    }
	          }
	        break;
	      case CFN_POW:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    if (tree_expr_nonnegative_p (_q20))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			  if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2724;
			      {
				res_op->set_op (CFN_POW, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] = captures[2];
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2724;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1227, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2724:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_542 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP2:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2725;
			  {
			    res_op->set_op (CFN_EXP2, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2725;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1226, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2725:;
			}
		    }
	          }
	        break;
	      case CFN_SQRT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2726;
			  {
			    res_op->set_op (CFN_POW, type, 2);
			    res_op->ops[0] = captures[0];
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[1];
			      _o1[1] =  build_real (type, dconsthalf);
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2726;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1225, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2726:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_542 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_542 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_EXP10:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (flag_unsafe_math_optimizations
)
			{
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2727;
			  {
			    res_op->set_op (CFN_EXP10, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2727;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1226, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2727:;
			}
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case REAL_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_542 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_POW))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      default:;
	      }
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_545 (res_op, seq, valueize, type, captures, CFN_POW, CFN_EXP, CFN_LOG, CFN_EXP2, CFN_LOG2))
	    return true;
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_544 (res_op, seq, valueize, type, captures, CFN_POW))
        return true;
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_546 (res_op, seq, valueize, type, captures, CFN_POW))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWI (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2740;
			      {
				res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2740:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
			  if ((wi::to_wide (captures[1]) & 1) == 0
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2741;
			      {
				res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2741:;
			    }
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
			  {
			    if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
			      {
				if (single_use (captures[0])
)
				  {
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2742;
				    {
				      res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				      res_op->ops[0] = captures[2];
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2742;
					res_op->ops[1] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1235, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2742:;
				  }
			      }
			  }
		      }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2743;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2743:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNF;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2744;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2744:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_BUILT_IN_COPYSIGNL;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2745;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2745:;
			      }
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    switch (TREE_CODE (_p1))
		      {
		      case INTEGER_CST:
		        {
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    const combined_fn copysigns = CFN_COPYSIGN;
			    if ((wi::to_wide (captures[2]) & 1) == 0
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2746;
				{
				  res_op->set_op (CFN_BUILT_IN_POWI, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2746:;
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
        }
      break;
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (flag_unsafe_math_optimizations
)
	    {
	      {
 HOST_WIDE_INT tmp = 0;
		  if (real_isinteger (&TREE_REAL_CST (captures[0]), &tmp)
 && tmp > 0 && pow2p_hwi (tmp)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2747;
		      {
			res_op->set_op (CFN_BUILT_IN_LDEXP, type, 2);
			res_op->ops[0] =  build_one_cst (type);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
			  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2747;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1237, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2747:;
		    }
	      }
	    }
	}
        break;
      }
    default:;
    }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (flag_unsafe_math_optimizations && canonicalize_math_p ()
)
	{
	  if (! HONOR_INFINITIES (type) && ! flag_trapping_math
)
	    {
	      if (! HONOR_NANS (type) && ! HONOR_SIGNED_ZEROS (type)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2748;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1238, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2748:;
		}
	    }
	}
    }
  }
if (real_onep (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_547 (res_op, seq, valueize, type, captures))
        return true;
    }
  }
  switch (TREE_CODE (_p1))
    {
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (wi::to_wide (captures[1]) == 0
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2749;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1239, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2749:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2750;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1240, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2750:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2751;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1241, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2751:;
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

bool
gimple_simplify_CFN_BUILT_IN_HYPOTL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2772;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2772:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2773;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2773:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2774;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2774:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_BUILT_IN_HYPOTL;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2775;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2775:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNL:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_BUILT_IN_HYPOTL))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
if (real_zerop (_p1))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_550 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
        return true;
    }
  }
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	if (gimple_simplify_550 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_551 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_HYPOTL))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_MAX_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_625 (res_op, seq, valueize, type, captures, MAX_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_626 (res_op, seq, valueize, type, captures, MAX_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_626 (res_op, seq, valueize, type, captures, MAX_EXPR))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q31 };
			if (gimple_simplify_627 (res_op, seq, valueize, type, captures, MAX_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _p0, _q30 };
			if (gimple_simplify_627 (res_op, seq, valueize, type, captures, MAX_EXPR))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_640 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_640 (res_op, seq, valueize, type, captures))
			  return true;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_640 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q31, _p0 };
			if (gimple_simplify_640 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
			if (gimple_simplify_641 (res_op, seq, valueize, type, captures))
			  return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_641 (res_op, seq, valueize, type, captures))
			  return true;
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
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (INTEGRAL_TYPE_P (type)
 && TYPE_MAX_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MAX_VALUE (type), OEP_ONLY_CONST)
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2851;
	{
	  tree tem;
	  tem = captures[1];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1259, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2851:;
      }
    else
      {
	if (INTEGRAL_TYPE_P (type)
 && TYPE_MIN_VALUE (type)
 && operand_equal_p (captures[1], TYPE_MIN_VALUE (type), OEP_ONLY_CONST)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2852;
	    {
	      tree tem;
	      tem = captures[0];
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1260, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2852:;
	  }
      }
  }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_630 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
				      }
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
					if (gimple_simplify_630 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
					if (gimple_simplify_630 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q51, _q21, _p0, _q20 };
					if (gimple_simplify_630 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
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
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2853;
				      {
					tree tem;
					tem = captures[1];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2853:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2854;
				      {
					tree tem;
					tem = captures[0];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2854:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_631 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
				      }
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p1, _q50, _q21, _p0, _q20 };
					if (gimple_simplify_631 (res_op, seq, valueize, type, captures, MAX_EXPR))
					  return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
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
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2855;
				      {
					tree tem;
					tem = captures[1];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1261, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2855:;
				    }
				  else
				    {
				      gimple_seq *lseq = seq;
				      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2856;
				      {
					tree tem;
					tem = captures[0];
					res_op->set_value (tem);
					if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1262, __FILE__, __LINE__, true);
					return true;
				      }
next_after_fail2856:;
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
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case MIN_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MAX_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2857;
						{
						  res_op->set_op (MAX_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2857:;
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
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2858;
						{
						  res_op->set_op (MAX_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2858:;
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
		    default:;
		    }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MIN_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    if (!HONOR_NANS (captures[0])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2859;
						{
						  res_op->set_op (MAX_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2859:;
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
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2860;
						{
						  res_op->set_op (MAX_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1096, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2860:;
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
		    default:;
		    }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  switch (TREE_CODE (_q21))
		    {
		    case INTEGER_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case BIT_AND_EXPR:
				      {
					tree _q50 = gimple_assign_rhs1 (_a2);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_assign_rhs2 (_a2);
					_q51 = do_valueize (valueize, _q51);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
					  {
					    switch (TREE_CODE (_q51))
					      {
					      case INTEGER_CST:
					        {
						  {
						    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
						    if (gimple_simplify_632 (res_op, seq, valueize, type, captures, MAX_EXPR))
						      return true;
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
		      }
		    default:;
		    }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      switch (TREE_CODE (_q31))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			      if (gimple_simplify_633 (res_op, seq, valueize, type, captures, MAX_EXPR))
			        return true;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case ADDR_EXPR:
			        {
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      CASE_CONVERT:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  switch (TREE_CODE (_q40))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q40))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case ADDR_EXPR:
							        {
								  {
								    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
								    if (gimple_simplify_634 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
								      return true;
								  }
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
							  if (gimple_simplify_634 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
							    return true;
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
						    if (gimple_simplify_635 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
					  if (gimple_simplify_635 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
					    return true;
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
		    case ADDR_EXPR:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _p1))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    CASE_CONVERT:
				      {
					tree _q40 = gimple_assign_rhs1 (_a2);
					_q40 = do_valueize (valueize, _q40);
					switch (TREE_CODE (_q40))
					  {
					  case SSA_NAME:
					    if (gimple *_d3 = get_def (valueize, _q40))
					      {
						if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						  switch (gimple_assign_rhs_code (_a3))
						    {
						    case ADDR_EXPR:
						      {
							{
							  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
							  if (gimple_simplify_634 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
							    return true;
							}
						        break;
						      }
						    default:;
						    }
					      }
					    break;
					  case ADDR_EXPR:
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
						if (gimple_simplify_634 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
						  return true;
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
					  if (gimple_simplify_635 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _p1 };
				if (gimple_simplify_635 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
				  return true;
			      }
			      break;
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
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      CASE_CONVERT:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  switch (TREE_CODE (_q30))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q30))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case ADDR_EXPR:
					        {
						  {
						    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
						    if (gimple_simplify_636 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
						      return true;
						  }
					          break;
					        }
					      default:;
					      }
				        }
				      break;
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
					  if (gimple_simplify_636 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
					    return true;
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
				    if (gimple_simplify_637 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    case ADDR_EXPR:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (FLOAT_TYPE_P (TREE_TYPE (captures[1]))
 || (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[1])))
)
				      {
					gimple_seq *lseq = seq;
					if (lseq
					    && (!single_use (captures[0])
					        || !single_use (captures[2])))
					  lseq = NULL;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2861;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), MIN_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2861;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2861:;
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
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
				    if (gimple_simplify_638 (res_op, seq, valueize, type, captures, MAX_EXPR, MIN_EXPR))
				      return true;
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
	        }
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
				  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
				    {
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1, _q61, _q62 };
					if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
					  {
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2862;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2862;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2862;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2862:;
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
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22, _p1 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[2]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[1]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[2]), TREE_TYPE (captures[1]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2863;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2863;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2863;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2863:;
		      }
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    case ADDR_EXPR:
      {
	switch (TREE_CODE (_p1))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _p1))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    CASE_CONVERT:
		      {
			tree _q30 = gimple_assign_rhs1 (_a1);
			_q30 = do_valueize (valueize, _q30);
			switch (TREE_CODE (_q30))
			  {
			  case SSA_NAME:
			    if (gimple *_d2 = get_def (valueize, _q30))
			      {
				if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				  switch (gimple_assign_rhs_code (_a2))
				    {
				    case ADDR_EXPR:
				      {
					{
					  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
					  if (gimple_simplify_636 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
					    return true;
					}
				        break;
				      }
				    default:;
				    }
			      }
			    break;
			  case ADDR_EXPR:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _q30 };
				if (gimple_simplify_636 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
				  return true;
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
			  if (gimple_simplify_637 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	      }
	    break;
	  case ADDR_EXPR:
	    {
	      {
		tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _p1, _p1 };
		if (gimple_simplify_637 (res_op, seq, valueize, type, captures, MAX_EXPR, GT_EXPR))
		  return true;
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
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
		    if (VECTOR_TYPE_P (type)
 && (TREE_CODE_CLASS (MAX_EXPR) != tcc_comparison
 || types_match (type, TREE_TYPE (captures[3]))
 || expand_vec_cond_expr_p (type, TREE_TYPE (captures[2]))
 || (optimize_vectors_before_lowering_p ()
 && !expand_vec_cond_expr_p (TREE_TYPE (captures[3]), TREE_TYPE (captures[2]))))
)
		      {
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2864;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2864;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2864;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2864:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q21, _q22, _p1 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2865;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2865;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2865;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2865:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q30, _q31, _q32 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2866;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2866;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MAX_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2866;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2866:;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  if (gimple_zero_one_valued_p (_p0, valueize))
    {
      if (gimple_zero_one_valued_p (_p1, valueize))
	{
	  {
	    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	    if (gimple_simplify_639 (res_op, seq, valueize, type, captures, MAX_EXPR, BIT_IOR_EXPR))
	      return true;
	  }
        }
    }
  return false;
}

bool
gimple_simplify_UNEQ_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case VEC_COND_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  tree _q61 = gimple_assign_rhs2 (_a2);
				  _q61 = do_valueize (valueize, _q61);
				  tree _q62 = gimple_assign_rhs3 (_a2);
				  _q62 = do_valueize (valueize, _q62);
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
					    gimple_seq *lseq = seq;
					    if (lseq
					        && (!single_use (captures[0])
					            || !single_use (captures[4])))
					      lseq = NULL;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2917;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2917;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2917;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2917:;
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[0])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2918;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2918;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2918;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2918:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  tree _q32 = gimple_assign_rhs3 (_a1);
		  _q32 = do_valueize (valueize, _q32);
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
			gimple_seq *lseq = seq;
			if (lseq
			    && (!single_use (captures[1])))
			  lseq = NULL;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2919;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2919;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNEQ_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2919;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2919:;
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
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_675 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case FLOAT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case FLOAT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q40 };
				    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, UNEQ_EXPR, EQ_EXPR))
				      return true;
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
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, UNEQ_EXPR, UNEQ_EXPR))
				      return true;
				  }
			          break;
			        }
			      default:;
			      }
		        }
		      break;
		    default:;
		    }
		if (CONSTANT_CLASS_P (_p1))
		  {
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		      if (gimple_simplify_295 (res_op, seq, valueize, type, captures, UNEQ_EXPR, UNEQ_EXPR))
		        return true;
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
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_673 (res_op, seq, valueize, type, captures, UNEQ_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LDEXPL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_689 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_690 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2928;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1270, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2928:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBLN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_689 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_690 (res_op, seq, valueize, type, captures))
	  return true;
      }
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (!real_isfinite (TREE_REAL_CST_PTR (captures[0]))
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2934;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1270, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2934:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1)
{
  switch (code.get_rep())
    {
    case BIT_XOR_EXPR:
      return gimple_simplify_BIT_XOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case PLUS_EXPR:
      return gimple_simplify_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_PLUS_EXPR:
      return gimple_simplify_POINTER_PLUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MINUS_EXPR:
      return gimple_simplify_MINUS_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_IOR_EXPR:
      return gimple_simplify_BIT_IOR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case POINTER_DIFF_EXPR:
      return gimple_simplify_POINTER_DIFF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MULT_EXPR:
      return gimple_simplify_MULT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EQ_EXPR:
      return gimple_simplify_EQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case NE_EXPR:
      return gimple_simplify_NE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGN:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNL:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF16:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF32X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF64X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_COPYSIGNF128X:
      return gimple_simplify_CFN_BUILT_IN_COPYSIGNF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_COPYSIGN:
      return gimple_simplify_CFN_COPYSIGN (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_DIV_EXPR:
      return gimple_simplify_TRUNC_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_DIV_EXPR:
      return gimple_simplify_CEIL_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_DIV_EXPR:
      return gimple_simplify_FLOOR_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_DIV_EXPR:
      return gimple_simplify_ROUND_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case EXACT_DIV_EXPR:
      return gimple_simplify_EXACT_DIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case FLOOR_MOD_EXPR:
      return gimple_simplify_FLOOR_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RDIV_EXPR:
      return gimple_simplify_RDIV_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LT_EXPR:
      return gimple_simplify_LT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LE_EXPR:
      return gimple_simplify_LE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GT_EXPR:
      return gimple_simplify_GT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case GE_EXPR:
      return gimple_simplify_GE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case CEIL_MOD_EXPR:
      return gimple_simplify_CEIL_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ROUND_MOD_EXPR:
      return gimple_simplify_ROUND_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUNC_MOD_EXPR:
      return gimple_simplify_TRUNC_MOD_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LSHIFT_EXPR:
      return gimple_simplify_LSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RSHIFT_EXPR:
      return gimple_simplify_RSHIFT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF:
      return gimple_simplify_CFN_BUILT_IN_POWF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POW:
      return gimple_simplify_CFN_BUILT_IN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWL:
      return gimple_simplify_CFN_BUILT_IN_POWL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_POW:
      return gimple_simplify_CFN_POW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIF:
      return gimple_simplify_CFN_BUILT_IN_POWIF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWI:
      return gimple_simplify_CFN_BUILT_IN_POWI (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWIL:
      return gimple_simplify_CFN_BUILT_IN_POWIL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTF:
      return gimple_simplify_CFN_BUILT_IN_HYPOTF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOT:
      return gimple_simplify_CFN_BUILT_IN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_HYPOTL:
      return gimple_simplify_CFN_BUILT_IN_HYPOTL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_HYPOT:
      return gimple_simplify_CFN_HYPOT (res_op, seq, valueize, code, type, _p0, _p1);
    case BIT_AND_EXPR:
      return gimple_simplify_BIT_AND_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MIN_EXPR:
      return gimple_simplify_MIN_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MAX_EXPR:
      return gimple_simplify_MAX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF:
      return gimple_simplify_CFN_BUILT_IN_FMINF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMIN:
      return gimple_simplify_CFN_BUILT_IN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINL:
      return gimple_simplify_CFN_BUILT_IN_FMINL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF16:
      return gimple_simplify_CFN_BUILT_IN_FMINF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32:
      return gimple_simplify_CFN_BUILT_IN_FMINF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64:
      return gimple_simplify_CFN_BUILT_IN_FMINF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128:
      return gimple_simplify_CFN_BUILT_IN_FMINF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF32X:
      return gimple_simplify_CFN_BUILT_IN_FMINF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF64X:
      return gimple_simplify_CFN_BUILT_IN_FMINF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMINF128X:
      return gimple_simplify_CFN_BUILT_IN_FMINF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMIN:
      return gimple_simplify_CFN_FMIN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF:
      return gimple_simplify_CFN_BUILT_IN_FMAXF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAX:
      return gimple_simplify_CFN_BUILT_IN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXL:
      return gimple_simplify_CFN_BUILT_IN_FMAXL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF16:
      return gimple_simplify_CFN_BUILT_IN_FMAXF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF32X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF64X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_FMAXF128X:
      return gimple_simplify_CFN_BUILT_IN_FMAXF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_FMAX:
      return gimple_simplify_CFN_FMAX (res_op, seq, valueize, code, type, _p0, _p1);
    case LROTATE_EXPR:
      return gimple_simplify_LROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case RROTATE_EXPR:
      return gimple_simplify_RROTATE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case COMPLEX_EXPR:
      return gimple_simplify_COMPLEX_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNORDERED_EXPR:
      return gimple_simplify_UNORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case ORDERED_EXPR:
      return gimple_simplify_ORDERED_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLT_EXPR:
      return gimple_simplify_UNLT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNLE_EXPR:
      return gimple_simplify_UNLE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGT_EXPR:
      return gimple_simplify_UNGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNGE_EXPR:
      return gimple_simplify_UNGE_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case UNEQ_EXPR:
      return gimple_simplify_UNEQ_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case LTGT_EXPR:
      return gimple_simplify_LTGT_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case MULT_HIGHPART_EXPR:
      return gimple_simplify_MULT_HIGHPART_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_ADD_OVERFLOW:
      return gimple_simplify_CFN_ADD_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_SUB_OVERFLOW:
      return gimple_simplify_CFN_SUB_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_MUL_OVERFLOW:
      return gimple_simplify_CFN_MUL_OVERFLOW (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF16:
      return gimple_simplify_CFN_BUILT_IN_POWF16 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32:
      return gimple_simplify_CFN_BUILT_IN_POWF32 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64:
      return gimple_simplify_CFN_BUILT_IN_POWF64 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128:
      return gimple_simplify_CFN_BUILT_IN_POWF128 (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF32X:
      return gimple_simplify_CFN_BUILT_IN_POWF32X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF64X:
      return gimple_simplify_CFN_BUILT_IN_POWF64X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_POWF128X:
      return gimple_simplify_CFN_BUILT_IN_POWF128X (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPF:
      return gimple_simplify_CFN_BUILT_IN_LDEXPF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXP:
      return gimple_simplify_CFN_BUILT_IN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_LDEXPL:
      return gimple_simplify_CFN_BUILT_IN_LDEXPL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_LDEXP:
      return gimple_simplify_CFN_LDEXP (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBN:
      return gimple_simplify_CFN_BUILT_IN_SCALBN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBNL (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNF:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNF (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLN:
      return gimple_simplify_CFN_BUILT_IN_SCALBLN (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_BUILT_IN_SCALBLNL:
      return gimple_simplify_CFN_BUILT_IN_SCALBLNL (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_ORIF_EXPR:
      return gimple_simplify_TRUTH_ORIF_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case TRUTH_OR_EXPR:
      return gimple_simplify_TRUTH_OR_EXPR (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_VEC_SHL_INSERT:
      return gimple_simplify_CFN_VEC_SHL_INSERT (res_op, seq, valueize, code, type, _p0, _p1);
    case -CFN_VEC_EXTRACT:
      return gimple_simplify_CFN_VEC_EXTRACT (res_op, seq, valueize, code, type, _p0, _p1);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_700 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_701 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_700 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (gimple_simplify_702 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_701 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAL))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_FMS (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _p2 };
		    if (gimple_simplify_703 (res_op, seq, valueize, type, captures))
		      return true;
		  }
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _p1, _q50 };
				    if (gimple_simplify_704 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _p2 };
		    if (gimple_simplify_703 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q40 };
		    if (canonicalize_math_after_vectorization_p ()
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3156;
			{
			  res_op->set_op (CFN_FMA, type, 3);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1334, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail3156:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  switch (TREE_CODE (_p2))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p2))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  {
				    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q50 };
				    if (gimple_simplify_704 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_VCOND_MASK_LEN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 5)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					tree _q52 = gimple_call_arg (_c2, 2);
					_q52 = do_valueize (valueize, _q52);
					tree _q53 = gimple_call_arg (_c2, 3);
					_q53 = do_valueize (valueize, _q53);
					tree _q54 = gimple_call_arg (_c2, 4);
					_q54 = do_valueize (valueize, _q54);
					if (tree_swap_operands_p (_q50, _q51))
					  std::swap (_q50, _q51);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _q52, _q53, _q54 };
					  if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 5)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    tree _q42 = gimple_call_arg (_c1, 2);
		    _q42 = do_valueize (valueize, _q42);
		    tree _q43 = gimple_call_arg (_c1, 3);
		    _q43 = do_valueize (valueize, _q43);
		    tree _q44 = gimple_call_arg (_c1, 4);
		    _q44 = do_valueize (valueize, _q44);
		    if (tree_swap_operands_p (_q40, _q41))
		      std::swap (_q40, _q41);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _q42, _q43, _q44 };
		      if (gimple_simplify_738 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_ADD (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_COND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  tree _q42 = gimple_assign_rhs3 (_a1);
		  _q42 = do_valueize (valueize, _q42);
		  if (zerop (_q42))
		    {
		      if ((_p3 == _p1 && ! TREE_SIDE_EFFECTS (_p3)) || (operand_equal_p (_p3, _p1, 0) && types_match (_p3, _p1)))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q41, _q42 };
			    if (ANY_INTEGRAL_TYPE_P (type)
 || (FLOAT_TYPE_P (type)
 && fold_real_zero_addition_p (type, NULL_TREE, captures[4], 0))
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3174;
				{
				  res_op->set_op (CFN_COND_ADD, type, 4);
				  {
				    tree _o1[2], _r1;
				    _o1[0] = captures[0];
				    _o1[1] = captures[2];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail3174;
				    res_op->ops[0] = _r1;
				  }
				  res_op->ops[1] = captures[1];
				  res_op->ops[2] = captures[3];
				  res_op->ops[3] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1350, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail3174:;
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
    default:;
    }
  return false;
}

bool
gimple_simplify (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper code, const tree type, tree _p0, tree _p1, tree _p2, tree _p3)
{
  switch (code.get_rep())
    {
    case -CFN_COND_MUL:
      return gimple_simplify_CFN_COND_MUL (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    case -CFN_COND_ADD:
      return gimple_simplify_CFN_COND_ADD (res_op, seq, valueize, code, type, _p0, _p1, _p2, _p3);
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_FMA (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _p2, _p3, _p4 };
		    if (gimple_simplify_709 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
		      return true;
		  }
		  switch (TREE_CODE (_p3))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p3))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _p2, _q60, _p4 };
				    if (gimple_simplify_710 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q40, _p1, _p3, _p4 };
		    if (gimple_simplify_709 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p3))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p3))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = gimple_assign_rhs1 (_a1);
		  _q50 = do_valueize (valueize, _q50);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q50, _p4 };
		    const combined_fn fmas = CFN_COND_FMA;
		    if (canonicalize_math_after_vectorization_p ()
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3175;
			{
			  res_op->set_op (CFN_COND_FMS, type, 4);
			  res_op->ops[0] = captures[1];
			  res_op->ops[1] = captures[2];
			  res_op->ops[2] = captures[3];
			  res_op->ops[3] = captures[4];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1351, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail3175:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  switch (TREE_CODE (_p3))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p3))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q40, _p1, _q60, _p4 };
				    if (gimple_simplify_710 (res_op, seq, valueize, type, captures, CFN_COND_FMA))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_COND_FNMA (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _p2, _p3, _p4 };
		    if (gimple_simplify_713 (res_op, seq, valueize, type, captures))
		      return true;
		  }
		  switch (TREE_CODE (_p3))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p3))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _p2, _q60, _p4 };
				    if (gimple_simplify_714 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q40, _p1, _p3, _p4 };
		    if (gimple_simplify_713 (res_op, seq, valueize, type, captures))
		      return true;
		  }
	          break;
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p3))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p3))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q50 = gimple_assign_rhs1 (_a1);
		  _q50 = do_valueize (valueize, _q50);
		  {
		    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q50, _p4 };
		    if (canonicalize_math_after_vectorization_p ()
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3177;
			{
			  res_op->set_op (CFN_COND_FNMS, type, 5);
			  res_op->ops[0] = captures[0];
			  res_op->ops[1] = captures[1];
			  res_op->ops[2] = captures[2];
			  res_op->ops[3] = captures[3];
			  res_op->ops[4] = captures[4];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1353, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail3177:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  switch (TREE_CODE (_p3))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p3))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case NEGATE_EXPR:
			        {
				  tree _q60 = gimple_assign_rhs1 (_a2);
				  _q60 = do_valueize (valueize, _q60);
				  {
				    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q40, _p1, _q60, _p4 };
				    if (gimple_simplify_714 (res_op, seq, valueize, type, captures))
				      return true;
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
	        }
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_VCOND_MASK_LEN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1, tree _p2, tree _p3, tree _p4)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3179;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    if (type != TREE_TYPE (_o1[0]) /* XXX */
						        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						      {
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail3179;
						      }
						    else
						      _r1 = _o1[0];
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1355, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3179:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3180;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  res_op->ops[0] = captures[0];
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[2];
						    if (type != TREE_TYPE (_o1[0]) /* XXX */
						        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						      {
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail3180;
						      }
						    else
						      _r1 = _o1[0];
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[3];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1355, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3180:;
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
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3181;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				if (type != TREE_TYPE (_o1[0]) /* XXX */
				    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				  {
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail3181;
				  }
				else
				  _r1 = _o1[0];
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1355, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3181:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3182;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      res_op->ops[0] = captures[0];
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[2];
				if (type != TREE_TYPE (_o1[0]) /* XXX */
				    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				  {
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail3182;
				  }
				else
				  _r1 = _o1[0];
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[3];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1355, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3182:;
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
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case NEGATE_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3183;
						{
						  res_op->set_op (CFN_COND_LEN_NEG, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail3183;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    if (type != TREE_TYPE (_o1[0]) /* XXX */
						        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						      {
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail3183;
						      }
						    else
						      _r1 = _o1[0];
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1356, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3183:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_NOT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      {
					tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3184;
						{
						  res_op->set_op (CFN_COND_LEN_NOT, type, 5);
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[0];
						    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
						    tem_op.resimplify (lseq, valueize);
						    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
						    if (!_r1) goto next_after_fail3184;
						    res_op->ops[0] = _r1;
						  }
						  {
						    tree _o1[1], _r1;
						    _o1[0] = captures[3];
						    if (type != TREE_TYPE (_o1[0]) /* XXX */
						        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
						      {
							gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail3184;
						      }
						    else
						      _r1 = _o1[0];
						    res_op->ops[1] = _r1;
						  }
						  res_op->ops[2] = captures[1];
						  res_op->ops[3] = captures[4];
						  res_op->ops[4] = captures[5];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1356, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3184:;
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
		    }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NEG), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3185;
			    {
			      res_op->set_op (CFN_COND_LEN_NEG, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail3185;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				if (type != TREE_TYPE (_o1[0]) /* XXX */
				    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				  {
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail3185;
				  }
				else
				  _r1 = _o1[0];
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1356, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3185:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_NOT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  {
		    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_NOT), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3186;
			    {
			      res_op->set_op (CFN_COND_LEN_NOT, type, 5);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
				tem_op.resimplify (lseq, valueize);
				_r1 = maybe_push_res_to_seq (&tem_op, lseq);
				if (!_r1) goto next_after_fail3186;
				res_op->ops[0] = _r1;
			      }
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[3];
				if (type != TREE_TYPE (_o1[0]) /* XXX */
				    && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
				  {
				    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, type, _o1[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r1) goto next_after_fail3186;
				  }
				else
				  _r1 = _o1[0];
				res_op->ops[1] = _r1;
			      }
			      res_op->ops[2] = captures[1];
			      res_op->ops[3] = captures[4];
			      res_op->ops[4] = captures[5];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1356, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3186:;
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3187;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3187;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3187;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3187:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3188;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3188;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3188;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3188:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3189;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3189;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3189;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3189:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3190;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3190;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3190;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3190:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3191;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3191;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3191;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3191:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3192;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3192;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3192;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3192:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3193;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3193;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3193;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3193:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3194;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3194;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3194;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3194:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3195;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3195;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3195;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3195:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3196;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3196;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3196;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3196:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3197;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3197;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3197;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3197:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3198;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3198;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3198;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3198:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[1]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3199;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    _o1[0] = captures[0];
						    _o1[1] = captures[2];
						    _o1[2] = captures[3];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[4];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3199;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3199;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3199:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3200;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3200;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3200;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3200:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3201;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3201;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3201;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3201:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _p2, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[1]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3202;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      _o1[0] = captures[0];
						      _o1[1] = captures[2];
						      _o1[2] = captures[3];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[4];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3202;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3202;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3202:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3203;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3203;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3203;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3203:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3204;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3204;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3204;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3204:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3205;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3205;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3205;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3205:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3206;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3206;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3206;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3206:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3207;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3207;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3207;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3207:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3208;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3208;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3208;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3208:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3209;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3209;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3209;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3209:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3210;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3210;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3210;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3210:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3211;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3211;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3211;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3211:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3212;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3212;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3212;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3212:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3213;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3213;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3213;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3213:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3214;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3214;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3214;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3214:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[1]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3215;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				_o1[0] = captures[0];
				_o1[1] = captures[2];
				_o1[2] = captures[3];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[4];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3215;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3215;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3215:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3216;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3216;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3216;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3216:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3217;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3217;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3217;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3217:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _p2, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[1]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[1])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3218;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  _o1[0] = captures[0];
				  _o1[1] = captures[2];
				  _o1[2] = captures[3];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[4];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3218;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3218;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1357, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3218:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p2))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p2))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q40 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q40) == SSA_NAME
		       || is_gimple_min_invariant (_q40)))
		    {
		      _q40 = do_valueize (valueize, _q40);
		      switch (TREE_CODE (_q40))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q40))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case PLUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3219;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3219;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3219;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3219;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3219:;
					      }
					}
				      }
				      break;
				    }
				  case MINUS_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3220;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3220;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3220;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3220;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3220:;
					      }
					}
				      }
				      break;
				    }
				  case MULT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3221;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3221;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3221;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3221;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3221:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_DIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3222;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3222;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3222;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3222;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3222:;
					      }
					}
				      }
				      break;
				    }
				  case TRUNC_MOD_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3223;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3223;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3223;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3223;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3223:;
					      }
					}
				      }
				      break;
				    }
				  case RDIV_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3224;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3224;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3224;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3224;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3224:;
					      }
					}
				      }
				      break;
				    }
				  case MIN_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3225;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3225;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3225;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3225;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3225:;
					      }
					}
				      }
				      break;
				    }
				  case MAX_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3226;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3226;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3226;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3226;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3226:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_AND_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3227;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3227;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3227;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3227;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3227:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_IOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3228;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3228;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3228;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3228;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3228:;
					      }
					}
				      }
				      break;
				    }
				  case BIT_XOR_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      if (tree_swap_operands_p (_q50, _q51))
				        std::swap (_q50, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3229;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3229;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3229;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3229;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3229:;
					      }
					}
				      }
				      break;
				    }
				  case LSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3230;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3230;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3230;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3230;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3230:;
					      }
					}
				      }
				      break;
				    }
				  case RSHIFT_EXPR:
				    {
				      tree _q50 = gimple_assign_rhs1 (_a2);
				      _q50 = do_valueize (valueize, _q50);
				      tree _q51 = gimple_assign_rhs2 (_a2);
				      _q51 = do_valueize (valueize, _q51);
				      {
					tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					{
 tree op_type = TREE_TYPE (captures[2]);
					    if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3231;
						{
						  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						  {
						    tree _o1[6], _r1;
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[0];
						      gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail3231;
						      _o1[0] = _r2;
						    }
						    _o1[1] = captures[3];
						    _o1[2] = captures[4];
						    {
						      tree _o2[1], _r2;
						      _o2[0] = captures[1];
						      if (op_type != TREE_TYPE (_o2[0]) /* XXX */
						          && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							{
							  gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							  tem_op.resimplify (lseq, valueize);
							  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							  if (!_r2) goto next_after_fail3231;
						        }
						      else
						        _r2 = _o2[0];
						      _o1[3] = _r2;
						    }
						    _o1[4] = captures[5];
						    _o1[5] = captures[6];
						    (*res_op).set_op (CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), 6);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).ops[2] = _o1[2];
						    (*res_op).ops[3] = _o1[3];
						    (*res_op).ops[4] = _o1[4];
						    (*res_op).ops[5] = _o1[5];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3231;
						      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail3231:;
					      }
					}
				      }
				      break;
				    }
				  default:;
				  }
			      else if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMAX:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3232;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail3232;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3232;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3232;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3232:;
						}
					  }
					}
				      }
				    break;
				  case CFN_FMIN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3233;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail3233;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3233;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3233;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3233:;
						}
					  }
					}
				      }
				    break;
				  case CFN_COPYSIGN:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q50 = gimple_call_arg (_c2, 0);
					_q50 = do_valueize (valueize, _q50);
					tree _q51 = gimple_call_arg (_c2, 1);
					_q51 = do_valueize (valueize, _q51);
					{
					  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _q40, _q50, _q51, _p3, _p4 };
					  {
 tree op_type = TREE_TYPE (captures[2]);
					      if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
						{
						  gimple_seq *lseq = seq;
						  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3234;
						  {
						    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
						    {
						      tree _o1[6], _r1;
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[0];
							gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
							tem_op.resimplify (lseq, valueize);
							_r2 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r2) goto next_after_fail3234;
							_o1[0] = _r2;
						      }
						      _o1[1] = captures[3];
						      _o1[2] = captures[4];
						      {
							tree _o2[1], _r2;
							_o2[0] = captures[1];
							if (op_type != TREE_TYPE (_o2[0]) /* XXX */
							    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
							  {
							    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
							    tem_op.resimplify (lseq, valueize);
							    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r2) goto next_after_fail3234;
							  }
							else
							  _r2 = _o2[0];
							_o1[3] = _r2;
						      }
						      _o1[4] = captures[5];
						      _o1[5] = captures[6];
						      (*res_op).set_op (CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), 6);
						      (*res_op).ops[0] = _o1[0];
						      (*res_op).ops[1] = _o1[1];
						      (*res_op).ops[2] = _o1[2];
						      (*res_op).ops[3] = _o1[3];
						      (*res_op).ops[4] = _o1[4];
						      (*res_op).ops[5] = _o1[5];
						      (*res_op).resimplify (lseq, valueize);
						    }
						    if (type != res_op->type
						        && !useless_type_conversion_p (type, res_op->type))
						      {
							if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3234;
							res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
							res_op->resimplify (lseq, valueize);
						      }
						    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
						    return true;
						  }
next_after_fail3234:;
						}
					  }
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      case PLUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_ADD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3235;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3235;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3235;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_ADD, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3235;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3235:;
			  }
		    }
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SUB), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3236;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3236;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3236;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SUB, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3236;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3236:;
			  }
		    }
		  }
	          break;
	        }
	      case MULT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MUL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3237;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3237;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3237;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MUL, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3237;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3237:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_DIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_DIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3238;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3238;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3238;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_DIV, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3238;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3238:;
			  }
		    }
		  }
	          break;
	        }
	      case TRUNC_MOD_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MOD), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3239;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3239;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3239;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MOD, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3239;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3239:;
			  }
		    }
		  }
	          break;
	        }
	      case RDIV_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_RDIV), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3240;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3240;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3240;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_RDIV, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3240;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3240:;
			  }
		    }
		  }
	          break;
	        }
	      case MIN_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3241;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3241;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3241;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MIN, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3241;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3241:;
			  }
		    }
		  }
	          break;
	        }
	      case MAX_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_MAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3242;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3242;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3242;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_MAX, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3242;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3242:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_AND_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_AND), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3243;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3243;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3243;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_AND, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3243;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3243:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_IOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_IOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3244;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3244;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3244;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_IOR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3244;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3244:;
			  }
		    }
		  }
	          break;
	        }
	      case BIT_XOR_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  if (tree_swap_operands_p (_q40, _q41))
		    std::swap (_q40, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_XOR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3245;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3245;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3245;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_XOR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3245;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3245:;
			  }
		    }
		  }
	          break;
	        }
	      case LSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHL), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3246;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3246;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3246;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SHL, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3246;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3246:;
			  }
		    }
		  }
	          break;
	        }
	      case RSHIFT_EXPR:
	        {
		  tree _q40 = gimple_assign_rhs1 (_a1);
		  _q40 = do_valueize (valueize, _q40);
		  tree _q41 = gimple_assign_rhs2 (_a1);
		  _q41 = do_valueize (valueize, _q41);
		  {
		    tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		    {
 tree op_type = TREE_TYPE (captures[2]);
			if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_SHR), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3247;
			    {
			      res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
			      {
				tree _o1[6], _r1;
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[0];
				  gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				  tem_op.resimplify (lseq, valueize);
				  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r2) goto next_after_fail3247;
				  _o1[0] = _r2;
				}
				_o1[1] = captures[3];
				_o1[2] = captures[4];
				{
				  tree _o2[1], _r2;
				  _o2[0] = captures[1];
				  if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				      && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				    {
				      gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r2) goto next_after_fail3247;
				    }
				  else
				    _r2 = _o2[0];
				  _o1[3] = _r2;
				}
				_o1[4] = captures[5];
				_o1[5] = captures[6];
				(*res_op).set_op (CFN_COND_LEN_SHR, TREE_TYPE (_o1[1]), 6);
				(*res_op).ops[0] = _o1[0];
				(*res_op).ops[1] = _o1[1];
				(*res_op).ops[2] = _o1[2];
				(*res_op).ops[3] = _o1[3];
				(*res_op).ops[4] = _o1[4];
				(*res_op).ops[5] = _o1[5];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3247;
				  res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail3247:;
			  }
		    }
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMAX:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMAX), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3248;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail3248;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3248;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_FMAX, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3248;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3248:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_FMIN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_FMIN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3249;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail3249;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3249;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_FMIN, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3249;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3249:;
			    }
		      }
		    }
	          }
	        break;
	      case CFN_COPYSIGN:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q40 = gimple_call_arg (_c1, 0);
		    _q40 = do_valueize (valueize, _q40);
		    tree _q41 = gimple_call_arg (_c1, 1);
		    _q41 = do_valueize (valueize, _q41);
		    {
		      tree captures[7] ATTRIBUTE_UNUSED = { _p0, _p1, _p2, _q40, _q41, _p3, _p4 };
		      {
 tree op_type = TREE_TYPE (captures[2]);
			  if (vectorized_internal_fn_supported_p (as_internal_fn (CFN_COND_LEN_COPYSIGN), op_type)
 && is_truth_type_for (op_type, TREE_TYPE (captures[0]))
 && single_use (captures[2])
)
			    {
			      gimple_seq *lseq = seq;
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail3250;
			      {
				res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				{
				  tree _o1[6], _r1;
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[0];
				    gimple_match_op tem_op (res_op->cond.any_else (), BIT_NOT_EXPR, TREE_TYPE (_o2[0]), _o2[0]);
				    tem_op.resimplify (lseq, valueize);
				    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
				    if (!_r2) goto next_after_fail3250;
				    _o1[0] = _r2;
				  }
				  _o1[1] = captures[3];
				  _o1[2] = captures[4];
				  {
				    tree _o2[1], _r2;
				    _o2[0] = captures[1];
				    if (op_type != TREE_TYPE (_o2[0]) /* XXX */
				        && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
				      {
					gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
					tem_op.resimplify (lseq, valueize);
					_r2 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r2) goto next_after_fail3250;
				      }
				    else
				      _r2 = _o2[0];
				    _o1[3] = _r2;
				  }
				  _o1[4] = captures[5];
				  _o1[5] = captures[6];
				  (*res_op).set_op (CFN_COND_LEN_COPYSIGN, TREE_TYPE (_o1[1]), 6);
				  (*res_op).ops[0] = _o1[0];
				  (*res_op).ops[1] = _o1[1];
				  (*res_op).ops[2] = _o1[2];
				  (*res_op).ops[3] = _o1[3];
				  (*res_op).ops[4] = _o1[4];
				  (*res_op).ops[5] = _o1[5];
				  (*res_op).resimplify (lseq, valueize);
				}
				if (type != res_op->type
				    && !useless_type_conversion_p (type, res_op->type))
				  {
				    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail3250;
				    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
				    res_op->resimplify (lseq, valueize);
				  }
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1358, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail3250:;
			    }
		      }
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VIEW_CONVERT_EXPR:
	        {
		  tree _q30 = TREE_OPERAND (gimple_assign_rhs1 (_a1), 0);
		  if ((TREE_CODE (_q30) == SSA_NAME
		       || is_gimple_min_invariant (_q30)))
		    {
		      _q30 = do_valueize (valueize, _q30);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			        switch (gimple_call_combined_fn (_c2))
				  {
				  case CFN_FMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMA:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
					    return true;
					}
				      }
				    break;
				  case CFN_FNMS:
				    if (gimple_call_num_args (_c2) == 3)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					tree _q42 = gimple_call_arg (_c2, 2);
					_q42 = do_valueize (valueize, _q42);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					{
					  tree captures[8] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42, _p2, _p3, _p4 };
					  if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
					    return true;
					}
				      }
				    break;
				  default:;
				  }
			    }
			  break;
		        default:;
		        }
		    }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_FMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FMA, CFN_COND_LEN_FMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FMS, CFN_COND_LEN_FMS))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMA:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FNMA, CFN_COND_LEN_FNMA))
		        return true;
		    }
	          }
	        break;
	      case CFN_FNMS:
	        if (gimple_call_num_args (_c1) == 3)
	          {
		    tree _q30 = gimple_call_arg (_c1, 0);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_call_arg (_c1, 1);
		    _q31 = do_valueize (valueize, _q31);
		    tree _q32 = gimple_call_arg (_c1, 2);
		    _q32 = do_valueize (valueize, _q32);
		    if (tree_swap_operands_p (_q30, _q31))
		      std::swap (_q30, _q31);
		    {
		      tree captures[8] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32, _p2, _p3, _p4 };
		      if (gimple_simplify_737 (res_op, seq, valueize, type, captures, CFN_FNMS, CFN_COND_LEN_FNMS))
		        return true;
		    }
	          }
	        break;
	      default:;
	      }
        }
      break;
    default:;
    }
  return false;
}
#pragma GCC diagnostic pop
