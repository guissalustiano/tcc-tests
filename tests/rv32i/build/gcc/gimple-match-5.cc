/* Generated automatically by the program `genmatch' from
   a IL pattern matching and simplification description.  */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"

#include "gimple-match-auto.h"

bool
gimple_maybe_truncate (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (INTEGRAL_TYPE_P (type)
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
)
		      {
			{
			  res_ops[0] = captures[0];
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 12, __FILE__, __LINE__, false);
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
  return false;
}

bool
gimple_zero_one_valued_p (tree t, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
{
  const tree type = TREE_TYPE (t);
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { t };
    if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[0]), 1)
)
      {
	{
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 29, __FILE__, __LINE__, false);
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
	      case BIT_AND_EXPR:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  tree _p1 = gimple_assign_rhs2 (_a1);
		  _p1 = do_valueize (valueize, _p1);
		  if (tree_swap_operands_p (_p0, _p1))
		    std::swap (_p0, _p1);
		  if (integer_onep (_p1))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
			if (INTEGRAL_TYPE_P (type)
)
			  {
			    {
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
			      return true;
			    }
			  }
		      }
		    }
		  if (integer_onep (_p0))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { t, _p1 };
			if (INTEGRAL_TYPE_P (type)
)
			  {
			    {
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 30, __FILE__, __LINE__, false);
			      return true;
			    }
			  }
		      }
		    }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _p0 = gimple_assign_rhs1 (_a1);
		  _p0 = do_valueize (valueize, _p0);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { t, _p0 };
		    if (INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && (TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 || TYPE_PRECISION (TREE_TYPE (captures[1])) > 1)
 && INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
 && wi::leu_p (tree_nonzero_bits (captures[1]), 1)
)
		      {
			{
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 31, __FILE__, __LINE__, false);
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
if (gimple_truth_valued_p (t, valueize))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { t };
      if (INTEGRAL_TYPE_P (type)
 && (TYPE_UNSIGNED (type)
 || TYPE_PRECISION (type) > 1)
)
	{
	  {
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 32, __FILE__, __LINE__, false);
	    return true;
	  }
	}
    }
  }
  return false;
}

bool
gimple_signed_integer_sat_trunc (tree t, tree *res_ops, tree (*valueize)(tree) ATTRIBUTE_UNUSED)
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
			      case GT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
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
							      CASE_CONVERT:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
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
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _p1))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  case BIT_XOR_EXPR:
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
													  case NEGATE_EXPR:
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
																	  case LT_EXPR:
																	    {
																	      tree _q110 = gimple_assign_rhs1 (_a8);
																	      _q110 = do_valueize (valueize, _q110);
																	      tree _q111 = gimple_assign_rhs2 (_a8);
																	      _q111 = do_valueize (valueize, _q111);
																	      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
																		{
																		  if (integer_zerop (_q111))
																		    {
																		      switch (TREE_CODE (_q81))
																		        {
																			case INTEGER_CST:
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												case INTEGER_CST:
												  {
												    switch (TREE_CODE (_q81))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q81))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case NEGATE_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    switch (TREE_CODE (_q100))
														      {
														      case SSA_NAME:
														        if (gimple *_d7 = get_def (valueize, _q100))
														          {
															    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															      switch (gimple_assign_rhs_code (_a7))
																{
																CASE_CONVERT:
																  {
																    tree _q110 = gimple_assign_rhs1 (_a7);
																    _q110 = do_valueize (valueize, _q110);
																    switch (TREE_CODE (_q110))
																      {
																      case SSA_NAME:
																        if (gimple *_d8 = get_def (valueize, _q110))
																          {
																	    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	      switch (gimple_assign_rhs_code (_a8))
																		{
																		case LT_EXPR:
																		  {
																		    tree _q120 = gimple_assign_rhs1 (_a8);
																		    _q120 = do_valueize (valueize, _q120);
																		    tree _q121 = gimple_assign_rhs2 (_a8);
																		    _q121 = do_valueize (valueize, _q121);
																		    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
																		      {
																			if (integer_zerop (_q121))
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												    tree _q81_pops[1];
												    if (gimple_nop_convert (_q81, _q81_pops, valueize))
												      {
													tree _q100 = _q81_pops[0];
													switch (TREE_CODE (_q100))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q100))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case NEGATE_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															{
															  tree _q110_pops[1];
															  if (gimple_nop_convert (_q110, _q110_pops, valueize))
															    {
															      tree _q120 = _q110_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  CASE_CONVERT:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      switch (TREE_CODE (_q130))
																	        {
																		case SSA_NAME:
																		  if (gimple *_d8 = get_def (valueize, _q130))
																		    {
																		      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		        switch (gimple_assign_rhs_code (_a8))
																			  {
																			  case LT_EXPR:
																			    {
																			      tree _q140 = gimple_assign_rhs1 (_a8);
																			      _q140 = do_valueize (valueize, _q140);
																			      tree _q141 = gimple_assign_rhs2 (_a8);
																			      _q141 = do_valueize (valueize, _q141);
																			      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													    break;
												          default:;
												          }
												      }
												  }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q80_pops[1];
											      if (gimple_nop_convert (_q80, _q80_pops, valueize))
											        {
												  tree _q90 = _q80_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
														      {
															tree _q110 = _q100_pops[0];
															switch (TREE_CODE (_q110))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q110))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    CASE_CONVERT:
																      {
																	tree _q120 = gimple_assign_rhs1 (_a7);
																	_q120 = do_valueize (valueize, _q120);
																	switch (TREE_CODE (_q120))
																	  {
																	  case SSA_NAME:
																	    if (gimple *_d8 = get_def (valueize, _q120))
																	      {
																		if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		  switch (gimple_assign_rhs_code (_a8))
																		    {
																		    case LT_EXPR:
																		      {
																			tree _q130 = gimple_assign_rhs1 (_a8);
																			_q130 = do_valueize (valueize, _q130);
																			tree _q131 = gimple_assign_rhs2 (_a8);
																			_q131 = do_valueize (valueize, _q131);
																			if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																			  {
																			    if (integer_zerop (_q131))
																			      {
																				switch (TREE_CODE (_q81))
																				  {
																				  case INTEGER_CST:
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case INTEGER_CST:
						      {
							switch (TREE_CODE (_q31))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q31))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q50 = gimple_assign_rhs1 (_a4);
									_q50 = do_valueize (valueize, _q50);
									switch (TREE_CODE (_q21))
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
											  case BIT_XOR_EXPR:
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
													  case NEGATE_EXPR:
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
																	  case LT_EXPR:
																	    {
																	      tree _q110 = gimple_assign_rhs1 (_a8);
																	      _q110 = do_valueize (valueize, _q110);
																	      tree _q111 = gimple_assign_rhs2 (_a8);
																	      _q111 = do_valueize (valueize, _q111);
																	      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																		{
																		  if (integer_zerop (_q111))
																		    {
																		      switch (TREE_CODE (_q81))
																		        {
																			case INTEGER_CST:
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												case INTEGER_CST:
												  {
												    switch (TREE_CODE (_q81))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q81))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case NEGATE_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    switch (TREE_CODE (_q100))
														      {
														      case SSA_NAME:
														        if (gimple *_d7 = get_def (valueize, _q100))
														          {
															    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															      switch (gimple_assign_rhs_code (_a7))
																{
																CASE_CONVERT:
																  {
																    tree _q110 = gimple_assign_rhs1 (_a7);
																    _q110 = do_valueize (valueize, _q110);
																    switch (TREE_CODE (_q110))
																      {
																      case SSA_NAME:
																        if (gimple *_d8 = get_def (valueize, _q110))
																          {
																	    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	      switch (gimple_assign_rhs_code (_a8))
																		{
																		case LT_EXPR:
																		  {
																		    tree _q120 = gimple_assign_rhs1 (_a8);
																		    _q120 = do_valueize (valueize, _q120);
																		    tree _q121 = gimple_assign_rhs2 (_a8);
																		    _q121 = do_valueize (valueize, _q121);
																		    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																		      {
																			if (integer_zerop (_q121))
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												    tree _q81_pops[1];
												    if (gimple_nop_convert (_q81, _q81_pops, valueize))
												      {
													tree _q100 = _q81_pops[0];
													switch (TREE_CODE (_q100))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q100))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case NEGATE_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															{
															  tree _q110_pops[1];
															  if (gimple_nop_convert (_q110, _q110_pops, valueize))
															    {
															      tree _q120 = _q110_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  CASE_CONVERT:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      switch (TREE_CODE (_q130))
																	        {
																		case SSA_NAME:
																		  if (gimple *_d8 = get_def (valueize, _q130))
																		    {
																		      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		        switch (gimple_assign_rhs_code (_a8))
																			  {
																			  case LT_EXPR:
																			    {
																			      tree _q140 = gimple_assign_rhs1 (_a8);
																			      _q140 = do_valueize (valueize, _q140);
																			      tree _q141 = gimple_assign_rhs2 (_a8);
																			      _q141 = do_valueize (valueize, _q141);
																			      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													    break;
												          default:;
												          }
												      }
												  }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q80_pops[1];
											      if (gimple_nop_convert (_q80, _q80_pops, valueize))
											        {
												  tree _q90 = _q80_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
														      {
															tree _q110 = _q100_pops[0];
															switch (TREE_CODE (_q110))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q110))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    CASE_CONVERT:
																      {
																	tree _q120 = gimple_assign_rhs1 (_a7);
																	_q120 = do_valueize (valueize, _q120);
																	switch (TREE_CODE (_q120))
																	  {
																	  case SSA_NAME:
																	    if (gimple *_d8 = get_def (valueize, _q120))
																	      {
																		if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		  switch (gimple_assign_rhs_code (_a8))
																		    {
																		    case LT_EXPR:
																		      {
																			tree _q130 = gimple_assign_rhs1 (_a8);
																			_q130 = do_valueize (valueize, _q130);
																			tree _q131 = gimple_assign_rhs2 (_a8);
																			_q131 = do_valueize (valueize, _q131);
																			if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
																			  {
																			    if (integer_zerop (_q131))
																			      {
																				switch (TREE_CODE (_q81))
																				  {
																				  case INTEGER_CST:
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
		    case GT_EXPR:
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
								      switch (TREE_CODE (_q21))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d4 = get_def (valueize, _p1))
									          {
										    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										      switch (gimple_assign_rhs_code (_a4))
											{
											case BIT_XOR_EXPR:
											  {
											    tree _q80 = gimple_assign_rhs1 (_a4);
											    _q80 = do_valueize (valueize, _q80);
											    tree _q81 = gimple_assign_rhs2 (_a4);
											    _q81 = do_valueize (valueize, _q81);
											    if (tree_swap_operands_p (_q80, _q81))
											      std::swap (_q80, _q81);
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case NEGATE_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    switch (TREE_CODE (_q90))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q90))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a6);
															    _q100 = do_valueize (valueize, _q100);
															    switch (TREE_CODE (_q100))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q100))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q110 = gimple_assign_rhs1 (_a7);
																	    _q110 = do_valueize (valueize, _q110);
																	    tree _q111 = gimple_assign_rhs2 (_a7);
																	    _q111 = do_valueize (valueize, _q111);
																	    if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
																	      {
																		if (integer_zerop (_q111))
																		  {
																		    switch (TREE_CODE (_q81))
																		      {
																		      case INTEGER_CST:
																		        {
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
											      case INTEGER_CST:
											        {
												  switch (TREE_CODE (_q81))
												    {
												    case SSA_NAME:
												      if (gimple *_d5 = get_def (valueize, _q81))
												        {
													  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													    switch (gimple_assign_rhs_code (_a5))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a5);
														  _q100 = do_valueize (valueize, _q100);
														  switch (TREE_CODE (_q100))
														    {
														    case SSA_NAME:
														      if (gimple *_d6 = get_def (valueize, _q100))
														        {
															  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															    switch (gimple_assign_rhs_code (_a6))
															      {
															      CASE_CONVERT:
															        {
																  tree _q110 = gimple_assign_rhs1 (_a6);
																  _q110 = do_valueize (valueize, _q110);
																  switch (TREE_CODE (_q110))
																    {
																    case SSA_NAME:
																      if (gimple *_d7 = get_def (valueize, _q110))
																        {
																	  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	    switch (gimple_assign_rhs_code (_a7))
																	      {
																	      case LT_EXPR:
																	        {
																		  tree _q120 = gimple_assign_rhs1 (_a7);
																		  _q120 = do_valueize (valueize, _q120);
																		  tree _q121 = gimple_assign_rhs2 (_a7);
																		  _q121 = do_valueize (valueize, _q121);
																		  if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
																		    {
																		      if (integer_zerop (_q121))
																			{
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												  tree _q81_pops[1];
												  if (gimple_nop_convert (_q81, _q81_pops, valueize))
												    {
												      tree _q100 = _q81_pops[0];
												      switch (TREE_CODE (_q100))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q100))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case NEGATE_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      {
															tree _q110_pops[1];
															if (gimple_nop_convert (_q110, _q110_pops, valueize))
															  {
															    tree _q120 = _q110_pops[0];
															    switch (TREE_CODE (_q120))
															      {
															      case SSA_NAME:
															        if (gimple *_d6 = get_def (valueize, _q120))
															          {
																    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																      switch (gimple_assign_rhs_code (_a6))
																	{
																	CASE_CONVERT:
																	  {
																	    tree _q130 = gimple_assign_rhs1 (_a6);
																	    _q130 = do_valueize (valueize, _q130);
																	    switch (TREE_CODE (_q130))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d7 = get_def (valueize, _q130))
																	          {
																		    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		      switch (gimple_assign_rhs_code (_a7))
																			{
																			case LT_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a7);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a7);
																			    _q141 = do_valueize (valueize, _q141);
																			    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																			      {
																				if (integer_zerop (_q141))
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													  break;
												        default:;
												        }
												    }
												}
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q80_pops[1];
											    if (gimple_nop_convert (_q80, _q80_pops, valueize))
											      {
												tree _q90 = _q80_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case NEGATE_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
														    {
														      tree _q110 = _q100_pops[0];
														      switch (TREE_CODE (_q110))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q110))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  CASE_CONVERT:
																    {
																      tree _q120 = gimple_assign_rhs1 (_a6);
																      _q120 = do_valueize (valueize, _q120);
																      switch (TREE_CODE (_q120))
																        {
																	case SSA_NAME:
																	  if (gimple *_d7 = get_def (valueize, _q120))
																	    {
																	      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	        switch (gimple_assign_rhs_code (_a7))
																		  {
																		  case LT_EXPR:
																		    {
																		      tree _q130 = gimple_assign_rhs1 (_a7);
																		      _q130 = do_valueize (valueize, _q130);
																		      tree _q131 = gimple_assign_rhs2 (_a7);
																		      _q131 = do_valueize (valueize, _q131);
																		      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																			{
																			  if (integer_zerop (_q131))
																			    {
																			      switch (TREE_CODE (_q81))
																			        {
																				case INTEGER_CST:
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							        break;
							      }
							    default:;
							    }
						      }
						    break;
						  case INTEGER_CST:
						    {
						      switch (TREE_CODE (_q31))
						        {
							case SSA_NAME:
							  if (gimple *_d3 = get_def (valueize, _q31))
							    {
							      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							        switch (gimple_assign_rhs_code (_a3))
								  {
								  CASE_CONVERT:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a3);
								      _q50 = do_valueize (valueize, _q50);
								      switch (TREE_CODE (_q21))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d4 = get_def (valueize, _p1))
									          {
										    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										      switch (gimple_assign_rhs_code (_a4))
											{
											case BIT_XOR_EXPR:
											  {
											    tree _q80 = gimple_assign_rhs1 (_a4);
											    _q80 = do_valueize (valueize, _q80);
											    tree _q81 = gimple_assign_rhs2 (_a4);
											    _q81 = do_valueize (valueize, _q81);
											    if (tree_swap_operands_p (_q80, _q81))
											      std::swap (_q80, _q81);
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case NEGATE_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    switch (TREE_CODE (_q90))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q90))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a6);
															    _q100 = do_valueize (valueize, _q100);
															    switch (TREE_CODE (_q100))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q100))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q110 = gimple_assign_rhs1 (_a7);
																	    _q110 = do_valueize (valueize, _q110);
																	    tree _q111 = gimple_assign_rhs2 (_a7);
																	    _q111 = do_valueize (valueize, _q111);
																	    if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																	      {
																		if (integer_zerop (_q111))
																		  {
																		    switch (TREE_CODE (_q81))
																		      {
																		      case INTEGER_CST:
																		        {
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
											      case INTEGER_CST:
											        {
												  switch (TREE_CODE (_q81))
												    {
												    case SSA_NAME:
												      if (gimple *_d5 = get_def (valueize, _q81))
												        {
													  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													    switch (gimple_assign_rhs_code (_a5))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a5);
														  _q100 = do_valueize (valueize, _q100);
														  switch (TREE_CODE (_q100))
														    {
														    case SSA_NAME:
														      if (gimple *_d6 = get_def (valueize, _q100))
														        {
															  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															    switch (gimple_assign_rhs_code (_a6))
															      {
															      CASE_CONVERT:
															        {
																  tree _q110 = gimple_assign_rhs1 (_a6);
																  _q110 = do_valueize (valueize, _q110);
																  switch (TREE_CODE (_q110))
																    {
																    case SSA_NAME:
																      if (gimple *_d7 = get_def (valueize, _q110))
																        {
																	  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	    switch (gimple_assign_rhs_code (_a7))
																	      {
																	      case LT_EXPR:
																	        {
																		  tree _q120 = gimple_assign_rhs1 (_a7);
																		  _q120 = do_valueize (valueize, _q120);
																		  tree _q121 = gimple_assign_rhs2 (_a7);
																		  _q121 = do_valueize (valueize, _q121);
																		  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																		    {
																		      if (integer_zerop (_q121))
																			{
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												  tree _q81_pops[1];
												  if (gimple_nop_convert (_q81, _q81_pops, valueize))
												    {
												      tree _q100 = _q81_pops[0];
												      switch (TREE_CODE (_q100))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q100))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case NEGATE_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      {
															tree _q110_pops[1];
															if (gimple_nop_convert (_q110, _q110_pops, valueize))
															  {
															    tree _q120 = _q110_pops[0];
															    switch (TREE_CODE (_q120))
															      {
															      case SSA_NAME:
															        if (gimple *_d6 = get_def (valueize, _q120))
															          {
																    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																      switch (gimple_assign_rhs_code (_a6))
																	{
																	CASE_CONVERT:
																	  {
																	    tree _q130 = gimple_assign_rhs1 (_a6);
																	    _q130 = do_valueize (valueize, _q130);
																	    switch (TREE_CODE (_q130))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d7 = get_def (valueize, _q130))
																	          {
																		    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		      switch (gimple_assign_rhs_code (_a7))
																			{
																			case LT_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a7);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a7);
																			    _q141 = do_valueize (valueize, _q141);
																			    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																			      {
																				if (integer_zerop (_q141))
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													  break;
												        default:;
												        }
												    }
												}
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q80_pops[1];
											    if (gimple_nop_convert (_q80, _q80_pops, valueize))
											      {
												tree _q90 = _q80_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case NEGATE_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
														    {
														      tree _q110 = _q100_pops[0];
														      switch (TREE_CODE (_q110))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q110))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  CASE_CONVERT:
																    {
																      tree _q120 = gimple_assign_rhs1 (_a6);
																      _q120 = do_valueize (valueize, _q120);
																      switch (TREE_CODE (_q120))
																        {
																	case SSA_NAME:
																	  if (gimple *_d7 = get_def (valueize, _q120))
																	    {
																	      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	        switch (gimple_assign_rhs_code (_a7))
																		  {
																		  case LT_EXPR:
																		    {
																		      tree _q130 = gimple_assign_rhs1 (_a7);
																		      _q130 = do_valueize (valueize, _q130);
																		      tree _q131 = gimple_assign_rhs2 (_a7);
																		      _q131 = do_valueize (valueize, _q131);
																		      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
																			{
																			  if (integer_zerop (_q131))
																			    {
																			      switch (TREE_CODE (_q81))
																			        {
																				case INTEGER_CST:
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
			      case GT_EXPR:
			        {
				  tree _q20 = gimple_assign_rhs1 (_a2);
				  _q20 = do_valueize (valueize, _q20);
				  tree _q21 = gimple_assign_rhs2 (_a2);
				  _q21 = do_valueize (valueize, _q21);
				  switch (TREE_CODE (_q20))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q20))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
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
							      CASE_CONVERT:
							        {
								  tree _q40 = gimple_assign_rhs1 (_a4);
								  _q40 = do_valueize (valueize, _q40);
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
										case SSA_NAME:
										  if (gimple *_d5 = get_def (valueize, _p1))
										    {
										      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										        switch (gimple_assign_rhs_code (_a5))
											  {
											  case BIT_XOR_EXPR:
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
													  case NEGATE_EXPR:
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
																	  case LT_EXPR:
																	    {
																	      tree _q110 = gimple_assign_rhs1 (_a8);
																	      _q110 = do_valueize (valueize, _q110);
																	      tree _q111 = gimple_assign_rhs2 (_a8);
																	      _q111 = do_valueize (valueize, _q111);
																	      if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
																		{
																		  if (integer_zerop (_q111))
																		    {
																		      switch (TREE_CODE (_q81))
																		        {
																			case INTEGER_CST:
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												case INTEGER_CST:
												  {
												    switch (TREE_CODE (_q81))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q81))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case NEGATE_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    switch (TREE_CODE (_q100))
														      {
														      case SSA_NAME:
														        if (gimple *_d7 = get_def (valueize, _q100))
														          {
															    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															      switch (gimple_assign_rhs_code (_a7))
																{
																CASE_CONVERT:
																  {
																    tree _q110 = gimple_assign_rhs1 (_a7);
																    _q110 = do_valueize (valueize, _q110);
																    switch (TREE_CODE (_q110))
																      {
																      case SSA_NAME:
																        if (gimple *_d8 = get_def (valueize, _q110))
																          {
																	    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	      switch (gimple_assign_rhs_code (_a8))
																		{
																		case LT_EXPR:
																		  {
																		    tree _q120 = gimple_assign_rhs1 (_a8);
																		    _q120 = do_valueize (valueize, _q120);
																		    tree _q121 = gimple_assign_rhs2 (_a8);
																		    _q121 = do_valueize (valueize, _q121);
																		    if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
																		      {
																			if (integer_zerop (_q121))
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												    tree _q81_pops[1];
												    if (gimple_nop_convert (_q81, _q81_pops, valueize))
												      {
													tree _q100 = _q81_pops[0];
													switch (TREE_CODE (_q100))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q100))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case NEGATE_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															{
															  tree _q110_pops[1];
															  if (gimple_nop_convert (_q110, _q110_pops, valueize))
															    {
															      tree _q120 = _q110_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  CASE_CONVERT:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      switch (TREE_CODE (_q130))
																	        {
																		case SSA_NAME:
																		  if (gimple *_d8 = get_def (valueize, _q130))
																		    {
																		      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		        switch (gimple_assign_rhs_code (_a8))
																			  {
																			  case LT_EXPR:
																			    {
																			      tree _q140 = gimple_assign_rhs1 (_a8);
																			      _q140 = do_valueize (valueize, _q140);
																			      tree _q141 = gimple_assign_rhs2 (_a8);
																			      _q141 = do_valueize (valueize, _q141);
																			      if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													    break;
												          default:;
												          }
												      }
												  }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q80_pops[1];
											      if (gimple_nop_convert (_q80, _q80_pops, valueize))
											        {
												  tree _q90 = _q80_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
														      {
															tree _q110 = _q100_pops[0];
															switch (TREE_CODE (_q110))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q110))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    CASE_CONVERT:
																      {
																	tree _q120 = gimple_assign_rhs1 (_a7);
																	_q120 = do_valueize (valueize, _q120);
																	switch (TREE_CODE (_q120))
																	  {
																	  case SSA_NAME:
																	    if (gimple *_d8 = get_def (valueize, _q120))
																	      {
																		if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		  switch (gimple_assign_rhs_code (_a8))
																		    {
																		    case LT_EXPR:
																		      {
																			tree _q130 = gimple_assign_rhs1 (_a8);
																			_q130 = do_valueize (valueize, _q130);
																			tree _q131 = gimple_assign_rhs2 (_a8);
																			_q131 = do_valueize (valueize, _q131);
																			if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																			  {
																			    if (integer_zerop (_q131))
																			      {
																				switch (TREE_CODE (_q81))
																				  {
																				  case INTEGER_CST:
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							          break;
							        }
							      default:;
							      }
						        }
						      break;
						    case INTEGER_CST:
						      {
							switch (TREE_CODE (_q31))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q31))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    CASE_CONVERT:
								      {
									tree _q50 = gimple_assign_rhs1 (_a4);
									_q50 = do_valueize (valueize, _q50);
									switch (TREE_CODE (_q21))
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
											  case BIT_XOR_EXPR:
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
													  case NEGATE_EXPR:
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
																	  case LT_EXPR:
																	    {
																	      tree _q110 = gimple_assign_rhs1 (_a8);
																	      _q110 = do_valueize (valueize, _q110);
																	      tree _q111 = gimple_assign_rhs2 (_a8);
																	      _q111 = do_valueize (valueize, _q111);
																	      if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																		{
																		  if (integer_zerop (_q111))
																		    {
																		      switch (TREE_CODE (_q81))
																		        {
																			case INTEGER_CST:
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												case INTEGER_CST:
												  {
												    switch (TREE_CODE (_q81))
												      {
												      case SSA_NAME:
												        if (gimple *_d6 = get_def (valueize, _q81))
												          {
													    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													      switch (gimple_assign_rhs_code (_a6))
														{
														case NEGATE_EXPR:
														  {
														    tree _q100 = gimple_assign_rhs1 (_a6);
														    _q100 = do_valueize (valueize, _q100);
														    switch (TREE_CODE (_q100))
														      {
														      case SSA_NAME:
														        if (gimple *_d7 = get_def (valueize, _q100))
														          {
															    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
															      switch (gimple_assign_rhs_code (_a7))
																{
																CASE_CONVERT:
																  {
																    tree _q110 = gimple_assign_rhs1 (_a7);
																    _q110 = do_valueize (valueize, _q110);
																    switch (TREE_CODE (_q110))
																      {
																      case SSA_NAME:
																        if (gimple *_d8 = get_def (valueize, _q110))
																          {
																	    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																	      switch (gimple_assign_rhs_code (_a8))
																		{
																		case LT_EXPR:
																		  {
																		    tree _q120 = gimple_assign_rhs1 (_a8);
																		    _q120 = do_valueize (valueize, _q120);
																		    tree _q121 = gimple_assign_rhs2 (_a8);
																		    _q121 = do_valueize (valueize, _q121);
																		    if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																		      {
																			if (integer_zerop (_q121))
																			  {
																			    switch (TREE_CODE (_p2))
																			      {
																			      case SSA_NAME:
																			        if (gimple *_d9 = get_def (valueize, _p2))
																			          {
																				    if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																				      switch (gimple_assign_rhs_code (_a9))
																					{
																					CASE_CONVERT:
																					  {
																					    tree _q150 = gimple_assign_rhs1 (_a9);
																					    _q150 = do_valueize (valueize, _q150);
																					    if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					      {
																						{
																						  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																						  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						    {
																						      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																							{
																							  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																								{
																								  {
																								    res_ops[0] = captures[0];
																								    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												    tree _q81_pops[1];
												    if (gimple_nop_convert (_q81, _q81_pops, valueize))
												      {
													tree _q100 = _q81_pops[0];
													switch (TREE_CODE (_q100))
													  {
													  case SSA_NAME:
													    if (gimple *_d6 = get_def (valueize, _q100))
													      {
														if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														  switch (gimple_assign_rhs_code (_a6))
														    {
														    case NEGATE_EXPR:
														      {
															tree _q110 = gimple_assign_rhs1 (_a6);
															_q110 = do_valueize (valueize, _q110);
															{
															  tree _q110_pops[1];
															  if (gimple_nop_convert (_q110, _q110_pops, valueize))
															    {
															      tree _q120 = _q110_pops[0];
															      switch (TREE_CODE (_q120))
															        {
																case SSA_NAME:
																  if (gimple *_d7 = get_def (valueize, _q120))
																    {
																      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																        switch (gimple_assign_rhs_code (_a7))
																	  {
																	  CASE_CONVERT:
																	    {
																	      tree _q130 = gimple_assign_rhs1 (_a7);
																	      _q130 = do_valueize (valueize, _q130);
																	      switch (TREE_CODE (_q130))
																	        {
																		case SSA_NAME:
																		  if (gimple *_d8 = get_def (valueize, _q130))
																		    {
																		      if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		        switch (gimple_assign_rhs_code (_a8))
																			  {
																			  case LT_EXPR:
																			    {
																			      tree _q140 = gimple_assign_rhs1 (_a8);
																			      _q140 = do_valueize (valueize, _q140);
																			      tree _q141 = gimple_assign_rhs2 (_a8);
																			      _q141 = do_valueize (valueize, _q141);
																			      if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																				{
																				  if (integer_zerop (_q141))
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													    break;
												          default:;
												          }
												      }
												  }
												    break;
												  }
											        default:;
											        }
											    {
											      tree _q80_pops[1];
											      if (gimple_nop_convert (_q80, _q80_pops, valueize))
											        {
												  tree _q90 = _q80_pops[0];
												  switch (TREE_CODE (_q90))
												    {
												    case SSA_NAME:
												      if (gimple *_d6 = get_def (valueize, _q90))
												        {
													  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
													    switch (gimple_assign_rhs_code (_a6))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a6);
														  _q100 = do_valueize (valueize, _q100);
														  {
														    tree _q100_pops[1];
														    if (gimple_nop_convert (_q100, _q100_pops, valueize))
														      {
															tree _q110 = _q100_pops[0];
															switch (TREE_CODE (_q110))
															  {
															  case SSA_NAME:
															    if (gimple *_d7 = get_def (valueize, _q110))
															      {
																if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																  switch (gimple_assign_rhs_code (_a7))
																    {
																    CASE_CONVERT:
																      {
																	tree _q120 = gimple_assign_rhs1 (_a7);
																	_q120 = do_valueize (valueize, _q120);
																	switch (TREE_CODE (_q120))
																	  {
																	  case SSA_NAME:
																	    if (gimple *_d8 = get_def (valueize, _q120))
																	      {
																		if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																		  switch (gimple_assign_rhs_code (_a8))
																		    {
																		    case LT_EXPR:
																		      {
																			tree _q130 = gimple_assign_rhs1 (_a8);
																			_q130 = do_valueize (valueize, _q130);
																			tree _q131 = gimple_assign_rhs2 (_a8);
																			_q131 = do_valueize (valueize, _q131);
																			if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
																			  {
																			    if (integer_zerop (_q131))
																			      {
																				switch (TREE_CODE (_q81))
																				  {
																				  case INTEGER_CST:
																				    {
																				      switch (TREE_CODE (_p2))
																				        {
																					case SSA_NAME:
																					  if (gimple *_d9 = get_def (valueize, _p2))
																					    {
																					      if (gassign *_a9 = dyn_cast <gassign *> (_d9))
																					        switch (gimple_assign_rhs_code (_a9))
																						  {
																						  CASE_CONVERT:
																						    {
																						      tree _q170 = gimple_assign_rhs1 (_a9);
																						      _q170 = do_valueize (valueize, _q170);
																						      if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																							{
																							  {
																							    tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																							    if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							      {
																								if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								  {
																								    {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																									if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									  {
																									    {
																									      res_ops[0] = captures[0];
																									      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
		    case GT_EXPR:
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
								      switch (TREE_CODE (_q21))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d4 = get_def (valueize, _p1))
									          {
										    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										      switch (gimple_assign_rhs_code (_a4))
											{
											case BIT_XOR_EXPR:
											  {
											    tree _q80 = gimple_assign_rhs1 (_a4);
											    _q80 = do_valueize (valueize, _q80);
											    tree _q81 = gimple_assign_rhs2 (_a4);
											    _q81 = do_valueize (valueize, _q81);
											    if (tree_swap_operands_p (_q80, _q81))
											      std::swap (_q80, _q81);
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case NEGATE_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    switch (TREE_CODE (_q90))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q90))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a6);
															    _q100 = do_valueize (valueize, _q100);
															    switch (TREE_CODE (_q100))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q100))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q110 = gimple_assign_rhs1 (_a7);
																	    _q110 = do_valueize (valueize, _q110);
																	    tree _q111 = gimple_assign_rhs2 (_a7);
																	    _q111 = do_valueize (valueize, _q111);
																	    if ((_q110 == _q40 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q40, 0) && types_match (_q110, _q40)))
																	      {
																		if (integer_zerop (_q111))
																		  {
																		    switch (TREE_CODE (_q81))
																		      {
																		      case INTEGER_CST:
																		        {
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
											      case INTEGER_CST:
											        {
												  switch (TREE_CODE (_q81))
												    {
												    case SSA_NAME:
												      if (gimple *_d5 = get_def (valueize, _q81))
												        {
													  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													    switch (gimple_assign_rhs_code (_a5))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a5);
														  _q100 = do_valueize (valueize, _q100);
														  switch (TREE_CODE (_q100))
														    {
														    case SSA_NAME:
														      if (gimple *_d6 = get_def (valueize, _q100))
														        {
															  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															    switch (gimple_assign_rhs_code (_a6))
															      {
															      CASE_CONVERT:
															        {
																  tree _q110 = gimple_assign_rhs1 (_a6);
																  _q110 = do_valueize (valueize, _q110);
																  switch (TREE_CODE (_q110))
																    {
																    case SSA_NAME:
																      if (gimple *_d7 = get_def (valueize, _q110))
																        {
																	  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	    switch (gimple_assign_rhs_code (_a7))
																	      {
																	      case LT_EXPR:
																	        {
																		  tree _q120 = gimple_assign_rhs1 (_a7);
																		  _q120 = do_valueize (valueize, _q120);
																		  tree _q121 = gimple_assign_rhs2 (_a7);
																		  _q121 = do_valueize (valueize, _q121);
																		  if ((_q120 == _q40 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q40, 0) && types_match (_q120, _q40)))
																		    {
																		      if (integer_zerop (_q121))
																			{
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q40 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q40, 0) && types_match (_q150, _q40)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												  tree _q81_pops[1];
												  if (gimple_nop_convert (_q81, _q81_pops, valueize))
												    {
												      tree _q100 = _q81_pops[0];
												      switch (TREE_CODE (_q100))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q100))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case NEGATE_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      {
															tree _q110_pops[1];
															if (gimple_nop_convert (_q110, _q110_pops, valueize))
															  {
															    tree _q120 = _q110_pops[0];
															    switch (TREE_CODE (_q120))
															      {
															      case SSA_NAME:
															        if (gimple *_d6 = get_def (valueize, _q120))
															          {
																    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																      switch (gimple_assign_rhs_code (_a6))
																	{
																	CASE_CONVERT:
																	  {
																	    tree _q130 = gimple_assign_rhs1 (_a6);
																	    _q130 = do_valueize (valueize, _q130);
																	    switch (TREE_CODE (_q130))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d7 = get_def (valueize, _q130))
																	          {
																		    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		      switch (gimple_assign_rhs_code (_a7))
																			{
																			case LT_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a7);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a7);
																			    _q141 = do_valueize (valueize, _q141);
																			    if ((_q140 == _q40 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q40, 0) && types_match (_q140, _q40)))
																			      {
																				if (integer_zerop (_q141))
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q80 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													  break;
												        default:;
												        }
												    }
												}
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q80_pops[1];
											    if (gimple_nop_convert (_q80, _q80_pops, valueize))
											      {
												tree _q90 = _q80_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case NEGATE_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
														    {
														      tree _q110 = _q100_pops[0];
														      switch (TREE_CODE (_q110))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q110))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  CASE_CONVERT:
																    {
																      tree _q120 = gimple_assign_rhs1 (_a6);
																      _q120 = do_valueize (valueize, _q120);
																      switch (TREE_CODE (_q120))
																        {
																	case SSA_NAME:
																	  if (gimple *_d7 = get_def (valueize, _q120))
																	    {
																	      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	        switch (gimple_assign_rhs_code (_a7))
																		  {
																		  case LT_EXPR:
																		    {
																		      tree _q130 = gimple_assign_rhs1 (_a7);
																		      _q130 = do_valueize (valueize, _q130);
																		      tree _q131 = gimple_assign_rhs2 (_a7);
																		      _q131 = do_valueize (valueize, _q131);
																		      if ((_q130 == _q40 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q40, 0) && types_match (_q130, _q40)))
																			{
																			  if (integer_zerop (_q131))
																			    {
																			      switch (TREE_CODE (_q81))
																			        {
																				case INTEGER_CST:
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q40 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q40, 0) && types_match (_q170, _q40)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q40, _q30, _q31, _q21, _q81 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
							        break;
							      }
							    default:;
							    }
						      }
						    break;
						  case INTEGER_CST:
						    {
						      switch (TREE_CODE (_q31))
						        {
							case SSA_NAME:
							  if (gimple *_d3 = get_def (valueize, _q31))
							    {
							      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							        switch (gimple_assign_rhs_code (_a3))
								  {
								  CASE_CONVERT:
								    {
								      tree _q50 = gimple_assign_rhs1 (_a3);
								      _q50 = do_valueize (valueize, _q50);
								      switch (TREE_CODE (_q21))
								        {
									case INTEGER_CST:
									  {
									    switch (TREE_CODE (_p1))
									      {
									      case SSA_NAME:
									        if (gimple *_d4 = get_def (valueize, _p1))
									          {
										    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
										      switch (gimple_assign_rhs_code (_a4))
											{
											case BIT_XOR_EXPR:
											  {
											    tree _q80 = gimple_assign_rhs1 (_a4);
											    _q80 = do_valueize (valueize, _q80);
											    tree _q81 = gimple_assign_rhs2 (_a4);
											    _q81 = do_valueize (valueize, _q81);
											    if (tree_swap_operands_p (_q80, _q81))
											      std::swap (_q80, _q81);
											    switch (TREE_CODE (_q80))
											      {
											      case SSA_NAME:
											        if (gimple *_d5 = get_def (valueize, _q80))
											          {
												    if (gassign *_a5 = dyn_cast <gassign *> (_d5))
												      switch (gimple_assign_rhs_code (_a5))
													{
													case NEGATE_EXPR:
													  {
													    tree _q90 = gimple_assign_rhs1 (_a5);
													    _q90 = do_valueize (valueize, _q90);
													    switch (TREE_CODE (_q90))
													      {
													      case SSA_NAME:
													        if (gimple *_d6 = get_def (valueize, _q90))
													          {
														    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
														      switch (gimple_assign_rhs_code (_a6))
															{
															CASE_CONVERT:
															  {
															    tree _q100 = gimple_assign_rhs1 (_a6);
															    _q100 = do_valueize (valueize, _q100);
															    switch (TREE_CODE (_q100))
															      {
															      case SSA_NAME:
															        if (gimple *_d7 = get_def (valueize, _q100))
															          {
																    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																      switch (gimple_assign_rhs_code (_a7))
																	{
																	case LT_EXPR:
																	  {
																	    tree _q110 = gimple_assign_rhs1 (_a7);
																	    _q110 = do_valueize (valueize, _q110);
																	    tree _q111 = gimple_assign_rhs2 (_a7);
																	    _q111 = do_valueize (valueize, _q111);
																	    if ((_q110 == _q50 && ! TREE_SIDE_EFFECTS (_q110)) || (operand_equal_p (_q110, _q50, 0) && types_match (_q110, _q50)))
																	      {
																		if (integer_zerop (_q111))
																		  {
																		    switch (TREE_CODE (_q81))
																		      {
																		      case INTEGER_CST:
																		        {
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
											      case INTEGER_CST:
											        {
												  switch (TREE_CODE (_q81))
												    {
												    case SSA_NAME:
												      if (gimple *_d5 = get_def (valueize, _q81))
												        {
													  if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													    switch (gimple_assign_rhs_code (_a5))
													      {
													      case NEGATE_EXPR:
													        {
														  tree _q100 = gimple_assign_rhs1 (_a5);
														  _q100 = do_valueize (valueize, _q100);
														  switch (TREE_CODE (_q100))
														    {
														    case SSA_NAME:
														      if (gimple *_d6 = get_def (valueize, _q100))
														        {
															  if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															    switch (gimple_assign_rhs_code (_a6))
															      {
															      CASE_CONVERT:
															        {
																  tree _q110 = gimple_assign_rhs1 (_a6);
																  _q110 = do_valueize (valueize, _q110);
																  switch (TREE_CODE (_q110))
																    {
																    case SSA_NAME:
																      if (gimple *_d7 = get_def (valueize, _q110))
																        {
																	  if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	    switch (gimple_assign_rhs_code (_a7))
																	      {
																	      case LT_EXPR:
																	        {
																		  tree _q120 = gimple_assign_rhs1 (_a7);
																		  _q120 = do_valueize (valueize, _q120);
																		  tree _q121 = gimple_assign_rhs2 (_a7);
																		  _q121 = do_valueize (valueize, _q121);
																		  if ((_q120 == _q50 && ! TREE_SIDE_EFFECTS (_q120)) || (operand_equal_p (_q120, _q50, 0) && types_match (_q120, _q50)))
																		    {
																		      if (integer_zerop (_q121))
																			{
																			  switch (TREE_CODE (_p2))
																			    {
																			    case SSA_NAME:
																			      if (gimple *_d8 = get_def (valueize, _p2))
																			        {
																				  if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																				    switch (gimple_assign_rhs_code (_a8))
																				      {
																				      CASE_CONVERT:
																				        {
																					  tree _q150 = gimple_assign_rhs1 (_a8);
																					  _q150 = do_valueize (valueize, _q150);
																					  if ((_q150 == _q50 && ! TREE_SIDE_EFFECTS (_q150)) || (operand_equal_p (_q150, _q50, 0) && types_match (_q150, _q50)))
																					    {
																					      {
																						tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																						if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																						  {
																						    if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																						      {
																							{
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																							    if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																							      {
																								{
																								  res_ops[0] = captures[0];
																								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
												  tree _q81_pops[1];
												  if (gimple_nop_convert (_q81, _q81_pops, valueize))
												    {
												      tree _q100 = _q81_pops[0];
												      switch (TREE_CODE (_q100))
												        {
													case SSA_NAME:
													  if (gimple *_d5 = get_def (valueize, _q100))
													    {
													      if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													        switch (gimple_assign_rhs_code (_a5))
														  {
														  case NEGATE_EXPR:
														    {
														      tree _q110 = gimple_assign_rhs1 (_a5);
														      _q110 = do_valueize (valueize, _q110);
														      {
															tree _q110_pops[1];
															if (gimple_nop_convert (_q110, _q110_pops, valueize))
															  {
															    tree _q120 = _q110_pops[0];
															    switch (TREE_CODE (_q120))
															      {
															      case SSA_NAME:
															        if (gimple *_d6 = get_def (valueize, _q120))
															          {
																    if (gassign *_a6 = dyn_cast <gassign *> (_d6))
																      switch (gimple_assign_rhs_code (_a6))
																	{
																	CASE_CONVERT:
																	  {
																	    tree _q130 = gimple_assign_rhs1 (_a6);
																	    _q130 = do_valueize (valueize, _q130);
																	    switch (TREE_CODE (_q130))
																	      {
																	      case SSA_NAME:
																	        if (gimple *_d7 = get_def (valueize, _q130))
																	          {
																		    if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																		      switch (gimple_assign_rhs_code (_a7))
																			{
																			case LT_EXPR:
																			  {
																			    tree _q140 = gimple_assign_rhs1 (_a7);
																			    _q140 = do_valueize (valueize, _q140);
																			    tree _q141 = gimple_assign_rhs2 (_a7);
																			    _q141 = do_valueize (valueize, _q141);
																			    if ((_q140 == _q50 && ! TREE_SIDE_EFFECTS (_q140)) || (operand_equal_p (_q140, _q50, 0) && types_match (_q140, _q50)))
																			      {
																				if (integer_zerop (_q141))
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q80 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
													  break;
												        default:;
												        }
												    }
												}
											          break;
											        }
											      default:;
											      }
											  {
											    tree _q80_pops[1];
											    if (gimple_nop_convert (_q80, _q80_pops, valueize))
											      {
												tree _q90 = _q80_pops[0];
												switch (TREE_CODE (_q90))
												  {
												  case SSA_NAME:
												    if (gimple *_d5 = get_def (valueize, _q90))
												      {
													if (gassign *_a5 = dyn_cast <gassign *> (_d5))
													  switch (gimple_assign_rhs_code (_a5))
													    {
													    case NEGATE_EXPR:
													      {
														tree _q100 = gimple_assign_rhs1 (_a5);
														_q100 = do_valueize (valueize, _q100);
														{
														  tree _q100_pops[1];
														  if (gimple_nop_convert (_q100, _q100_pops, valueize))
														    {
														      tree _q110 = _q100_pops[0];
														      switch (TREE_CODE (_q110))
														        {
															case SSA_NAME:
															  if (gimple *_d6 = get_def (valueize, _q110))
															    {
															      if (gassign *_a6 = dyn_cast <gassign *> (_d6))
															        switch (gimple_assign_rhs_code (_a6))
																  {
																  CASE_CONVERT:
																    {
																      tree _q120 = gimple_assign_rhs1 (_a6);
																      _q120 = do_valueize (valueize, _q120);
																      switch (TREE_CODE (_q120))
																        {
																	case SSA_NAME:
																	  if (gimple *_d7 = get_def (valueize, _q120))
																	    {
																	      if (gassign *_a7 = dyn_cast <gassign *> (_d7))
																	        switch (gimple_assign_rhs_code (_a7))
																		  {
																		  case LT_EXPR:
																		    {
																		      tree _q130 = gimple_assign_rhs1 (_a7);
																		      _q130 = do_valueize (valueize, _q130);
																		      tree _q131 = gimple_assign_rhs2 (_a7);
																		      _q131 = do_valueize (valueize, _q131);
																		      if ((_q130 == _q50 && ! TREE_SIDE_EFFECTS (_q130)) || (operand_equal_p (_q130, _q50, 0) && types_match (_q130, _q50)))
																			{
																			  if (integer_zerop (_q131))
																			    {
																			      switch (TREE_CODE (_q81))
																			        {
																				case INTEGER_CST:
																				  {
																				    switch (TREE_CODE (_p2))
																				      {
																				      case SSA_NAME:
																				        if (gimple *_d8 = get_def (valueize, _p2))
																				          {
																					    if (gassign *_a8 = dyn_cast <gassign *> (_d8))
																					      switch (gimple_assign_rhs_code (_a8))
																						{
																						CASE_CONVERT:
																						  {
																						    tree _q170 = gimple_assign_rhs1 (_a8);
																						    _q170 = do_valueize (valueize, _q170);
																						    if ((_q170 == _q50 && ! TREE_SIDE_EFFECTS (_q170)) || (operand_equal_p (_q170, _q50, 0) && types_match (_q170, _q50)))
																						      {
																							{
																							  tree captures[5] ATTRIBUTE_UNUSED = { _q50, _q31, _q30, _q21, _q81 };
																							  if (INTEGRAL_TYPE_P (type) && !TYPE_UNSIGNED (type)
)
																							    {
																							      if (!TYPE_UNSIGNED (TREE_TYPE (captures[0])) && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
)
																								{
																								  {
 unsigned itype_prec = TYPE_PRECISION (TREE_TYPE (captures[0]));
 unsigned otype_prec = TYPE_PRECISION (type);
 wide_int offset = wi::uhwi (HOST_WIDE_INT_1U << (otype_prec - 1),
 itype_prec);
 wide_int limit_0 = wi::mask (otype_prec, false, itype_prec);
 wide_int limit_1 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 3,
 itype_prec);
 wide_int limit_2 = wi::uhwi ((HOST_WIDE_INT_1U << otype_prec) - 2,
 itype_prec);
 wide_int otype_max = wi::mask (otype_prec - 1, false, otype_prec);
 wide_int itype_max = wi::mask (otype_prec - 1, false, itype_prec);
 wide_int int_cst_1 = wi::to_wide (captures[2]);
 wide_int int_cst_2 = wi::to_wide (captures[3]);
 wide_int int_cst_3 = wi::to_wide (captures[4]);
																								      if (((wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_0))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, offset) && wi::eq_p (int_cst_2, limit_2))
 || (wi::eq_p (int_cst_1, itype_max) && wi::eq_p (int_cst_2, limit_1)))
 && wi::eq_p (int_cst_3, otype_max)
)
																									{
																									  {
																									    res_ops[0] = captures[0];
																									    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 86, __FILE__, __LINE__, false);
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
gimple_simplify_517 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (shiftrotate))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree tem = uniform_vector_p (captures[1]);
      if (tem
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1461;
	  {
	    res_op->set_op (shiftrotate, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  tem;
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 761, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1461:;
	}
  }
  return false;
}

bool
gimple_simplify_523 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (wi::ltu_p (wi::to_wide (captures[1]), element_precision (type))
)
    {
      if (TYPE_UNSIGNED (type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1470;
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
		  if (!_r1) goto next_after_fail1470;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[0] = _r1;
	    }
	    {
	      tree _o1[2], _r1;
	      _o1[0] =  build_minus_one_cst (type);
	      _o1[1] = captures[1];
	      gimple_match_op tem_op (res_op->cond.any_else (), RSHIFT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
	      tem_op.resimplify (lseq, valueize);
	      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
	      if (!_r1) goto next_after_fail1470;
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 769, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1470:;
	}
      else
	{
	  if (INTEGRAL_TYPE_P (type)
)
	    {
	      {
 int width = element_precision (type) - tree_to_uhwi (captures[1]);
 tree stype = NULL_TREE;
 if (width <= MAX_FIXED_MODE_SIZE)
 stype = build_nonstandard_integer_type (width, 0);
		  if (stype && (width == 1 || type_has_mode_precision_p (stype))
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1471;
		      {
			res_op->set_op (NOP_EXPR, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[0];
			  (*res_op).set_op (NOP_EXPR, stype, 1);
			  (*res_op).ops[0] = _o1[0];
			  (*res_op).resimplify (lseq, valueize);
			}
			if (type != res_op->type
			    && !useless_type_conversion_p (type, res_op->type))
			  {
			    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1471;
			    res_op->set_op (NOP_EXPR, type, 1);
			    res_op->resimplify (lseq, valueize);
			  }
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 770, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1471:;
		    }
	      }
	    }
	}
    }
  return false;
}

bool
gimple_simplify_531 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (copysigns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (optimize
 && !HONOR_SNANS (captures[0])
 && types_match (type, TREE_TYPE (captures[1]))
 && types_match (type, TREE_TYPE (captures[2]))
 && TYPE_PRECISION (type) < TYPE_PRECISION (TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_COPYSIGN,
 type, OPTIMIZE_FOR_BOTH)
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1485;
      {
	res_op->set_op (CFN_COPYSIGN, type, 2);
	res_op->ops[0] = captures[1];
	res_op->ops[1] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 784, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1485:;
    }
  return false;
}

bool
gimple_simplify_537 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1500;
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
		  if (!_r1) goto next_after_fail1500;
	        }
	      else
	        _r1 = _o1[0];
	      res_op->ops[1] = _r1;
	    }
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 787, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1500:;
	}
      else
	{
	  {
 tree utype = unsigned_type_for (TREE_TYPE (captures[2]));
	      gimple_seq *lseq = seq;
	      if (lseq
	          && (!single_use (captures[0])))
	        lseq = NULL;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1501;
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
			if (!_r2) goto next_after_fail1501;
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
			if (!_r2) goto next_after_fail1501;
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
		    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1501;
		    res_op->set_op (NOP_EXPR, type, 1);
		    res_op->resimplify (lseq, valueize);
		  }
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 788, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1501:;
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1502;
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
				  if (!_r1) goto next_after_fail1502;
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
				  if (!_r1) goto next_after_fail1502;
			        }
			      else
			        _r1 = _o1[0];
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 789, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1502:;
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
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1503;
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
					    if (!_r2) goto next_after_fail1503;
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
					    if (!_r2) goto next_after_fail1503;
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
					if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1503;
					res_op->set_op (NOP_EXPR, type, 1);
					res_op->resimplify (lseq, valueize);
				      }
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 790, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1503:;
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
gimple_simplify_575 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (lseq
      && (!single_use (captures[0])
          || !single_use (captures[3])))
    lseq = NULL;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1543;
  {
    res_op->set_op (BIT_NOT_EXPR, type, 1);
    {
      tree _o1[2], _r1;
      _o1[0] = captures[1];
      _o1[1] = captures[2];
      gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
      tem_op.resimplify (lseq, valueize);
      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
      if (!_r1) goto next_after_fail1543;
      res_op->ops[0] = _r1;
    }
    res_op->resimplify (lseq, valueize);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 829, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1543:;
  return false;
}

bool
gimple_simplify_580 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (POINTER_TYPE_P (TREE_TYPE (captures[0]))
 && tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
    {
      {
 unsigned int align;
 unsigned HOST_WIDE_INT bitpos;
 get_pointer_alignment_1 (captures[0], &align, &bitpos);
	  if (wi::ltu_p (wi::to_wide (captures[1]), align / BITS_PER_UNIT)
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1548;
	      {
		tree tem;
		tem =  wide_int_to_tree (type, (wi::to_wide (captures[1])
 & (bitpos / BITS_PER_UNIT)));
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 833, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1548:;
	    }
      }
    }
  return false;
}

bool
gimple_simplify_588 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const enum tree_code ARG_UNUSED (eqne))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (eqne == EQ_EXPR
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1577;
      {
	tree tem;
	tem =  constant_boolean_node (false, type);
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 836, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1577:;
    }
  else
    {
      if (eqne == NE_EXPR
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1578;
	  {
	    tree tem;
	    tem = captures[0];
	    res_op->set_value (tem);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 837, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1578:;
	}
    }
  return false;
}

bool
gimple_simplify_595 (gimple_match_op *res_op, gimple_seq *seq,
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
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1597;
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
	  if (!_r1) goto next_after_fail1597;
	  res_op->ops[1] = _r1;
	}
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 854, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1597:;
    }
  return false;
}

bool
gimple_simplify_599 (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1603;
	      {
		tree tem;
		tem =  build_int_cst (type, 0);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 857, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1603:;
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
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1604;
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
						      if (!_r3) goto next_after_fail1604;
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
						  if (!_r1) goto next_after_fail1604;
						  tem_op.set_op (NOP_EXPR, type, 1);
						  tem_op.ops[0] = _r1;
						  tem_op.resimplify (lseq, valueize);
						}
					      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					      if (!_r1) goto next_after_fail1604;
					      res_op->ops[0] = _r1;
					    }
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 858, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1604:;
					}
				      else
					{
					  gimple_seq *lseq = seq;
					  if (lseq
					      && (!single_use (captures[0])
					          || !single_use (captures[1])))
					    lseq = NULL;
					  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1605;
					  {
					    res_op->set_op (BIT_AND_EXPR, type, 2);
					    res_op->ops[0] = captures[0];
					    res_op->ops[1] =  newmaskt;
					    res_op->resimplify (lseq, valueize);
					    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 859, __FILE__, __LINE__, true);
					    return true;
					  }
next_after_fail1605:;
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
gimple_simplify_607 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1620;
  {
    tree tem;
    tem = captures[1];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 866, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1620:;
  return false;
}

bool
gimple_simplify_615 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (element_precision (type) <= element_precision (TREE_TYPE (captures[0]))
 || !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1629;
      {
	res_op->set_op (NOP_EXPR, type, 1);
	{
	  tree _o1[1], _r1;
	  _o1[0] = captures[0];
	  (*res_op).set_op (NEGATE_EXPR, TREE_TYPE (_o1[0]), 1);
	  (*res_op).ops[0] = _o1[0];
	  (*res_op).resimplify (lseq, valueize);
	}
	if (type != res_op->type
	    && !useless_type_conversion_p (type, res_op->type))
	  {
	    if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1629;
	    res_op->set_op (NOP_EXPR, type, 1);
	    res_op->resimplify (lseq, valueize);
	  }
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 874, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1629:;
    }
  return false;
}

bool
gimple_simplify_623 (gimple_match_op *res_op, gimple_seq *seq,
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
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1637;
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
		    if (!_r2) goto next_after_fail1637;
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
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1637;
		res_op->set_op (NOP_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 879, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1637:;
      }
    }
  return false;
}

bool
gimple_simplify_636 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1659;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 893, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1659:;
		}
	      else
		{
		  if (known_gt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1660;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 894, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1660:;
		    }
		}
	    }
	  else
	    {
	      if (known_ge (off0, off1)
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1661;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 895, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1661:;
		}
	      else
		{
		  if (known_lt (off0, off1)
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1662;
		      {
			tree tem;
			tem = captures[2];
			res_op->set_value (tem);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 896, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1662:;
		    }
		}
	    }
	}
  }
  return false;
}

bool
gimple_simplify_650 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1679;
  {
    tree tem;
    tem = captures[2];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 642, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1679:;
  return false;
}

bool
gimple_simplify_656 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[3]);
      if (element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1685;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[4], _r1;
	      _o1[0] = captures[0];
	      _o1[1] = captures[1];
	      _o1[2] = captures[2];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[4];
		if (op_type != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1685;
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
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1685;
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 910, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1685:;
	}
  }
  return false;
}

bool
gimple_simplify_663 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (cond_len_op))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
 tree op_type = TREE_TYPE (captures[6]);
      if (inverse_conditions_p (captures[0], captures[2])
 && element_precision (type) == element_precision (op_type)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1692;
	  {
	    res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
	    {
	      tree _o1[7], _r1;
	      _o1[0] = captures[2];
	      _o1[1] = captures[3];
	      _o1[2] = captures[4];
	      _o1[3] = captures[5];
	      {
		tree _o2[1], _r2;
		_o2[0] = captures[1];
		if (op_type != TREE_TYPE (_o2[0]) /* XXX */
		    && !useless_type_conversion_p (op_type, TREE_TYPE (_o2[0])))
		  {
		    gimple_match_op tem_op (res_op->cond.any_else (), VIEW_CONVERT_EXPR, op_type, _o2[0]);
		    tem_op.resimplify (lseq, valueize);
		    _r2 = maybe_push_res_to_seq (&tem_op, lseq);
		    if (!_r2) goto next_after_fail1692;
		  }
		else
		  _r2 = _o2[0];
		_o1[4] = _r2;
	      }
	      _o1[5] = captures[7];
	      _o1[6] = captures[8];
	      (*res_op).set_op (cond_len_op, TREE_TYPE (_o1[1]), 7);
	      (*res_op).ops[0] = _o1[0];
	      (*res_op).ops[1] = _o1[1];
	      (*res_op).ops[2] = _o1[2];
	      (*res_op).ops[3] = _o1[3];
	      (*res_op).ops[4] = _o1[4];
	      (*res_op).ops[5] = _o1[5];
	      (*res_op).ops[6] = _o1[6];
	      (*res_op).resimplify (lseq, valueize);
	    }
	    if (type != res_op->type
	        && !useless_type_conversion_p (type, res_op->type))
	      {
		if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1692;
		res_op->set_op (VIEW_CONVERT_EXPR, type, 1);
		res_op->resimplify (lseq, valueize);
	      }
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 917, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail1692:;
	}
  }
  return false;
}

bool
gimple_simplify_681 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (tans),
 const combined_fn ARG_UNUSED (atans))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (flag_unsafe_math_optimizations
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1713;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 938, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1713:;
    }
  return false;
}

bool
gimple_simplify_685 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1717;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 942, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1717:;
  return false;
}

bool
gimple_simplify_690 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  gimple_seq *lseq = seq;
  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1722;
  {
    tree tem;
    tem = captures[0];
    res_op->set_value (tem);
    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 947, __FILE__, __LINE__, true);
    return true;
  }
next_after_fail1722:;
  return false;
}

bool
gimple_simplify_694 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fns))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1726;
      {
	res_op->set_op (FIX_TRUNC_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 951, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1726:;
    }
  return false;
}

bool
gimple_simplify_701 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (fmas))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1733;
      {
	res_op->set_op (CFN_FNMS, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 958, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1733:;
    }
  return false;
}

bool
gimple_simplify_707 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1739;
      {
	res_op->set_op (CFN_FMS, type, 3);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 964, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1739:;
    }
  return false;
}

bool
gimple_simplify_716 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (canonicalize_math_after_vectorization_p ()
)
    {
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1748;
      {
	res_op->set_op (CFN_COND_FMA, type, 5);
	res_op->ops[0] = captures[0];
	res_op->ops[1] = captures[1];
	res_op->ops[2] = captures[2];
	res_op->ops[3] = captures[3];
	res_op->ops[4] = captures[4];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 973, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1748:;
    }
  return false;
}

bool
gimple_simplify_725 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 const tree ARG_UNUSED (type), tree *ARG_UNUSED (captures),
 const combined_fn ARG_UNUSED (POPCOUNT))
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && INTEGRAL_TYPE_P (TREE_TYPE (captures[1]))
 && TYPE_UNSIGNED (TREE_TYPE (captures[1]))
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > TYPE_PRECISION (TREE_TYPE (captures[1]))
)
    {
      {
 combined_fn cfn = CFN_LAST;
 tree type0 = TREE_TYPE (captures[1]);
 if (TREE_CODE (type0) == BITINT_TYPE)
 {
 if (TYPE_PRECISION (type0) > MAX_FIXED_MODE_SIZE)
 cfn = CFN_POPCOUNT;
 else
 type0
 = build_nonstandard_integer_type (TYPE_PRECISION (type0),
 1);
 }
 if (cfn == CFN_LAST
 && direct_internal_fn_supported_p (IFN_POPCOUNT, type0,
 OPTIMIZE_FOR_BOTH))
 cfn = CFN_POPCOUNT;
 if (cfn == CFN_LAST
 && TYPE_PRECISION (TREE_TYPE (captures[0])) > BITS_PER_WORD
 && !direct_internal_fn_supported_p (IFN_POPCOUNT,
 TREE_TYPE (captures[0]),
 OPTIMIZE_FOR_BOTH))
 {
 if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (unsigned_type_node))
 cfn = CFN_BUILT_IN_POPCOUNT;
 else if (TYPE_PRECISION (type0)
 == TYPE_PRECISION (long_long_unsigned_type_node))
 cfn = CFN_BUILT_IN_POPCOUNTLL;
 }
	  if (cfn == CFN_POPCOUNT
)
	    {
	      gimple_seq *lseq = seq;
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1759;
	      {
		res_op->set_op (CFN_POPCOUNT, type, 1);
		{
		  tree _o1[1], _r1;
		  _o1[0] = captures[1];
		  if (type0 != TREE_TYPE (_o1[0]) /* XXX */
		      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
		    {
		      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
		      tem_op.resimplify (lseq, valueize);
		      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
		      if (!_r1) goto next_after_fail1759;
		    }
		  else
		    _r1 = _o1[0];
		  res_op->ops[0] = _r1;
		}
		res_op->resimplify (lseq, valueize);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 981, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail1759:;
	    }
	  else
	    {
	      if (cfn == CFN_BUILT_IN_POPCOUNT
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1760;
		  {
		    res_op->set_op (CFN_BUILT_IN_POPCOUNT, type, 1);
		    {
		      tree _o1[1], _r1;
		      _o1[0] = captures[1];
		      if (type0 != TREE_TYPE (_o1[0]) /* XXX */
		          && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			{
			  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail1760;
		        }
		      else
		        _r1 = _o1[0];
		      res_op->ops[0] = _r1;
		    }
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 982, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail1760:;
		}
	      else
		{
		  if (cfn == CFN_BUILT_IN_POPCOUNTLL
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1761;
		      {
			res_op->set_op (CFN_BUILT_IN_POPCOUNTLL, type, 1);
			{
			  tree _o1[1], _r1;
			  _o1[0] = captures[1];
			  if (type0 != TREE_TYPE (_o1[0]) /* XXX */
			      && !useless_type_conversion_p (type0, TREE_TYPE (_o1[0])))
			    {
			      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type0, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail1761;
			    }
			  else
			    _r1 = _o1[0];
			  res_op->ops[0] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 983, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail1761:;
		    }
		}
	    }
      }
    }
  return false;
}

bool
gimple_simplify_ABS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && !TYPE_UNSIGNED (TREE_TYPE (captures[0]))
 && element_precision (type) > element_precision (TREE_TYPE (captures[0]))
 && (!VECTOR_TYPE_P (type)
 || target_supports_op_p (TREE_TYPE (captures[0]), ABSU_EXPR, optab_vector))
)
		      {
			{
 tree utype = unsigned_type_for (TREE_TYPE (captures[0]));
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1785;
			    {
			      res_op->set_op (NOP_EXPR, type, 1);
			      {
				tree _o1[1], _r1;
				_o1[0] = captures[0];
				(*res_op).set_op (ABSU_EXPR, utype, 1);
				(*res_op).ops[0] = _o1[0];
				(*res_op).resimplify (lseq, valueize);
			      }
			      if (type != res_op->type
			          && !useless_type_conversion_p (type, res_op->type))
			        {
				  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1785;
				  res_op->set_op (NOP_EXPR, type, 1);
				  res_op->resimplify (lseq, valueize);
			        }
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1003, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1785:;
			}
		      }
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1786;
		    {
		      tree tem;
		      tem = captures[0];
		      res_op->set_value (tem);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1004, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1786:;
		  }
	          break;
	        }
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1787;
		    {
		      res_op->set_op (ABS_EXPR, type, 1);
		      res_op->ops[0] = captures[0];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1005, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1787:;
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
		  if (real_zerop (_q21))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_1 (res_op, seq, valueize, type, captures, PLUS_EXPR))
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
		  if (real_zerop (_q21))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_1 (res_op, seq, valueize, type, captures, MINUS_EXPR))
			  return true;
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
		  {
		    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q22 };
		    gimple_seq *lseq = seq;
		    if (lseq
		        && (!single_use (captures[0])))
		      lseq = NULL;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1788;
		    {
		      res_op->set_op (VEC_COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, type, _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1788;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[1], _r1;
			_o1[0] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), ABS_EXPR, type, _o1[0]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail1788;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1006, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail1788:;
		  }
	          break;
	        }
	      default:;
	      }
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
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
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF16))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128X))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF128:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF128))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF32X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF32X))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_COPYSIGNF64X:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF64X))
		        return true;
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
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN))
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
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF))
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
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL))
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
		      if (gimple_simplify_2 (res_op, seq, valueize, type, captures, CFN_COPYSIGN))
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
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1789;
      {
	tree tem;
	tem = captures[0];
	res_op->set_value (tem);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1007, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail1789:;
    }
  }
  return false;
}

bool
gimple_simplify_FLOAT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if ((
1
 && useless_type_conversion_p (type, TREE_TYPE (captures[0])))
 || (
0
 && type == TREE_TYPE (captures[0]))
)
      {
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1886;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1013, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail1886:;
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1887;
			    {
			      res_op->set_op (FLOAT_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1887:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1888;
				{
				  res_op->set_op (FLOAT_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1888:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1889;
				    {
				      res_op->set_op (FLOAT_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1889:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1890;
					{
					  res_op->set_op (FLOAT_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1890:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1891;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1891:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1892;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    (*res_op).set_op (BIT_AND_EXPR, TREE_TYPE (_o1[0]), 2);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1892;
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1892:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1893;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1893:;
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
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
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
1
 && useless_type_conversion_p (type, inside_type))
 || (
0
 && TYPE_MAIN_VARIANT (type) == TYPE_MAIN_VARIANT (inside_type)))
 && (((inter_int || inter_ptr) && final_int)
 || (inter_float && final_float))
 && inter_prec >= final_prec
)
			  {
			    gimple_seq *lseq = seq;
			    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1894;
			    {
			      res_op->set_op (FLOAT_EXPR, type, 1);
			      res_op->ops[0] = captures[1];
			      res_op->resimplify (lseq, valueize);
			      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1014, __FILE__, __LINE__, true);
			      return true;
			    }
next_after_fail1894:;
			  }
			else
			  {
			    if (((inter_int && inside_int) || (inter_float && inside_float))
 && (final_int || final_float)
 && inter_prec >= inside_prec
 && (inter_float || inter_unsignedp == inside_unsignedp)
)
			      {
				gimple_seq *lseq = seq;
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1895;
				{
				  res_op->set_op (FLOAT_EXPR, type, 1);
				  res_op->ops[0] = captures[1];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1015, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail1895:;
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
				    gimple_seq *lseq = seq;
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1896;
				    {
				      res_op->set_op (FLOAT_EXPR, type, 1);
				      res_op->ops[0] = captures[1];
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1016, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail1896:;
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
					gimple_seq *lseq = seq;
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1897;
					{
					  res_op->set_op (FLOAT_EXPR, type, 1);
					  res_op->ops[0] = captures[1];
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1017, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail1897:;
				      }
				    else
				      {
					if (inside_int && inter_int && final_int
 && final_prec <= inside_prec
 && inter_prec >= inside_prec
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1898;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
					      res_op->ops[0] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1018, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail1898:;
					  }
					else
					  {
					    if (1
 && final_int && inter_int && inside_int
 && final_prec >= inside_prec
 && inside_prec > inter_prec
 && inter_unsignedp
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1899;
						{
						  res_op->set_op (NOP_EXPR, type, 1);
						  {
						    tree _o1[2], _r1;
						    _o1[0] = captures[1];
						    _o1[1] =  wide_int_to_tree
 (inside_type,
 wi::mask (inter_prec, false,
 TYPE_PRECISION (inside_type)));
						    (*res_op).set_op (BIT_AND_EXPR, TREE_TYPE (_o1[0]), 2);
						    (*res_op).ops[0] = _o1[0];
						    (*res_op).ops[1] = _o1[1];
						    (*res_op).resimplify (lseq, valueize);
						  }
						  if (type != res_op->type
						      && !useless_type_conversion_p (type, res_op->type))
						    {
						      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail1899;
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->resimplify (lseq, valueize);
						    }
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1019, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail1899:;
					      }
					    else
					      {
						if (1
 && inside_int && inter_float && final_int &&
 (unsigned) significand_size (TYPE_MODE (inter_type))
 >= inside_prec - !inside_unsignedp
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1900;
						    {
						      res_op->set_op (NOP_EXPR, type, 1);
						      res_op->ops[0] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1020, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail1900:;
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
	      case FIX_TRUNC_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		    if (!flag_trapping_math
 && !HONOR_SIGNED_ZEROS (type)
 && types_match (type, TREE_TYPE (captures[0]))
 && direct_internal_fn_supported_p (IFN_TRUNC, type,
 OPTIMIZE_FOR_BOTH)
)
		      {
			gimple_seq *lseq = seq;
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1901;
			{
			  res_op->set_op (CFN_TRUNC, type, 1);
			  res_op->ops[0] = captures[0];
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1060, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail1901:;
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
gimple_simplify_CFN_BUILT_IN_BSWAP128 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case BIT_NOT_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  switch (TREE_CODE (_q20))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q20))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
				      if (gimple_simplify_671 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
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
	      case BIT_XOR_EXPR:
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP128))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_XOR_EXPR, CFN_BUILT_IN_BSWAP128))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP128))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, CFN_BUILT_IN_BSWAP128))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP128))
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
		  switch (TREE_CODE (_q21))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
		        {
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_BSWAP128:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q40 = gimple_call_arg (_c2, 0);
				    _q40 = do_valueize (valueize, _q40);
				    {
				      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
				      if (gimple_simplify_672 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, CFN_BUILT_IN_BSWAP128))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_BSWAP128:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_670 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128))
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
gimple_simplify_CFN_BUILT_IN_LOG2F (gimple_match_op *res_op, gimple_seq *seq,
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
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			  if (gimple_simplify_679 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
		if (real_onep (_q20))
		  {
		    {
		      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
		      if (gimple_simplify_678 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
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
	      case CFN_BUILT_IN_SQRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_SQRTF)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1969;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1969;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1969:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXP10F)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1970;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1970;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1970:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_EXPF)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1971;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1971;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1971:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
	        if (gimple_call_num_args (_c1) == 2)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    tree _q21 = gimple_call_arg (_c1, 1);
		    _q21 = do_valueize (valueize, _q21);
		    {
		      tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
		      if (gimple_simplify_680 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_POWF))
		        return true;
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_POW10F)
 {
 CASE_CFN_EXP:
 x = build_real_truncate (type, dconst_e ());
 break;
 CASE_CFN_EXP2:
 x = build_real (type, dconst2);
 break;
 CASE_CFN_EXP10:
 CASE_CFN_POW10:
 {
 REAL_VALUE_TYPE dconst10;
 real_from_integer (&dconst10, VOIDmode, 10, SIGNED);
 x = build_real (type, dconst10);
 }
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1972;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    {
				      tree _o1[1], _r1;
				      _o1[0] =  x;
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1972;
				      res_op->ops[0] = _r1;
				    }
				    res_op->ops[1] = captures[0];
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1072, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1972:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (flag_unsafe_math_optimizations
)
			{
			  if (SCALAR_FLOAT_TYPE_P (type)
)
			    {
			      {
 tree x;
 switch (CFN_BUILT_IN_CBRTF)
 {
 CASE_CFN_SQRT:
 x = build_real (type, dconsthalf);
 break;
 CASE_CFN_CBRT:
 x = build_real_truncate (type, dconst_third ());
 break;
 default:
 gcc_unreachable ();
 }
				  gimple_seq *lseq = seq;
				  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1973;
				  {
				    res_op->set_op (MULT_EXPR, type, 2);
				    res_op->ops[0] =  x;
				    {
				      tree _o1[1], _r1;
				      _o1[0] = captures[0];
				      gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_LOG2F, TREE_TYPE (_o1[0]), _o1[0]);
				      tem_op.resimplify (lseq, valueize);
				      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				      if (!_r1) goto next_after_fail1973;
				      res_op->ops[1] = _r1;
				    }
				    res_op->resimplify (lseq, valueize);
				    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1071, __FILE__, __LINE__, true);
				    return true;
				  }
next_after_fail1973:;
			      }
			    }
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail1974;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1073, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail1974:;
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
gimple_simplify_CFN_BUILT_IN_EXPF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOGF:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2013;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2013:;
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
gimple_simplify_CFN_EXP (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_LOG:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2016;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2016:;
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
gimple_simplify_CFN_BUILT_IN_EXP2L (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOG2L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2019;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2019:;
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
gimple_simplify_CFN_BUILT_IN_EXP10L (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOG10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2023;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2023:;
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
gimple_simplify_CFN_BUILT_IN_POW10L (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_LOG10L:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2027;
			  {
			    tree tem;
			    tem = captures[0];
			    res_op->set_value (tem);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1074, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2027:;
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
gimple_simplify_CFN_BUILT_IN_CBRTF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_SQRTF:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2054;
			  {
			    res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
			    res_op->ops[0] = captures[0];
			    res_op->ops[1] =  build_real_truncate (type, dconst_sixth ());
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1079, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2054:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXP10F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2055;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP10F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2055;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2055:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_EXPF:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2056;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXPF, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2056;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2056:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_POWF:
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2057;
			      {
				res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
				res_op->ops[0] = captures[0];
				{
				  tree _o1[2], _r1;
				  _o1[0] = captures[1];
				  _o1[1] =  build_real_truncate (type, dconst_third ());
				  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
				  tem_op.resimplify (lseq, valueize);
				  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
				  if (!_r1) goto next_after_fail2057;
				  res_op->ops[1] = _r1;
				}
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1081, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2057:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POW10F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2058;
			  {
			    res_op->set_op (CFN_BUILT_IN_POW10F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2058;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2058:;
			}
		    }
	          }
	        break;
	      case CFN_BUILT_IN_CBRTF:
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2059;
			      {
				res_op->set_op (CFN_BUILT_IN_POWF, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] =  build_real_truncate (type, dconst_ninth ());
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1082, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2059:;
			    }
			}
		      }
	          }
	        break;
	      case CFN_BUILT_IN_EXP2F:
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
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2060;
			  {
			    res_op->set_op (CFN_BUILT_IN_EXP2F, type, 1);
			    {
			      tree _o1[2], _r1;
			      _o1[0] = captures[0];
			      _o1[1] =  build_real_truncate (type, dconst_third ());
			      gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2060;
			      res_op->ops[0] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1080, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2060:;
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
gimple_simplify_CFN_BUILT_IN_TRUNCF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_TRUNCF64X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_TRUNCF64X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF64X))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_TRUNCF64X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FLOORF64 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_FLOORF64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF64))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF64))
        return true;
    }
  }
if (tree_expr_nonnegative_p (_p0))
  {
    {
      tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
      if (gimple_simplify_688 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FLOORF64, CFN_BUILT_IN_TRUNCF64))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CEIL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEIL, CFN_BUILT_IN_CEILF))
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
	      case CFN_BUILT_IN_CEIL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEIL))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CEIL))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ROUNDF64X (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_ROUNDF64X:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF64X))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ROUNDF64X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_NEARBYINTF64 (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_BUILT_IN_NEARBYINTF64:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF64))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_NEARBYINTF64))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_RINT (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_686 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT, CFN_BUILT_IN_RINTF))
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
	      case CFN_BUILT_IN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_RINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_RINT (gimple_match_op *res_op, gimple_seq *seq,
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
	      case CFN_RINT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    {
		      tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
		      if (gimple_simplify_684 (res_op, seq, valueize, type, captures, CFN_RINT))
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
      if (gimple_simplify_685 (res_op, seq, valueize, type, captures, CFN_RINT))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ICEILL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_ICEIL))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_ICEILF))
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
      if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILL, CFN_BUILT_IN_LCEILL, CFN_BUILT_IN_LLCEILL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_IRINTL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_691 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_IRINT))
			  return true;
		      }
		    }
		  if (gimple_float_value_p (_q20, valueize))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_IRINTF))
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
      if (gimple_simplify_697 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTL, CFN_BUILT_IN_LRINTL, CFN_BUILT_IN_LLRINTL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLCEIL (gimple_match_op *res_op, gimple_seq *seq,
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
			if (gimple_simplify_692 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEIL, CFN_BUILT_IN_LLCEILF))
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
      if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLCEIL))
        return true;
    }
  }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_696 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEIL, CFN_BUILT_IN_LCEIL, CFN_BUILT_IN_LLCEIL))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_IFLOOR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (tree_expr_nonnegative_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_693 (res_op, seq, valueize, type, captures, CFN_IFLOOR))
	  return true;
      }
    }
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_IFLOOR))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_IFLOOR, CFN_LFLOOR, CFN_LLFLOOR))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_ICEILF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_ICEILF, CFN_BUILT_IN_LCEILF, CFN_BUILT_IN_LLCEILF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_IROUND (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_694 (res_op, seq, valueize, type, captures, CFN_IROUND))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_695 (res_op, seq, valueize, type, captures, CFN_IROUND, CFN_LROUND, CFN_LLROUND))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_LLRINTF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_valued_real_p (_p0))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_697 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LLRINTF))
	  return true;
      }
    }
  {
    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
    if (gimple_simplify_696 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_IRINTF, CFN_BUILT_IN_LRINTF, CFN_BUILT_IN_LLRINTF))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_CTZ (gimple_match_op *res_op, gimple_seq *seq,
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
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_719 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
		      return true;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_720 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
		      return true;
		  }
	          break;
	        }
	      CASE_CONVERT:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q20 };
		    if (gimple_simplify_721 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
		  case NEGATE_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_717 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
			  return true;
		      }
		      break;
		    }
		  case ABS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_718 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_CTZ))
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POPCOUNTIMAX (gimple_match_op *res_op, gimple_seq *seq,
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
				    if (gimple_simplify_723 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
				    if (gimple_simplify_723 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
							if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
							if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTIMAX))
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
				      if (gimple_simplify_722 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_725 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_727 (res_op, seq, valueize, type, captures, LROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
		    if (gimple_simplify_727 (res_op, seq, valueize, type, captures, RROTATE_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
					if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
					if (gimple_simplify_724 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP128, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP16, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP32, CFN_BUILT_IN_POPCOUNTIMAX))
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
		      if (gimple_simplify_726 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_BSWAP64, CFN_BUILT_IN_POPCOUNTIMAX))
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
    if (gimple_simplify_728 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POPCOUNTIMAX))
      return true;
  }
  return false;
}

bool
gimple_simplify_CFN_REDUC_IOR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case VIEW_CONVERT_EXPR:
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
					case VECTOR_CST:
					  {
					    {
					      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
					      if (gimple_simplify_739 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
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
		        default:;
		        }
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
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  if (gimple_simplify_739 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
			    return true;
			}
		        break;
		      }
		    default:;
		    }
	          break;
	        }
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
		    if (gimple_simplify_740 (res_op, seq, valueize, type, captures, CFN_REDUC_IOR))
		      return true;
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
		  switch (TREE_CODE (_q21))
		    {
		    case VECTOR_CST:
		      {
			{
			  tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			  gimple_seq *lseq = seq;
			  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2088;
			  {
			    res_op->set_op (BIT_IOR_EXPR, type, 2);
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[0];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2088;
			      res_op->ops[0] = _r1;
			    }
			    {
			      tree _o1[1], _r1;
			      _o1[0] = captures[1];
			      gimple_match_op tem_op (res_op->cond.any_else (), CFN_REDUC_IOR, type, _o1[0]);
			      tem_op.resimplify (lseq, valueize);
			      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			      if (!_r1) goto next_after_fail2088;
			      res_op->ops[1] = _r1;
			    }
			    res_op->resimplify (lseq, valueize);
			    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1087, __FILE__, __LINE__, true);
			    return true;
			  }
next_after_fail2088:;
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
gimple_simplify_MINUS_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	gimple_seq *lseq = seq;
	if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2209;
	{
	  tree tem;
	  tem = captures[0];
	  res_op->set_value (tem);
	  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1090, __FILE__, __LINE__, true);
	  return true;
	}
next_after_fail2209:;
      }
    }
  if (real_zerop (_p1))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (fold_real_zero_addition_p (type, captures[0], captures[1], 1)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2210;
	    {
	      tree tem;
	      tem = captures[0];
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1118, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2210:;
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
				if (gimple_simplify_55 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR))
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
		    case REAL_CST:
		      {
			switch (TREE_CODE (_p1))
			  {
			  case REAL_CST:
			    {
			      {
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_55 (res_op, seq, valueize, type, captures, MINUS_EXPR, MINUS_EXPR))
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
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2211;
	    {
	      tree tem;
	      tem =  build_zero_cst (type);
	      res_op->set_value (tem);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1119, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2211:;
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
					      case MULT_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  switch (TREE_CODE (_q50))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q50))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case TRUNC_DIV_EXPR:
							        {
								  tree _q60 = gimple_assign_rhs1 (_a4);
								  _q60 = do_valueize (valueize, _q60);
								  tree _q61 = gimple_assign_rhs2 (_a4);
								  _q61 = do_valueize (valueize, _q61);
								  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
								    {
								      if ((_q51 == _q61 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q61, 0))
									{
									  {
									    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q61 };
									    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
						  switch (TREE_CODE (_q51))
						    {
						    case SSA_NAME:
						      if (gimple *_d4 = get_def (valueize, _q51))
						        {
							  if (gassign *_a4 = dyn_cast <gassign *> (_d4))
							    switch (gimple_assign_rhs_code (_a4))
							      {
							      case TRUNC_DIV_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
								  if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q20, 0))
								    {
								      if ((_q71 == _q50 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q50, 0))
									{
									  {
									    tree captures[4] ATTRIBUTE_UNUSED = { _q70, _q71, _q20, _q50 };
									    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _q20, _q51 };
							    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q41))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q41))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q20, 0))
						    {
						      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _q20, _q40 };
							    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
			      case MULT_EXPR:
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
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
						    {
						      if ((_q41 == _q51 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q51, 0))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q51 };
							    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q41))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q41))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _p0, 0))
						    {
						      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || operand_equal_p (_q61, _q40, 0))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _q60, _q61, _p0, _q40 };
							    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      if ((_q31 == _q41 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _q41, 0))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q40, _q41, _p0, _q41 };
					    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
		  switch (TREE_CODE (_q31))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q31))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case TRUNC_DIV_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _p0, 0))
				    {
				      if ((_q51 == _q30 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q30, 0))
					{
					  {
					    tree captures[4] ATTRIBUTE_UNUSED = { _q50, _q51, _p0, _q30 };
					    if (gimple_simplify_91 (res_op, seq, valueize, type, captures))
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
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q21))
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
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
						    {
						      if (integer_onep (_q41))
							{
							  if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
							    {
							      {
								tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q40, _q50 };
								if (gimple_simplify_92 (res_op, seq, valueize, type, captures))
								  return true;
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
					      case TRUNC_DIV_EXPR:
					        {
						  tree _q40 = gimple_assign_rhs1 (_a3);
						  _q40 = do_valueize (valueize, _q40);
						  tree _q41 = gimple_assign_rhs2 (_a3);
						  _q41 = do_valueize (valueize, _q41);
						  if (integer_onep (_q31))
						    {
						      if ((_q21 == _q41 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q41, 0) && types_match (_q21, _q41)))
							{
							  if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
							    {
							      {
								tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q41, _q20, _q30, _q40 };
								if (gimple_simplify_92 (res_op, seq, valueize, type, captures))
								  return true;
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
	          break;
	        }
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
			      case LSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_57 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
			      case BIT_NOT_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q40 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q40, 0) && types_match (_q61, _q40)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
							    if (gimple_simplify_93 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q40 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q40, 0) && types_match (_q60, _q40)))
						    {
						      if ((_q61 == _q20 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q20, 0) && types_match (_q61, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q40, _p1 };
							    if (gimple_simplify_93 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_p1))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _p1))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_AND_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q61 == _q30 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q30, 0) && types_match (_q61, _q30)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
							    if (gimple_simplify_93 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q30, 0) && types_match (_q60, _q30)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q30, _p1 };
							    if (gimple_simplify_93 (res_op, seq, valueize, type, captures))
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
						    if (~wi::to_wide (captures[2]) == wi::to_wide (captures[4])
)
						      {
							gimple_seq *lseq = seq;
							if (lseq
							    && (!single_use (captures[0])
							        || !single_use (captures[3])))
							  lseq = NULL;
							if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2212;
							{
							  res_op->set_op (MINUS_EXPR, type, 2);
							  {
							    tree _o1[2], _r1;
							    _o1[0] = captures[1];
							    _o1[1] = captures[4];
							    gimple_match_op tem_op (res_op->cond.any_else (), BIT_XOR_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							    tem_op.resimplify (lseq, valueize);
							    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
							    if (!_r1) goto next_after_fail2212;
							    res_op->ops[0] = _r1;
							  }
							  res_op->ops[1] = captures[4];
							  res_op->resimplify (lseq, valueize);
							  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1120, __FILE__, __LINE__, true);
							  return true;
							}
next_after_fail2212:;
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
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q21 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q21, 0) && types_match (_q70, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
							    if (gimple_simplify_94 (res_op, seq, valueize, type, captures))
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
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_NOT_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  if ((_q60 == _q21 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q21, 0) && types_match (_q60, _q21)))
						    {
						      if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
							    if (gimple_simplify_94 (res_op, seq, valueize, type, captures))
							      return true;
							  }
						        }
						    }
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
							    if (gimple_simplify_94 (res_op, seq, valueize, type, captures))
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
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      switch (TREE_CODE (_q51))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q51))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_NOT_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  {
							    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1 };
							    if (gimple_simplify_94 (res_op, seq, valueize, type, captures))
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
			          break;
			        }
			      case PLUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if (tree_swap_operands_p (_q50, _q51))
				    std::swap (_q50, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_IOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if (integer_onep (_q51))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
								if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								  return true;
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
								if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								  return true;
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
				{
				  tree _q50_pops[1];
				  if (gimple_nop_convert (_q50, _q50_pops, valueize))
				    {
				      tree _q60 = _q50_pops[0];
				      switch (TREE_CODE (_q60))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q60))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      if (integer_onep (_q51))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
				  case PLUS_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      if (tree_swap_operands_p (_q60, _q61))
				        std::swap (_q60, _q61);
				      switch (TREE_CODE (_q60))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q60))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q20 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q20, 0) && types_match (_q70, _q20)))
							{
							  if ((_q71 == _q21 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q21, 0) && types_match (_q71, _q21)))
							    {
							      if (integer_onep (_q61))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
				    {
				      tree _q60_pops[1];
				      if (gimple_nop_convert (_q60, _q60_pops, valueize))
				        {
					  tree _q70 = _q60_pops[0];
					  switch (TREE_CODE (_q70))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q70))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q20 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q20, 0) && types_match (_q80, _q20)))
							    {
							      if ((_q81 == _q21 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q21, 0) && types_match (_q81, _q21)))
								{
								  if (integer_onep (_q61))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (!TYPE_OVERFLOW_SANITIZED (type)
)
				      {
					{
 tree utype = unsigned_type_for (type);
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2213;
					    {
					      res_op->set_op (NOP_EXPR, type, 1);
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
						      if (!_r2) goto next_after_fail2213;
						    }
						  else
						    _r2 = _o2[0];
						  _o1[0] = _r2;
						}
						{
						  tree _o2[1], _r2;
						  _o2[0] = captures[0];
						  if (utype != TREE_TYPE (_o2[0]) /* XXX */
						      && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
						    {
						      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
						      tem_op.resimplify (lseq, valueize);
						      _r2 = maybe_push_res_to_seq (&tem_op, lseq);
						      if (!_r2) goto next_after_fail2213;
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
						  if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail2213;
						  res_op->set_op (NOP_EXPR, type, 1);
						  res_op->resimplify (lseq, valueize);
					        }
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1121, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2213:;
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
			      case BIT_IOR_EXPR:
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
					    if (!TYPE_OVERFLOW_SANITIZED (type) && !TYPE_OVERFLOW_TRAPS (type)
 && !TYPE_SATURATING (type)
)
					      {
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2214;
						{
						  res_op->set_op (BIT_AND_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1122, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2214:;
					      }
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
						gimple_seq *lseq = seq;
						if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2215;
						{
						  res_op->set_op (BIT_IOR_EXPR, type, 2);
						  res_op->ops[0] = captures[0];
						  res_op->ops[1] = captures[1];
						  res_op->resimplify (lseq, valueize);
						  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1123, __FILE__, __LINE__, true);
						  return true;
						}
next_after_fail2215:;
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
				  if (integer_all_onesp (_q21))
				    {
				      switch (TREE_CODE (_p1))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _p1))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
								if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
								  return true;
							      }
							    }
						        }
						      if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q31, 0) && types_match (_q70, _q31)))
							{
							  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q30, 0) && types_match (_q71, _q30)))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
								if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
				    {
				      tree _p1_pops[1];
				      if (gimple_nop_convert (_p1, _p1_pops, valueize))
				        {
					  tree _q70 = _p1_pops[0];
					  switch (TREE_CODE (_q70))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q70))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
							    {
							      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
							  if ((_q80 == _q31 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q31, 0) && types_match (_q80, _q31)))
							    {
							      if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q31, _q30 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
		  tree _q20_pops[1];
		  if (gimple_nop_convert (_q20, _q20_pops, valueize))
		    {
		      tree _q30 = _q20_pops[0];
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      if (integer_all_onesp (_q21))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p1))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
							    {
							      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
							  if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
							    {
							      if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
					{
					  tree _p1_pops[1];
					  if (gimple_nop_convert (_p1, _p1_pops, valueize))
					    {
					      tree _q80 = _p1_pops[0];
					      switch (TREE_CODE (_q80))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q80))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case BIT_IOR_EXPR:
							    {
							      tree _q90 = gimple_assign_rhs1 (_a3);
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = gimple_assign_rhs2 (_a3);
							      _q91 = do_valueize (valueize, _q91);
							      if (tree_swap_operands_p (_q90, _q91))
							        std::swap (_q90, _q91);
							      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
								{
								  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
								{
								  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q40 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
			if (gimple_simplify_97 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_97 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  switch (TREE_CODE (_p1))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _p1))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case BIT_XOR_EXPR:
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2216;
					    {
					      res_op->set_op (BIT_AND_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1124, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2216:;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2217;
					    {
					      res_op->set_op (BIT_XOR_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1125, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2217:;
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
		  case PLUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      switch (TREE_CODE (_q30))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _q30))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case BIT_AND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      if (tree_swap_operands_p (_q40, _q41))
				        std::swap (_q40, _q41);
				      if (integer_all_onesp (_q31))
					{
					  switch (TREE_CODE (_p1))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _p1))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q40 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q40, 0) && types_match (_q80, _q40)))
							    {
							      if ((_q81 == _q41 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q41, 0) && types_match (_q81, _q41)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
								      return true;
								  }
							        }
							    }
							  if ((_q80 == _q41 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q41, 0) && types_match (_q80, _q41)))
							    {
							      if ((_q81 == _q40 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q40, 0) && types_match (_q81, _q40)))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
								    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
					{
					  tree _p1_pops[1];
					  if (gimple_nop_convert (_p1, _p1_pops, valueize))
					    {
					      tree _q80 = _p1_pops[0];
					      switch (TREE_CODE (_q80))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q80))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case BIT_IOR_EXPR:
							    {
							      tree _q90 = gimple_assign_rhs1 (_a3);
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = gimple_assign_rhs2 (_a3);
							      _q91 = do_valueize (valueize, _q91);
							      if (tree_swap_operands_p (_q90, _q91))
							        std::swap (_q90, _q91);
							      if ((_q90 == _q40 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q40, 0) && types_match (_q90, _q40)))
								{
								  if ((_q91 == _q41 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q41, 0) && types_match (_q91, _q41)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q40, _q41 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							      if ((_q90 == _q41 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q41, 0) && types_match (_q90, _q41)))
								{
								  if ((_q91 == _q40 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q40, 0) && types_match (_q91, _q40)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q41, _q40 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
		      tree _q30_pops[1];
		      if (gimple_nop_convert (_q30, _q30_pops, valueize))
		        {
			  tree _q40 = _q30_pops[0];
			  switch (TREE_CODE (_q40))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q40))
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
					  if (integer_all_onesp (_q31))
					    {
					      switch (TREE_CODE (_p1))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _p1))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case BIT_IOR_EXPR:
							    {
							      tree _q90 = gimple_assign_rhs1 (_a3);
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = gimple_assign_rhs2 (_a3);
							      _q91 = do_valueize (valueize, _q91);
							      if (tree_swap_operands_p (_q90, _q91))
							        std::swap (_q90, _q91);
							      if ((_q90 == _q50 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q50, 0) && types_match (_q90, _q50)))
								{
								  if ((_q91 == _q51 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q51, 0) && types_match (_q91, _q51)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
							        }
							      if ((_q90 == _q51 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q51, 0) && types_match (_q90, _q51)))
								{
								  if ((_q91 == _q50 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q50, 0) && types_match (_q91, _q50)))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
									if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
					    {
					      tree _p1_pops[1];
					      if (gimple_nop_convert (_p1, _p1_pops, valueize))
					        {
						  tree _q90 = _p1_pops[0];
						  switch (TREE_CODE (_q90))
						    {
						    case SSA_NAME:
						      if (gimple *_d3 = get_def (valueize, _q90))
						        {
							  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
							    switch (gimple_assign_rhs_code (_a3))
							      {
							      case BIT_IOR_EXPR:
							        {
								  tree _q100 = gimple_assign_rhs1 (_a3);
								  _q100 = do_valueize (valueize, _q100);
								  tree _q101 = gimple_assign_rhs2 (_a3);
								  _q101 = do_valueize (valueize, _q101);
								  if (tree_swap_operands_p (_q100, _q101))
								    std::swap (_q100, _q101);
								  if ((_q100 == _q50 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q50, 0) && types_match (_q100, _q50)))
								    {
								      if ((_q101 == _q51 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q51, 0) && types_match (_q101, _q51)))
									{
									  {
									    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q50, _q51 };
									    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
									      return true;
									  }
								        }
								    }
								  if ((_q100 == _q51 && ! TREE_SIDE_EFFECTS (_q100)) || (operand_equal_p (_q100, _q51, 0) && types_match (_q100, _q51)))
								    {
								      if ((_q101 == _q50 && ! TREE_SIDE_EFFECTS (_q101)) || (operand_equal_p (_q101, _q50, 0) && types_match (_q101, _q50)))
									{
									  {
									    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q51, _q50 };
									    if (gimple_simplify_96 (res_op, seq, valueize, type, captures))
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
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      if (tree_swap_operands_p (_q60, _q61))
				        std::swap (_q60, _q61);
				      switch (TREE_CODE (_q60))
				        {
					case SSA_NAME:
					  if (gimple *_d3 = get_def (valueize, _q60))
					    {
					      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					        switch (gimple_assign_rhs_code (_a3))
						  {
						  case BIT_IOR_EXPR:
						    {
						      tree _q70 = gimple_assign_rhs1 (_a3);
						      _q70 = do_valueize (valueize, _q70);
						      tree _q71 = gimple_assign_rhs2 (_a3);
						      _q71 = do_valueize (valueize, _q71);
						      if (tree_swap_operands_p (_q70, _q71))
						        std::swap (_q70, _q71);
						      if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							{
							  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || (operand_equal_p (_q71, _q31, 0) && types_match (_q71, _q31)))
							    {
							      if (integer_onep (_q61))
								{
								  {
								    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
								    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
								      return true;
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
				    {
				      tree _q60_pops[1];
				      if (gimple_nop_convert (_q60, _q60_pops, valueize))
				        {
					  tree _q70 = _q60_pops[0];
					  switch (TREE_CODE (_q70))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q70))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
							    {
							      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
								{
								  if (integer_onep (_q61))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
			  tree _q60 = _p1_pops[0];
			  switch (TREE_CODE (_q60))
			    {
			    case SSA_NAME:
			      if (gimple *_d2 = get_def (valueize, _q60))
			        {
				  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				    switch (gimple_assign_rhs_code (_a2))
				      {
				      case PLUS_EXPR:
				        {
					  tree _q70 = gimple_assign_rhs1 (_a2);
					  _q70 = do_valueize (valueize, _q70);
					  tree _q71 = gimple_assign_rhs2 (_a2);
					  _q71 = do_valueize (valueize, _q71);
					  if (tree_swap_operands_p (_q70, _q71))
					    std::swap (_q70, _q71);
					  switch (TREE_CODE (_q70))
					    {
					    case SSA_NAME:
					      if (gimple *_d3 = get_def (valueize, _q70))
					        {
						  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						    switch (gimple_assign_rhs_code (_a3))
						      {
						      case BIT_IOR_EXPR:
						        {
							  tree _q80 = gimple_assign_rhs1 (_a3);
							  _q80 = do_valueize (valueize, _q80);
							  tree _q81 = gimple_assign_rhs2 (_a3);
							  _q81 = do_valueize (valueize, _q81);
							  if (tree_swap_operands_p (_q80, _q81))
							    std::swap (_q80, _q81);
							  if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
							    {
							      if ((_q81 == _q31 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q31, 0) && types_match (_q81, _q31)))
								{
								  if (integer_onep (_q71))
								    {
								      {
									tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
									if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									  return true;
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
					{
					  tree _q70_pops[1];
					  if (gimple_nop_convert (_q70, _q70_pops, valueize))
					    {
					      tree _q80 = _q70_pops[0];
					      switch (TREE_CODE (_q80))
					        {
						case SSA_NAME:
						  if (gimple *_d3 = get_def (valueize, _q80))
						    {
						      if (gassign *_a3 = dyn_cast <gassign *> (_d3))
						        switch (gimple_assign_rhs_code (_a3))
							  {
							  case BIT_IOR_EXPR:
							    {
							      tree _q90 = gimple_assign_rhs1 (_a3);
							      _q90 = do_valueize (valueize, _q90);
							      tree _q91 = gimple_assign_rhs2 (_a3);
							      _q91 = do_valueize (valueize, _q91);
							      if (tree_swap_operands_p (_q90, _q91))
							        std::swap (_q90, _q91);
							      if ((_q90 == _q30 && ! TREE_SIDE_EFFECTS (_q90)) || (operand_equal_p (_q90, _q30, 0) && types_match (_q90, _q30)))
								{
								  if ((_q91 == _q31 && ! TREE_SIDE_EFFECTS (_q91)) || (operand_equal_p (_q91, _q31, 0) && types_match (_q91, _q31)))
								    {
								      if (integer_onep (_q71))
									{
									  {
									    tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q60 };
									    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									      return true;
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
									    if (gimple_simplify_95 (res_op, seq, valueize, type, captures))
									      return true;
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
	  break;
        default:;
        }
    }
}
  if (gimple_negate_expr_p (_p1, valueize))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (!FIXED_POINT_TYPE_P (type)
)
	  {
	    gimple_seq *lseq = seq;
	    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2218;
	    {
	      res_op->set_op (PLUS_EXPR, type, 2);
	      res_op->ops[0] = captures[0];
	      {
		tree _o1[1], _r1;
		_o1[0] = captures[1];
		gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
		tem_op.resimplify (lseq, valueize);
		_r1 = maybe_push_res_to_seq (&tem_op, lseq);
		if (!_r1) goto next_after_fail2218;
		res_op->ops[1] = _r1;
	      }
	      res_op->resimplify (lseq, valueize);
	      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1126, __FILE__, __LINE__, true);
	      return true;
	    }
next_after_fail2218:;
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
					      case BIT_AND_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[5] ATTRIBUTE_UNUSED = { _q50, _p1, _q40, _q51, _q20 };
							if (gimple_simplify_98 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[5] ATTRIBUTE_UNUSED = { _q51, _p1, _q40, _q50, _q20 };
							if (gimple_simplify_98 (res_op, seq, valueize, type, captures))
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
			      case BIT_AND_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _q20 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _q20, 0))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _p1, _q41, _q20 };
					if (gimple_simplify_99 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _q20 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _q20, 0))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _p1, _q40, _q20 };
					if (gimple_simplify_99 (res_op, seq, valueize, type, captures))
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
							      case POINTER_PLUS_EXPR:
							        {
								  tree _q50 = gimple_assign_rhs1 (_a4);
								  _q50 = do_valueize (valueize, _q50);
								  tree _q51 = gimple_assign_rhs2 (_a4);
								  _q51 = do_valueize (valueize, _q51);
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
										gimple_seq *lseq = seq;
										if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2219;
										{
										  res_op->set_op (MINUS_EXPR, type, 2);
										  res_op->ops[0] =  build_int_cst_type (type, diff);
										  {
										    tree _o1[1], _r1;
										    _o1[0] = captures[2];
										    if (type != TREE_TYPE (_o1[0]) /* XXX */
										        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
										      {
											gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
											tem_op.resimplify (lseq, valueize);
											_r1 = maybe_push_res_to_seq (&tem_op, lseq);
											if (!_r1) goto next_after_fail2219;
										      }
										    else
										      _r1 = _o1[0];
										    res_op->ops[1] = _r1;
										  }
										  res_op->resimplify (lseq, valueize);
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1127, __FILE__, __LINE__, true);
										  return true;
										}
next_after_fail2219:;
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
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2220;
								{
								  tree tem;
								  tem =  build_int_cst_type (type, diff);
								  res_op->set_value (tem);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1128, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2220:;
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
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
										gimple_seq *lseq = seq;
										if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2221;
										{
										  res_op->set_op (PLUS_EXPR, type, 2);
										  {
										    tree _o1[1], _r1;
										    _o1[0] = captures[1];
										    if (type != TREE_TYPE (_o1[0]) /* XXX */
										        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
										      {
											gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
											tem_op.resimplify (lseq, valueize);
											_r1 = maybe_push_res_to_seq (&tem_op, lseq);
											if (!_r1) goto next_after_fail2221;
										      }
										    else
										      _r1 = _o1[0];
										    res_op->ops[0] = _r1;
										  }
										  res_op->ops[1] =  build_int_cst_type (type, diff);
										  res_op->resimplify (lseq, valueize);
										  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1129, __FILE__, __LINE__, true);
										  return true;
										}
next_after_fail2221:;
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
								      gimple_seq *lseq = seq;
								      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2222;
								      {
									res_op->set_op (PLUS_EXPR, type, 2);
									{
									  tree _o1[1], _r1;
									  _o1[0] = captures[1];
									  if (type != TREE_TYPE (_o1[0]) /* XXX */
									      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									    {
									      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
									      tem_op.resimplify (lseq, valueize);
									      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									      if (!_r1) goto next_after_fail2222;
									    }
									  else
									    _r1 = _o1[0];
									  res_op->ops[0] = _r1;
									}
									res_op->ops[1] =  build_int_cst_type (type, diff);
									res_op->resimplify (lseq, valueize);
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1129, __FILE__, __LINE__, true);
									return true;
								      }
next_after_fail2222:;
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
						    case POINTER_PLUS_EXPR:
						      {
							tree _q50 = gimple_assign_rhs1 (_a3);
							_q50 = do_valueize (valueize, _q50);
							tree _q51 = gimple_assign_rhs2 (_a3);
							_q51 = do_valueize (valueize, _q51);
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
								      gimple_seq *lseq = seq;
								      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2223;
								      {
									res_op->set_op (MINUS_EXPR, type, 2);
									res_op->ops[0] =  build_int_cst_type (type, diff);
									{
									  tree _o1[1], _r1;
									  _o1[0] = captures[2];
									  if (type != TREE_TYPE (_o1[0]) /* XXX */
									      && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									    {
									      gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
									      tem_op.resimplify (lseq, valueize);
									      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
									      if (!_r1) goto next_after_fail2223;
									    }
									  else
									    _r1 = _o1[0];
									  res_op->ops[1] = _r1;
									}
									res_op->resimplify (lseq, valueize);
									if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1127, __FILE__, __LINE__, true);
									return true;
								      }
next_after_fail2223:;
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
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2224;
						      {
							tree tem;
							tem =  build_int_cst_type (type, diff);
							res_op->set_value (tem);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1128, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2224:;
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
						    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
						    if (tree_nop_conversion_p (type, TREE_TYPE (captures[0]))
)
						      {
							{
 poly_int64 diff;
							    if (ptr_difference_const (captures[0], captures[1], &diff)
)
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2225;
								{
								  tree tem;
								  tem =  build_int_cst_type (type, diff);
								  res_op->set_value (tem);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1130, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2225:;
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
						      gimple_seq *lseq = seq;
						      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2226;
						      {
							tree tem;
							tem =  build_int_cst_type (type, diff);
							res_op->set_value (tem);
							if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1130, __FILE__, __LINE__, true);
							return true;
						      }
next_after_fail2226:;
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
		gimple_seq *lseq = seq;
		if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2227;
		{
		  res_op->set_op (BIT_XOR_EXPR, type, 2);
		  res_op->ops[0] = captures[1];
		  res_op->ops[1] = captures[0];
		  res_op->resimplify (lseq, valueize);
		  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1131, __FILE__, __LINE__, true);
		  return true;
		}
next_after_fail2227:;
	      }
	  }
          break;
        }
      default:;
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
			      case BIT_AND_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q40, _p1, _q30, _q41, _p0 };
					if (gimple_simplify_98 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _q41, _p1, _q30, _q40, _p0 };
					if (gimple_simplify_98 (res_op, seq, valueize, type, captures))
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
	      case BIT_AND_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || operand_equal_p (_q30, _p0, 0))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _q30, _p1, _p1, _q31, _p0 };
			if (gimple_simplify_99 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || operand_equal_p (_q31, _p0, 0))
		    {
		      {
			tree captures[5] ATTRIBUTE_UNUSED = { _q31, _p1, _p1, _q30, _p0 };
			if (gimple_simplify_99 (res_op, seq, valueize, type, captures))
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
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2228;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1132, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2228:;
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2229;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1132, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2229:;
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2230;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1132, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2230:;
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2231;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1132, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2231:;
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
					if (ANY_INTEGRAL_TYPE_P (TREE_TYPE (captures[0]))
 && (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 || TYPE_OVERFLOW_WRAPS (TREE_TYPE (captures[0])))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2232;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[0];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1133, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2232:;
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2233;
					    {
					      res_op->set_op (MINUS_EXPR, type, 2);
					      res_op->ops[0] = captures[2];
					      res_op->ops[1] = captures[1];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1134, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2233:;
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
					if (TYPE_OVERFLOW_UNDEFINED (TREE_TYPE (captures[0]))
 && !TYPE_OVERFLOW_SANITIZED (TREE_TYPE (captures[2]))
)
					  {
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2234;
					    {
					      res_op->set_op (POINTER_DIFF_EXPR, type, 2);
					      res_op->ops[0] = captures[1];
					      res_op->ops[1] = captures[3];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1135, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2234:;
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
					    gimple_seq *lseq = seq;
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2235;
					    {
					      res_op->set_op (POINTER_DIFF_EXPR, type, 2);
					      res_op->ops[0] = captures[3];
					      res_op->ops[1] = captures[2];
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1136, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2235:;
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
			      case NEGATE_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				    if (gimple_simplify_100 (res_op, seq, valueize, type, captures))
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
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    if (gimple_simplify_100 (res_op, seq, valueize, type, captures))
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
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			      if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  {
		    tree _q21_pops[1];
		    if (gimple_nop_convert (_q21, _q21_pops, valueize))
		      {
			tree _q40 = _q21_pops[0];
			if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q20 };
			      if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
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
		  {
		    tree _q20_pops[1];
		    if (gimple_nop_convert (_q20, _q20_pops, valueize))
		      {
			tree _q30 = _q20_pops[0];
			if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q21 };
			      if (gimple_simplify_102 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_102 (res_op, seq, valueize, type, captures))
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
		  case PLUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      {
			tree _q30_pops[1];
			if (gimple_nop_convert (_q30, _q30_pops, valueize))
			  {
			    tree _q40 = _q30_pops[0];
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
				  if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      {
			tree _q31_pops[1];
			if (gimple_nop_convert (_q31, _q31_pops, valueize))
			  {
			    tree _q50 = _q31_pops[0];
			    if ((_p1 == _q50 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q50, 0) && types_match (_p1, _q50)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q50, _q30 };
				  if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			    if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q31, _q30 };
			    if (gimple_simplify_101 (res_op, seq, valueize, type, captures))
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
		      {
			tree _q30_pops[1];
			if (gimple_nop_convert (_q30, _q30_pops, valueize))
			  {
			    tree _q40 = _q30_pops[0];
			    if ((_p1 == _q40 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q40, 0) && types_match (_p1, _q40)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _q40, _q31 };
				  if (gimple_simplify_102 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q30, _q31 };
			    if (gimple_simplify_102 (res_op, seq, valueize, type, captures))
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
		  {
		    tree _q30_pops[1];
		    if (gimple_nop_convert (_q30, _q30_pops, valueize))
		      {
			tree _q40 = _q30_pops[0];
			if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			      if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  {
		    tree _q31_pops[1];
		    if (gimple_nop_convert (_q31, _q31_pops, valueize))
		      {
			tree _q50 = _q31_pops[0];
			if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			      if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
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
		  {
		    tree _q30_pops[1];
		    if (gimple_nop_convert (_q30, _q30_pops, valueize))
		      {
			tree _q40 = _q30_pops[0];
			if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			  {
			    {
			      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			      if (gimple_simplify_104 (res_op, seq, valueize, type, captures))
			        return true;
			    }
			  }
		      }
		  }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_104 (res_op, seq, valueize, type, captures))
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
      tree _q30 = _p1_pops[0];
      switch (TREE_CODE (_q30))
        {
	case SSA_NAME:
	  if (gimple *_d1 = get_def (valueize, _q30))
	    {
	      if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	        switch (gimple_assign_rhs_code (_a1))
		  {
		  case PLUS_EXPR:
		    {
		      tree _q40 = gimple_assign_rhs1 (_a1);
		      _q40 = do_valueize (valueize, _q40);
		      tree _q41 = gimple_assign_rhs2 (_a1);
		      _q41 = do_valueize (valueize, _q41);
		      if (tree_swap_operands_p (_q40, _q41))
		        std::swap (_q40, _q41);
		      {
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
				  if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      {
			tree _q41_pops[1];
			if (gimple_nop_convert (_q41, _q41_pops, valueize))
			  {
			    tree _q60 = _q41_pops[0];
			    if ((_q60 == _p0 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _p0, 0) && types_match (_q60, _p0)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
				  if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			    if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		      if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q40 };
			    if (gimple_simplify_103 (res_op, seq, valueize, type, captures))
			      return true;
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
			tree _q40_pops[1];
			if (gimple_nop_convert (_q40, _q40_pops, valueize))
			  {
			    tree _q50 = _q40_pops[0];
			    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
			      {
				{
				  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
				  if (gimple_simplify_104 (res_op, seq, valueize, type, captures))
				    return true;
				}
			      }
			  }
		      }
		      if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
			    if (gimple_simplify_104 (res_op, seq, valueize, type, captures))
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
			      case MINUS_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_105 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_105 (res_op, seq, valueize, type, captures))
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR))
			      return true;
			  }
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
		  if (CONSTANT_CLASS_P (_q21))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_65 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR))
			      return true;
			  }
		        }
		    }
		  if (CONSTANT_CLASS_P (_q20))
		    {
		      if (CONSTANT_CLASS_P (_p1))
			{
			  {
			    tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			    if (gimple_simplify_66 (res_op, seq, valueize, type, captures, MINUS_EXPR))
			      return true;
			  }
		        }
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
			      CASE_CONVERT:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  {
				    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q40 };
				    if (gimple_simplify_71 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
				  if (integer_each_onep (_p1))
				    {
				      {
					tree captures[1] ATTRIBUTE_UNUSED = { _q30 };
					if (gimple_simplify_107 (res_op, seq, valueize, type, captures))
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
						  if ((_q60 == _q30 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q30, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
							if (gimple_simplify_108 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q60 == _q31 && ! TREE_SIDE_EFFECTS (_q60)) || operand_equal_p (_q60, _q31, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
							if (gimple_simplify_108 (res_op, seq, valueize, type, captures))
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
				  if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q30, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _q30 };
					if (gimple_simplify_108 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || operand_equal_p (_p1, _q31, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q31, _q30, _q31 };
					if (gimple_simplify_108 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
			          break;
			        }
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
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
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2236;
								    {
								      res_op->set_op (NOP_EXPR, type, 1);
								      res_op->ops[0] = captures[1];
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1137, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2236:;
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
				  switch (TREE_CODE (_q40))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q40))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case PLUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
						  if (tree_swap_operands_p (_q50, _q51))
						    std::swap (_q50, _q51);
						  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || operand_equal_p (_q50, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q50, _q51, _q20 };
							if (gimple_simplify_109 (res_op, seq, valueize, type, captures))
							  return true;
						      }
						    }
						  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || operand_equal_p (_q51, _q20, 0))
						    {
						      {
							tree captures[3] ATTRIBUTE_UNUSED = { _q51, _q50, _q20 };
							if (gimple_simplify_109 (res_op, seq, valueize, type, captures))
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
	      case NEGATE_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  if (integer_each_onep (_p1))
		    {
		      {
			tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			if (gimple_simplify_107 (res_op, seq, valueize, type, captures))
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
		  case PLUS_EXPR:
		    {
		      tree _q30 = gimple_assign_rhs1 (_a1);
		      _q30 = do_valueize (valueize, _q30);
		      tree _q31 = gimple_assign_rhs2 (_a1);
		      _q31 = do_valueize (valueize, _q31);
		      if (tree_swap_operands_p (_q30, _q31))
		        std::swap (_q30, _q31);
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_65 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, MINUS_EXPR))
				  return true;
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
		      if (CONSTANT_CLASS_P (_q31))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_65 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, MINUS_EXPR))
				  return true;
			      }
			    }
		        }
		      if (CONSTANT_CLASS_P (_q30))
			{
			  if (CONSTANT_CLASS_P (_p1))
			    {
			      {
				tree captures[3] ATTRIBUTE_UNUSED = { _q30, _q31, _p1 };
				if (gimple_simplify_66 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
    }
}
if (CONSTANT_CLASS_P (_p0))
  {
    switch (TREE_CODE (_p1))
      {
      case SSA_NAME:
        if (gimple *_d1 = get_def (valueize, _p1))
          {
	    if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	      switch (gimple_assign_rhs_code (_a1))
		{
		case MINUS_EXPR:
		  {
		    tree _q30 = gimple_assign_rhs1 (_a1);
		    _q30 = do_valueize (valueize, _q30);
		    tree _q31 = gimple_assign_rhs2 (_a1);
		    _q31 = do_valueize (valueize, _q31);
		    if (CONSTANT_CLASS_P (_q30))
		      {
			{
			  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q30, _q31 };
			  if (gimple_simplify_106 (res_op, seq, valueize, type, captures))
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
	tree _q30 = _p1_pops[0];
	switch (TREE_CODE (_q30))
	  {
	  case SSA_NAME:
	    if (gimple *_d1 = get_def (valueize, _q30))
	      {
		if (gassign *_a1 = dyn_cast <gassign *> (_d1))
		  switch (gimple_assign_rhs_code (_a1))
		    {
		    case MINUS_EXPR:
		      {
			tree _q40 = gimple_assign_rhs1 (_a1);
			_q40 = do_valueize (valueize, _q40);
			tree _q41 = gimple_assign_rhs2 (_a1);
			_q41 = do_valueize (valueize, _q41);
			if (CONSTANT_CLASS_P (_q40))
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q40, _q41 };
			      if (gimple_simplify_106 (res_op, seq, valueize, type, captures))
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
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2237;
		  {
		    res_op->set_op (BIT_NOT_EXPR, type, 1);
		    res_op->ops[0] = captures[0];
		    res_op->resimplify (lseq, valueize);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1138, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2237:;
		}
	    }
	}
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
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || operand_equal_p (_q40, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q40, _q41, _p0 };
					if (gimple_simplify_109 (res_op, seq, valueize, type, captures))
					  return true;
				      }
				    }
				  if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || operand_equal_p (_q41, _p0, 0))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q41, _q40, _p0 };
					if (gimple_simplify_109 (res_op, seq, valueize, type, captures))
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
					      case POINTER_PLUS_EXPR:
					        {
						  tree _q50 = gimple_assign_rhs1 (_a3);
						  _q50 = do_valueize (valueize, _q50);
						  tree _q51 = gimple_assign_rhs2 (_a3);
						  _q51 = do_valueize (valueize, _q51);
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2238;
									{
									  res_op->set_op (NOP_EXPR, type, 1);
									  {
									    tree _o1[1], _r1;
									    {
									      tree _o2[1], _r2;
									      _o2[0] = captures[1];
									      if (utype != TREE_TYPE (_o2[0]) /* XXX */
									          && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
										{
										  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
										  tem_op.resimplify (lseq, valueize);
										  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
										  if (!_r2) goto next_after_fail2238;
									        }
									      else
									        _r2 = _o2[0];
									      _o1[0] = _r2;
									    }
									    (*res_op).set_op (NEGATE_EXPR, TREE_TYPE (_o1[0]), 1);
									    (*res_op).ops[0] = _o1[0];
									    (*res_op).resimplify (lseq, valueize);
									  }
									  if (type != res_op->type
									      && !useless_type_conversion_p (type, res_op->type))
									    {
									      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail2238;
									      res_op->set_op (NOP_EXPR, type, 1);
									      res_op->resimplify (lseq, valueize);
									    }
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1139, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2238:;
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
									gimple_seq *lseq = seq;
									if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2239;
									{
									  res_op->set_op (NEGATE_EXPR, type, 1);
									  {
									    tree _o1[1], _r1;
									    _o1[0] = captures[1];
									    if (type != TREE_TYPE (_o1[0]) /* XXX */
									        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
									      {
										gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
										tem_op.resimplify (lseq, valueize);
										_r1 = maybe_push_res_to_seq (&tem_op, lseq);
										if (!_r1) goto next_after_fail2239;
									      }
									    else
									      _r1 = _o1[0];
									    res_op->ops[0] = _r1;
									  }
									  res_op->resimplify (lseq, valueize);
									  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1140, __FILE__, __LINE__, true);
									  return true;
									}
next_after_fail2239:;
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
			      case PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
				  if (tree_swap_operands_p (_q30, _q31))
				    std::swap (_q30, _q31);
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
							      case PLUS_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
								  if (tree_swap_operands_p (_q70, _q71))
								    std::swap (_q70, _q71);
								  if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q71, _q30 };
									if (gimple_simplify_110 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q30 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q30, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q30, _q31, _q70, _q30 };
									if (gimple_simplify_110 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q70 == _q31 && ! TREE_SIDE_EFFECTS (_q70)) || operand_equal_p (_q70, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q71, _q31 };
									if (gimple_simplify_110 (res_op, seq, valueize, type, captures))
									  return true;
								      }
								    }
								  if ((_q71 == _q31 && ! TREE_SIDE_EFFECTS (_q71)) || operand_equal_p (_q71, _q31, 0))
								    {
								      {
									tree captures[4] ATTRIBUTE_UNUSED = { _q31, _q30, _q70, _q31 };
									if (gimple_simplify_110 (res_op, seq, valueize, type, captures))
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q30 = gimple_assign_rhs1 (_a2);
				  _q30 = do_valueize (valueize, _q30);
				  tree _q31 = gimple_assign_rhs2 (_a2);
				  _q31 = do_valueize (valueize, _q31);
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
							      case POINTER_PLUS_EXPR:
							        {
								  tree _q70 = gimple_assign_rhs1 (_a4);
								  _q70 = do_valueize (valueize, _q70);
								  tree _q71 = gimple_assign_rhs2 (_a4);
								  _q71 = do_valueize (valueize, _q71);
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
											gimple_seq *lseq = seq;
											if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2240;
											{
											  res_op->set_op (NOP_EXPR, type, 1);
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
												  if (!_r2) goto next_after_fail2240;
											        }
											      else
											        _r2 = _o2[0];
											      _o1[0] = _r2;
											    }
											    {
											      tree _o2[1], _r2;
											      _o2[0] = captures[2];
											      if (utype != TREE_TYPE (_o2[0]) /* XXX */
											          && !useless_type_conversion_p (utype, TREE_TYPE (_o2[0])))
												{
												  gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, utype, _o2[0]);
												  tem_op.resimplify (lseq, valueize);
												  _r2 = maybe_push_res_to_seq (&tem_op, lseq);
												  if (!_r2) goto next_after_fail2240;
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
											      if (!(res_op->ops[0] = maybe_push_res_to_seq (res_op, lseq))) goto next_after_fail2240;
											      res_op->set_op (NOP_EXPR, type, 1);
											      res_op->resimplify (lseq, valueize);
											    }
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1141, __FILE__, __LINE__, true);
											  return true;
											}
next_after_fail2240:;
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
											gimple_seq *lseq = seq;
											if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2241;
											{
											  res_op->set_op (MINUS_EXPR, type, 2);
											  {
											    tree _o1[1], _r1;
											    _o1[0] = captures[1];
											    if (type != TREE_TYPE (_o1[0]) /* XXX */
											        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
											      {
												gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
												tem_op.resimplify (lseq, valueize);
												_r1 = maybe_push_res_to_seq (&tem_op, lseq);
												if (!_r1) goto next_after_fail2241;
											      }
											    else
											      _r1 = _o1[0];
											    res_op->ops[0] = _r1;
											  }
											  {
											    tree _o1[1], _r1;
											    _o1[0] = captures[2];
											    if (type != TREE_TYPE (_o1[0]) /* XXX */
											        && !useless_type_conversion_p (type, TREE_TYPE (_o1[0])))
											      {
												gimple_match_op tem_op (res_op->cond.any_else (), NOP_EXPR, type, _o1[0]);
												tem_op.resimplify (lseq, valueize);
												_r1 = maybe_push_res_to_seq (&tem_op, lseq);
												if (!_r1) goto next_after_fail2241;
											      }
											    else
											      _r1 = _o1[0];
											    res_op->ops[1] = _r1;
											  }
											  res_op->resimplify (lseq, valueize);
											  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1142, __FILE__, __LINE__, true);
											  return true;
											}
next_after_fail2241:;
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
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q51 };
					if (gimple_simplify_74 (res_op, seq, valueize, type, captures, MINUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1, _q50 };
					if (gimple_simplify_74 (res_op, seq, valueize, type, captures, MINUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q51 };
					if (gimple_simplify_74 (res_op, seq, valueize, type, captures, MINUS_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q21, _q20, _p1, _q50 };
					if (gimple_simplify_74 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
	      case MULT_EXPR:
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
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q31 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, MINUS_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _p1, _q30 };
			if (gimple_simplify_75 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
	      case MULT_EXPR:
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
			if (gimple_simplify_76 (res_op, seq, valueize, type, captures, MINUS_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_76 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
	      case MULT_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (tree_swap_operands_p (_q30, _q31))
		    std::swap (_q30, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (gimple_zero_one_valued_p (_q31, valueize))
					{
					  {
					    tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q41, _q31 };
					    if (gimple_simplify_111 (res_op, seq, valueize, type, captures))
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
		if (gimple_zero_one_valued_p (_q30, valueize))
		  {
		    switch (TREE_CODE (_q31))
		      {
		      case SSA_NAME:
		        if (gimple *_d2 = get_def (valueize, _q31))
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
				    if ((_q50 == _p0 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _p0, 0) && types_match (_q50, _p0)))
				      {
					{
					  tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q51, _q30 };
					  if (gimple_simplify_111 (res_op, seq, valueize, type, captures))
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2242;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2242;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2242;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2242:;
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2243;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2243;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2243;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2243:;
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
      tree captures[1] ATTRIBUTE_UNUSED = { _p1 };
      gimple_seq *lseq = seq;
      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2244;
      {
	res_op->set_op (NEGATE_EXPR, type, 1);
	res_op->ops[0] = captures[0];
	res_op->resimplify (lseq, valueize);
	if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1143, __FILE__, __LINE__, true);
	return true;
      }
next_after_fail2244:;
    }
  }
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (fold_real_zero_addition_p (type, captures[1], captures[0], 0)
)
	{
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2245;
	  {
	    res_op->set_op (NEGATE_EXPR, type, 1);
	    res_op->ops[0] = captures[1];
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1144, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2245:;
	}
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
 && (TREE_CODE_CLASS (MINUS_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2246;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2246;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2246;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2246:;
		      }
		  }
		  if (integer_each_onep (_q31))
		    {
		      if (integer_zerop (_q32))
			{
			  {
			    tree captures[5] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31, _q32 };
			    if (gimple_simplify_112 (res_op, seq, valueize, type, captures))
			      return true;
			  }
		        }
		    }
	          break;
	        }
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
				  case VEC_COND_EXPR:
				    {
				      tree _q40 = gimple_assign_rhs1 (_a2);
				      _q40 = do_valueize (valueize, _q40);
				      tree _q41 = gimple_assign_rhs2 (_a2);
				      _q41 = do_valueize (valueize, _q41);
				      tree _q42 = gimple_assign_rhs3 (_a2);
				      _q42 = do_valueize (valueize, _q42);
				      if (integer_each_onep (_q41))
					{
					  if (integer_zerop (_q42))
					    {
					      {
						tree captures[5] ATTRIBUTE_UNUSED = { _p0, _q30, _q40, _q41, _q42 };
						if (gimple_simplify_112 (res_op, seq, valueize, type, captures))
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2247;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2247;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2247;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2247:;
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2248;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2248;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2248;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2248:;
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
	      case RDIV_EXPR:
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
			      case RDIV_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  if ((_q51 == _q21 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q21, 0) && types_match (_q51, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q50 };
					if (gimple_simplify_83 (res_op, seq, valueize, type, captures, MINUS_EXPR))
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
			  if (gcall *_c2 = dyn_cast <gcall *> (_d2))
			    switch (gimple_call_combined_fn (_c2))
			      {
			      case CFN_BUILT_IN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNT))
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
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTLL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTLL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTLL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTLL))
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
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_POPCOUNT:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_POPCOUNT:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_POPCOUNT:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_POPCOUNT))
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
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTIMAX:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTIMAX:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTIMAX:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
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
						default:;
						}
				          }
				        break;
				      default:;
				      }
			          }
			        break;
			      case CFN_BUILT_IN_POPCOUNTL:
			        if (gimple_call_num_args (_c2) == 1)
			          {
				    tree _q30 = gimple_call_arg (_c2, 0);
				    _q30 = do_valueize (valueize, _q30);
				    switch (TREE_CODE (_q21))
				      {
				      case SSA_NAME:
				        if (gimple *_d3 = get_def (valueize, _q21))
				          {
					    if (gcall *_c3 = dyn_cast <gcall *> (_d3))
					      switch (gimple_call_combined_fn (_c3))
						{
						case CFN_BUILT_IN_POPCOUNTL:
						  if (gimple_call_num_args (_c3) == 1)
						    {
						      tree _q50 = gimple_call_arg (_c3, 0);
						      _q50 = do_valueize (valueize, _q50);
						      switch (TREE_CODE (_p1))
						        {
							case SSA_NAME:
							  if (gimple *_d4 = get_def (valueize, _p1))
							    {
							      if (gcall *_c4 = dyn_cast <gcall *> (_d4))
							        switch (gimple_call_combined_fn (_c4))
								  {
								  case CFN_BUILT_IN_POPCOUNTL:
								    if (gimple_call_num_args (_c4) == 1)
								      {
									tree _q70 = gimple_call_arg (_c4, 0);
									_q70 = do_valueize (valueize, _q70);
									switch (TREE_CODE (_q70))
									  {
									  case SSA_NAME:
									    if (gimple *_d5 = get_def (valueize, _q70))
									      {
										if (gassign *_a5 = dyn_cast <gassign *> (_d5))
										  switch (gimple_assign_rhs_code (_a5))
										    {
										    case BIT_AND_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_AND_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
										        break;
										      }
										    case BIT_IOR_EXPR:
										      {
											tree _q80 = gimple_assign_rhs1 (_a5);
											_q80 = do_valueize (valueize, _q80);
											tree _q81 = gimple_assign_rhs2 (_a5);
											_q81 = do_valueize (valueize, _q81);
											if (tree_swap_operands_p (_q80, _q81))
											  std::swap (_q80, _q81);
											if ((_q80 == _q30 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q30, 0) && types_match (_q80, _q30)))
											  {
											    if ((_q81 == _q50 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q50, 0) && types_match (_q81, _q50)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
												    return true;
												}
											      }
											  }
											if ((_q80 == _q50 && ! TREE_SIDE_EFFECTS (_q80)) || (operand_equal_p (_q80, _q50, 0) && types_match (_q80, _q50)))
											  {
											    if ((_q81 == _q30 && ! TREE_SIDE_EFFECTS (_q81)) || (operand_equal_p (_q81, _q30, 0) && types_match (_q81, _q30)))
											      {
												{
												  tree captures[7] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q21, _q50, _p1, _q70 };
												  if (gimple_simplify_114 (res_op, seq, valueize, type, captures, BIT_IOR_EXPR, BIT_AND_EXPR, CFN_BUILT_IN_POPCOUNTL))
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
		        }
		      break;
		    default:;
		    }
	          break;
	        }
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
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
				  if (gimple_vec_same_elem_p (_q31, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31, _q22, _p1 };
					    if (gimple_simplify_115 (res_op, seq, valueize, type, captures))
					      return true;
					  }
				        }
				    }
				  if (gimple_vec_same_elem_p (_q30, valueize))
				    {
				      if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
					{
					  {
					    tree captures[6] ATTRIBUTE_UNUSED = { _p0, _q20, _q31, _q30, _q22, _p1 };
					    if (gimple_simplify_115 (res_op, seq, valueize, type, captures))
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
	  else if (gcall *_c1 = dyn_cast <gcall *> (_d1))
	    switch (gimple_call_combined_fn (_c1))
	      {
	      case CFN_BUILT_IN_LOG:
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
				case CFN_BUILT_IN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG))
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
	      case CFN_BUILT_IN_LOG2:
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
				case CFN_BUILT_IN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2))
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
	      case CFN_BUILT_IN_LOGF:
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
				case CFN_BUILT_IN_LOGF:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF))
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
	      case CFN_BUILT_IN_LOGL:
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
				case CFN_BUILT_IN_LOGL:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL))
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
	      case CFN_BUILT_IN_LOG10F:
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
				case CFN_BUILT_IN_LOG10F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F))
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
	      case CFN_BUILT_IN_LOG10L:
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
				case CFN_BUILT_IN_LOG10L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L))
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
	      case CFN_LOG:
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
				case CFN_LOG:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_LOG))
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
	      case CFN_LOG2:
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
				case CFN_LOG2:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_LOG2))
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
	      case CFN_LOG10:
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
				case CFN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_LOG10))
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
	      case CFN_BUILT_IN_LOG10:
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
				case CFN_BUILT_IN_LOG10:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10))
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
	      case CFN_BUILT_IN_LOG2F:
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
				case CFN_BUILT_IN_LOG2F:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F))
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
	      case CFN_BUILT_IN_LOG2L:
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
				case CFN_BUILT_IN_LOG2L:
				  if (gimple_call_num_args (_c2) == 1)
				    {
				      tree _q40 = gimple_call_arg (_c2, 0);
				      _q40 = do_valueize (valueize, _q40);
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _p1, _q40 };
					if (gimple_simplify_113 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L))
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MAX_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if (tree_swap_operands_p (_q40, _q41))
				    std::swap (_q40, _q41);
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
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2249;
								{
								  res_op->set_op (BIT_AND_EXPR, type, 2);
								  res_op->ops[0] = captures[0];
								  res_op->ops[1] = captures[1];
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1145, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2249:;
							      }
							    else
							      {
								gimple_seq *lseq = seq;
								if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2250;
								{
								  res_op->set_op (COND_EXPR, type, 3);
								  {
								    tree _o1[2], _r1;
								    _o1[0] = captures[0];
								    _o1[1] = captures[1];
								    gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, boolean_type_node, _o1[0], _o1[1]);
								    tem_op.resimplify (lseq, valueize);
								    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								    if (!_r1) goto next_after_fail2250;
								    res_op->ops[0] = _r1;
								  }
								  res_op->ops[1] = captures[0];
								  {
								    tree _o1[2], _r1;
								    _o1[0] = captures[0];
								    _o1[1] = captures[1];
								    gimple_match_op tem_op (res_op->cond.any_else (), BIT_AND_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
								    tem_op.resimplify (lseq, valueize);
								    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
								    if (!_r1) goto next_after_fail2250;
								    res_op->ops[2] = _r1;
								  }
								  res_op->resimplify (lseq, valueize);
								  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1146, __FILE__, __LINE__, true);
								  return true;
								}
next_after_fail2250:;
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
  switch (TREE_CODE (_p0))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p0))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case VEC_PERM_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  tree _q22 = gimple_assign_rhs3 (_a1);
		  _q22 = do_valueize (valueize, _q22);
		  if ((_q21 == _q20 && ! TREE_SIDE_EFFECTS (_q21)) || (operand_equal_p (_q21, _q20, 0) && types_match (_q21, _q20)))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case SSA_NAME:
			  if (gimple *_d2 = get_def (valueize, _p1))
			    {
			      if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			        switch (gimple_assign_rhs_code (_a2))
				  {
				  case VEC_PERM_EXPR:
				    {
				      tree _q60 = gimple_assign_rhs1 (_a2);
				      _q60 = do_valueize (valueize, _q60);
				      tree _q61 = gimple_assign_rhs2 (_a2);
				      _q61 = do_valueize (valueize, _q61);
				      tree _q62 = gimple_assign_rhs3 (_a2);
				      _q62 = do_valueize (valueize, _q62);
				      if ((_q61 == _q60 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q60, 0) && types_match (_q61, _q60)))
					{
					  if ((_q62 == _q22 && ! TREE_SIDE_EFFECTS (_q62)) || (operand_equal_p (_q62, _q22, 0) && types_match (_q62, _q22)))
					    {
					      {
						tree captures[4] ATTRIBUTE_UNUSED = { _q20, _q22, _q60 };
						if (VECTOR_INTEGER_TYPE_P (type)
)
						  {
						    gimple_seq *lseq = seq;
						    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2251;
						    {
						      res_op->set_op (VEC_PERM_EXPR, type, 3);
						      {
							tree _o1[2], _r1;
							_o1[0] = captures[0];
							_o1[1] = captures[2];
							gimple_match_op tem_op (res_op->cond.any_else (), MINUS_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
							tem_op.resimplify (lseq, valueize);
							_r1 = maybe_push_res_to_seq (&tem_op, lseq);
							if (!_r1) goto next_after_fail2251;
							captures[3] = _r1;
						      }
						      res_op->ops[0] = captures[3];
						      res_op->ops[1] = captures[3];
						      res_op->ops[2] = captures[1];
						      res_op->resimplify (lseq, valueize);
						      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1103, __FILE__, __LINE__, true);
						      return true;
						    }
next_after_fail2251:;
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
		      switch (TREE_CODE (_q22))
		        {
			case VECTOR_CST:
			  {
			    switch (TREE_CODE (_p1))
			      {
			      case SSA_NAME:
			        if (gimple *_d2 = get_def (valueize, _p1))
			          {
				    if (gassign *_a2 = dyn_cast <gassign *> (_d2))
				      switch (gimple_assign_rhs_code (_a2))
					{
					case VEC_PERM_EXPR:
					  {
					    tree _q60 = gimple_assign_rhs1 (_a2);
					    _q60 = do_valueize (valueize, _q60);
					    tree _q61 = gimple_assign_rhs2 (_a2);
					    _q61 = do_valueize (valueize, _q61);
					    tree _q62 = gimple_assign_rhs3 (_a2);
					    _q62 = do_valueize (valueize, _q62);
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
							    if (gimple_simplify_89 (res_op, seq, valueize, type, captures, MINUS_EXPR))
							      return true;
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
			      default:;
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
			      case RSHIFT_EXPR:
			        {
				  tree _q50 = gimple_assign_rhs1 (_a2);
				  _q50 = do_valueize (valueize, _q50);
				  tree _q51 = gimple_assign_rhs2 (_a2);
				  _q51 = do_valueize (valueize, _q51);
				  switch (TREE_CODE (_q50))
				    {
				    case SSA_NAME:
				      if (gimple *_d3 = get_def (valueize, _q50))
				        {
					  if (gassign *_a3 = dyn_cast <gassign *> (_d3))
					    switch (gimple_assign_rhs_code (_a3))
					      {
					      case BIT_XOR_EXPR:
					        {
						  tree _q60 = gimple_assign_rhs1 (_a3);
						  _q60 = do_valueize (valueize, _q60);
						  tree _q61 = gimple_assign_rhs2 (_a3);
						  _q61 = do_valueize (valueize, _q61);
						  if (tree_swap_operands_p (_q60, _q61))
						    std::swap (_q60, _q61);
						  if ((_q60 == _q20 && ! TREE_SIDE_EFFECTS (_q60)) || (operand_equal_p (_q60, _q20, 0) && types_match (_q60, _q20)))
						    {
						      if ((_q61 == _q21 && ! TREE_SIDE_EFFECTS (_q61)) || (operand_equal_p (_q61, _q21, 0) && types_match (_q61, _q21)))
							{
							  if (integer_onep (_q51))
							    {
							      {
								tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
								if (fold_before_rtl_expansion_p ()
 && VECTOR_TYPE_P (type)
 && direct_internal_fn_supported_p (IFN_AVG_CEIL, type, OPTIMIZE_FOR_BOTH)
)
								  {
								    gimple_seq *lseq = seq;
								    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2252;
								    {
								      res_op->set_op (CFN_AVG_CEIL, type, 2);
								      res_op->ops[0] = captures[0];
								      res_op->ops[1] = captures[1];
								      res_op->resimplify (lseq, valueize);
								      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1147, __FILE__, __LINE__, true);
								      return true;
								    }
next_after_fail2252:;
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
gimple_simplify_LE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
			      if (gimple_simplify_467 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
									      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, LE_EXPR))
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
		      if ((_p1 == _q31 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q31, 0) && types_match (_p1, _q31)))
			{
			  {
			    tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q30, _q31 };
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
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p0, _q20, _q21 };
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
			if (gimple_simplify_469 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
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
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q30, _p0 };
			if (gimple_simplify_470 (res_op, seq, valueize, type, captures, GE_EXPR))
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
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_471 (res_op, seq, valueize, type, captures, LE_EXPR))
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
	      case PLUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if (tree_swap_operands_p (_q20, _q21))
		    std::swap (_q20, _q21);
		  if (integer_minus_onep (_q21))
		    {
		      switch (TREE_CODE (_p1))
		        {
			case INTEGER_CST:
			  {
			    {
			      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _p1 };
			      if (gimple_simplify_499 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR))
			        return true;
			    }
			    break;
			  }
		        default:;
		        }
		    }
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
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q21 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q21, 0) && types_match (_q50, _q21)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q51 == _q20 && ! TREE_SIDE_EFFECTS (_q51)) || (operand_equal_p (_q51, _q20, 0) && types_match (_q51, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q50 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q21, _q20, _q51 };
					if (gimple_simplify_472 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					      if (gimple_simplify_473 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q21, _q20 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					      if (gimple_simplify_236 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				if (gimple_simplify_245 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					if (gimple_simplify_475 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q21, _q51 };
					if (gimple_simplify_476 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					if (gimple_simplify_249 (res_op, seq, valueize, type, captures, LE_EXPR))
					  return true;
				      }
				    }
				  if ((_q50 == _q20 && ! TREE_SIDE_EFFECTS (_q50)) || (operand_equal_p (_q50, _q20, 0) && types_match (_q50, _q20)))
				    {
				      {
					tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _q51 };
					if (gimple_simplify_250 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_474 (res_op, seq, valueize, type, captures, GE_EXPR))
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
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			if (gimple_simplify_248 (res_op, seq, valueize, type, captures, GE_EXPR))
			  return true;
		      }
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
		  if (tree_expr_nonnegative_p (_q20))
		    {
		      if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
			{
			  {
			    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, LE_EXPR, BIT_AND_EXPR))
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
  switch (TREE_CODE (_p1))
    {
    case SSA_NAME:
      if (gimple *_d1 = get_def (valueize, _p1))
        {
	  if (gassign *_a1 = dyn_cast <gassign *> (_d1))
	    switch (gimple_assign_rhs_code (_a1))
	      {
	      case BIT_IOR_EXPR:
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
			    if (gimple_simplify_477 (res_op, seq, valueize, type, captures, GE_EXPR, BIT_IOR_EXPR))
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
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR, GE_EXPR))
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_258 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR, LE_EXPR))
			  return true;
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
		  if ((_q30 == _p0 && ! TREE_SIDE_EFFECTS (_q30)) || (operand_equal_p (_q30, _p0, 0) && types_match (_q30, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q31 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR))
			  return true;
		      }
		    }
		  if ((_q31 == _p0 && ! TREE_SIDE_EFFECTS (_q31)) || (operand_equal_p (_q31, _p0, 0) && types_match (_q31, _p0)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR))
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
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q20, _q21 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR))
			  return true;
		      }
		    }
		  if ((_p1 == _q21 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q21, 0) && types_match (_p1, _q21)))
		    {
		      {
			tree captures[2] ATTRIBUTE_UNUSED = { _q21, _q20 };
			if (gimple_simplify_480 (res_op, seq, valueize, type, captures, MIN_EXPR, GE_EXPR))
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MIN_EXPR, LE_EXPR, BIT_IOR_EXPR))
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
	      case MAX_EXPR:
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
				if (gimple_simplify_481 (res_op, seq, valueize, type, captures, MAX_EXPR, LE_EXPR, BIT_AND_EXPR))
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2628;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2628;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2628;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2628:;
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2629;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2629;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2629;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2629:;
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
 && (TREE_CODE_CLASS (LE_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2630;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2630;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), LE_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2630;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2630:;
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
      if (gimple_simplify_500 (res_op, seq, valueize, type, captures, LE_EXPR, LT_EXPR))
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
			      if (gimple_simplify_279 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
	if (gimple_simplify_281 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				    if (gimple_simplify_285 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					if (gimple_simplify_285 (res_op, seq, valueize, type, captures, LE_EXPR))
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
		      if (gimple_simplify_284 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
					if (gimple_simplify_283 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					    if (gimple_simplify_283 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			  if (gimple_simplify_284 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
	  if (gimple_simplify_286 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, PLUS_EXPR, LE_EXPR))
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
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR))
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
				if (gimple_simplify_287 (res_op, seq, valueize, type, captures, MINUS_EXPR, LE_EXPR))
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
				if (gimple_simplify_288 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, LE_EXPR, LE_EXPR))
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
			  if (gimple_simplify_292 (res_op, seq, valueize, type, captures, LE_EXPR, LE_EXPR))
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
				if (gimple_simplify_485 (res_op, seq, valueize, type, captures, LE_EXPR))
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
						if (gimple_simplify_486 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
				    if (gimple_simplify_296 (res_op, seq, valueize, type, captures, LE_EXPR))
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
		    if (gimple_simplify_297 (res_op, seq, valueize, type, captures, LE_EXPR))
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
								    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
						    if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
							  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
						if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					  if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				if (gimple_simplify_315 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			if (gimple_simplify_487 (res_op, seq, valueize, type, captures, LE_EXPR))
			  return true;
		      }
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
				tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
				if (gimple_simplify_501 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR))
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
				    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
		      if (gimple_simplify_295 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
						    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				    if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, LE_EXPR))
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
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTF, LE_EXPR))
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
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, LE_EXPR))
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
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRTL, LE_EXPR))
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
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, LE_EXPR))
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
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_SQRT, LE_EXPR))
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
					if (gimple_simplify_290 (res_op, seq, valueize, type, captures, CFN_SQRT, LE_EXPR))
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
			    if (gimple_simplify_289 (res_op, seq, valueize, type, captures, CFN_SQRT, LE_EXPR))
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
					  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
				if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
			  if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
		if (gimple_simplify_316 (res_op, seq, valueize, type, captures, LE_EXPR))
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
	if (gimple_simplify_488 (res_op, seq, valueize, type, captures, LE_EXPR))
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
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, LE_EXPR, GT_EXPR))
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
							      if (gimple_simplify_489 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
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
			      if (gimple_simplify_484 (res_op, seq, valueize, type, captures, GE_EXPR, LE_EXPR))
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
	      case MINUS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  tree _q21 = gimple_assign_rhs2 (_a1);
		  _q21 = do_valueize (valueize, _q21);
		  if ((_p1 == _q20 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q20, 0) && types_match (_p1, _q20)))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p0, _q20, _q21 };
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
		  switch (TREE_CODE (_q30))
		    {
		    case SSA_NAME:
		      if (gimple *_d2 = get_def (valueize, _q30))
		        {
			  if (gassign *_a2 = dyn_cast <gassign *> (_d2))
			    switch (gimple_assign_rhs_code (_a2))
			      {
			      case MINUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
				    {
				      if (integer_minus_onep (_q31))
					{
					  {
					    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q41 };
					    if (gimple_simplify_502 (res_op, seq, valueize, type, captures, GE_EXPR))
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
				  case CFN_SUB_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q30 = gimple_call_arg (_c2, 0);
					_q30 = do_valueize (valueize, _q30);
					tree _q31 = gimple_call_arg (_c2, 1);
					_q31 = do_valueize (valueize, _q31);
					if ((_p1 == _q30 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _q30, 0) && types_match (_p1, _q30)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q20, _q30, _q31 };
					      if (gimple_simplify_503 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR))
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
				  case CFN_ADD_OVERFLOW:
				    if (gimple_call_num_args (_c2) == 2)
				      {
					tree _q40 = gimple_call_arg (_c2, 0);
					_q40 = do_valueize (valueize, _q40);
					tree _q41 = gimple_call_arg (_c2, 1);
					_q41 = do_valueize (valueize, _q41);
					if (tree_swap_operands_p (_q40, _q41))
					  std::swap (_q40, _q41);
					if ((_q40 == _p0 && ! TREE_SIDE_EFFECTS (_q40)) || (operand_equal_p (_q40, _p0, 0) && types_match (_q40, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q41 };
					      if (gimple_simplify_504 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
					        return true;
					    }
					  }
					if ((_q41 == _p0 && ! TREE_SIDE_EFFECTS (_q41)) || (operand_equal_p (_q41, _p0, 0) && types_match (_q41, _p0)))
					  {
					    {
					      tree captures[3] ATTRIBUTE_UNUSED = { _q30, _p0, _q40 };
					      if (gimple_simplify_504 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
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
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  if (integer_all_onesp (_q30))
		    {
		      {
			tree captures[3] ATTRIBUTE_UNUSED = { _p1, _q31, _p0 };
			if (gimple_simplify_505 (res_op, seq, valueize, type, captures, GE_EXPR, EQ_EXPR))
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
				if (gimple_simplify_495 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, PLUS_EXPR, MINUS_EXPR, LE_EXPR, GE_EXPR))
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
				if (gimple_simplify_496 (res_op, seq, valueize, type, captures, MINUS_EXPR, PLUS_EXPR, LE_EXPR, GE_EXPR))
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
				if (gimple_simplify_323 (res_op, seq, valueize, type, captures, LE_EXPR, GE_EXPR))
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
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZ))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFS:
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
			    if (gimple_simplify_508 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFS))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSIMAX:
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
			    if (gimple_simplify_508 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSIMAX))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_328 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNT))
			    return true;
			}
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
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZL))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSL:
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
			    if (gimple_simplify_508 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSL))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTLL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_328 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTLL))
			    return true;
			}
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, LE_EXPR))
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
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZIMAX))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_POPCOUNT:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_328 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, CFN_POPCOUNT))
			    return true;
			}
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
			    if (gimple_simplify_498 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR))
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
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR, CFN_CTZ))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_FFS:
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
			    if (gimple_simplify_508 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_FFS))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTIMAX:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_328 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTIMAX))
			    return true;
			}
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_POPCOUNTL:
	        if (gimple_call_num_args (_c1) == 1)
	          {
		    tree _q20 = gimple_call_arg (_c1, 0);
		    _q20 = do_valueize (valueize, _q20);
		    if (integer_zerop (_p1))
		      {
			{
			  tree captures[1] ATTRIBUTE_UNUSED = { _q20 };
			  if (gimple_simplify_328 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, CFN_BUILT_IN_POPCOUNTL))
			    return true;
			}
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
			    if (gimple_simplify_497 (res_op, seq, valueize, type, captures, LE_EXPR, NE_EXPR, CFN_BUILT_IN_CTZLL))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR))
			      return true;
			  }
		          break;
		        }
		      default:;
		      }
	          }
	        break;
	      case CFN_BUILT_IN_FFSLL:
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
			    if (gimple_simplify_508 (res_op, seq, valueize, type, captures, LE_EXPR, EQ_EXPR, NE_EXPR, BIT_IOR_EXPR, CFN_BUILT_IN_FFSLL))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, LE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, LE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG, CFN_BUILT_IN_EXP, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2, CFN_BUILT_IN_EXP2, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGF, CFN_BUILT_IN_EXPF, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOGL, CFN_BUILT_IN_EXPL, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10F, CFN_BUILT_IN_EXP10F, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10L, CFN_BUILT_IN_EXP10L, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG, CFN_EXP, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG2, CFN_EXP2, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_LOG10, CFN_EXP10, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR))
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
			    if (gimple_simplify_507 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG10, CFN_BUILT_IN_EXP10, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2F, CFN_BUILT_IN_EXP2F, GE_EXPR))
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
			    if (gimple_simplify_506 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_LOG2L, CFN_BUILT_IN_EXP2L, GE_EXPR))
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
gimple_simplify_CFN_BUILT_IN_POWIF (gimple_match_op *res_op, gimple_seq *seq,
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2728;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2728:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2729;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2729:;
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
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2730;
				    {
				      res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				      res_op->ops[0] = captures[2];
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2730;
					res_op->ops[1] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1235, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2730:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2731;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2731:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2732;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2732:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2733;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2733:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2734;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIF, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2734:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2735;
		      {
			res_op->set_op (CFN_BUILT_IN_LDEXPF, type, 2);
			res_op->ops[0] =  build_one_cst (type);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
			  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2735;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1237, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2735:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2736;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1238, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2736:;
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2737;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1239, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2737:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2738;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1240, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2738:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2739;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1241, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2739:;
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
gimple_simplify_CFN_BUILT_IN_POWIL (gimple_match_op *res_op, gimple_seq *seq,
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2752;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2752:;
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
			      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2753;
			      {
				res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				res_op->ops[0] = captures[0];
				res_op->ops[1] = captures[1];
				res_op->resimplify (lseq, valueize);
				if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1234, __FILE__, __LINE__, true);
				return true;
			      }
next_after_fail2753:;
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
				    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2754;
				    {
				      res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				      res_op->ops[0] = captures[2];
				      {
					tree _o1[1], _r1;
					_o1[0] = captures[3];
					gimple_match_op tem_op (res_op->cond.any_else (), NEGATE_EXPR, TREE_TYPE (_o1[0]), _o1[0]);
					tem_op.resimplify (lseq, valueize);
					_r1 = maybe_push_res_to_seq (&tem_op, lseq);
					if (!_r1) goto next_after_fail2754;
					res_op->ops[1] = _r1;
				      }
				      res_op->resimplify (lseq, valueize);
				      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1235, __FILE__, __LINE__, true);
				      return true;
				    }
next_after_fail2754:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2755;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2755:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2756;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2756:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2757;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2757:;
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
				if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2758;
				{
				  res_op->set_op (CFN_BUILT_IN_POWIL, type, 2);
				  res_op->ops[0] = captures[0];
				  res_op->ops[1] = captures[2];
				  res_op->resimplify (lseq, valueize);
				  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1236, __FILE__, __LINE__, true);
				  return true;
				}
next_after_fail2758:;
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
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2759;
		      {
			res_op->set_op (CFN_BUILT_IN_LDEXPL, type, 2);
			res_op->ops[0] =  build_one_cst (type);
			{
			  tree _o1[2], _r1;
			  _o1[0] = captures[1];
			  _o1[1] = build_int_cst (integer_type_node,
 exact_log2 (tmp));
			  gimple_match_op tem_op (res_op->cond.any_else (), MULT_EXPR, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
			  tem_op.resimplify (lseq, valueize);
			  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
			  if (!_r1) goto next_after_fail2759;
			  res_op->ops[1] = _r1;
			}
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1237, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2759:;
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
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2760;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1238, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2760:;
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2761;
	      {
		tree tem;
		tem =  build_real (type, dconst1);
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1239, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2761:;
	    }
	  else
	    {
	      if (wi::to_wide (captures[1]) == 1
)
		{
		  gimple_seq *lseq = seq;
		  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2762;
		  {
		    tree tem;
		    tem = captures[0];
		    res_op->set_value (tem);
		    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1240, __FILE__, __LINE__, true);
		    return true;
		  }
next_after_fail2762:;
		}
	      else
		{
		  if (wi::to_wide (captures[1]) == -1
)
		    {
		      gimple_seq *lseq = seq;
		      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2763;
		      {
			res_op->set_op (RDIV_EXPR, type, 2);
			res_op->ops[0] =  build_real (type, dconst1);
			res_op->ops[1] = captures[0];
			res_op->resimplify (lseq, valueize);
			if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1241, __FILE__, __LINE__, true);
			return true;
		      }
next_after_fail2763:;
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
gimple_simplify_CFN_HYPOT (gimple_match_op *res_op, gimple_seq *seq,
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
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2776;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2776:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q20 = gimple_assign_rhs1 (_a1);
		  _q20 = do_valueize (valueize, _q20);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _q20, _p1 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2777;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1242, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2777:;
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
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2778;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2778:;
		  }
	          break;
	        }
	      case ABS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _q30 };
		    const combined_fn hypots = CFN_HYPOT;
		    gimple_seq *lseq = seq;
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2779;
		    {
		      res_op->set_op (hypots, type, 2);
		      res_op->ops[0] = captures[0];
		      res_op->ops[1] = captures[1];
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1243, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2779:;
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
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_HYPOT))
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
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_HYPOT))
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
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_HYPOT))
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
		      if (gimple_simplify_548 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_HYPOT))
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
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGN, CFN_HYPOT))
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
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNF, CFN_HYPOT))
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
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_COPYSIGNL, CFN_HYPOT))
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
		      if (gimple_simplify_549 (res_op, seq, valueize, type, captures, CFN_COPYSIGN, CFN_HYPOT))
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
      if (gimple_simplify_550 (res_op, seq, valueize, type, captures, CFN_HYPOT))
        return true;
    }
  }
  if (real_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	if (gimple_simplify_550 (res_op, seq, valueize, type, captures, CFN_HYPOT))
	  return true;
      }
    }
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_551 (res_op, seq, valueize, type, captures, CFN_HYPOT))
	  return true;
      }
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2867;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2867;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2867:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMIN (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMIN))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2868;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAX, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2868;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2868:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF16 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF16))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2870;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF16, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2870;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2870:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF64))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2872;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF64, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2872;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2872:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF32X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF32X))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2874;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF32X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2874;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2874:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMINF128X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_644 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMINF128X))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2876;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMAXF128X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2876;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2876:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2878;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2878;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2878:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXL (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXL))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2880;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINL, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2880;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2880:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF64 (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2883;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF64, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2883;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2883:;
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
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_FMAXF64X (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if ((_p1 == _p0 && ! TREE_SIDE_EFFECTS (_p1)) || (operand_equal_p (_p1, _p0, 0) && types_match (_p1, _p0)))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_642 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	  return true;
      }
    }
  switch (TREE_CODE (_p1))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	    return true;
	}
        break;
      }
    default:;
    }
  switch (TREE_CODE (_p0))
    {
    case REAL_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p1, _p0 };
	  if (gimple_simplify_643 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
	    return true;
	}
        break;
      }
    default:;
    }
  {
    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
    if (gimple_simplify_645 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_FMAXF64X))
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
					if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2886;
					{
					  res_op->set_op (NEGATE_EXPR, type, 1);
					  {
					    tree _o1[2], _r1;
					    _o1[0] = captures[1];
					    _o1[1] = captures[3];
					    gimple_match_op tem_op (res_op->cond.any_else (), CFN_BUILT_IN_FMINF64X, TREE_TYPE (_o1[0]), _o1[0], _o1[1]);
					    tem_op.resimplify (lseq, valueize);
					    _r1 = maybe_push_res_to_seq (&tem_op, lseq);
					    if (!_r1) goto next_after_fail2886;
					    res_op->ops[0] = _r1;
					  }
					  res_op->resimplify (lseq, valueize);
					  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1258, __FILE__, __LINE__, true);
					  return true;
					}
next_after_fail2886:;
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
  return false;
}

bool
gimple_simplify_LROTATE_EXPR (gimple_match_op *res_op, gimple_seq *seq,
                 tree (*valueize)(tree) ATTRIBUTE_UNUSED,
                 code_helper ARG_UNUSED (code), tree ARG_UNUSED (type), tree _p0, tree _p1)
{
  const bool debug_dump = dump_file && (dump_flags & TDF_FOLDING);
  if (integer_all_onesp (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_666 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p1))
    {
      {
	tree captures[1] ATTRIBUTE_UNUSED = { _p0 };
	if (gimple_simplify_514 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
	  return true;
      }
    }
  if (integer_zerop (_p0))
    {
      {
	tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	if (gimple_simplify_515 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
	      case CONSTRUCTOR:
	        {
		  {
		    tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
		    if (gimple_simplify_517 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
		      return true;
		  }
	          break;
	        }
	      case MINUS_EXPR:
	        {
		  tree _q30 = gimple_assign_rhs1 (_a1);
		  _q30 = do_valueize (valueize, _q30);
		  tree _q31 = gimple_assign_rhs2 (_a1);
		  _q31 = do_valueize (valueize, _q31);
		  switch (TREE_CODE (_q30))
		    {
		    case INTEGER_CST:
		      {
			{
			  tree captures[4] ATTRIBUTE_UNUSED = { _p0, _p1, _q30, _q31 };
			  if (gimple_simplify_667 (res_op, seq, valueize, type, captures, LROTATE_EXPR, RROTATE_EXPR))
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
    case VECTOR_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  if (gimple_simplify_516 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
	    return true;
	}
        break;
      }
    case INTEGER_CST:
      {
	{
	  tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
	  gimple_seq *lseq = seq;
	  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2889;
	  {
	    res_op->set_op (RROTATE_EXPR, type, 2);
	    res_op->ops[0] = captures[0];
	    res_op->ops[1] =  const_binop (MINUS_EXPR, TREE_TYPE (captures[1]),
 build_int_cst (TREE_TYPE (captures[1]),
 element_precision (type)), captures[1]);
	    res_op->resimplify (lseq, valueize);
	    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1263, __FILE__, __LINE__, true);
	    return true;
	  }
next_after_fail2889:;
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
	      case LROTATE_EXPR:
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
				if (gimple_simplify_519 (res_op, seq, valueize, type, captures, LROTATE_EXPR))
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2890;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[0];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[1];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), LROTATE_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2890;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[2];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), LROTATE_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2890;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1101, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2890:;
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
		    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2891;
		    {
		      res_op->set_op (COND_EXPR, type, 3);
		      res_op->ops[0] = captures[1];
		      res_op->ops[0] = unshare_expr (res_op->ops[0]);
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[2];
			gimple_match_op tem_op (res_op->cond.any_else (), LROTATE_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2891;
			res_op->ops[1] = _r1;
		      }
		      {
			tree _o1[2], _r1;
			_o1[0] = captures[0];
			_o1[1] = captures[3];
			gimple_match_op tem_op (res_op->cond.any_else (), LROTATE_EXPR, type, _o1[0], _o1[1]);
			tem_op.resimplify (NULL, valueize);
			_r1 = maybe_push_res_to_seq (&tem_op, NULL);
			if (!_r1) goto next_after_fail2891;
			res_op->ops[2] = _r1;
		      }
		      res_op->resimplify (lseq, valueize);
		      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1102, __FILE__, __LINE__, true);
		      return true;
		    }
next_after_fail2891:;
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
gimple_simplify_UNGT_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
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
					    if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2911;
					    {
					      res_op->set_op (VEC_COND_EXPR, type, 3);
					      res_op->ops[0] = captures[1];
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[2];
						_o1[1] = captures[5];
						gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2911;
						res_op->ops[1] = _r1;
					      }
					      {
						tree _o1[2], _r1;
						_o1[0] = captures[3];
						_o1[1] = captures[6];
						gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
						tem_op.resimplify (NULL, valueize);
						_r1 = maybe_push_res_to_seq (&tem_op, NULL);
						if (!_r1) goto next_after_fail2911;
						res_op->ops[2] = _r1;
					      }
					      res_op->resimplify (lseq, valueize);
					      if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1097, __FILE__, __LINE__, true);
					      return true;
					    }
next_after_fail2911:;
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2912;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[1];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[2];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2912;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[3];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2912;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1099, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2912:;
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
 && (TREE_CODE_CLASS (UNGT_EXPR) != tcc_comparison
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
			if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2913;
			{
			  res_op->set_op (VEC_COND_EXPR, type, 3);
			  res_op->ops[0] = captures[2];
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[3];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2913;
			    res_op->ops[1] = _r1;
			  }
			  {
			    tree _o1[2], _r1;
			    _o1[0] = captures[0];
			    _o1[1] = captures[4];
			    gimple_match_op tem_op (res_op->cond.any_else (), UNGT_EXPR, type, _o1[0], _o1[1]);
			    tem_op.resimplify (NULL, valueize);
			    _r1 = maybe_push_res_to_seq (&tem_op, NULL);
			    if (!_r1) goto next_after_fail2913;
			    res_op->ops[2] = _r1;
			  }
			  res_op->resimplify (lseq, valueize);
			  if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1100, __FILE__, __LINE__, true);
			  return true;
			}
next_after_fail2913:;
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
	if (gimple_simplify_674 (res_op, seq, valueize, type, captures, UNGT_EXPR))
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
				    if (gimple_simplify_291 (res_op, seq, valueize, type, captures, UNGT_EXPR, GT_EXPR))
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
				    if (gimple_simplify_294 (res_op, seq, valueize, type, captures, UNGT_EXPR, UNLT_EXPR))
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
		      if (gimple_simplify_295 (res_op, seq, valueize, type, captures, UNGT_EXPR, UNLT_EXPR))
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
	  if (gimple_simplify_673 (res_op, seq, valueize, type, captures, UNGT_EXPR))
	    return true;
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWF16 (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_543 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF16))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_544 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF16))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_POWF64X (gimple_match_op *res_op, gimple_seq *seq,
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
		  if (real_onep (_q20))
		    {
		      {
			tree captures[4] ATTRIBUTE_UNUSED = { _p0, _q20, _q21, _p1 };
			if (gimple_simplify_543 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF64X))
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
if (real_zerop (_p0))
  {
    {
      tree captures[2] ATTRIBUTE_UNUSED = { _p0, _p1 };
      if (gimple_simplify_544 (res_op, seq, valueize, type, captures, CFN_BUILT_IN_POWF64X))
        return true;
    }
  }
  return false;
}

bool
gimple_simplify_CFN_BUILT_IN_SCALBNF (gimple_match_op *res_op, gimple_seq *seq,
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
	      if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2930;
	      {
		tree tem;
		tem = captures[0];
		res_op->set_value (tem);
		if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1270, __FILE__, __LINE__, true);
		return true;
	      }
next_after_fail2930:;
	    }
	}
        break;
      }
    default:;
    }
  return false;
}

bool
gimple_simplify_TRUTH_ORIF_EXPR (gimple_match_op *res_op, gimple_seq *seq,
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
	      case LE_EXPR:
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
			      case POINTER_PLUS_EXPR:
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
						    case LE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2936;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2936;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2936;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2936:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2937;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2937;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2937;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2937;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2937:;
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
						    case GE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2938;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2938;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2938;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2938:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2939;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2939;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2939;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2939;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2939:;
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
	      case LT_EXPR:
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
			      case POINTER_PLUS_EXPR:
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
						    case LT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2940;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2940;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2940;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2940:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2941;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2941;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2941;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2941;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2941:;
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
						    case GT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q30 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q30, 0) && types_match (_q70, _q30)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2942;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2942;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2942;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2942:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2943;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2943;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2943;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2943;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2943:;
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
	      case GE_EXPR:
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q41))
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
						    case LE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2944;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2944;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2944;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2944:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2945;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2945;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2945;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2945;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2945:;
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
						    case GE_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2946;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2946;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2946;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2946:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2947;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2947;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2947;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2947;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2947:;
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
	      case GT_EXPR:
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
			      case POINTER_PLUS_EXPR:
			        {
				  tree _q40 = gimple_assign_rhs1 (_a2);
				  _q40 = do_valueize (valueize, _q40);
				  tree _q41 = gimple_assign_rhs2 (_a2);
				  _q41 = do_valueize (valueize, _q41);
				  switch (TREE_CODE (_q41))
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
						    case LT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							switch (TREE_CODE (_q70))
							  {
							  case SSA_NAME:
							    if (gimple *_d4 = get_def (valueize, _q70))
							      {
								if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								  switch (gimple_assign_rhs_code (_a4))
								    {
								    case POINTER_PLUS_EXPR:
								      {
									tree _q80 = gimple_assign_rhs1 (_a4);
									_q80 = do_valueize (valueize, _q80);
									tree _q81 = gimple_assign_rhs2 (_a4);
									_q81 = do_valueize (valueize, _q81);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2948;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2948;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2948;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2948:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2949;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2949;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2949;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2949;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2949:;
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
						    case GT_EXPR:
						      {
							tree _q70 = gimple_assign_rhs1 (_a3);
							_q70 = do_valueize (valueize, _q70);
							tree _q71 = gimple_assign_rhs2 (_a3);
							_q71 = do_valueize (valueize, _q71);
							if ((_q70 == _q40 && ! TREE_SIDE_EFFECTS (_q70)) || (operand_equal_p (_q70, _q40, 0) && types_match (_q70, _q40)))
							  {
							    switch (TREE_CODE (_q71))
							      {
							      case SSA_NAME:
							        if (gimple *_d4 = get_def (valueize, _q71))
							          {
								    if (gassign *_a4 = dyn_cast <gassign *> (_d4))
								      switch (gimple_assign_rhs_code (_a4))
									{
									case POINTER_PLUS_EXPR:
									  {
									    tree _q90 = gimple_assign_rhs1 (_a4);
									    _q90 = do_valueize (valueize, _q90);
									    tree _q91 = gimple_assign_rhs2 (_a4);
									    _q91 = do_valueize (valueize, _q91);
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
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2950;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														_o2[0] =  swap_p ? captures[6] : captures[1];
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2950;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2950;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1152, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2950:;
													}
												      else
													{
													  gimple_seq *lseq = seq;
													  if (lseq
													      && (!single_use (captures[0])
													          || !single_use (captures[5])))
													    lseq = NULL;
													  if (UNLIKELY (!dbg_cnt (match))) goto next_after_fail2951;
													  {
													    res_op->set_op (GT_EXPR, type, 2);
													    {
													      tree _r1;
													      gimple_match_op tem_op (res_op->cond.any_else (), ERROR_MARK, error_mark_node, 1);
													      {
														tree _o2[2], _r2;
														{
														  tree _o3[2], _r3;
														  _o3[0] =  swap_p ? captures[4] : captures[2];
														  _o3[1] =  wide_int_to_tree (sizetype, off);
														  gimple_match_op tem_op (res_op->cond.any_else (), POINTER_PLUS_EXPR, TREE_TYPE (_o3[0]), _o3[0], _o3[1]);
														  tem_op.resimplify (lseq, valueize);
														  _r3 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r3) goto next_after_fail2951;
														  _o2[0] = _r3;
														}
														_o2[1] =  swap_p ? captures[2] : captures[4];
														tem_op.set_op (POINTER_DIFF_EXPR, ssizetype, 2);
														tem_op.ops[0] = _o2[0];
														tem_op.ops[1] = _o2[1];
														tem_op.resimplify (lseq, valueize);
													      }
													      if (sizetype != tem_op.type
													          && !useless_type_conversion_p (sizetype, tem_op.type))
														{
														  _r1 = maybe_push_res_to_seq (&tem_op, lseq);
														  if (!_r1) goto next_after_fail2951;
														  tem_op.set_op (NOP_EXPR, sizetype, 1);
														  tem_op.ops[0] = _r1;
														  tem_op.resimplify (lseq, valueize);
														}
													      _r1 = maybe_push_res_to_seq (&tem_op, lseq);
													      if (!_r1) goto next_after_fail2951;
													      res_op->ops[0] = _r1;
													    }
													    res_op->ops[1] =  rhs_tree;
													    res_op->resimplify (lseq, valueize);
													    if (UNLIKELY (debug_dump)) gimple_dump_logs ("match.pd", 1153, __FILE__, __LINE__, true);
													    return true;
													  }
next_after_fail2951:;
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
  return false;
}
#pragma GCC diagnostic pop
