(define_conditions [
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_LUI) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_DIV")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_ZALRSC")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512DFmode)
        || register_operand (operands[3], V512DFmode)))) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V512DFmode)
       && register_operand (operands[3], V512DFmode)
       && riscv_vector::whole_reg_move_p (operands, V512DFmode, 7))
      || ((memory_operand (operands[0], V512DFmode)
	  || memory_operand (operands[3], V512DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode)")
  (-1 "(TARGET_MOVCC) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HImode)
       || register_operand (operands[1], V128HImode))) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4HImode)) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1024HFmode)) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BImode)
       || register_operand (operands[1], V32BImode))) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_64BIT && TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB) && ( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4DFmode)) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32DFmode)
        || register_operand (operands[3], V32DFmode)))) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V32DFmode)
       && register_operand (operands[3], V32DFmode)
       && riscv_vector::whole_reg_move_p (operands, V32DFmode, 7))
      || ((memory_operand (operands[0], V32DFmode)
	  || memory_operand (operands[3], V32DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32HImode)
	|| register_operand (operands[3], V32HImode)))) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V32HImode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V32HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64HImode)
        || register_operand (operands[3], V64HImode)))) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V64HImode)
       && register_operand (operands[3], V64HImode)
       && riscv_vector::whole_reg_move_p (operands, V64HImode, 7))
      || ((memory_operand (operands[0], V64HImode)
	  || memory_operand (operands[3], V64HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SImode)
       || register_operand (operands[1], V128SImode))) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVM8QImode))")
  (-1 "TARGET_XTHEADMEMPAIR
  && th_mempair_operands_p (operands, true, SImode)")
  (-1 "TARGET_XTHEADBB && (TARGET_64BIT || SImode == SImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "USE_LOAD_ADDRESS_MACRO (operands[1])")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_ZFHMIN) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1QImode)
       || register_operand (operands[1], V1QImode))) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( reload_completed
   && (!register_operand (operands[0], V1QImode)
       || !register_operand (operands[1], V1QImode)))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SImode)
       || register_operand (operands[1], V128SImode))) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVMF2HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (0 "(TARGET_ZBKB && INTVAL (operands[2]) == BITS_PER_WORD / 2) && ((!TARGET_64BIT) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (1 "HImode >= HImode")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32DFmode)
	|| register_operand (operands[3], V32DFmode)))) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V32DFmode, 7))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM4HImode)
   && !memory_operand (operands[1], RVVM4HImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_64BIT
   && TARGET_ZBS
   && (TARGET_ZBB || TARGET_ZBKB)
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4HFmode)
        || register_operand (operands[3], V4HFmode)))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_64BIT
   && INTVAL (operands[5]) < INTVAL (operands[2])
   && (REGNO (operands[3]) == REGNO (operands[4])
       || peep2_reg_dead_p (3, operands[3]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64HFmode)
        || register_operand (operands[3], V64HFmode)))) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V64HFmode)
       && register_operand (operands[3], V64HFmode)
       && riscv_vector::whole_reg_move_p (operands, V64HFmode, 7))
      || ((memory_operand (operands[0], V64HFmode)
	  || memory_operand (operands[3], V64HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2BFmode)
       || register_operand (operands[1], V2BFmode))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512SImode)
	|| register_operand (operands[3], V512SImode)))) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V512SImode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2SFmode)
	|| register_operand (operands[3], RVVM2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !memory_operand (operands[0], RVVM4SFmode)
   && !memory_operand (operands[1], RVVM4SFmode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM1HImode).is_constant ()")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SFmode)
       || register_operand (operands[1], V1024SFmode))) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SFmode)
       || register_operand (operands[1], V512SFmode))) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((8) - 1)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_VECTOR && can_create_pseudo_p ()")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64SFmode)) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_64BIT && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_FULL_V)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_ZBS && !not_single_bit_mask_operand (operands[2], VOIDmode)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1HFmode)
        || register_operand (operands[3], V1HFmode)))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], V1HFmode)
       && register_operand (operands[3], V1HFmode)
       && riscv_vector::whole_reg_move_p (operands, V1HFmode, 7))
      || ((memory_operand (operands[0], V1HFmode)
	  || memory_operand (operands[3], V1HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256DFmode)) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1HImode)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_FULL_V)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4DImode)
	|| register_operand (operands[3], RVVM4DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16SImode)
	|| register_operand (operands[3], V16SImode)))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V16SImode, 7))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == SImode)")
  (-1 "(TARGET_64BIT
   && TARGET_ZBS
   && (TARGET_ZBB || TARGET_ZBKB)
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (!TARGET_64BIT)")
  (-1 "(TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128DImode)
        || register_operand (operands[3], V128DImode)))) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_SLT) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2HFmode)
        || register_operand (operands[3], V2HFmode)))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64QImode)
	|| register_operand (operands[3], V64QImode)))) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZBC) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2BImode))) && ( !reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "epilogue_completed")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V2SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DImode)
       || register_operand (operands[1], V32DImode))) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && (Pmode == SImode)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512QImode)
       || register_operand (operands[1], V512QImode))) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DFmode)
       || register_operand (operands[1], V64DFmode))) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2HImode).is_constant ()) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DImode)
       || register_operand (operands[1], V256DImode))) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1024HImode)) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1SFmode)
	|| register_operand (operands[3], V1SFmode)))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, V1SFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8QImode)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX)) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "TARGET_ZBB || (!TARGET_64BIT && TARGET_XTHEADBB)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "TARGET_ZBB && !TARGET_XTHEADMEMIDX")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HFmode)
       || register_operand (operands[1], V512HFmode))) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V128BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16HImode)) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(!TARGET_XANDESPERF && TARGET_SLT) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BImode)
       || register_operand (operands[1], V128BImode))) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SNANS (DFmode)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HImode)
       || register_operand (operands[1], V512HImode))) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2QImode)
        || register_operand (operands[3], RVVM2QImode)))) && ( (register_operand (operands[0], RVVM2QImode)
       && register_operand (operands[3], RVVM2QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2QImode, 7))
      || ((memory_operand (operands[0], RVVM2QImode)
	  || memory_operand (operands[3], RVVM2QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM8SImode).is_constant ()")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XOR || (XOR) == IOR) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8DImode)
	|| register_operand (operands[3], V8DImode)))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "((TARGET_VECTOR) && (Pmode == SImode)) && ( epilogue_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4096QImode)
        || register_operand (operands[3], V4096QImode)))) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V4096QImode)
       && register_operand (operands[3], V4096QImode)
       && riscv_vector::whole_reg_move_p (operands, V4096QImode, 7))
      || ((memory_operand (operands[0], V4096QImode)
	  || memory_operand (operands[3], V4096QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8HImode)) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V256BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))) && ( 1)")
  (-1 "(TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4096BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8DImode)
	|| register_operand (operands[3], RVVM8DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM8DImode, 7))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((!TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM8HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512QImode)
       || register_operand (operands[1], V512QImode))) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "Pmode == DImode")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V256HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF8QImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2SImode)
	|| register_operand (operands[3], RVVM2SImode)))")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !memory_operand (operands[0], RVVM1DImode)
   && !memory_operand (operands[1], RVVM1DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16QImode)
	|| register_operand (operands[3], V16QImode)))) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( riscv_vector::whole_reg_move_p (operands, V16QImode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DFmode)
       || register_operand (operands[1], V32DFmode))) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM8QImode)
        || register_operand (operands[3], RVVM8QImode)))")
  (-1 "TARGET_ZKSED && TARGET_64BIT")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8DFmode)) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SImode)
       || register_operand (operands[1], V1024SImode))) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V64BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8SFmode)) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(!SMALL_OPERAND (INTVAL (operands[2]))) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4HImode)) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4HImode)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128QImode)) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DFmode)
       || register_operand (operands[1], V32DFmode))) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZICOND_LIKE) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512DFmode)) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVMF4QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2BImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16BFmode)
	|| register_operand (operands[3], V16BFmode)))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((register_operand (operands[0], HImode)
    || reg_or_0_operand (operands[1], HImode))
   && !TARGET_HALF) && ( reload_completed
   && (MEM_P (operands[0]) || MEM_P (operands[1])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1BFmode)
        || register_operand (operands[3], V1BFmode)))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], V1BFmode)
       && register_operand (operands[3], V1BFmode)
       && riscv_vector::whole_reg_move_p (operands, V1BFmode, 7))
      || ((memory_operand (operands[0], V1BFmode)
	  || memory_operand (operands[3], V1BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8SImode)) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_ZKNE && !TARGET_64BIT")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32SFmode)
	|| register_operand (operands[3], V32SFmode)))) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V32SFmode, 7))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BImode)
       || register_operand (operands[1], V32BImode))) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2HImode)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1DFmode)
        || register_operand (operands[3], V1DFmode)))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !memory_operand (operands[0], RVVM1DFmode)
   && !memory_operand (operands[1], RVVM1DFmode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4HImode)
        || register_operand (operands[3], V4HImode)))) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DImode)
       || register_operand (operands[1], V32DImode))) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_ZKND || TARGET_ZKNE) && TARGET_64BIT")
  (-1 "(exact_log2 (INTVAL (operands[3])) >= 0) && (!TARGET_64BIT)")
  (-1 "(TARGET_64BIT && TARGET_ZBS) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_64) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HFmode)
       || register_operand (operands[1], V64HFmode))) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16SFmode)) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DFmode)
       || register_operand (operands[1], V128DFmode))) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM1SImode)
        || register_operand (operands[3], RVVM1SImode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( reload_completed
   && (!register_operand (operands[0], V4QImode)
       || !register_operand (operands[1], V4QImode)))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2048BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((LUI_OPERAND (~INTVAL (operands[2]))
    && ((INTVAL (operands[2]) & (-INTVAL (operands[3])))
	== (-INTVAL (operands[3])))
    && riscv_const_insns (operands[3], false)
    && (riscv_const_insns (GEN_INT (~INTVAL (operands[2])
				    | -INTVAL (operands[3])), false)
	<= riscv_const_insns (operands[3], false)))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BFmode)
       || register_operand (operands[1], V64BFmode))) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_AUIPC) && (Pmode == DImode)")
  (-1 "(TARGET_XOR) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DImode)
       || register_operand (operands[1], V512DImode))) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF8QImode)
	|| register_operand (operands[3], RVVMF8QImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( riscv_vector::whole_reg_move_p (operands, RVVMF8QImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64QImode)) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode))) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( reload_completed
   && (!register_operand (operands[0], V8QImode)
       || !register_operand (operands[1], V8QImode)))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM2DImode).is_constant ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "TARGET_XCVMAC && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32DFmode)) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096BImode)
       || register_operand (operands[1], V4096BImode))) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "((TARGET_XTHEADVECTOR) && (!TARGET_XTHEADVECTOR)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_ZALRSC && TARGET_INLINE_SUBWORD_ATOMIC")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4BFmode)
	|| register_operand (operands[3], RVVMF4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "TARGET_MOVCC")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1QImode)
        || register_operand (operands[3], V1QImode)))) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512HImode)
        || register_operand (operands[3], V512HImode)))) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_XTHEADBS && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1024SFmode)) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4HFmode)
        || register_operand (operands[3], RVVM4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], RVVM4HFmode)
       && register_operand (operands[3], RVVM4HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4HFmode, 7))
      || ((memory_operand (operands[0], RVVM4HFmode)
	  || memory_operand (operands[3], RVVM4HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((!ira_in_progress
   && !(p2m1_shift_operand (operands[1], DImode)
	|| high_mask_shift_operand (operands[1], DImode)
	|| exact_log2 (INTVAL (operands[1])) >= 0)) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_XTHEADMAC) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()) && (Pmode == DImode)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1SImode)
	|| register_operand (operands[3], RVVM1SImode)))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1SImode)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM1SFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64SImode)
	|| register_operand (operands[3], V64SImode)))) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V64SImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V8BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))) && ( 1)")
  (-1 "(TARGET_64BIT && !TARGET_ZBA
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "TARGET_SHIFT")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2SImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HFmode)
       || register_operand (operands[1], V2048HFmode))) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BFmode)
       || register_operand (operands[1], V512BFmode))) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64))")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4HFmode)
	|| register_operand (operands[3], RVVMF4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (!TARGET_XTHEADVECTOR)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8SImode)")
  (-1 "((TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128HImode)
        || register_operand (operands[3], V128HImode)))) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256SFmode)) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && TARGET_HALF) && (TARGET_64BIT)) && ( !MEM_P (operands[1])
   && reload_completed
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_XTHEADMEMIDX) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1DFmode)) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HImode)
       || register_operand (operands[1], V256HImode))) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XANDESPERF) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( 1)")
  (-1 "TARGET_SFB_ALU || TARGET_XTHEADCONDMOV || TARGET_ZICOND_LIKE
   || TARGET_MOVCC || TARGET_XMIPSCMOV")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HImode)
       || register_operand (operands[1], V64HImode))) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V512BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM4BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(((!SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))
    && (!TARGET_ZBS || popcount_hwi (INTVAL (operands[3])) > 1)
    && (INTVAL (operands[3]) & ((1ULL << INTVAL (operands[2])) - 1)) == 0)) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512QImode)
	|| register_operand (operands[3], V512QImode)))) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V256BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V64BImode, 5))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HImode)
       || register_operand (operands[1], V512HImode))) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256SFmode)
	|| register_operand (operands[3], V256SFmode)))) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "!TARGET_ZAAMO && TARGET_ZALRSC")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2DFmode)
        || register_operand (operands[3], V2DFmode)))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF8QImode)
	|| register_operand (operands[3], RVVMF8QImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (!TARGET_XTHEADVECTOR))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512HFmode)
	|| register_operand (operands[3], V512HFmode)))) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V512HFmode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2QImode)) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8HFmode)) && (TARGET_ZVFH)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BImode)
       || register_operand (operands[1], V64BImode))) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "TARGET_ZKND && TARGET_64BIT")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SImode)
       || register_operand (operands[1], V256SImode))) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V2HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1BFmode)
	|| register_operand (operands[3], V1BFmode)))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, V1BFmode, 7))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2HImode)
	|| register_operand (operands[3], RVVMF2HImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))")
  (-1 "((TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2QImode)
        || register_operand (operands[3], RVVMF2QImode)))) && (!TARGET_XTHEADVECTOR)) && ( (register_operand (operands[0], RVVMF2QImode)
       && register_operand (operands[3], RVVMF2QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2QImode, 7))
      || ((memory_operand (operands[0], RVVMF2QImode)
	  || memory_operand (operands[3], RVVMF2QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BImode))) && ( riscv_vector::whole_reg_move_p (operands, V2BImode, 5))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048BFmode)
	|| register_operand (operands[3], V2048BFmode)))) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1HFmode)
       || register_operand (operands[1], V1HFmode))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( reload_completed
   && (!register_operand (operands[0], V1HFmode)
       || !register_operand (operands[1], V1HFmode)))")
  (-1 "TARGET_XTHEADMEMPAIR
  && th_mempair_operands_p (operands, false, SImode)")
  (0 "(TARGET_VECTOR && 0) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HImode)
       || register_operand (operands[1], V1024HImode))) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2BImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2HFmode)
        || register_operand (operands[3], RVVMF2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], RVVMF2HFmode)
       && register_operand (operands[3], RVVMF2HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2HFmode, 7))
      || ((memory_operand (operands[0], RVVMF2HFmode)
	  || memory_operand (operands[3], RVVMF2HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && ((((((Pmode == DImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8SFmode)
	|| register_operand (operands[3], RVVM8SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, RVVM8SFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_ZBB || TARGET_ZBKB) && !TARGET_ZCB
   && !optimize_function_for_size_p (cfun)
   && rtx_equal_p (operands[0], operands[2])
   && riscv_const_insns (operands[3], false) == 1) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_ZBB || TARGET_ZBKB) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64SImode)) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (0 "(TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( reload_completed
   && (!register_operand (operands[0], V4HFmode)
       || !register_operand (operands[1], V4HFmode)))")
  (-1 "(TARGET_ZALRSC && TARGET_INLINE_SUBWORD_ATOMIC) || TARGET_ZABHA")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DImode)
       || register_operand (operands[1], V128DImode))) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "((TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1SImode)
       || register_operand (operands[1], V1SImode))) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2HImode)
        || register_operand (operands[3], V2HImode)))) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( (register_operand (operands[0], V2HImode)
       && register_operand (operands[3], V2HImode)
       && riscv_vector::whole_reg_move_p (operands, V2HImode, 7))
      || ((memory_operand (operands[0], V2HImode)
	  || memory_operand (operands[3], V2HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_ZICOND_LIKE && rtx_equal_p (operands[1], operands[2])) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4SFmode)) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8BImode)
       || register_operand (operands[1], V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && ( reload_completed
   && (!register_operand (operands[0], V8BImode)
       || !register_operand (operands[1], V8BImode)))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8DFmode)) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM2DFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SImode)
       || register_operand (operands[1], V512SImode))) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128SFmode)
        || register_operand (operands[3], V128SFmode)))) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF4HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512SImode)
        || register_operand (operands[3], V512SImode)))) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZBKB && INTVAL (operands[2]) == BITS_PER_WORD / 2) && (TARGET_64BIT)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1DFmode)) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4096BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128DImode)
        || register_operand (operands[3], V128DImode)))) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V128DImode)
       && register_operand (operands[3], V128DImode)
       && riscv_vector::whole_reg_move_p (operands, V128DImode, 7))
      || ((memory_operand (operands[0], V128DImode)
	  || memory_operand (operands[3], V128DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4HImode)
	|| register_operand (operands[3], V4HImode)))) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( riscv_vector::whole_reg_move_p (operands, V4HImode, 7))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4QImode)
       || register_operand (operands[1], V4QImode))) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2BFmode)
	|| register_operand (operands[3], RVVMF2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2BFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2HImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 16)
   && ((INTVAL (operands[2]) + 16) <= 64)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8SImode)) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))")
  (-1 "TARGET_VECTOR_AUTOVEC_SEGMENT")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1HImode)) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM4HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32QImode)) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2DImode)) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DFmode)
       || register_operand (operands[1], V512DFmode))) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2HImode)
	|| register_operand (operands[3], RVVM2HImode)))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_64BIT && TARGET_ZBS) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM2QImode)
        || register_operand (operands[3], RVVM2QImode)))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4SFmode)) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024BFmode)
	|| register_operand (operands[3], V1024BFmode)))) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V1024BFmode, 7))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2DImode)
	|| register_operand (operands[3], RVVM2DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM2DImode, 7))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4BFmode)
	|| register_operand (operands[3], RVVM4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM4BFmode, 7))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V1SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM4HImode)
        || register_operand (operands[3], RVVM4HImode)))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_ZBB) && (TARGET_64BIT)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == DImode))")
  (-1 "!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (HImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_FP_16))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DFmode)
       || register_operand (operands[1], V32DFmode))) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !memory_operand (operands[0], RVVM8DImode)
   && !memory_operand (operands[1], RVVM8DImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128DImode)
	|| register_operand (operands[3], V128DImode)))) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V128DImode, 7))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2SFmode)
	|| register_operand (operands[3], V2SFmode)))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, V2SFmode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1SFmode)
        || register_operand (operands[3], V1SFmode)))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_64BIT)")
  (-1 "TARGET_ZBB")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256HImode)) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8SFmode)
        || register_operand (operands[3], RVVM8SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], RVVM8SFmode)
       && register_operand (operands[3], RVVM8SFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8SFmode, 7))
      || ((memory_operand (operands[0], RVVM8SFmode)
	  || memory_operand (operands[3], RVVM8SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2HImode)
	|| register_operand (operands[3], RVVM2HImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM2HImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256HFmode)
	|| register_operand (operands[3], V256HFmode)))) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V256HFmode, 7))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_SLT && INTVAL (operands[2]) < 11) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2SFmode)
        || register_operand (operands[3], RVVM2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_64BIT && TARGET_XTHEADMEMIDX")
  (-1 "TARGET_XCVALU && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_SLT
   && INTVAL (operands[3]) < 11
   && INTVAL (operands[2]) + INTVAL (operands[3]) == BITS_PER_WORD) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128HFmode)) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128SImode)
	|| register_operand (operands[3], V128SImode)))) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V128SImode, 7))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_FP_16))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64DImode)) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM4SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2DFmode)
	|| register_operand (operands[3], RVVM2DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM2SImode)
   && !memory_operand (operands[1], RVVM2SImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZICOND && rtx_equal_p (operands[1], operands[3])) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128HImode)
	|| register_operand (operands[3], V128HImode)))) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V16SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_XTHEADCONDMOV) && (!TARGET_64BIT)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128HImode)) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024BFmode)
	|| register_operand (operands[3], V1024BFmode)))) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512BFmode)
	|| register_operand (operands[3], V512BFmode)))) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DFmode)
       || register_operand (operands[1], V256DFmode))) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8DImode)) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32HFmode)
        || register_operand (operands[3], V32HFmode)))) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V32HFmode)
       && register_operand (operands[3], V32HFmode)
       && riscv_vector::whole_reg_move_p (operands, V32HFmode, 7))
      || ((memory_operand (operands[0], V32HFmode)
	  || memory_operand (operands[3], V32HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2HFmode)
	|| register_operand (operands[3], RVVMF2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4BFmode)
        || register_operand (operands[3], RVVMF4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVMF4BFmode)
       && register_operand (operands[3], RVVMF4BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF4BFmode, 7))
      || ((memory_operand (operands[0], RVVMF4BFmode)
	  || memory_operand (operands[3], RVVMF4BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32SFmode)
        || register_operand (operands[3], V32SFmode)))) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V32SFmode)
       && register_operand (operands[3], V32SFmode)
       && riscv_vector::whole_reg_move_p (operands, V32SFmode, 7))
      || ((memory_operand (operands[0], V32SFmode)
	  || memory_operand (operands[3], V32SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V32BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_64BIT && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2DFmode)
        || register_operand (operands[3], RVVM2DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], RVVM2DFmode)
       && register_operand (operands[3], RVVM2DFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2DFmode, 7))
      || ((memory_operand (operands[0], RVVM2DFmode)
	  || memory_operand (operands[3], RVVM2DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_64BIT && TARGET_ZBS
   && clz_hwi (~UINTVAL (operands[2])) > 33")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16SImode)
        || register_operand (operands[3], V16SImode)))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V16SImode)
       && register_operand (operands[3], V16SImode)
       && riscv_vector::whole_reg_move_p (operands, V16SImode, 7))
      || ((memory_operand (operands[0], V16SImode)
	  || memory_operand (operands[3], V16SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BFmode)
       || register_operand (operands[1], V256BFmode))) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 16)
   && ((INTVAL (operands[2]) + 16) <= 32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DFmode)
       || register_operand (operands[1], V32DFmode))) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2HFmode)
        || register_operand (operands[3], RVVM2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_SLT && TARGET_SLTI) && (!TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (0 "(HImode >= DImode) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2HFmode)
	|| register_operand (operands[3], V2HFmode)))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512DFmode)
        || register_operand (operands[3], V512DFmode)))) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1HImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256DImode)
        || register_operand (operands[3], V256DImode)))) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V256DImode)
       && register_operand (operands[3], V256DImode)
       && riscv_vector::whole_reg_move_p (operands, V256DImode, 7))
      || ((memory_operand (operands[0], V256DImode)
	  || memory_operand (operands[3], V256DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_HARD_FLOAT
    && (TARGET_ZFA || flag_fp_int_builtin_inexact || !flag_trapping_math)
    && (TARGET_ZFA || TARGET_64BIT || HFmode != DFmode)
    && (TARGET_ZFA || HFmode != HFmode))) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "!TARGET_XTHEADMEMIDX && !TARGET_ANDI")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8QImode)) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4BFmode)
        || register_operand (operands[3], RVVM4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_ZFH || TARGET_ZHINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BImode)
       || register_operand (operands[1], V256BImode))) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8SImode)
	|| register_operand (operands[3], V8SImode)))) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( riscv_vector::whole_reg_move_p (operands, V8SImode, 7))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DImode)
       || register_operand (operands[1], V256DImode))) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVMF4HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096BImode)
       || register_operand (operands[1], V4096BImode))) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !memory_operand (operands[0], RVVM4DImode)
   && !memory_operand (operands[1], RVVM4DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVBFHCVT) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN > 32)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4SImode)
	|| register_operand (operands[3], RVVM4SImode)))")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(DImode >= QImode) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4BFmode)
       || register_operand (operands[1], V4BFmode))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( reload_completed
   && (!register_operand (operands[0], V4BFmode)
       || !register_operand (operands[1], V4BFmode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4BImode)
       || register_operand (operands[1], V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128DImode)) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM8HImode).is_constant ()")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024BFmode)
        || register_operand (operands[3], V1024BFmode)))) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128HFmode)) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V1024BImode, 5))")
  (-1 "(TARGET_XANDESPERF
   && (UINTVAL (operands[2]) != 0)
   && (exact_log2 ((UINTVAL (operands[3]) >> UINTVAL (operands[2])) + 1) > 1)
   && ((UINTVAL (operands[3]) & ((1 << UINTVAL (operands[2])) - 1)) == 0)) && (TARGET_64BIT)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1HImode)
	|| register_operand (operands[3], RVVM1HImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM1HImode, 7))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(reload_completed) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SImode)
       || register_operand (operands[1], V256SImode))) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_HARD_FLOAT || TARGET_ZFINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SFmode)
       || register_operand (operands[1], V256SFmode))) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode))) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4HImode)
        || register_operand (operands[3], RVVMF4HImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8HImode)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SImode)
       || register_operand (operands[1], V1024SImode))) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1QImode)
	|| register_operand (operands[3], RVVM1QImode)))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HFmode)
       || register_operand (operands[1], V1024HFmode))) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_HARD_FLOAT || TARGET_ZFINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32DFmode)) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(DImode >= SImode) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVBFHCVT) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BFmode)
       || register_operand (operands[1], V128BFmode))) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_ZBKB")
  (-1 "!ira_in_progress
   && !(p2m1_shift_operand (operands[1], SImode)
	|| high_mask_shift_operand (operands[1], SImode)
	|| exact_log2 (INTVAL (operands[1])) >= 0)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1HFmode)
        || register_operand (operands[3], RVVM1HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], RVVM1HFmode)
       && register_operand (operands[3], RVVM1HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1HFmode, 7))
      || ((memory_operand (operands[0], RVVM1HFmode)
	  || memory_operand (operands[3], RVVM1HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(!TARGET_XCVBI && (TARGET_SLT
   || GET_CODE (operands[1]) == EQ || GET_CODE (operands[1]) == NE)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && HImode >= QImode")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BImode))) && ( riscv_vector::whole_reg_move_p (operands, V4BImode, 5))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V1024SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BImode)
       || register_operand (operands[1], V2048BImode))) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32SImode)
	|| register_operand (operands[3], V32SImode)))) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128HFmode)
        || register_operand (operands[3], V128HFmode)))) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V128HFmode)
       && register_operand (operands[3], V128HFmode)
       && riscv_vector::whole_reg_move_p (operands, V128HFmode, 7))
      || ((memory_operand (operands[0], V128HFmode)
	  || memory_operand (operands[3], V128HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZMMUL || TARGET_MUL) && TARGET_64BIT")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8HImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4QImode)")
  (-1 "(TARGET_XTHEADBA) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V128BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024HImode)
        || register_operand (operands[3], V1024HImode)))) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_ZVFBFMIN) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZICOND_LIKE) && (TARGET_64BIT)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(!TARGET_ZFHMIN) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1HImode)) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64SImode)
        || register_operand (operands[3], V64SImode)))) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V64SImode)
       && register_operand (operands[3], V64SImode)
       && riscv_vector::whole_reg_move_p (operands, V64SImode, 7))
      || ((memory_operand (operands[0], V64SImode)
	  || memory_operand (operands[3], V64SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZAAMO) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2DFmode)) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1024HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( reload_completed
   && (!register_operand (operands[0], V4DImode)
       || !register_operand (operands[1], V4DImode)))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V512BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2QImode)) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16HFmode)
        || register_operand (operands[3], V16HFmode)))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_XANDESPERF) && (!TARGET_64BIT)")
  (0 "(TARGET_ZBS) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16QImode)) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1024SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8BImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256SImode)) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1SImode)) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V256BImode, 5))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024SFmode)
        || register_operand (operands[3], V1024SFmode)))) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V1024SFmode)
       && register_operand (operands[3], V1024SFmode)
       && riscv_vector::whole_reg_move_p (operands, V1024SFmode, 7))
      || ((memory_operand (operands[0], V1024SFmode)
	  || memory_operand (operands[3], V1024SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SNANS (SFmode)) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( 1)")
  (-1 "TARGET_64BIT && TARGET_ZBA")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4HImode)
	|| register_operand (operands[3], V4HImode)))) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BImode)
       || register_operand (operands[1], V512BImode))) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2SImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(!TARGET_XCVBI && !TARGET_SLT
   && GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256DFmode)) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2048HImode)
        || register_operand (operands[3], V2048HImode)))) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64HFmode)
	|| register_operand (operands[3], V64HFmode)))) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V64HFmode, 7))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4HFmode)
        || register_operand (operands[3], V4HFmode)))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], V4HFmode)
       && register_operand (operands[3], V4HFmode)
       && riscv_vector::whole_reg_move_p (operands, V4HFmode, 7))
      || ((memory_operand (operands[0], V4HFmode)
	  || memory_operand (operands[3], V4HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32DImode)) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V2048BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64SImode)
        || register_operand (operands[3], V64SImode)))) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (QImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && (TARGET_64BIT)) && ( reload_completed && TARGET_SHIFT
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BImode))) && ( riscv_vector::whole_reg_move_p (operands, V8BImode, 5))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF4HFmode)) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128HFmode)
	|| register_operand (operands[3], V128HFmode)))) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V128HFmode, 7))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16DFmode)
        || register_operand (operands[3], V16DFmode)))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX)) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM4QImode)
        || register_operand (operands[3], RVVM4QImode)))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16QImode)
        || register_operand (operands[3], V16QImode)))) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8SImode)
        || register_operand (operands[3], RVVM8SImode)))) && ( (register_operand (operands[0], RVVM8SImode)
       && register_operand (operands[3], RVVM8SImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8SImode, 7))
      || ((memory_operand (operands[0], RVVM8SImode)
	  || memory_operand (operands[3], RVVM8SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (0 "(TARGET_VECTOR && 0) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "TARGET_ZVBB && can_create_pseudo_p ()")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512SFmode)
        || register_operand (operands[3], V512SFmode)))) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512DFmode)) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2QImode)
	|| register_operand (operands[3], V2QImode)))) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( riscv_vector::whole_reg_move_p (operands, V2QImode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1QImode)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024SImode)
	|| register_operand (operands[3], V1024SImode)))) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V1024SImode, 7))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BImode)
       || register_operand (operands[1], V32BImode))) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((ctz_hwi (INTVAL (operands[3]) & GET_MODE_MASK (word_mode))
    == INTVAL (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_ZCMP
   && (REGNO (operands[2]) != REGNO (operands[0]))) && (TARGET_64BIT)")
  (-1 "((register_operand (operands[0], QImode)
    || reg_or_0_operand (operands[1], QImode))
   && !TARGET_BYTE) && ( reload_completed
   && (MEM_P (operands[0]) || MEM_P (operands[1])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2048HImode)) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_VECTOR && TARGET_XSFVCP")
  (-1 "(!TARGET_XTHEADMEMIDX && (!MEM_P (operands[1]) || TARGET_BYTE)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2SFmode)) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVM1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128SFmode)
	|| register_operand (operands[3], V128SFmode)))) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !memory_operand (operands[0], RVVM4BFmode)
   && !memory_operand (operands[1], RVVM4BFmode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM1QImode)
        || register_operand (operands[3], RVVM1QImode)))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2SImode)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_ZICOND && rtx_equal_p (operands[1], operands[3])) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2SImode)
	|| register_operand (operands[3], RVVM2SImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM2SImode, 7))")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BImode)
       || register_operand (operands[1], V512BImode))) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2DFmode)
        || register_operand (operands[3], V2DFmode)))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], V2DFmode)
       && register_operand (operands[3], V2DFmode)
       && riscv_vector::whole_reg_move_p (operands, V2DFmode, 7))
      || ((memory_operand (operands[0], V2DFmode)
	  || memory_operand (operands[3], V2DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32DFmode)) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4BFmode)
	|| register_operand (operands[3], V4BFmode)))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (Pmode == SImode)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024QImode)
	|| register_operand (operands[3], V1024QImode)))) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM8HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8DFmode)
	|| register_operand (operands[3], V8DFmode)))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32DImode)
	|| register_operand (operands[3], V32DImode)))) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V32DImode, 7))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_ZBS && TARGET_ZBB) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1BImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && ( !reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64QImode)) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4SImode)
	|| register_operand (operands[3], V4SImode)))) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "TARGET_ZBKB && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF4HImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8DImode)
        || register_operand (operands[3], RVVM8DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVM8DImode)
       && register_operand (operands[3], RVVM8DImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8DImode, 7))
      || ((memory_operand (operands[0], RVVM8DImode)
	  || memory_operand (operands[3], RVVM8DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM2SFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048HFmode)
	|| register_operand (operands[3], V2048HFmode)))) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16HImode)
	|| register_operand (operands[3], V16HImode)))) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && TARGET_HALF")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128SFmode)) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V256BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))) && ( 1)")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF4HFmode)) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DFmode)
       || register_operand (operands[1], V512DFmode))) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V16DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8HFmode)
        || register_operand (operands[3], RVVM8HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "TARGET_ZBB || TARGET_ZBKB || TARGET_XTHEADBB")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V16BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V128BImode, 5))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BImode))) && ( riscv_vector::whole_reg_move_p (operands, V1BImode, 5))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BImode)
       || register_operand (operands[1], V64BImode))) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512SFmode)
	|| register_operand (operands[3], V512SFmode)))) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V512SFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_ZKSH && TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZICBOZ) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SFmode)
       || register_operand (operands[1], V128SFmode))) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2048BFmode)
        || register_operand (operands[3], V2048BFmode)))) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_ZFBFMIN")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))) && ( 1)")
  (-1 "((TARGET_64BIT
   && TARGET_ZBS
   && (TARGET_ZBB || TARGET_ZBKB)
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048BFmode)
	|| register_operand (operands[3], V2048BFmode)))) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V2048BFmode, 7))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DImode)
       || register_operand (operands[1], V512DImode))) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1BFmode)
       || register_operand (operands[1], V1BFmode))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_XTHEADVECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && ((((((Pmode == DImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))) && ( 1)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2BFmode)
        || register_operand (operands[3], RVVMF2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZBB && !TARGET_XTHEADMEMIDX) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16BImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HImode)
       || register_operand (operands[1], V128HImode))) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4DImode)) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256SImode)
        || register_operand (operands[3], V256SImode)))) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V256SImode)
       && register_operand (operands[3], V256SImode)
       && riscv_vector::whole_reg_move_p (operands, V256SImode, 7))
      || ((memory_operand (operands[0], V256SImode)
	  || memory_operand (operands[3], V256SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128HFmode)
	|| register_operand (operands[3], V128HFmode)))) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8BFmode)
        || register_operand (operands[3], V8BFmode)))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode) && TARGET_ZVFH)) && ( 1)")
  (-1 "((!TARGET_ZFHMIN && BFmode == HFmode) || (BFmode == BFmode))
   && (register_operand (operands[0], BFmode)
       || reg_or_0_operand (operands[1], BFmode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HImode)
       || register_operand (operands[1], V64HImode))) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADBB
   && (UINTVAL (operands[2]) + UINTVAL (operands[3])
       <= GET_MODE_BITSIZE (DImode))) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4SFmode)
        || register_operand (operands[3], RVVM4SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024HImode)
	|| register_operand (operands[3], V1024HImode)))) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !memory_operand (operands[0], RVVM2DImode)
   && !memory_operand (operands[1], RVVM2DImode))")
  (-1 "!optimize_size")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_ZICBOP) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512DFmode)) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2HFmode)) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024QImode)
       || register_operand (operands[1], V1024QImode))) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512DImode)) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512QImode)) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1SFmode)) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !memory_operand (operands[0], RVVM1SFmode)
   && !memory_operand (operands[1], RVVM1SFmode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V16BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))) && ( 1)")
  (-1 "TARGET_XANDESPERF
   && IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
		1, GET_MODE_BITSIZE (SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256HImode)
	|| register_operand (operands[3], V256HImode)))) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8HFmode)
	|| register_operand (operands[3], RVVM8HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_HARD_FLOAT) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1DFmode)
	|| register_operand (operands[3], V1DFmode)))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DFmode)
       || register_operand (operands[1], V128DFmode))) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8HFmode)
	|| register_operand (operands[3], V8HFmode)))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, V8HFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64DImode)
        || register_operand (operands[3], V64DImode)))) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V64DImode)
       && register_operand (operands[3], V64DImode)
       && riscv_vector::whole_reg_move_p (operands, V64DImode, 7))
      || ((memory_operand (operands[0], V64DImode)
	  || memory_operand (operands[3], V64DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2HImode)
        || register_operand (operands[3], V2HImode)))) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1HImode)
       || register_operand (operands[1], V1HImode))) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256HImode)) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16BImode))) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2SImode)
        || register_operand (operands[3], V2SImode)))) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( (register_operand (operands[0], V2SImode)
       && register_operand (operands[3], V2SImode)
       && riscv_vector::whole_reg_move_p (operands, V2SImode, 7))
      || ((memory_operand (operands[0], V2SImode)
	  || memory_operand (operands[3], V2SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "TARGET_XTHEADVECTOR")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2HFmode)
        || register_operand (operands[3], RVVM2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], RVVM2HFmode)
       && register_operand (operands[3], RVVM2HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2HFmode, 7))
      || ((memory_operand (operands[0], RVVM2HFmode)
	  || memory_operand (operands[3], RVVM2HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64SFmode)) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (QImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && ( reload_completed && TARGET_SHIFT
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "!TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))")
  (-1 "TARGET_64BIT && TARGET_ZAAMO")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32SFmode)
	|| register_operand (operands[3], V32SFmode)))) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_ZVKNED || TARGET_ZVKSH")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64HFmode)) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "reload_completed
   && riscv_split_64bit_move_p (operands[0], operands[1])")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16QImode)
        || register_operand (operands[3], V16QImode)))) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( (register_operand (operands[0], V16QImode)
       && register_operand (operands[3], V16QImode)
       && riscv_vector::whole_reg_move_p (operands, V16QImode, 7))
      || ((memory_operand (operands[0], V16QImode)
	  || memory_operand (operands[3], V16QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32QImode)
        || register_operand (operands[3], V32QImode)))) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256SImode)) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_ZICOND_LIKE && !TARGET_ZBS && (UINTVAL (operands[2]) < 11)) && (TARGET_64BIT)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1SImode)
        || register_operand (operands[3], V1SImode)))) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( (register_operand (operands[0], V1SImode)
       && register_operand (operands[3], V1SImode)
       && riscv_vector::whole_reg_move_p (operands, V1SImode, 7))
      || ((memory_operand (operands[0], V1SImode)
	  || memory_operand (operands[3], V1SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_XTHEADBB && TARGET_64BIT")
  (-1 "TARGET_ZFHMIN || TARGET_ZHINXMIN")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512HImode)) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32HImode)) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SFmode)
       || register_operand (operands[1], V256SFmode))) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "!TARGET_SHIFT")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2QImode)
        || register_operand (operands[3], RVVMF2QImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64HFmode)) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2QImode)
	|| register_operand (operands[3], RVVM2QImode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "(!TARGET_ZAAMO && TARGET_ZALRSC) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SFmode)
       || register_operand (operands[1], V512SFmode))) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32HFmode)
	|| register_operand (operands[3], V32HFmode)))) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V32HFmode, 7))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((8) - 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF8QImode)
        || register_operand (operands[3], RVVMF8QImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB) && (TARGET_64BIT)) && ( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 8)
   && ((INTVAL (operands[2]) + 8) <= 64)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16DFmode)
	|| register_operand (operands[3], V16DFmode)))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V16DFmode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8DImode)
	|| register_operand (operands[3], RVVM8DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZBS && TARGET_ZBB) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8HImode)
	|| register_operand (operands[3], RVVM8HImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM8HImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32HImode)) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BImode)
       || register_operand (operands[1], V1024BImode))) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1DImode)
        || register_operand (operands[3], V1DImode)))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], V1DImode)
       && register_operand (operands[3], V1DImode)
       && riscv_vector::whole_reg_move_p (operands, V1DImode, 7))
      || ((memory_operand (operands[0], V1DImode)
	  || memory_operand (operands[3], V1DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128DFmode)) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16HFmode)) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode) && TARGET_ZVFH)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_64) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V16BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128QImode)
       || register_operand (operands[1], V128QImode))) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_ZBKC || TARGET_ZBC) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HFmode)
       || register_operand (operands[1], V512HFmode))) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2BImode, 5))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (RVVMF4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4096QImode)
	|| register_operand (operands[3], V4096QImode)))) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4096QImode)
        || register_operand (operands[3], V4096QImode)))) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM4DImode).is_constant ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128QImode)
	|| register_operand (operands[3], V128QImode)))) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64DImode)
	|| register_operand (operands[3], V64DImode)))) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V64DImode, 7))")
  (-1 "(TARGET_ZBS && !single_bit_mask_operand (operands[2], VOIDmode)) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16BFmode)
	|| register_operand (operands[3], V16BFmode)))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, V16BFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_16) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_FP_16))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "(TARGET_ZMMUL || TARGET_MUL) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1HFmode)
        || register_operand (operands[3], RVVM1HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVMF16BImode, 5))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BFmode)
       || register_operand (operands[1], V256BFmode))) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256QImode)
       || register_operand (operands[1], V256QImode))) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1DImode)
	|| register_operand (operands[3], RVVM1DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2048HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16HFmode)) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8HImode)
	|| register_operand (operands[3], V8HImode)))) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( riscv_vector::whole_reg_move_p (operands, V8HImode, 7))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( reload_completed
   && (!register_operand (operands[0], V2SFmode)
       || !register_operand (operands[1], V2SFmode)))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "TARGET_XTHEADBB
   && (UINTVAL (operands[2]) + UINTVAL (operands[3])
       <= GET_MODE_BITSIZE (SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2DImode)
	|| register_operand (operands[3], RVVM2DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF8QImode).is_constant ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V64HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()) && ( 1)")
  (-1 "!TARGET_ZTSO")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BFmode)
       || register_operand (operands[1], V64BFmode))) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2HFmode)
	|| register_operand (operands[3], RVVM2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2QImode).is_constant ()) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_FULL_V)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BFmode)
       || register_operand (operands[1], V128BFmode))) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_ZFHMIN) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024QImode)
	|| register_operand (operands[3], V1024QImode)))) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V1024QImode, 7))")
  (-1 "(TARGET_ZFHMIN && TARGET_DOUBLE_FLOAT) ||
   (TARGET_ZHINXMIN && TARGET_ZDINX)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVM1QImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4BFmode)
	|| register_operand (operands[3], V4BFmode)))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, V4BFmode, 7))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64 && TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DFmode)
       || register_operand (operands[1], V256DFmode))) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_64BIT && TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (QImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && (TARGET_64BIT)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_64) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !memory_operand (operands[0], RVVM8BFmode)
   && !memory_operand (operands[1], RVVM8BFmode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8BImode))) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8DFmode)
        || register_operand (operands[3], RVVM8DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DImode)
       || register_operand (operands[1], V128DImode))) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2SImode)
	|| register_operand (operands[3], V2SImode)))) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( riscv_vector::whole_reg_move_p (operands, V2SImode, 7))")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((16) - 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32BImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SImode)
       || register_operand (operands[1], V512SImode))) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048QImode)
       || register_operand (operands[1], V2048QImode))) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64DFmode)) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096BImode)
       || register_operand (operands[1], V4096BImode))) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((INTVAL (operands[2]) == BITS_PER_WORD - 1
    && exact_log2 (INTVAL (operands[3]) + 1) >= 0)) && (TARGET_64BIT)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64DFmode)
        || register_operand (operands[3], V64DFmode)))) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BFmode)
       || register_operand (operands[1], V1024BFmode))) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "TARGET_64BIT && TARGET_ZBA
   && riscv_shamt_matches_mask_p (INTVAL (operands[2]), INTVAL (operands[3]))
   && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4096QImode)) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4SImode)
        || register_operand (operands[3], RVVM4SImode)))) && ( (register_operand (operands[0], RVVM4SImode)
       && register_operand (operands[3], RVVM4SImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4SImode, 7))
      || ((memory_operand (operands[0], RVVM4SImode)
	  || memory_operand (operands[3], RVVM4SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V1024BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVPACKFPH) && (TARGET_MIN_VLEN > 32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8SFmode)) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V4HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2HImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_64BIT && TARGET_XTHEADMEMIDX && TARGET_XTHEADBB")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256QImode)
       || register_operand (operands[1], V256QImode))) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "TARGET_SMRNMI")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2048HImode)) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVMF4BImode, 5))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM1DImode).is_constant ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32QImode)
        || register_operand (operands[3], V32QImode)))) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( (register_operand (operands[0], V32QImode)
       && register_operand (operands[3], V32QImode)
       && riscv_vector::whole_reg_move_p (operands, V32QImode, 7))
      || ((memory_operand (operands[0], V32QImode)
	  || memory_operand (operands[3], V32QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XCVBI) && (TARGET_64BIT)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1DImode)
	|| register_operand (operands[3], RVVM1DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM1DImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == SImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16SFmode)) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4HFmode)) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "TARGET_VECTOR && !TARGET_XTHEADVECTOR")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4SFmode)
        || register_operand (operands[3], V4SFmode)))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], V4SFmode)
       && register_operand (operands[3], V4SFmode)
       && riscv_vector::whole_reg_move_p (operands, V4SFmode, 7))
      || ((memory_operand (operands[0], V4SFmode)
	  || memory_operand (operands[3], V4SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 8)
   && ((INTVAL (operands[2]) + 8) <= 32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024QImode)
       || register_operand (operands[1], V1024QImode))) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode))) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( reload_completed
   && (!register_operand (operands[0], V8HImode)
       || !register_operand (operands[1], V8HImode)))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1DImode)) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1024SImode)) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM2SImode).is_constant ()")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_XCVELW && !TARGET_64BIT")
  (-1 "(TARGET_ZVKSH) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HImode)
       || register_operand (operands[1], V256HImode))) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBC) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DImode)
       || register_operand (operands[1], V512DImode))) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64HFmode)) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HImode)
       || register_operand (operands[1], V1024HImode))) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2048HFmode)
        || register_operand (operands[3], V2048HFmode)))) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V2048HFmode)
       && register_operand (operands[3], V2048HFmode)
       && riscv_vector::whole_reg_move_p (operands, V2048HFmode, 7))
      || ((memory_operand (operands[0], V2048HFmode)
	  || memory_operand (operands[3], V2048HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !memory_operand (operands[0], RVVM8SFmode)
   && !memory_operand (operands[1], RVVM8SFmode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR) && (((!TARGET_XTHEADVECTOR) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()) && (Pmode == DImode)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( 1)")
  (-1 "((TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && SImode >= QImode) && (TARGET_64BIT)")
  (-1 "SIBLING_CALL_P (insn)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_64BIT && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((!TARGET_XCVBI && !TARGET_SLT
   && GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DImode)
       || register_operand (operands[1], V64DImode))) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048HImode)
	|| register_operand (operands[3], V2048HImode)))) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V2048HImode, 7))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((!TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX)) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SFmode)
       || register_operand (operands[1], V128SFmode))) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM8SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128QImode)
       || register_operand (operands[1], V128QImode))) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM2HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(reload_completed) && (!TARGET_64BIT)")
  (-1 "TARGET_64BIT && TARGET_ZBB && ((INTVAL (operands[2]) & 0x3f) == 0x3f)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512SImode)
        || register_operand (operands[3], V512SImode)))) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V512SImode)
       && register_operand (operands[3], V512SImode)
       && riscv_vector::whole_reg_move_p (operands, V512SImode, 7))
      || ((memory_operand (operands[0], V512SImode)
	  || memory_operand (operands[3], V512SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4QImode)
	|| register_operand (operands[3], RVVMF4QImode)))) && (!TARGET_XTHEADVECTOR)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF4QImode, 7))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2048HFmode)) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "((!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && !TARGET_HALF) && (TARGET_64BIT)) && ( reload_completed && !paradoxical_subreg_p (operands[0]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64SImode)
	|| register_operand (operands[3], V64SImode)))) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( reload_completed
   && (!register_operand (operands[0], V8SImode)
       || !register_operand (operands[1], V8SImode)))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVMF2QImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024SImode)
	|| register_operand (operands[3], V1024SImode)))) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_64BIT && TARGET_ZBS) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DFmode)
       || register_operand (operands[1], V512DFmode))) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024SFmode)
	|| register_operand (operands[3], V1024SFmode)))) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V1024SFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "!TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_ZACAS && TARGET_ZABHA")
  (-1 "(TARGET_SHIFT
   && !((TARGET_ZBS || TARGET_XTHEADBS || TARGET_ZICOND
         || TARGET_XVENTANACONDOPS || TARGET_SFB_ALU)
        && (INTVAL (operands[2]) == 1))
   && !TARGET_XTHEADBB
   && !TARGET_XANDESPERF
   && !(TARGET_64BIT
        && (INTVAL (operands[3]) > 0)
        && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZBA) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "Pmode == SImode")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZALRSC || TARGET_ZACAS) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_64BIT
   && TARGET_ZBS
   && (TARGET_ZBB || TARGET_ZBKB)
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4DImode)
        || register_operand (operands[3], RVVM4DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4HImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM4HImode).is_constant ()")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4HFmode)) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16HImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZICFISS) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_SFB_ALU && (UINTVAL (operands[2]) < 11)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048QImode)
	|| register_operand (operands[3], V2048QImode)))) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_ZBS && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)) && (!TARGET_64BIT)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024QImode)
       || register_operand (operands[1], V1024QImode))) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF2HFmode)) && (TARGET_ZVFH)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2HImode)
        || register_operand (operands[3], RVVMF2HImode)))) && (!TARGET_XTHEADVECTOR)) && ( (register_operand (operands[0], RVVMF2HImode)
       && register_operand (operands[3], RVVMF2HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2HImode, 7))
      || ((memory_operand (operands[0], RVVMF2HImode)
	  || memory_operand (operands[3], RVVMF2HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HImode)
       || register_operand (operands[1], V1024HImode))) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4SFmode)) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !memory_operand (operands[0], RVVM1HFmode)
   && !memory_operand (operands[1], RVVM1HFmode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode))) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( reload_completed
   && (!register_operand (operands[0], V4HImode)
       || !register_operand (operands[1], V4HImode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (0 "(TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && QImode >= HImode")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM2QImode)
   && !memory_operand (operands[1], RVVM2QImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64HImode)
        || register_operand (operands[3], V64HImode)))) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_64BIT
   && TARGET_ZBA
   && !paradoxical_subreg_p (operands[1])
   /* Only profitable if synthesis takes more than one insn.  */
   && riscv_const_insns (operands[2], false) != 1
   /* We need the upper half to be zero.  */
   && (INTVAL (operands[2]) & HOST_WIDE_INT_C (0xffffffff00000000)) == 0
   /* And the the adjusted constant must either be something we can
      implement with andi or bclri.  */
   && ((SMALL_OPERAND (sext_hwi (INTVAL (operands[2]), 32))
        || (TARGET_ZBS && popcount_hwi (INTVAL (operands[2])) == 31))
       && INTVAL (operands[2]) != 0x7fffffff)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_FULL_V)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DFmode)
       || register_operand (operands[1], V256DFmode))) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2BFmode)
	|| register_operand (operands[3], V2BFmode)))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, V2BFmode, 7))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()) && (Pmode == SImode)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM4HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_XTHEADMEMIDX && TARGET_XTHEADBB")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HFmode)
       || register_operand (operands[1], V512HFmode))) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM1BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2QImode)
	|| register_operand (operands[3], RVVMF2QImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4QImode)
	|| register_operand (operands[3], V4QImode)))) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( riscv_vector::whole_reg_move_p (operands, V4QImode, 7))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (HImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && ( reload_completed && TARGET_SHIFT
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2SImode)) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024HFmode)
        || register_operand (operands[3], V1024HFmode)))) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V1024HFmode)
       && register_operand (operands[3], V1024HFmode)
       && riscv_vector::whole_reg_move_p (operands, V1024HFmode, 7))
      || ((memory_operand (operands[0], V1024HFmode)
	  || memory_operand (operands[3], V1024HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_64BIT && (INTVAL (operands[3]) > 0)
    && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HFmode)
       || register_operand (operands[1], V2048HFmode))) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4096BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (0 "(TARGET_ZBKB && INTVAL (operands[2]) == BITS_PER_WORD / 2) && ((TARGET_64BIT) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SImode)
       || register_operand (operands[1], V1024SImode))) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "TARGET_XTHEADMEMPAIR && reload_completed
   && th_mempair_operands_p (operands, true, SImode)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16DFmode)
        || register_operand (operands[3], V16DFmode)))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V16DFmode)
       && register_operand (operands[3], V16DFmode)
       && riscv_vector::whole_reg_move_p (operands, V16DFmode, 7))
      || ((memory_operand (operands[0], V16DFmode)
	  || memory_operand (operands[3], V16DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_64) && (Pmode == SImode))")
  (0 "QImode >= SImode")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16HFmode)
	|| register_operand (operands[3], V16HFmode)))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, V16HFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))")
  (-1 "(TARGET_XTHEADMEMPAIR
  && th_mempair_operands_p (operands, false, DImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) < GET_MODE_BITSIZE (QImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( reload_completed
   && (!register_operand (operands[0], V16SImode)
       || !register_operand (operands[1], V16SImode)))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZBS
   && (operands[2] == CONST0_RTX (SImode)
       || operands[2] == CONST1_RTX (SImode))) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8HImode)) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HImode)
       || register_operand (operands[1], V2048HImode))) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2DFmode)) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4SImode)) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( 1)")
  (-1 "(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode) && TARGET_ZVFH)")
  (-1 "TARGET_ZFBFMIN || TARGET_XANDESBFHCVT")
  (-1 "(TARGET_XTHEADCONDMOV) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((!TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8BImode))) && ( 1)")
  (-1 "TARGET_VECTOR && TARGET_XANDESVPACKFPH")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1024HFmode)) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V2048BImode, 5))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128BFmode)
        || register_operand (operands[3], V128BFmode)))) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V128BFmode)
       && register_operand (operands[3], V128BFmode)
       && riscv_vector::whole_reg_move_p (operands, V128BFmode, 7))
      || ((memory_operand (operands[0], V128BFmode)
	  || memory_operand (operands[3], V128BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZICFISS) && (Pmode == SImode)")
  (-1 "(TARGET_ZICFILP) && (TARGET_64BIT)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2SFmode)
        || register_operand (operands[3], RVVMF2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVMF2SFmode)
       && register_operand (operands[3], RVVMF2SFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2SFmode, 7))
      || ((memory_operand (operands[0], RVVMF2SFmode)
	  || memory_operand (operands[3], RVVMF2SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2SFmode)) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4DFmode)
        || register_operand (operands[3], V4DFmode)))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_ZFHMIN || TARGET_ZHINXMIN) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512DFmode)
	|| register_operand (operands[3], V512DFmode)))) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !memory_operand (operands[0], RVVM8HFmode)
   && !memory_operand (operands[1], RVVM8HFmode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2SFmode)
	|| register_operand (operands[3], RVVMF2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2SFmode, 7))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128SFmode)
        || register_operand (operands[3], V128SFmode)))) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V128SFmode)
       && register_operand (operands[3], V128SFmode)
       && riscv_vector::whole_reg_move_p (operands, V128SFmode, 7))
      || ((memory_operand (operands[0], V128SFmode)
	  || memory_operand (operands[3], V128SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8DFmode)
	|| register_operand (operands[3], RVVM8DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM8DFmode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512SFmode)
        || register_operand (operands[3], V512SFmode)))) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V512SFmode)
       && register_operand (operands[3], V512SFmode)
       && riscv_vector::whole_reg_move_p (operands, V512SFmode, 7))
      || ((memory_operand (operands[0], V512SFmode)
	  || memory_operand (operands[3], V512SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1024BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64HImode)) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V1HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BFmode)
       || register_operand (operands[1], V64BFmode))) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SFmode)
       || register_operand (operands[1], V128SFmode))) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XANDESPERF
   && (UINTVAL (operands[2]) != 0)
   && (exact_log2 ((UINTVAL (operands[3]) >> UINTVAL (operands[2])) + 1) == 1)
   && ((UINTVAL (operands[3]) & ((1 << UINTVAL (operands[2])) - 1)) == 0)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64DFmode)
	|| register_operand (operands[3], V64DFmode)))) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_XTHEADBB) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (TARGET_FULL_V)")
  (-1 "(TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256DImode)
	|| register_operand (operands[3], V256DImode)))) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BImode)
       || register_operand (operands[1], V1024BImode))) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( 1)")
  (-1 "((TARGET_64BIT
    && riscv_const_insns (operands[3], false) == 1
    && riscv_const_insns (GEN_INT (INTVAL (operands[3])
			  << INTVAL (operands[2])), false) != 1)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((32) - 1)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4QImode)
        || register_operand (operands[3], V4QImode)))) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( (register_operand (operands[0], V4QImode)
       && register_operand (operands[3], V4QImode)
       && riscv_vector::whole_reg_move_p (operands, V4QImode, 7))
      || ((memory_operand (operands[0], V4QImode)
	  || memory_operand (operands[3], V4QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2BFmode)
	|| register_operand (operands[3], RVVMF2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "TARGET_VECTOR && TARGET_XSFVQMACCDOD")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((INTVAL (operands[2]) == BITS_PER_WORD - 1
    && exact_log2 (INTVAL (operands[3]) + 1) >= 0)) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( 1)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4DImode)
        || register_operand (operands[3], V4DImode)))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "!TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128DFmode)
	|| register_operand (operands[3], V128DFmode)))) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V128DFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128DFmode)) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_64BIT && (TARGET_ZBB || TARGET_ZBKB)
    && INTVAL (operands[2]) < 32
    && (INTVAL (operands[3]) & HOST_WIDE_INT_C (0xffffffff80000000)) == HOST_WIDE_INT_C (0xffffffff80000000)
    && ctz_hwi (INTVAL (operands[3])) == 32 - INTVAL (operands[2]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_ZALRSC || TARGET_ZACAS")
  (-1 "(TARGET_ZICOND_LIKE && !TARGET_ZBS && (UINTVAL (operands[2]) < 11)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512SFmode)) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2SFmode)
	|| register_operand (operands[3], RVVMF2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2HFmode)
       || register_operand (operands[1], V2HFmode))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_SFB_ALU) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM4DFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256BFmode)
        || register_operand (operands[3], V256BFmode)))) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2048BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_BF_16) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_BF_16))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( 1)")
  (-1 "TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8DImode)
       || register_operand (operands[1], V8DImode))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( reload_completed
   && (!register_operand (operands[0], V8DImode)
       || !register_operand (operands[1], V8DImode)))")
  (-1 "(TARGET_XTHEADMEMPAIR && reload_completed
   && th_mempair_operands_p (operands, true, DImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4QImode)
        || register_operand (operands[3], V4QImode)))) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM8SImode)
   && !memory_operand (operands[1], RVVM8SImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1DFmode)
        || register_operand (operands[3], V1DFmode)))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], V1DFmode)
       && register_operand (operands[3], V1DFmode)
       && riscv_vector::whole_reg_move_p (operands, V1DFmode, 7))
      || ((memory_operand (operands[0], V1DFmode)
	  || memory_operand (operands[3], V1DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_BF_16))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32SImode)) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HFmode)
       || register_operand (operands[1], V2048HFmode))) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (0 "(TARGET_XTHEADVECTOR) && (!TARGET_XTHEADVECTOR)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128DFmode)
        || register_operand (operands[3], V128DFmode)))) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V128DFmode)
       && register_operand (operands[3], V128DFmode)
       && riscv_vector::whole_reg_move_p (operands, V128DFmode, 7))
      || ((memory_operand (operands[0], V128DFmode)
	  || memory_operand (operands[3], V128DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1SFmode)
        || register_operand (operands[3], V1SFmode)))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], V1SFmode)
       && register_operand (operands[3], V1SFmode)
       && riscv_vector::whole_reg_move_p (operands, V1SFmode, 7))
      || ((memory_operand (operands[0], V1SFmode)
	  || memory_operand (operands[3], V1SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_FULL_V)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1BFmode)
	|| register_operand (operands[3], RVVM1BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM1BFmode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HFmode)
       || register_operand (operands[1], V128HFmode))) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4BImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF4QImode)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4HImode)
	|| register_operand (operands[3], RVVM4HImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM4HImode, 7))")
  (-1 "(!TARGET_XTHEADMEMIDX && !TARGET_ANDI) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2SImode)
        || register_operand (operands[3], RVVM2SImode)))) && ( (register_operand (operands[0], RVVM2SImode)
       && register_operand (operands[3], RVVM2SImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2SImode, 7))
      || ((memory_operand (operands[0], RVVM2SImode)
	  || memory_operand (operands[3], RVVM2SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256HImode)
	|| register_operand (operands[3], V256HImode)))) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V256HImode, 7))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16SFmode)) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_HARD_FLOAT) && ((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16DFmode)
       || register_operand (operands[1], V16DFmode))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_XOR || (IOR) == IOR) && (TARGET_64BIT)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16DFmode)) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512 && TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8SImode)
	|| register_operand (operands[3], V8SImode)))) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32QImode)
	|| register_operand (operands[3], V32QImode)))) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256HFmode)
        || register_operand (operands[3], V256HFmode)))) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4QImode)
	|| register_operand (operands[3], RVVM4QImode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (TARGET_FULL_V)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16DImode)) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256DFmode)
	|| register_operand (operands[3], V256DFmode)))) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !memory_operand (operands[0], RVVM4DFmode)
   && !memory_operand (operands[1], RVVM4DFmode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32SFmode)) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF4HFmode)) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4BImode))) && ( 1)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2048BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4BFmode)
        || register_operand (operands[3], V4BFmode)))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZICOND_LIKE && rtx_equal_p (operands[1], operands[2])) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SFmode)
       || register_operand (operands[1], V256SFmode))) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2DFmode)
	|| register_operand (operands[3], V2DFmode)))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, V2DFmode, 7))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8HImode)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1HFmode)
	|| register_operand (operands[3], V1HFmode)))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, V1HFmode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256SFmode)
        || register_operand (operands[3], V256SFmode)))) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8HImode)
        || register_operand (operands[3], RVVM8HImode)))) && ( (register_operand (operands[0], RVVM8HImode)
       && register_operand (operands[3], RVVM8HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8HImode, 7))
      || ((memory_operand (operands[0], RVVM8HImode)
	  || memory_operand (operands[3], RVVM8HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8BFmode)
        || register_operand (operands[3], V8BFmode)))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], V8BFmode)
       && register_operand (operands[3], V8BFmode)
       && riscv_vector::whole_reg_move_p (operands, V8BFmode, 7))
      || ((memory_operand (operands[0], V8BFmode)
	  || memory_operand (operands[3], V8BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512BFmode)
        || register_operand (operands[3], V512BFmode)))) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SImode)
       || register_operand (operands[1], V32SImode))) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_ZALRSC) && (TARGET_64BIT)")
  (-1 "(TARGET_LUI) && (Pmode == SImode)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_64BIT && (TARGET_ZBB || TARGET_XTHEADBB)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (0 "((TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2048BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))")
  (-1 "TARGET_SHIFT
   && !((TARGET_ZBS || TARGET_XTHEADBS || TARGET_ZICOND
         || TARGET_XVENTANACONDOPS || TARGET_SFB_ALU)
        && (INTVAL (operands[2]) == 1))
   && !TARGET_XTHEADBB
   && !TARGET_XANDESPERF
   && !(TARGET_64BIT
        && (INTVAL (operands[3]) > 0)
        && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V1024BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && TARGET_HALF) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_64))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512BFmode)
	|| register_operand (operands[3], V512BFmode)))) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V512BFmode, 7))")
  (-1 "TARGET_64BIT && (TARGET_ZBB || TARGET_ZBKB)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4QImode)
        || register_operand (operands[3], RVVM4QImode)))) && ( (register_operand (operands[0], RVVM4QImode)
       && register_operand (operands[3], RVVM4QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4QImode, 7))
      || ((memory_operand (operands[0], RVVM4QImode)
	  || memory_operand (operands[3], RVVM4QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "((LUI_OPERAND (~INTVAL (operands[2]))
    && ((INTVAL (operands[2]) & (-INTVAL (operands[3])))
	== (-INTVAL (operands[3])))
    && riscv_const_insns (operands[3], false)
    && (riscv_const_insns (GEN_INT (~INTVAL (operands[2])
				    | -INTVAL (operands[3])), false)
	<= riscv_const_insns (operands[3], false)))) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32SImode)
        || register_operand (operands[3], V32SImode)))) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096QImode)
       || register_operand (operands[1], V4096QImode))) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 512)")
  (-1 "((!TARGET_XANDESPERF && TARGET_SLT) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (!TARGET_XTHEADVECTOR))")
  (-1 "TARGET_64BIT
   && (INTVAL (operands[3]) | ((1 << INTVAL (operands[2])) - 1)) == 0xffffffff")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DImode)
       || register_operand (operands[1], V256DImode))) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256HFmode)) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && !TARGET_HALF) && (TARGET_64BIT)")
  (-1 "TARGET_LUI && !is_zicfilp_p ()")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_ZTSO) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4SFmode)
	|| register_operand (operands[3], V4SFmode)))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_ZICOND && TARGET_ZBS) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HImode)
       || register_operand (operands[1], V128HImode))) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1024BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM4SImode)
   && !memory_operand (operands[1], RVVM4SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048QImode)
       || register_operand (operands[1], V2048QImode))) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16BFmode)
       || register_operand (operands[1], V16BFmode))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( reload_completed
   && (!register_operand (operands[0], V16BFmode)
       || !register_operand (operands[1], V16BFmode)))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32QImode)
	|| register_operand (operands[3], V32QImode)))) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( riscv_vector::whole_reg_move_p (operands, V32QImode, 7))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2HImode)
	|| register_operand (operands[3], V2HImode)))) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( riscv_vector::whole_reg_move_p (operands, V2HImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( 1)")
  (-1 "(TARGET_64BIT && TARGET_XTHEADMEMIDX && (lra_in_progress || reload_completed)
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff) && ( !TARGET_ZBA && reload_completed)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF4BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16SFmode)
	|| register_operand (operands[3], V16SFmode)))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1DFmode)
       || register_operand (operands[1], V1DFmode))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "TARGET_XCVSIMD && !TARGET_64BIT")
  (-1 "(TARGET_ZBS && !single_bit_mask_operand (operands[2], VOIDmode)) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_TLSDESC) && (Pmode == SImode)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SIGNED_ZEROS (HFmode)) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128DFmode)) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM8DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2HImode)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1SFmode)) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM1QImode)
   && !memory_operand (operands[1], RVVM1QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V2048BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256SImode)
	|| register_operand (operands[3], V256SImode)))) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4DFmode)
	|| register_operand (operands[3], RVVM4DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2SFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128HFmode)
        || register_operand (operands[3], V128HFmode)))) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2QImode)
	|| register_operand (operands[3], RVVMF2QImode)))) && (!TARGET_XTHEADVECTOR)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2QImode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024SImode)
        || register_operand (operands[3], V1024SImode)))) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8HFmode)) && (TARGET_ZVFH)")
  (-1 "! TARGET_64BIT")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1QImode)
        || register_operand (operands[3], RVVM1QImode)))) && ( (register_operand (operands[0], RVVM1QImode)
       && register_operand (operands[3], RVVM1QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1QImode, 7))
      || ((memory_operand (operands[0], RVVM1QImode)
	  || memory_operand (operands[3], RVVM1QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_FP_16))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4HImode)
	|| register_operand (operands[3], RVVM4HImode)))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4SImode)
	|| register_operand (operands[3], V4SImode)))) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( riscv_vector::whole_reg_move_p (operands, V4SImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4QImode)) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1SImode)
        || register_operand (operands[3], V1SImode)))) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZBKC || TARGET_ZBC) && (TARGET_64BIT)")
  (-1 "TARGET_ZMMUL || TARGET_MUL")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM4QImode)
   && !memory_operand (operands[1], RVVM4QImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !memory_operand (operands[0], RVVM2DFmode)
   && !memory_operand (operands[1], RVVM2DFmode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM8SImode)")
  (-1 "TARGET_ZKSH")
  (-1 "(TARGET_ZBB || TARGET_ZBKB) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64SFmode)
	|| register_operand (operands[3], V64SFmode)))) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V64SFmode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256DFmode)
        || register_operand (operands[3], V256DFmode)))) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2HImode)
       || register_operand (operands[1], V2HImode))) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( reload_completed
   && (!register_operand (operands[0], V2HImode)
       || !register_operand (operands[1], V2HImode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024QImode)
        || register_operand (operands[3], V1024QImode)))) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V64BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM1DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1SImode)
	|| register_operand (operands[3], V1SImode)))) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8QImode)
	|| register_operand (operands[3], V8QImode)))) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( riscv_vector::whole_reg_move_p (operands, V8QImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1DImode)
	|| register_operand (operands[3], V1DImode)))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, V1DImode, 7))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM1HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024HFmode)
        || register_operand (operands[3], V1024HFmode)))) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32BFmode)
        || register_operand (operands[3], V32BFmode)))) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V32BFmode)
       && register_operand (operands[3], V32BFmode)
       && riscv_vector::whole_reg_move_p (operands, V32BFmode, 7))
      || ((memory_operand (operands[0], V32BFmode)
	  || memory_operand (operands[3], V32BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128SImode)) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SFmode)
       || register_operand (operands[1], V256SFmode))) && ((riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) < GET_MODE_BITSIZE (HImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_SFB_ALU && (UINTVAL (operands[2]) < 11)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))")
  (-1 "(register_operand (operands[0], HImode)
    || reg_or_0_operand (operands[1], HImode))
   && !TARGET_HALF")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (TARGET_FULL_V)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1HFmode)
        || register_operand (operands[3], V1HFmode)))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_ZAAMO || TARGET_ZALRSC) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HImode)
       || register_operand (operands[1], V256HImode))) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BImode)
       || register_operand (operands[1], V2048BImode))) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()) && (Pmode == SImode)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BFmode)
       || register_operand (operands[1], V2048BFmode))) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM4SImode).is_constant ()")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4HImode)
	|| register_operand (operands[3], RVVMF4HImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( riscv_vector::whole_reg_move_p (operands, RVVMF4HImode, 7))")
  (-1 "(TARGET_VECTOR) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_HARD_FLOAT && !TARGET_64BIT && TARGET_ZFA")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode))) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (0 "(TARGET_SLT && TARGET_SLTI) && (((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "TARGET_64BIT && !TARGET_XTHEADMEMIDX && !TARGET_XANDESPERF")
  (0 "HImode >= SImode")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_XANDESPERF
   && (UINTVAL (operands[2]) != 0)
   && (exact_log2 ((UINTVAL (operands[3]) >> UINTVAL (operands[2])) + 1) > 1)
   && ((UINTVAL (operands[3]) & ((1 << UINTVAL (operands[2])) - 1)) == 0)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512DImode)
        || register_operand (operands[3], V512DImode)))) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HFmode)
       || register_operand (operands[1], V1024HFmode))) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512SFmode)
	|| register_operand (operands[3], V512SFmode)))) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2SImode)
	|| register_operand (operands[3], RVVMF2SImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2SImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4BFmode)
        || register_operand (operands[3], V4BFmode)))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], V4BFmode)
       && register_operand (operands[3], V4BFmode)
       && riscv_vector::whole_reg_move_p (operands, V4BFmode, 7))
      || ((memory_operand (operands[0], V4BFmode)
	  || memory_operand (operands[3], V4BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1QImode)
	|| register_operand (operands[3], V1QImode)))) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( riscv_vector::whole_reg_move_p (operands, V1QImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZCMP) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512HFmode)
        || register_operand (operands[3], V512HFmode)))) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZICBOZ) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2QImode)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8DFmode)
        || register_operand (operands[3], V8DFmode)))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_64BIT && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256HImode)
        || register_operand (operands[3], V256HImode)))) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V256HImode)
       && register_operand (operands[3], V256HImode)
       && riscv_vector::whole_reg_move_p (operands, V256HImode, 7))
      || ((memory_operand (operands[0], V256HImode)
	  || memory_operand (operands[3], V256HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512SImode)) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HFmode)
       || register_operand (operands[1], V128HFmode))) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (((TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX)) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2048HFmode)
        || register_operand (operands[3], V2048HFmode)))) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024HFmode)
	|| register_operand (operands[3], V1024HFmode)))) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128DImode)) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048HImode)
	|| register_operand (operands[3], V2048HImode)))) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1SFmode)
       || register_operand (operands[1], V1SFmode))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_FULL_V)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4BFmode)
        || register_operand (operands[3], RVVM4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], RVVM4BFmode)
       && register_operand (operands[3], RVVM4BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4BFmode, 7))
      || ((memory_operand (operands[0], RVVM4BFmode)
	  || memory_operand (operands[3], RVVM4BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_64BIT && TARGET_XANDESPERF")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1024BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64SImode)) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "TARGET_ZTSO")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048QImode)
       || register_operand (operands[1], V2048QImode))) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_FULL_V)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_FULL_V)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZICOND_LIKE && rtx_equal_p (operands[1], operands[2])) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16BImode)
       || register_operand (operands[1], V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8SFmode)
	|| register_operand (operands[3], V8SFmode)))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "TARGET_ZICBOP || TARGET_XMIPSCBOP")
  (-1 "((TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8BFmode)
	|| register_operand (operands[3], V8BFmode)))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, V8BFmode, 7))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32HFmode)
        || register_operand (operands[3], V32HFmode)))) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2SImode).is_constant ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4QImode)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048HFmode)
	|| register_operand (operands[3], V2048HFmode)))) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V2048HFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_64BIT && TARGET_ZBS")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_32) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_ZBS && !single_bit_mask_operand (operands[2], VOIDmode)) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BImode)
       || register_operand (operands[1], V1024BImode))) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64DFmode)
	|| register_operand (operands[3], V64DFmode)))) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V64DFmode, 7))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128BFmode)
	|| register_operand (operands[3], V128BFmode)))) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && can_create_pseudo_p ()) && (!TARGET_64BIT)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256DFmode)
        || register_operand (operands[3], V256DFmode)))) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V256DFmode)
       && register_operand (operands[3], V256DFmode)
       && riscv_vector::whole_reg_move_p (operands, V256DFmode, 7))
      || ((memory_operand (operands[0], V256DFmode)
	  || memory_operand (operands[3], V256DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( reload_completed
   && (!register_operand (operands[0], V4DFmode)
       || !register_operand (operands[1], V4DFmode)))")
  (-1 "TARGET_64BIT && (INTVAL (operands[2]) & 0x1f) > 0")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V32BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128DFmode)
        || register_operand (operands[3], V128DFmode)))) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "TARGET_64BIT && TARGET_ZBS
   && clz_hwi (INTVAL (operands[2])) >= 33")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8HFmode)) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_HARD_FLOAT || TARGET_ZFINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (TARGET_MIN_VLEN > 32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode))) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( reload_completed
   && (!register_operand (operands[0], V2SImode)
       || !register_operand (operands[1], V2SImode)))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_XTHEADBA) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16DImode)
	|| register_operand (operands[3], V16DImode)))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V16DImode, 7))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16SFmode)
        || register_operand (operands[3], V16SFmode)))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V16SFmode)
       && register_operand (operands[3], V16SFmode)
       && riscv_vector::whole_reg_move_p (operands, V16SFmode, 7))
      || ((memory_operand (operands[0], V16SFmode)
	  || memory_operand (operands[3], V16SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( 1)")
  (-1 "TARGET_XTHEADMAC")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "TARGET_ZIFENCEI")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BImode))) && ( 1)")
  (-1 "(TARGET_ZBS && TARGET_ZBB) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8HImode)
	|| register_operand (operands[3], RVVM8HImode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV)
    && INTVAL (operands[2]) + INTVAL (operands[4]) == -1
    && INTVAL (operands[3]) + INTVAL (operands[4]) == 1)) && (!TARGET_64BIT)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512QImode)
	|| register_operand (operands[3], V512QImode)))) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V512QImode, 7))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V1024HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256QImode)
        || register_operand (operands[3], V256QImode)))) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V256QImode)
       && register_operand (operands[3], V256QImode)
       && riscv_vector::whole_reg_move_p (operands, V256QImode, 7))
      || ((memory_operand (operands[0], V256QImode)
	  || memory_operand (operands[3], V256QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( reload_completed
   && (!register_operand (operands[0], V8BFmode)
       || !register_operand (operands[1], V8BFmode)))")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128DImode)
	|| register_operand (operands[3], V128DImode)))) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256HFmode)
        || register_operand (operands[3], V256HFmode)))) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V256HFmode)
       && register_operand (operands[3], V256HFmode)
       && riscv_vector::whole_reg_move_p (operands, V256HFmode, 7))
      || ((memory_operand (operands[0], V256HFmode)
	  || memory_operand (operands[3], V256HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HImode)
       || register_operand (operands[1], V512HImode))) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BImode)
       || register_operand (operands[1], V256BImode))) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_XANDESPERF) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVM4QImode))")
  (-1 "riscv_can_use_return_insn ()")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8HFmode)
        || register_operand (operands[3], V8HFmode)))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HImode)
       || register_operand (operands[1], V64HImode))) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1DFmode)
        || register_operand (operands[3], RVVM1DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], RVVM1DFmode)
       && register_operand (operands[3], RVVM1DFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1DFmode, 7))
      || ((memory_operand (operands[0], RVVM1DFmode)
	  || memory_operand (operands[3], RVVM1DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF4HImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(is_zicfilp_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256BFmode)
        || register_operand (operands[3], V256BFmode)))) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V256BFmode)
       && register_operand (operands[3], V256BFmode)
       && riscv_vector::whole_reg_move_p (operands, V256BFmode, 7))
      || ((memory_operand (operands[0], V256BFmode)
	  || memory_operand (operands[3], V256BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_ZKSED && !TARGET_64BIT")
  (-1 "(TARGET_ZICBOM) && (!TARGET_64BIT)")
  (-1 "TARGET_XTHEADBB")
  (-1 "TARGET_64BIT && TARGET_ZBB")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V64SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1SImode)
	|| register_operand (operands[3], RVVM1SImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM1SImode, 7))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1BFmode)
        || register_operand (operands[3], RVVM1BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], RVVM1BFmode)
       && register_operand (operands[3], RVVM1BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1BFmode, 7))
      || ((memory_operand (operands[0], RVVM1BFmode)
	  || memory_operand (operands[3], RVVM1BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "!TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || reg_or_0_operand (operands[1], DFmode))")
  (-1 "((TARGET_VECTOR && TARGET_64BIT) && (Pmode == DImode)) && ( 1)")
  (-1 "TARGET_ZVKNED || TARGET_ZVKSED")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_XANDESPERF) && (Pmode == DImode)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF4HImode).is_constant ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "TARGET_VECTOR")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8HImode)
	|| register_operand (operands[3], V8HImode)))) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()) && (Pmode == SImode)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode))) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2BFmode)
       || register_operand (operands[1], V2BFmode))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( reload_completed
   && (!register_operand (operands[0], V2BFmode)
       || !register_operand (operands[1], V2BFmode)))")
  (0 "((TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && HImode >= SImode) && (TARGET_64BIT)")
  (-1 "(TARGET_SHIFT
    && (INTVAL (operands[3]) >= 0 || !partial_subreg_p (operands[2]))
    && popcount_hwi (INTVAL (operands[3])) > 1
    && !SMALL_OPERAND (INTVAL (operands[3]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (HImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && (TARGET_64BIT)) && ( reload_completed && TARGET_SHIFT
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64DFmode)) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256SFmode)
	|| register_operand (operands[3], V256SFmode)))) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V256SFmode, 7))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( reload_completed
   && (!register_operand (operands[0], V16HImode)
       || !register_operand (operands[1], V16HImode)))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_XTHEADMEMIDX")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256QImode)
	|| register_operand (operands[3], V256QImode)))) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V256QImode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_64BIT && riscv_const_insns (operands[3], false) == 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM1HImode)
   && !memory_operand (operands[1], RVVM1HImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (!TARGET_XTHEADVECTOR)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_ZKSED")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8DImode)
        || register_operand (operands[3], V8DImode)))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V8DImode)
       && register_operand (operands[3], V8DImode)
       && riscv_vector::whole_reg_move_p (operands, V8DImode, 7))
      || ((memory_operand (operands[0], V8DImode)
	  || memory_operand (operands[3], V8DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16BImode)
       || register_operand (operands[1], V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && ( reload_completed
   && (!register_operand (operands[0], V16BImode)
       || !register_operand (operands[1], V16BImode)))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128DFmode)
	|| register_operand (operands[3], V128DFmode)))) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZBS && !paradoxical_subreg_p (operands[1])) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2BFmode)
        || register_operand (operands[3], RVVM2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256HFmode)) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16HFmode)) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "(register_operand (operands[0], HImode)
    || reg_or_0_operand (operands[1], HImode))
   && TARGET_HALF")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16DImode)) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (0 "(TARGET_ZICOND_LIKE) && (((TARGET_64BIT) && (!TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "((!TARGET_XCVBI && !TARGET_SLT
   && GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128SImode)
	|| register_operand (operands[3], V128SImode)))) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2DImode)
	|| register_operand (operands[3], V2DImode)))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, V2DImode, 7))")
  (-1 "((TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && SImode >= HImode) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V16BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))) && ( 1)")
  (-1 "(TARGET_XTHEADBB) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8HImode)
        || register_operand (operands[3], V8HImode)))) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8BImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8QImode)
        || register_operand (operands[3], RVVM8QImode)))) && ( (register_operand (operands[0], RVVM8QImode)
       && register_operand (operands[3], RVVM8QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8QImode, 7))
      || ((memory_operand (operands[0], RVVM8QImode)
	  || memory_operand (operands[3], RVVM8QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2048HFmode)) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZBS) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && TARGET_FDIV) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZICOND && TARGET_ZBS) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1SImode)
       || register_operand (operands[1], V1SImode))) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( reload_completed
   && (!register_operand (operands[0], V1SImode)
       || !register_operand (operands[1], V1SImode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V32BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16HFmode)
	|| register_operand (operands[3], V16HFmode)))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM1SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024QImode)
        || register_operand (operands[3], V1024QImode)))) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V1024QImode)
       && register_operand (operands[3], V1024QImode)
       && riscv_vector::whole_reg_move_p (operands, V1024QImode, 7))
      || ((memory_operand (operands[0], V1024QImode)
	  || memory_operand (operands[3], V1024QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HFmode)
       || register_operand (operands[1], V128HFmode))) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1BImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1DImode)) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_ZICBOM) && (TARGET_64BIT)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_ZFH || TARGET_ZHINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( reload_completed
   && (!register_operand (operands[0], V2DImode)
       || !register_operand (operands[1], V2DImode)))")
  (-1 "(!TARGET_XCVBI && !TARGET_SLT
   && GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !memory_operand (operands[0], RVVM2HFmode)
   && !memory_operand (operands[1], RVVM2HFmode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8DImode)
	|| register_operand (operands[3], V8DImode)))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V8DImode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_XOR")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64BFmode)
	|| register_operand (operands[3], V64BFmode)))) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_64BIT && TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2HFmode)) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64BFmode)
        || register_operand (operands[3], V64BFmode)))) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V64BFmode)
       && register_operand (operands[3], V64BFmode)
       && riscv_vector::whole_reg_move_p (operands, V64BFmode, 7))
      || ((memory_operand (operands[0], V64BFmode)
	  || memory_operand (operands[3], V64BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( reload_completed
   && (!register_operand (operands[0], V4SFmode)
       || !register_operand (operands[1], V4SFmode)))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16QImode)) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512HImode)
        || register_operand (operands[3], V512HImode)))) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V512HImode)
       && register_operand (operands[3], V512HImode)
       && riscv_vector::whole_reg_move_p (operands, V512HImode, 7))
      || ((memory_operand (operands[0], V512HImode)
	  || memory_operand (operands[3], V512HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256DImode)
        || register_operand (operands[3], V256DImode)))) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "TARGET_ZKSH && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128SFmode)
	|| register_operand (operands[3], V128SFmode)))) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V128SFmode, 7))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM2SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4QImode)
	|| register_operand (operands[3], RVVMF4QImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V128DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024HImode)
	|| register_operand (operands[3], V1024HImode)))) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V1024HImode, 7))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2048HImode)
        || register_operand (operands[3], V2048HImode)))) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V2048HImode)
       && register_operand (operands[3], V2048HImode)
       && riscv_vector::whole_reg_move_p (operands, V2048HImode, 7))
      || ((memory_operand (operands[0], V2048HImode)
	  || memory_operand (operands[3], V2048HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2HFmode)
       || register_operand (operands[1], V2HFmode))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( reload_completed
   && (!register_operand (operands[0], V2HFmode)
       || !register_operand (operands[1], V2HFmode)))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32SImode)) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_VECTOR && Pmode == DImode")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8SImode)
	|| register_operand (operands[3], RVVM8SImode)))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8SFmode)
        || register_operand (operands[3], RVVM8SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4BFmode)
        || register_operand (operands[3], RVVMF4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])) && (TARGET_ZFHMIN)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1DFmode)
	|| register_operand (operands[3], V1DFmode)))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, V1DFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SImode)
       || register_operand (operands[1], V128SImode))) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(!TARGET_XCVBI && (TARGET_SLT
   || GET_CODE (operands[1]) == EQ || GET_CODE (operands[1]) == NE)) && (!TARGET_64BIT)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4SFmode)
	|| register_operand (operands[3], V4SFmode)))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, V4SFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVMF32BImode, 5))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32SFmode)
        || register_operand (operands[3], V32SFmode)))) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4DFmode)) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4SImode)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( 1)")
  (-1 "(TARGET_ZACAS) && (TARGET_64BIT)")
  (-1 "((!SMALL_OPERAND (INTVAL (operands[2]))) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(DImode >= HImode) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (Pmode == DImode)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_64BIT && TARGET_XANDESPERF
   && IN_RANGE (UINTVAL (operands[2]), 0, 3)
   && exact_log2 ((INTVAL (operands[3]) >> INTVAL (operands[2])) + 1) == 32
   && (INTVAL (operands[3]) & ((1 << INTVAL (operands[2])) - 1)) == 0")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM2QImode).is_constant ()")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HImode)
       || register_operand (operands[1], V32HImode))) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_HARD_FLOAT  || TARGET_ZFINX) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4HImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_XANDESPERF
   && UINTVAL (operands[2]) != 1")
  (-1 "TARGET_ZBKC || TARGET_ZBC")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || reg_or_0_operand (operands[1], SFmode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF2SFmode)) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2HFmode)) && (TARGET_ZVFH)")
  (0 "((TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && QImode >= SImode) && (TARGET_64BIT)")
  (-1 "(USE_LOAD_ADDRESS_MACRO (operands[1])) && (TARGET_64BIT)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4DFmode)
	|| register_operand (operands[3], V4DFmode)))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "QImode >= HImode")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16BFmode)
        || register_operand (operands[3], V16BFmode)))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048QImode)
       || register_operand (operands[1], V2048QImode))) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT) && (Pmode == SImode)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2BFmode)
        || register_operand (operands[3], V2BFmode)))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], V2BFmode)
       && register_operand (operands[3], V2BFmode)
       && riscv_vector::whole_reg_move_p (operands, V2BFmode, 7))
      || ((memory_operand (operands[0], V2BFmode)
	  || memory_operand (operands[3], V2BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVM1BImode, 5))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4BImode))) && ( !reload_completed)")
  (-1 "TARGET_DIV && TARGET_64BIT")
  (-1 "(TARGET_AUIPC) && (Pmode == SImode)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_SLT && TARGET_SLTI) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32DImode)) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V64HImode)) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16HFmode)
       || register_operand (operands[1], V16HFmode))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( reload_completed
   && (!register_operand (operands[0], V16HFmode)
       || !register_operand (operands[1], V16HFmode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == DImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2DFmode)
	|| register_operand (operands[3], RVVM2DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM2DFmode, 7))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BImode)
       || register_operand (operands[1], V128BImode))) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4QImode)
        || register_operand (operands[3], RVVMF4QImode)))) && (!TARGET_XTHEADVECTOR)) && ( (register_operand (operands[0], RVVMF4QImode)
       && register_operand (operands[3], RVVMF4QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF4QImode, 7))
      || ((memory_operand (operands[0], RVVMF4QImode)
	  || memory_operand (operands[3], RVVMF4QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SNANS (HFmode)) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4BFmode)
       || register_operand (operands[1], V4BFmode))) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4DImode)
	|| register_operand (operands[3], V4DImode)))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "TARGET_VECTOR && TARGET_XANDESVDOT")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV)
    && INTVAL (operands[2]) + INTVAL (operands[4]) == -1
    && INTVAL (operands[3]) + INTVAL (operands[4]) == 1)) && (TARGET_64BIT)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128SImode)
        || register_operand (operands[3], V128SImode)))) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V128SImode)
       && register_operand (operands[3], V128SImode)
       && riscv_vector::whole_reg_move_p (operands, V128SImode, 7))
      || ((memory_operand (operands[0], V128SImode)
	  || memory_operand (operands[3], V128SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4HFmode)
	|| register_operand (operands[3], RVVM4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM4HFmode, 7))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (RVVMF16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32HFmode)
	|| register_operand (operands[3], V32HFmode)))) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V64BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HFmode)
       || register_operand (operands[1], V1024HFmode))) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BImode)
       || register_operand (operands[1], V64BImode))) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((!SMALL_OPERAND (INTVAL (operands[2]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM2BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_XMIPSCMOV) && (TARGET_64BIT)")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((16) - 1)) && (TARGET_64BIT)")
  (-1 "TARGET_ZICFILP")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4DFmode)
        || register_operand (operands[3], V4DFmode)))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], V4DFmode)
       && register_operand (operands[3], V4DFmode)
       && riscv_vector::whole_reg_move_p (operands, V4DFmode, 7))
      || ((memory_operand (operands[0], V4DFmode)
	  || memory_operand (operands[3], V4DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && ( riscv_vector::whole_reg_move_p (operands, RVVMF8BImode, 5))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128SFmode)) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32QImode)) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024QImode)
       || register_operand (operands[1], V1024QImode))) && ((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2DImode)
        || register_operand (operands[3], RVVM2DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (0 "(SImode >= DImode) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_HARD_FLOAT || TARGET_ZFINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256DImode)
	|| register_operand (operands[3], V256DImode)))) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V256DImode, 7))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SImode)
       || register_operand (operands[1], V256SImode))) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V256SFmode)
        || register_operand (operands[3], V256SFmode)))) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V256SFmode)
       && register_operand (operands[3], V256SFmode)
       && riscv_vector::whole_reg_move_p (operands, V256SFmode, 7))
      || ((memory_operand (operands[0], V256SFmode)
	  || memory_operand (operands[3], V256SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF64BImode, 5))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4SFmode)
	|| register_operand (operands[3], RVVM4SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, RVVM4SFmode, 7))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM8HImode)
   && !memory_operand (operands[1], RVVM8HImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF4QImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2048QImode)
	|| register_operand (operands[3], V2048QImode)))) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V2048QImode, 7))")
  (-1 "((TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16DFmode)
       || register_operand (operands[1], V16DFmode))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( reload_completed
   && (!register_operand (operands[0], V16DFmode)
       || !register_operand (operands[1], V16DFmode)))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4SImode)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8QImode)
	|| register_operand (operands[3], RVVM8QImode)))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1QImode)
	|| register_operand (operands[3], V1QImode)))) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_ZBS && !single_bit_mask_operand (operands[2], VOIDmode)) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2BImode)
       || register_operand (operands[1], V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && ( reload_completed
   && (!register_operand (operands[0], V2BImode)
       || !register_operand (operands[1], V2BImode)))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1024SImode)) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128BFmode)
	|| register_operand (operands[3], V128BFmode)))) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V128BFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SFmode)
       || register_operand (operands[1], V32SFmode))) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BImode)
       || register_operand (operands[1], V128BImode))) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2QImode)
       || register_operand (operands[1], V2QImode))) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2SFmode)
        || register_operand (operands[3], V2SFmode)))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], V2SFmode)
       && register_operand (operands[3], V2SFmode)
       && riscv_vector::whole_reg_move_p (operands, V2SFmode, 7))
      || ((memory_operand (operands[0], V2SFmode)
	  || memory_operand (operands[3], V2SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((LUI_OPERAND (~INTVAL (operands[2]))
    && ((INTVAL (operands[2]) & (-INTVAL (operands[3])))
	== (-INTVAL (operands[3])))
    && riscv_const_insns (operands[3], false)
    && (riscv_const_insns (GEN_INT (~INTVAL (operands[2])
				    | -INTVAL (operands[3])), false)
	<= riscv_const_insns (operands[3], false)))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_ZICOND && TARGET_ZBS) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4DFmode)
        || register_operand (operands[3], RVVM4DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], RVVM4DFmode)
       && register_operand (operands[3], RVVM4DFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4DFmode, 7))
      || ((memory_operand (operands[0], RVVM4DFmode)
	  || memory_operand (operands[3], RVVM4DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4HImode)
	|| register_operand (operands[3], RVVMF4HImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2SFmode)) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "TARGET_VECTOR && Pmode == SImode")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8BFmode)
        || register_operand (operands[3], RVVM8BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512HImode)
	|| register_operand (operands[3], V512HImode)))) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V512HImode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2BFmode)
        || register_operand (operands[3], V2BFmode)))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (RVVMF2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (1 "SImode >= QImode")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DFmode)
       || register_operand (operands[1], V64DFmode))) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2DFmode)) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM4SImode)
        || register_operand (operands[3], RVVM4SImode)))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256SFmode)) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BFmode)
       || register_operand (operands[1], V2048BFmode))) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2HImode)) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1024HFmode)) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1QImode)")
  (-1 "TARGET_ZAAMO")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF4BImode)).exists ()) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1HImode)
	|| register_operand (operands[3], V1HImode)))) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( riscv_vector::whole_reg_move_p (operands, V1HImode, 7))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "riscv_inline_strcmp && !optimize_size
    && (TARGET_ZBB || TARGET_XTHEADBB || TARGET_VECTOR)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V512QImode)
        || register_operand (operands[3], V512QImode)))) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2QImode)
	|| register_operand (operands[3], RVVM2QImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM2QImode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V2DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256DImode)) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32DImode)
	|| register_operand (operands[3], V32DImode)))) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1BImode)
       || register_operand (operands[1], V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && ( reload_completed
   && (!register_operand (operands[0], V1BImode)
       || !register_operand (operands[1], V1BImode)))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HImode)
       || register_operand (operands[1], V2048HImode))) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((!SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))
    && (!TARGET_ZBS || popcount_hwi (INTVAL (operands[3])) > 1)
    && (INTVAL (operands[3]) & ((1ULL << INTVAL (operands[2])) - 1)) == 0)) && (!TARGET_64BIT)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))")
  (0 "(TARGET_XMIPSCMOV) && ((((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((LUI_OPERAND (~INTVAL (operands[2]))
    && ((INTVAL (operands[2]) & (-INTVAL (operands[3])))
	== (-INTVAL (operands[3])))
    && riscv_const_insns (operands[3], false)
    && (riscv_const_insns (GEN_INT (~INTVAL (operands[2])
				    | -INTVAL (operands[3])), false)
	<= riscv_const_insns (operands[3], false)))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64SFmode)
        || register_operand (operands[3], V64SFmode)))) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256QImode)) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8HFmode)
        || register_operand (operands[3], V8HFmode)))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], V8HFmode)
       && register_operand (operands[3], V8HFmode)
       && riscv_vector::whole_reg_move_p (operands, V8HFmode, 7))
      || ((memory_operand (operands[0], V8HFmode)
	  || memory_operand (operands[3], V8HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_64BIT")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SFmode)
       || register_operand (operands[1], V128SFmode))) && ((riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1HFmode)
	|| register_operand (operands[3], RVVM1HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode)))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4HImode)
        || register_operand (operands[3], RVVMF4HImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (register_operand (operands[0], RVVMF4HImode)
       && register_operand (operands[3], RVVMF4HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF4HImode, 7))
      || ((memory_operand (operands[0], RVVMF4HImode)
	  || memory_operand (operands[3], RVVMF4HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V128SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4SImode)
        || register_operand (operands[3], V4SImode)))) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( (register_operand (operands[0], V4SImode)
       && register_operand (operands[3], V4SImode)
       && riscv_vector::whole_reg_move_p (operands, V4SImode, 7))
      || ((memory_operand (operands[0], V4SImode)
	  || memory_operand (operands[3], V4SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF8QImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512HFmode)
	|| register_operand (operands[3], V512HFmode)))) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2SFmode)
	|| register_operand (operands[3], RVVM2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, RVVM2SFmode, 7))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16DFmode)
	|| register_operand (operands[3], V16DFmode)))) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF8QImode)
        || register_operand (operands[3], RVVMF8QImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (register_operand (operands[0], RVVMF8QImode)
       && register_operand (operands[3], RVVMF8QImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF8QImode, 7))
      || ((memory_operand (operands[0], RVVMF8QImode)
	  || memory_operand (operands[3], RVVMF8QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SImode)
       || register_operand (operands[1], V32SImode))) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_64) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BFmode)
       || register_operand (operands[1], V32BFmode))) && ((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV)
    && INTVAL (operands[2]) + INTVAL (operands[4]) == 1
    && INTVAL (operands[3]) + INTVAL (operands[4]) == -1)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_BF_16))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZBS && UINTVAL (operands[2]) < GET_MODE_BITSIZE (DImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_64BIT
    && TARGET_ZBB
    && (REG_P (operands[2]) && SUBREG_P (operands[1])
	 ? REGNO (operands[2]) == REGNO (SUBREG_REG (operands[1]))
	 : REG_P (operands[1]) && SUBREG_P (operands[2])
	   ? (REGNO (SUBREG_REG (operands[2])) == REGNO (operands[1])) : 0))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4096QImode)) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8HFmode)
	|| register_operand (operands[3], V8HFmode)))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4QImode)) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2048BFmode)
        || register_operand (operands[3], V2048BFmode)))) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V2048BFmode)
       && register_operand (operands[3], V2048BFmode)
       && riscv_vector::whole_reg_move_p (operands, V2048BFmode, 7))
      || ((memory_operand (operands[0], V2048BFmode)
	  || memory_operand (operands[3], V2048BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && (Pmode == DImode)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2QImode)
        || register_operand (operands[3], V2QImode)))) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))")
  (-1 "TARGET_ZVKSH")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM4SFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && !TARGET_HALF")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8QImode)
        || register_operand (operands[3], V8QImode)))) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( (register_operand (operands[0], V8QImode)
       && register_operand (operands[3], V8QImode)
       && riscv_vector::whole_reg_move_p (operands, V8QImode, 7))
      || ((memory_operand (operands[0], V8QImode)
	  || memory_operand (operands[3], V8QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_LUI")
  (-1 "(TARGET_ZBKB) && (!TARGET_64BIT)")
  (-1 "(TARGET_ZBS && !not_single_bit_mask_operand (operands[2], VOIDmode)) && (TARGET_64BIT)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM1QImode).is_constant ()")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DFmode)
       || register_operand (operands[1], V512DFmode))) && ((riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (Pmode == DImode)) && ( epilogue_completed)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8SImode)
        || register_operand (operands[3], V8SImode)))) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HFmode)
       || register_operand (operands[1], V64HFmode))) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V8SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1DImode)
	|| register_operand (operands[3], V1DImode)))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16HImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()) && (Pmode == DImode)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (HImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)) && (TARGET_64BIT)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8SFmode)
        || register_operand (operands[3], V8SFmode)))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], V8SFmode)
       && register_operand (operands[3], V8SFmode)
       && riscv_vector::whole_reg_move_p (operands, V8SFmode, 7))
      || ((memory_operand (operands[0], V8SFmode)
	  || memory_operand (operands[3], V8SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2DImode)) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1BFmode)
        || register_operand (operands[3], RVVM1BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096BImode)
       || register_operand (operands[1], V4096BImode))) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2BFmode)
        || register_operand (operands[3], RVVMF2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], RVVMF2BFmode)
       && register_operand (operands[3], RVVMF2BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2BFmode, 7))
      || ((memory_operand (operands[0], RVVMF2BFmode)
	  || memory_operand (operands[3], RVVMF2BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SImode)
       || register_operand (operands[1], V512SImode))) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2HImode)
        || register_operand (operands[3], RVVMF2HImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V1DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2BImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V4096BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256QImode)) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V8BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128SFmode)) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) < ((32) - 1)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2SFmode)
        || register_operand (operands[3], V2SFmode)))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8SImode)
        || register_operand (operands[3], V8SImode)))) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( (register_operand (operands[0], V8SImode)
       && register_operand (operands[3], V8SImode)
       && riscv_vector::whole_reg_move_p (operands, V8SImode, 7))
      || ((memory_operand (operands[0], V8SImode)
	  || memory_operand (operands[3], V8SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2HImode)
	|| register_operand (operands[3], V2HImode)))) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BFmode)
       || register_operand (operands[1], V128BFmode))) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8HFmode)) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096 && TARGET_64BIT)")
  (1 "QImode >= QImode")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2SImode)
	|| register_operand (operands[3], V2SImode)))) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((!TARGET_XANDESPERF && TARGET_SLT) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256DFmode)
	|| register_operand (operands[3], V256DFmode)))) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V256DFmode, 7))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32DFmode)
	|| register_operand (operands[3], V32DFmode)))) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM1DFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V512HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2SFmode)
        || register_operand (operands[3], RVVMF2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(exact_log2 (INTVAL (operands[3])) >= 0) && (TARGET_64BIT)")
  (-1 "TARGET_ZBKB && TARGET_64BIT")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16DFmode)) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1DImode)
       || register_operand (operands[1], V1DImode))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32HImode)
	|| register_operand (operands[3], V32HImode)))) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_DOUBLE_FLOAT || TARGET_ZDINX")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2QImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4HFmode)
	|| register_operand (operands[3], V4HFmode)))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && QImode >= QImode")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DImode)
       || register_operand (operands[1], V64DImode))) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "TARGET_64BIT && TARGET_ZBA && !TARGET_XTHEADMEMIDX")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128HFmode)) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2DImode)
        || register_operand (operands[3], V2DImode)))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BFmode)
       || register_operand (operands[1], V512BFmode))) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4HFmode)
	|| register_operand (operands[3], RVVMF4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF4HFmode, 7))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SFmode)
       || register_operand (operands[1], V512SFmode))) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1BImode))) && ( !reload_completed)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1024SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SFmode)
       || register_operand (operands[1], V1024SFmode))) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADBS && UINTVAL (operands[2]) < GET_MODE_BITSIZE (SImode)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2SImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1QImode)) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64SFmode)
	|| register_operand (operands[3], V64SFmode)))) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2HFmode)
	|| register_operand (operands[3], RVVMF2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2HFmode, 7))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "TARGET_ZKNH && !TARGET_64BIT")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8DImode)) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZALRSC && TARGET_INLINE_SUBWORD_ATOMIC) || (TARGET_ZACAS && TARGET_ZABHA)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64BFmode)
        || register_operand (operands[3], V64BFmode)))) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(riscv_inline_strlen && !optimize_size
    && (TARGET_ZBB || TARGET_XTHEADBB || TARGET_VECTOR)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BFmode)
       || register_operand (operands[1], V512BFmode))) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4QImode)
	|| register_operand (operands[3], RVVM4QImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM4QImode, 7))")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM1SImode).is_constant ()")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512SFmode)) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8BFmode)
	|| register_operand (operands[3], RVVM8BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DImode)
       || register_operand (operands[1], V128DImode))) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1SImode)
	|| register_operand (operands[3], V1SImode)))) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( riscv_vector::whole_reg_move_p (operands, V1SImode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2QImode)
       || register_operand (operands[1], V2QImode))) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( reload_completed
   && (!register_operand (operands[0], V2QImode)
       || !register_operand (operands[1], V2QImode)))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4DImode)
        || register_operand (operands[3], RVVM4DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVM4DImode)
       && register_operand (operands[3], RVVM4DImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4DImode, 7))
      || ((memory_operand (operands[0], RVVM4DImode)
	  || memory_operand (operands[3], RVVM4DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V512DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8SFmode)) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_ZBS && TARGET_ZBB) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "is_zicfilp_p ()")
  (-1 "(known_gt (GET_MODE_BITSIZE (HImode), GET_MODE_BITSIZE (Pmode))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16HFmode)
        || register_operand (operands[3], V16HFmode)))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], V16HFmode)
       && register_operand (operands[3], V16HFmode)
       && riscv_vector::whole_reg_move_p (operands, V16HFmode, 7))
      || ((memory_operand (operands[0], V16HFmode)
	  || memory_operand (operands[3], V16HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2048HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SFmode)
       || register_operand (operands[1], V32SFmode))) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HFmode)
       || register_operand (operands[1], V1024HFmode))) && ((riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_ZBS) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_SFB_ALU || TARGET_XTHEADCONDMOV || TARGET_ZICOND_LIKE
   || TARGET_MOVCC || TARGET_XMIPSCMOV) && (TARGET_64BIT)")
  (-1 "(TARGET_XTHEADBB && (TARGET_64BIT || DImode == SImode)) && (TARGET_64BIT)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4DImode)
	|| register_operand (operands[3], RVVM4DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM4DImode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && TARGET_FDIV) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4SFmode)
        || register_operand (operands[3], V4SFmode)))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V32DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2SFmode)) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SFmode)
       || register_operand (operands[1], V1024SFmode))) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64HImode)
	|| register_operand (operands[3], V64HImode)))) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V64HImode, 7))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVMF2SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_DIV && riscv_use_divmod_expander ()) && (TARGET_64BIT)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1HImode)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64QImode)
	|| register_operand (operands[3], V64QImode)))) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V64QImode, 7))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2QImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_ZVBB")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SImode)
       || register_operand (operands[1], V512SImode))) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BFmode)
       || register_operand (operands[1], V1024BFmode))) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DImode)
       || register_operand (operands[1], V128DImode))) && ((riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16SImode)
       || register_operand (operands[1], V16SImode))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4096QImode)
	|| register_operand (operands[3], V4096QImode)))) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V4096QImode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512QImode)) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_64))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_LUI && !is_zicfilp_p ()) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( !memory_operand (operands[0], RVVM2SFmode)
   && !memory_operand (operands[1], RVVM2SFmode))")
  (-1 "(TARGET_TLSDESC) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096 && TARGET_64BIT)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V32BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))")
  (-1 "TARGET_XTHEADMEMPAIR && reload_completed
   && th_mempair_operands_p (operands, false, SImode)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(!rtx_equal_p (operands[0], operands[1])) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4HFmode)) && (TARGET_ZVFH)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && TARGET_FDIV) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(exact_log2 (INTVAL (operands[2])) >= 0) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1HImode)
        || register_operand (operands[3], RVVM1HImode)))) && ( (register_operand (operands[0], RVVM1HImode)
       && register_operand (operands[3], RVVM1HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1HImode, 7))
      || ((memory_operand (operands[0], RVVM1HImode)
	  || memory_operand (operands[3], RVVM1HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2DImode)
	|| register_operand (operands[3], V2DImode)))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BFmode)
       || register_operand (operands[1], V64BFmode))) && ((riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32SFmode)) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_64BIT && (TARGET_ZBB || TARGET_ZBKB)) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1024HImode)) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4HImode)
        || register_operand (operands[3], RVVM4HImode)))) && ( (register_operand (operands[0], RVVM4HImode)
       && register_operand (operands[3], RVVM4HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4HImode, 7))
      || ((memory_operand (operands[0], RVVM4HImode)
	  || memory_operand (operands[3], RVVM4HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_XMIPSCMOV) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SImode)
       || register_operand (operands[1], V1024SImode))) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode))) && (riscv_vector::vls_mode_valid_p (V16BImode)))")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096QImode)
       || register_operand (operands[1], V4096QImode))) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "TARGET_ZACAS")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8DFmode)
	|| register_operand (operands[3], V8DFmode)))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V8DFmode, 7))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM8QImode)
   && !memory_operand (operands[1], RVVM8QImode))")
  (-1 "TARGET_64BIT
   && TARGET_ZBA
   && !paradoxical_subreg_p (operands[1])
   /* Only profitable if synthesis takes more than one insn.  */
   && riscv_const_insns (operands[2], false) != 1
   /* We need the upper half to be zero.  */
   && (INTVAL (operands[2]) & HOST_WIDE_INT_C (0xffffffff00000000)) == 0
   /* And the the adjusted constant must either be something we can
      implement with andi or bclri.  */
   && ((SMALL_OPERAND (sext_hwi (INTVAL (operands[2]), 32))
        || (TARGET_ZBS && popcount_hwi (INTVAL (operands[2])) == 31))
       && INTVAL (operands[2]) != 0x7fffffff)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DImode)
       || register_operand (operands[1], V64DImode))) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(!TARGET_ZTSO) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2048QImode)
        || register_operand (operands[3], V2048QImode)))) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_DIV && riscv_use_divmod_expander ()")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (0 "(TARGET_SLT) && ((TARGET_64BIT) && (!TARGET_64BIT))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2BFmode)
	|| register_operand (operands[3], V2BFmode)))) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZBS && !paradoxical_subreg_p (operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V2BImode)
       || register_operand (operands[1], V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (0 "(TARGET_SFB_ALU) && (((((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1HImode)
	|| register_operand (operands[3], RVVM1HImode)))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (TARGET_VECTOR_ELEN_64 && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1HImode)
	|| register_operand (operands[3], V1HImode)))) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V16HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8SFmode)
	|| register_operand (operands[3], V8SFmode)))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, V8SFmode, 7))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_HARD_FLOAT) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V128QImode)) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HImode)
       || register_operand (operands[1], V2048HImode))) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_64BIT && (TARGET_ZBB || TARGET_ZBKB)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( (operands[1] == CONSTM1_RTX (RVVMF4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && SImode >= SImode) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1HFmode)
	|| register_operand (operands[3], V1HFmode)))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16QImode)
	|| register_operand (operands[3], V16QImode)))) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM8SImode)
        || register_operand (operands[3], RVVM8SImode)))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2048QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && ((((((Pmode == SImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_HARD_FLOAT) && ((TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8DFmode)
        || register_operand (operands[3], V8DFmode)))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V8DFmode)
       && register_operand (operands[3], V8DFmode)
       && riscv_vector::whole_reg_move_p (operands, V8DFmode, 7))
      || ((memory_operand (operands[0], V8DFmode)
	  || memory_operand (operands[3], V8DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V64BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))) && ( 1)")
  (-1 "(!ira_in_progress
   && !(p2m1_shift_operand (operands[1], DImode)
	|| high_mask_shift_operand (operands[1], DImode)
	|| exact_log2 (INTVAL (operands[1])) >= 0)) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_ZBB) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V128BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4096BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))")
  (-1 "(TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_VECTOR && TARGET_XSFVQMACCQOQ")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16DImode)
       || register_operand (operands[1], V16DImode))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BFmode)
       || register_operand (operands[1], V256BFmode))) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZBB
   && (riscv_const_insns (operands[2], true)
       > riscv_const_insns (GEN_INT (~INTVAL (operands[2])), true))) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8HFmode)
	|| register_operand (operands[3], RVVM8HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM8HFmode, 7))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "((TARGET_SHIFT
   && !((TARGET_ZBS || TARGET_XTHEADBS || TARGET_ZICOND
         || TARGET_XVENTANACONDOPS || TARGET_SFB_ALU)
        && (INTVAL (operands[2]) == 1))
   && !TARGET_XTHEADBB
   && !TARGET_XANDESPERF
   && !(TARGET_64BIT
        && (INTVAL (operands[3]) > 0)
        && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))) && (TARGET_64BIT)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HImode)
       || register_operand (operands[1], V512HImode))) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8QImode)
        || register_operand (operands[3], V8QImode)))) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V4SImode)
        || register_operand (operands[3], V4SImode)))) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((!TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX)) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16SImode)) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF32BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HImode)
       || register_operand (operands[1], V2048HImode))) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1BImode)
       || register_operand (operands[1], V1BImode))) && (riscv_vector::vls_mode_valid_p (V1BImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16SFmode)
        || register_operand (operands[3], V16SFmode)))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2HImode)) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HImode)
       || register_operand (operands[1], V256HImode))) && ((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V16HImode)) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( reload_completed
   && (!register_operand (operands[0], V8SFmode)
       || !register_operand (operands[1], V8SFmode)))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVM2QImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64QImode)
        || register_operand (operands[3], V64QImode)))) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V64QImode)
       && register_operand (operands[3], V64QImode)
       && riscv_vector::whole_reg_move_p (operands, V64QImode, 7))
      || ((memory_operand (operands[0], V64QImode)
	  || memory_operand (operands[3], V64QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_XANDESPERF
   && (UINTVAL (operands[2]) != 0)
   && (exact_log2 ((UINTVAL (operands[3]) >> UINTVAL (operands[2])) + 1) == 1)
   && ((UINTVAL (operands[3]) & ((1 << UINTVAL (operands[2])) - 1)) == 0)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2048HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1HFmode)) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16))")
  (-1 "(TARGET_ZICOND && rtx_equal_p (operands[1], operands[3])) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF2SFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4BFmode)
	|| register_operand (operands[3], RVVM4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1DImode)
        || register_operand (operands[3], RVVM1DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVM1DImode)
       && register_operand (operands[3], RVVM1DImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1DImode, 7))
      || ((memory_operand (operands[0], RVVM1DImode)
	  || memory_operand (operands[3], RVVM1DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_SLT
   && INTVAL (operands[3]) < 11
   && INTVAL (operands[2]) + INTVAL (operands[3]) == BITS_PER_WORD) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V32HFmode)) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V2SFmode)) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (1 "SImode >= SImode")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8HImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1SFmode)) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (1 "HImode >= QImode")
  (-1 "((TARGET_ZBS) && (!TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2SImode)) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_XTHEADMEMIDX && TARGET_XTHEADBB) && (TARGET_64BIT)")
  (-1 "TARGET_XTHEADINT && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BImode)
       || register_operand (operands[1], V512BImode))) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZICOND && TARGET_ZBS) && (!TARGET_64BIT)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32SImode)
        || register_operand (operands[3], V32SImode)))) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V32SImode)
       && register_operand (operands[3], V32SImode)
       && riscv_vector::whole_reg_move_p (operands, V32SImode, 7))
      || ((memory_operand (operands[0], V32SImode)
	  || memory_operand (operands[3], V32SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "TARGET_64BIT && !TARGET_ZBA
   && ((INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(DImode >= DImode) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM8QImode).is_constant ()")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1DImode)
        || register_operand (operands[3], RVVM1DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128HImode)) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128HImode)
	|| register_operand (operands[3], V128HImode)))) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( riscv_vector::whole_reg_move_p (operands, V128HImode, 7))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2BFmode)
	|| register_operand (operands[3], RVVM2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && (TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BImode)
       || register_operand (operands[1], V1024BImode))) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(exact_log2 (INTVAL (operands[2])) >= 0) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode))) && (riscv_vector::vls_mode_valid_p (V32BImode)))")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF4QImode)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM1HImode)
        || register_operand (operands[3], RVVM1HImode)))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM2HImode)
   && !memory_operand (operands[1], RVVM2HImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2QImode)")
  (-1 "(!rtx_equal_p (operands[0], operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16HFmode)
       || register_operand (operands[1], V16HFmode))) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1SFmode)
	|| register_operand (operands[3], RVVM1SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_ZFH || TARGET_ZHINX) && (!TARGET_64BIT)) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2HImode)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (TARGET_DOUBLE_FLOAT && !TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512SFmode)) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V8HImode)
        || register_operand (operands[3], V8HImode)))) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( (register_operand (operands[0], V8HImode)
       && register_operand (operands[3], V8HImode)
       && riscv_vector::whole_reg_move_p (operands, V8HImode, 7))
      || ((memory_operand (operands[0], V8HImode)
	  || memory_operand (operands[3], V8HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32BFmode)
        || register_operand (operands[3], V32BFmode)))) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4DFmode)) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4QImode)
        || register_operand (operands[3], RVVMF4QImode)))) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512HFmode)
       || register_operand (operands[1], V512HFmode))) && ((riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "riscv_inline_strncmp && !optimize_size
    && (TARGET_ZBB || TARGET_XTHEADBB || TARGET_VECTOR)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1BImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "TARGET_XTHEADMEMPAIR && TARGET_64BIT
  && th_mempair_operands_p (operands, true, SImode)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_SHIFT && !SMALL_OPERAND (INTVAL (operands[3]))) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_64) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_64BIT && TARGET_ZBA
   && riscv_shamt_matches_mask_p (INTVAL (operands[2]), INTVAL (operands[3]))
   && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))) && ( reload_completed)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1DFmode)
	|| register_operand (operands[3], RVVM1DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(register_operand (operands[0], QImode)
    || reg_or_0_operand (operands[1], QImode))
   && TARGET_BYTE")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V128HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V64DImode)) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "((TARGET_ZFHMIN && HFmode == HFmode)
    || (TARGET_ZFBFMIN && HFmode == BFmode))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "TARGET_ZBB || TARGET_ZBKB")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1HImode)
        || register_operand (operands[3], V1HImode)))) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8BFmode)
        || register_operand (operands[3], RVVM8BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], RVVM8BFmode)
       && register_operand (operands[3], RVVM8BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8BFmode, 7))
      || ((memory_operand (operands[0], RVVM8BFmode)
	  || memory_operand (operands[3], RVVM8BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZICOND_LIKE && TARGET_ZBS) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8SFmode)
        || register_operand (operands[3], V8SFmode)))) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4SFmode)
	|| register_operand (operands[3], RVVM4SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM8BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1HFmode)) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8DFmode)
       || register_operand (operands[1], V8DFmode))) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( reload_completed
   && (!register_operand (operands[0], V8DFmode)
       || !register_operand (operands[1], V8DFmode)))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096QImode)
       || register_operand (operands[1], V4096QImode))) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADMEMPAIR && reload_completed
   && th_mempair_operands_p (operands, false, DImode)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16BImode))) && ( riscv_vector::whole_reg_move_p (operands, V16BImode, 5))")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SIGNED_ZEROS (SFmode)) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V8HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256QImode)
        || register_operand (operands[3], V256QImode)))) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_32) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF16BImode)).exists ()) && ( 1)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1DImode)
        || register_operand (operands[3], V1DImode)))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512QImode)
        || register_operand (operands[3], V512QImode)))) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V512QImode)
       && register_operand (operands[3], V512QImode)
       && riscv_vector::whole_reg_move_p (operands, V512QImode, 7))
      || ((memory_operand (operands[0], V512QImode)
	  || memory_operand (operands[3], V512QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SFmode)
       || register_operand (operands[1], V32SFmode))) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256HFmode)) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024BFmode)
        || register_operand (operands[3], V1024BFmode)))) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V1024BFmode)
       && register_operand (operands[3], V1024BFmode)
       && riscv_vector::whole_reg_move_p (operands, V1024BFmode, 7))
      || ((memory_operand (operands[0], V1024BFmode)
	  || memory_operand (operands[3], V1024BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !reload_completed)")
  (-1 "TARGET_ZVBB || TARGET_ZVKB")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (0 "(TARGET_SLT) && (((TARGET_64BIT) && (!TARGET_64BIT)) && (!TARGET_64BIT))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4BImode)
       || register_operand (operands[1], V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && ( reload_completed
   && (!register_operand (operands[0], V4BImode)
       || !register_operand (operands[1], V4BImode)))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !memory_operand (operands[0], RVVM1BFmode)
   && !memory_operand (operands[1], RVVM1BFmode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32SImode)
	|| register_operand (operands[3], V32SImode)))) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V32SImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V8DFmode)) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1024SFmode)) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HImode)
       || register_operand (operands[1], V128HImode))) && ((riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512SImode)
	|| register_operand (operands[3], V512SImode)))) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)) && ( (operands[1] == CONSTM1_RTX (V128BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BFmode)
       || register_operand (operands[1], V128BFmode))) && ((riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(((!SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))
    && (!TARGET_ZBS || popcount_hwi (INTVAL (operands[3])) > 1)
    && (INTVAL (operands[3]) & ((1ULL << INTVAL (operands[2])) - 1)) == 0)) && (TARGET_64BIT)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "(exact_log2 (INTVAL (operands[2]) + 1) >= 0) && (!TARGET_64BIT)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V1024BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2048QImode)
        || register_operand (operands[3], V2048QImode)))) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V2048QImode)
       && register_operand (operands[3], V2048QImode)
       && riscv_vector::whole_reg_move_p (operands, V2048QImode, 7))
      || ((memory_operand (operands[0], V2048QImode)
	  || memory_operand (operands[3], V2048QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2SImode)
	|| register_operand (operands[3], RVVMF2SImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && ( !memory_operand (operands[0], RVVM1SImode)
   && !memory_operand (operands[1], RVVM1SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V64DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(!ira_in_progress
   && !(p2m1_shift_operand (operands[1], SImode)
	|| high_mask_shift_operand (operands[1], SImode)
	|| exact_log2 (INTVAL (operands[1])) >= 0)) && ( 1)")
  (-1 "TARGET_64BIT && TARGET_XTHEADMEMIDX && (lra_in_progress || reload_completed)
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 32)
   && ((INTVAL (operands[2]) + 32) <= 32)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2HImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1BFmode)
	|| register_operand (operands[3], V1BFmode)))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_XANDESPERF
   && IN_RANGE (INTVAL (operands[2]) + INTVAL (operands[3]),
		1, GET_MODE_BITSIZE (DImode))) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256BFmode)
	|| register_operand (operands[3], V256BFmode)))) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( !memory_operand (operands[0], RVVM4HFmode)
   && !memory_operand (operands[1], RVVM4HFmode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32SFmode)) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 128)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V128QImode)
	|| register_operand (operands[3], V128QImode)))) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V128QImode, 7))")
  (-1 "!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && (!MEM_P (operands[1])
       || (QImode == HImode ? TARGET_HALF : TARGET_BYTE))
   && (MEM_P (operands[1]) || TARGET_SHIFT)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((((TARGET_ZFH || TARGET_ZHINX) && (TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (1 "SImode >= HImode")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V8BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1SFmode)
	|| register_operand (operands[3], RVVM1SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( riscv_vector::whole_reg_move_p (operands, RVVM1SFmode, 7))")
  (-1 "(TARGET_ZBKB && INTVAL (operands[2]) == BITS_PER_WORD / 2) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "TARGET_XTHEADMEMPAIR && TARGET_64BIT && reload_completed
   && th_mempair_operands_p (operands, true, SImode)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512DImode)
	|| register_operand (operands[3], V512DImode)))) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V512DImode, 7))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (0 "(TARGET_VECTOR && 0) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1QImode)
        || register_operand (operands[3], V1QImode)))) && (riscv_vector::vls_mode_valid_p (V1QImode))) && ( (register_operand (operands[0], V1QImode)
       && register_operand (operands[3], V1QImode)
       && riscv_vector::whole_reg_move_p (operands, V1QImode, 7))
      || ((memory_operand (operands[0], V1QImode)
	  || memory_operand (operands[3], V1QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()) && (Pmode == DImode)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2HFmode)) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V4096BImode, 5))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32BFmode)
	|| register_operand (operands[3], V32BFmode)))) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V32BFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZCMP
   && (REGNO (operands[2]) != REGNO (operands[0]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && ((TARGET_ZFH || TARGET_ZHINX) && (TARGET_64BIT))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_ZFHMIN && BFmode == HFmode)
    || (TARGET_ZFBFMIN && BFmode == BFmode))
   && (register_operand (operands[0], BFmode)
       || reg_or_0_operand (operands[1], BFmode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BImode)
       || register_operand (operands[1], V512BImode))) && ((riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZBKC || TARGET_ZBC || TARGET_ZVBC)
   && HImode >= HImode")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2SImode)
        || register_operand (operands[3], RVVMF2SImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (register_operand (operands[0], RVVMF2SImode)
       && register_operand (operands[3], RVVMF2SImode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF2SImode, 7))
      || ((memory_operand (operands[0], RVVMF2SImode)
	  || memory_operand (operands[3], RVVMF2SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64QImode)
       || register_operand (operands[1], V64QImode))) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1QImode)) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM1HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V256SFmode)) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2HFmode)
	|| register_operand (operands[3], V2HFmode)))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, V2HFmode, 7))")
  (-1 "(TARGET_ZBB
   && (riscv_const_insns (operands[2], true)
       > riscv_const_insns (GEN_INT (~INTVAL (operands[2])), true))) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DImode)
       || register_operand (operands[1], V256DImode))) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "TARGET_ZAAMO || TARGET_ZALRSC")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && ( !reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V512BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64 && TARGET_64BIT)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64BFmode)
	|| register_operand (operands[3], V64BFmode)))) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( riscv_vector::whole_reg_move_p (operands, V64BFmode, 7))")
  (-1 "(TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB) && ( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4HImode)
        || register_operand (operands[3], V4HImode)))) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( (register_operand (operands[0], V4HImode)
       && register_operand (operands[3], V4HImode)
       && riscv_vector::whole_reg_move_p (operands, V4HImode, 7))
      || ((memory_operand (operands[0], V4HImode)
	  || memory_operand (operands[3], V4HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM8HImode)
        || register_operand (operands[3], RVVM8HImode)))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1024SFmode)
        || register_operand (operands[3], V1024SFmode)))) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_ZVFBFWMA) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV)
    && INTVAL (operands[2]) + INTVAL (operands[4]) == 1
    && INTVAL (operands[3]) + INTVAL (operands[4]) == -1)) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_SLT) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF4HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF64BImode)).exists ()) && ((((((Pmode == SImode) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8DFmode)
	|| register_operand (operands[3], RVVM8DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8DImode)
        || register_operand (operands[3], RVVM8DImode)))) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DFmode)
       || register_operand (operands[1], V128DFmode))) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "TARGET_XANDESPERF")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BFmode)
       || register_operand (operands[1], V256BFmode))) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2DImode)
        || register_operand (operands[3], RVVM2DImode)))) && (TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVM2DImode)
       && register_operand (operands[3], RVVM2DImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2DImode, 7))
      || ((memory_operand (operands[0], RVVM2DImode)
	  || memory_operand (operands[3], RVVM2DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( 1)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1DImode)
       || register_operand (operands[1], V1DImode))) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( reload_completed
   && (!register_operand (operands[0], V1DImode)
       || !register_operand (operands[1], V1DImode)))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128QImode)
       || register_operand (operands[1], V128QImode))) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_HARD_FLOAT) && ((!TARGET_64BIT) && (TARGET_HARD_FLOAT || TARGET_ZFINX))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256DFmode)) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_HARD_FLOAT
    && (TARGET_ZFA || flag_fp_int_builtin_inexact || !flag_trapping_math)
    && (TARGET_ZFA || TARGET_64BIT || SFmode != DFmode)
    && (TARGET_ZFA || SFmode != HFmode))) && (TARGET_HARD_FLOAT || TARGET_ZFINX)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DImode)
       || register_operand (operands[1], V32DImode))) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024SImode)
        || register_operand (operands[3], V1024SImode)))) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V1024SImode)
       && register_operand (operands[3], V1024SImode)
       && riscv_vector::whole_reg_move_p (operands, V1024SImode, 7))
      || ((memory_operand (operands[0], V1024SImode)
	  || memory_operand (operands[3], V1024SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16HImode)
        || register_operand (operands[3], V16HImode)))) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8BFmode)
	|| register_operand (operands[3], V8BFmode)))) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1SImode)) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(!SMALL_OPERAND (INTVAL (operands[2]))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVMF2HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32DFmode)
        || register_operand (operands[3], V32DFmode)))) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZBS
   && (operands[2] == CONST0_RTX (DImode)
       || operands[2] == CONST1_RTX (DImode))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1HImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)) && ( (operands[1] == CONSTM1_RTX (V32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8SImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "TARGET_VECTOR && TARGET_XSFVFNRCLIPXFQF")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128 && TARGET_64BIT)")
  (0 "(TARGET_XTHEADCONDMOV) && ((((TARGET_64BIT) && (!TARGET_64BIT)) && (TARGET_64BIT)) && (TARGET_64BIT))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2DFmode)
	|| register_operand (operands[3], V2DFmode)))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADMEMPAIR
  && th_mempair_operands_p (operands, true, DImode)) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SFmode)
       || register_operand (operands[1], V32SFmode))) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8HFmode)
        || register_operand (operands[3], RVVM8HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], RVVM8HFmode)
       && register_operand (operands[3], RVVM8HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8HFmode, 7))
      || ((memory_operand (operands[0], RVVM8HFmode)
	  || memory_operand (operands[3], RVVM8HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1BFmode)
	|| register_operand (operands[3], RVVM1BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2SFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_XOR || (XOR) == IOR) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V32HFmode)) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BImode))) && ( riscv_vector::whole_reg_move_p (operands, V32BImode, 5))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (0 "TARGET_VECTOR && 0")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V2048QImode)) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1DFmode)) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "!TARGET_XOR && !TARGET_64BIT")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512BFmode)
        || register_operand (operands[3], V512BFmode)))) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V512BFmode)
       && register_operand (operands[3], V512BFmode)
       && riscv_vector::whole_reg_move_p (operands, V512BFmode, 7))
      || ((memory_operand (operands[0], V512BFmode)
	  || memory_operand (operands[3], V512BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(!TARGET_ZFHMIN) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HFmode)
       || register_operand (operands[1], V64HFmode))) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512SImode)) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V16BFmode)
       || register_operand (operands[1], V16BFmode))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( (operands[1] == CONSTM1_RTX (V4BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1BFmode)
       || register_operand (operands[1], V1BFmode))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( reload_completed
   && (!register_operand (operands[0], V1BFmode)
       || !register_operand (operands[1], V1BFmode)))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8SFmode)) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && (Pmode == DImode)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V4SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2QImode)
	|| register_operand (operands[3], V2QImode)))) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_XOR) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1024QImode)) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM4HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_ZBKX) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1QImode)
	|| register_operand (operands[3], RVVM1QImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM1QImode, 7))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8SImode)
	|| register_operand (operands[3], RVVM8SImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM8SImode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V8DImode)
        || register_operand (operands[3], V8DImode)))) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(register_operand (operands[0], QImode)
    || reg_or_0_operand (operands[1], QImode))
   && !TARGET_BYTE")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( (operands[1] == CONSTM1_RTX (RVVMF64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048HFmode)
       || register_operand (operands[1], V2048HFmode))) && ((riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1DFmode)
       || register_operand (operands[1], V1DFmode))) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( reload_completed
   && (!register_operand (operands[0], V1DFmode)
       || !register_operand (operands[1], V1DFmode)))")
  (-1 "(TARGET_XTHEADMEMIDX && !TARGET_XTHEADBB) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128QImode)
        || register_operand (operands[3], V128QImode)))) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (V16BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p ()
   && (HFmode == HFmode
       || HFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZBKB) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V1024BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128HFmode)
       || register_operand (operands[1], V128HFmode))) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V2SImode)
        || register_operand (operands[3], V2SImode)))) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2QImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16HImode)
	|| register_operand (operands[3], V16HImode)))) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( riscv_vector::whole_reg_move_p (operands, V16HImode, 7))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM2HFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256SImode)
        || register_operand (operands[3], V256SImode)))) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(known_gt (GET_MODE_BITSIZE (SImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16DImode)
        || register_operand (operands[3], V16DImode)))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DFmode)
       || register_operand (operands[1], V64DFmode))) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR)))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4HFmode)
        || register_operand (operands[3], RVVM4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256SImode)
	|| register_operand (operands[3], V256SImode)))) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( riscv_vector::whole_reg_move_p (operands, V256SImode, 7))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V128SImode)) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256DFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024SFmode)
	|| register_operand (operands[3], V1024SFmode)))) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256BFmode)
	|| register_operand (operands[3], V256BFmode)))) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V256BFmode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32DImode)
        || register_operand (operands[3], V32DImode)))) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512HImode)
	|| register_operand (operands[3], V512HImode)))) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V4096QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((!TARGET_ZFHMIN && HFmode == HFmode) || (HFmode == BFmode))
   && (register_operand (operands[0], HFmode)
       || reg_or_0_operand (operands[1], HFmode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64SFmode)) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048 && TARGET_64BIT)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512DImode)
        || register_operand (operands[3], V512DImode)))) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( (register_operand (operands[0], V512DImode)
       && register_operand (operands[3], V512DImode)
       && riscv_vector::whole_reg_move_p (operands, V512DImode, 7))
      || ((memory_operand (operands[0], V512DImode)
	  || memory_operand (operands[3], V512DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V256DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF4QImode)) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1SFmode)
	|| register_operand (operands[3], V1SFmode)))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V2SFmode)
	|| register_operand (operands[3], V2SFmode)))) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "TARGET_64BIT && !TARGET_ZBA && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && !(REG_P (operands[1]) && VL_REG_P (REGNO (operands[1])))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2HImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V4BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode))) && (riscv_vector::vls_mode_valid_p (V4BImode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HFmode)
       || register_operand (operands[1], V256HFmode))) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && !TARGET_HALF) && ( reload_completed && !paradoxical_subreg_p (operands[0]))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode))) && ( reload_completed)")
  (0 "(TARGET_64BIT && (TARGET_ZBB || TARGET_ZBKB)) && ((!TARGET_64BIT) && (TARGET_64BIT))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64QImode)
        || register_operand (operands[3], V64QImode)))) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V32HImode)
        || register_operand (operands[3], V32HImode)))) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2SFmode)
        || register_operand (operands[3], RVVM2SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], RVVM2SFmode)
       && register_operand (operands[3], RVVM2SFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2SFmode, 7))
      || ((memory_operand (operands[0], RVVM2SFmode)
	  || memory_operand (operands[3], RVVM2SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BFmode)
       || register_operand (operands[1], V2048BFmode))) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V16DFmode)) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_HARD_FLOAT || TARGET_ZFINX) && !HONOR_SIGNED_ZEROS (DFmode)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM8SFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16BFmode)
        || register_operand (operands[3], V16BFmode)))) && (riscv_vector::vls_mode_valid_p (V16BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], V16BFmode)
       && register_operand (operands[3], V16BFmode)
       && riscv_vector::whole_reg_move_p (operands, V16BFmode, 7))
      || ((memory_operand (operands[0], V16BFmode)
	  || memory_operand (operands[3], V16BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V2BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(register_operand (operands[0], SImode)
    || reg_or_0_operand (operands[1], SImode))
    && !(REG_P (operands[1]) && VL_REG_P (REGNO (operands[1])))")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF2SImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode))) && (riscv_vector::vls_mode_valid_p (V16QImode))) && ( reload_completed
   && (!register_operand (operands[0], V16QImode)
       || !register_operand (operands[1], V16QImode)))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1HFmode)
	|| register_operand (operands[3], RVVM1HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM1HFmode, 7))")
  (-1 "((TARGET_ZBS) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM1DFmode)
	|| register_operand (operands[3], RVVM1DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM1DFmode, 7))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (TARGET_VECTOR_ELEN_64 && TARGET_64BIT)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_DOUBLE_FLOAT || TARGET_ZDINX) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1QImode)
       || register_operand (operands[1], V1QImode))) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V1024QImode)) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 128)")
  (-1 "!TARGET_ZABHA && TARGET_ZALRSC && TARGET_INLINE_SUBWORD_ATOMIC")
  (-1 "TARGET_64BIT && riscv_cmodel == CM_LARGE")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V16QImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4BImode))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512DImode)
       || register_operand (operands[1], V512DImode))) && ((riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2SImode)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_XCVBI) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM8DImode).is_constant ()) && (TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4HFmode)
        || register_operand (operands[3], RVVMF4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V256BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (TARGET_ZVFH)) && ( (operands[1] == CONSTM1_RTX (RVVMF32BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8QImode)) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1SFmode)
       || register_operand (operands[1], V1SFmode))) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( reload_completed
   && (!register_operand (operands[0], V1SFmode)
       || !register_operand (operands[1], V1SFmode)))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2HFmode)
	|| register_operand (operands[3], RVVM2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM2HFmode, 7))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1024HImode)
        || register_operand (operands[3], V1024HImode)))) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( (register_operand (operands[0], V1024HImode)
       && register_operand (operands[3], V1024HImode)
       && riscv_vector::whole_reg_move_p (operands, V1024HImode, 7))
      || ((memory_operand (operands[0], V1024HImode)
	  || memory_operand (operands[3], V1024HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZBC) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128DFmode)
       || register_operand (operands[1], V128DFmode))) && ((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(!TARGET_ZBB && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF && TARGET_HALF) && ( !MEM_P (operands[1])
   && reload_completed
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V1024BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4DFmode)
	|| register_operand (operands[3], RVVM4DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVM4DFmode, 7))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4QImode))) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512DImode)
	|| register_operand (operands[3], V512DImode)))) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_ZBA) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8QImode)
	|| register_operand (operands[3], RVVM8QImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM8QImode, 7))")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_HARD_FLOAT
    && (TARGET_ZFA || flag_fp_int_builtin_inexact || !flag_trapping_math)
    && (TARGET_ZFA || TARGET_64BIT || DFmode != DFmode)
    && (TARGET_ZFA || DFmode != HFmode))) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF4HFmode)
        || register_operand (operands[3], RVVMF4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], RVVMF4HFmode)
       && register_operand (operands[3], RVVMF4HFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVMF4HFmode, 7))
      || ((memory_operand (operands[0], RVVMF4HFmode)
	  || memory_operand (operands[3], RVVMF4HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_SHIFT
   && !((TARGET_ZBS || TARGET_XTHEADBS || TARGET_ZICOND
         || TARGET_XVENTANACONDOPS || TARGET_SFB_ALU)
        && (INTVAL (operands[2]) == 1))
   && !TARGET_XTHEADBB
   && !TARGET_XANDESPERF
   && !(TARGET_64BIT
        && (INTVAL (operands[3]) > 0)
        && (INTVAL (operands[2]) + INTVAL (operands[3]) == 32))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DFmode)
       || register_operand (operands[1], V64DFmode))) && ((riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVM1BImode)).exists ()")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V128BImode)).exists ()) && ((((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128)) && (riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128))) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16SImode)
	|| register_operand (operands[3], V16SImode)))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && ( riscv_vector::whole_reg_move_p (operands, V512BImode, 5))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16SFmode)
	|| register_operand (operands[3], V16SFmode)))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( riscv_vector::whole_reg_move_p (operands, V16SFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096)) && ( (operands[1] == CONSTM1_RTX (V2048BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2SImode)
        || register_operand (operands[3], RVVMF2SImode)))) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode))) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( reload_completed
   && (!register_operand (operands[0], V2DFmode)
       || !register_operand (operands[1], V2DFmode)))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64DImode)
	|| register_operand (operands[3], V64DImode)))) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_64BIT
    && riscv_const_insns (operands[3], false) == 1
    && riscv_const_insns (GEN_INT (INTVAL (operands[3])
			  << INTVAL (operands[2])), false) != 1)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM4QImode).is_constant ()")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2BFmode)
        || register_operand (operands[3], RVVM2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( (register_operand (operands[0], RVVM2BFmode)
       && register_operand (operands[3], RVVM2BFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2BFmode, 7))
      || ((memory_operand (operands[0], RVVM2BFmode)
	  || memory_operand (operands[3], RVVM2BFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V2SImode))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16SFmode)
       || register_operand (operands[1], V16SFmode))) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( reload_completed
   && (!register_operand (operands[0], V16SFmode)
       || !register_operand (operands[1], V16SFmode)))")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_ZBS
    && INTVAL (operands[3]) + 1 == GET_MODE_BITSIZE (SImode))) && (!TARGET_64BIT)")
  (-1 "TARGET_ZKNH")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1HImode))")
  (-1 "TARGET_XTHEADMAC && TARGET_64BIT")
  (-1 "(TARGET_HARD_FLOAT  || TARGET_ZFINX) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "((TARGET_ZBS) && (TARGET_64BIT)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)")
  (-1 "(exact_log2 (INTVAL (operands[2]) + 1) >= 0) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V4096QImode)
       || register_operand (operands[1], V4096QImode))) && ((riscv_vector::vls_mode_valid_p (V4096QImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V32SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32BImode))) && ( !reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V1BFmode)
        || register_operand (operands[3], V1BFmode)))) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "TARGET_64BIT && (TARGET_ZBB || TARGET_XTHEADBB || TARGET_ZBKB)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && (Pmode == SImode)")
  (-1 "(TARGET_ZCMP
   && (REGNO (operands[0]) != REGNO (operands[2]))
   && (REGNO (operands[1]) != REGNO (operands[3]))) && (!TARGET_64BIT)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF2QImode)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZCMP) && (!TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512SFmode)
       || register_operand (operands[1], V512SFmode))) && ((riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM2BFmode)
	|| register_operand (operands[3], RVVM2BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM2BFmode, 7))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && can_create_pseudo_p ()) && (TARGET_64BIT)) && ( 1)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (TARGET_ZVFH)")
  (-1 "(TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF2HImode)
	|| register_operand (operands[3], RVVMF2HImode)))) && (!TARGET_XTHEADVECTOR)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF2HImode, 7))")
  (-1 "(TARGET_64BIT
    && INTVAL (operands[2]) + INTVAL (operands[4]) == 32
    && SMALL_OPERAND (INTVAL (operands[5]) >> INTVAL (operands[4])))")
  (-1 "(TARGET_ZBKX) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode))) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_BF_16)) && ( !memory_operand (operands[0], RVVM2BFmode)
   && !memory_operand (operands[1], RVVM2BFmode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR) && ((Pmode == DImode) && (TARGET_VECTOR_ELEN_FP_64))")
  (-1 "(TARGET_ZCMP
   && (REGNO (operands[0]) != REGNO (operands[2]))
   && (REGNO (operands[1]) != REGNO (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_ZVFH && can_create_pseudo_p () && !flag_trapping_math) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4SImode)
	|| register_operand (operands[3], RVVM4SImode)))) && ( riscv_vector::whole_reg_move_p (operands, RVVM4SImode, 7))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V2048HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HImode))) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode))) && (riscv_vector::vls_mode_valid_p (V4SImode))) && ( reload_completed
   && (!register_operand (operands[0], V4SImode)
       || !register_operand (operands[1], V4SImode)))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V2HImode))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (Pmode == SImode)) && ( reload_completed)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V2048BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048))) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM2DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4DFmode)
	|| register_operand (operands[3], V4DFmode)))) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( riscv_vector::whole_reg_move_p (operands, V4DFmode, 7))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1SImode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_FULL_V)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256HFmode)
	|| register_operand (operands[3], V256HFmode)))) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_ZVFBFMIN) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN > 32)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V64BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (((((Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode))) && (riscv_vector::vls_mode_valid_p (V2BImode)))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V512SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512BFmode)
       || register_operand (operands[1], V512BFmode))) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16BImode))) && ( !reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32DImode)
       || register_operand (operands[1], V32DImode))) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BImode)
       || register_operand (operands[1], V256BImode))) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16BImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode))) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( reload_completed
   && (!register_operand (operands[0], V8HFmode)
       || !register_operand (operands[1], V8HFmode)))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V256DImode)) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "TARGET_HARD_FLOAT || TARGET_ZFINX")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2HImode)
        || register_operand (operands[3], RVVM2HImode)))) && ( (register_operand (operands[0], RVVM2HImode)
       && register_operand (operands[3], RVVM2HImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM2HImode, 7))
      || ((memory_operand (operands[0], RVVM2HImode)
	  || memory_operand (operands[3], RVVM2HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8BFmode)
	|| register_operand (operands[3], RVVM8BFmode)))) && (TARGET_VECTOR_ELEN_BF_16)) && ( riscv_vector::whole_reg_move_p (operands, RVVM8BFmode, 7))")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V512DFmode)
	|| register_operand (operands[3], V512DFmode)))) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)) && ( riscv_vector::whole_reg_move_p (operands, V512DFmode, 7))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2QImode)
        || register_operand (operands[3], V2QImode)))) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( (register_operand (operands[0], V2QImode)
       && register_operand (operands[3], V2QImode)
       && riscv_vector::whole_reg_move_p (operands, V2QImode, 7))
      || ((memory_operand (operands[0], V2QImode)
	  || memory_operand (operands[3], V2QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1SFmode)
        || register_operand (operands[3], RVVM1SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], RVVM1SFmode)
       && register_operand (operands[3], RVVM1SFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1SFmode, 7))
      || ((memory_operand (operands[0], RVVM1SFmode)
	  || memory_operand (operands[3], RVVM1SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V2BFmode) && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V2048HImode) && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128HImode)
        || register_operand (operands[3], V128HImode)))) && (riscv_vector::vls_mode_valid_p (V128HImode) && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V128HImode)
       && register_operand (operands[3], V128HImode)
       && riscv_vector::whole_reg_move_p (operands, V128HImode, 7))
      || ((memory_operand (operands[0], V128HImode)
	  || memory_operand (operands[3], V128HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_ZICOND_LIKE && TARGET_ZBS) && (!TARGET_64BIT)")
  (-1 "!TARGET_64BIT && TARGET_XTHEADFMV")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_64)) && ( !memory_operand (operands[0], RVVM8DFmode)
   && !memory_operand (operands[1], RVVM8DFmode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode) && TARGET_ZVFH)")
  (-1 "(TARGET_SFB_ALU) && (TARGET_64BIT)")
  (-1 "(riscv_inline_strlen && !optimize_size
    && (TARGET_ZBB || TARGET_XTHEADBB || TARGET_VECTOR)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( (operands[1] == CONSTM1_RTX (V2BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF2BFmode).is_constant ()) && (TARGET_VECTOR_ELEN_BF_16)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V64SImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4HFmode)
	|| register_operand (operands[3], V4HFmode)))) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( riscv_vector::whole_reg_move_p (operands, V4HFmode, 7))")
  (-1 "(!TARGET_XANDESPERF && TARGET_SLT) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256BImode)
       || register_operand (operands[1], V256BImode))) && ((riscv_vector::vls_mode_valid_p (V256BImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024HImode)
       || register_operand (operands[1], V1024HImode))) && ((riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM8QImode)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V512HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HImode)
       || register_operand (operands[1], V64HImode))) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BFmode)
       || register_operand (operands[1], V1024BFmode))) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V256SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[0])) && ((TARGET_64BIT) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64BImode)
       || register_operand (operands[1], V64BImode))) && ((riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM2DFmode)
        || register_operand (operands[3], RVVM2DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM8SFmode)
	|| register_operand (operands[3], RVVM8SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_64BIT
   && (INTVAL (operands[3]) | ((1 << INTVAL (operands[2])) - 1)) == 0xffffffff) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1BFmode) && TARGET_VECTOR_ELEN_BF_16)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HFmode)
       || register_operand (operands[1], V256HFmode))) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSH) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2HFmode)
        || register_operand (operands[3], V2HFmode)))) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( (register_operand (operands[0], V2HFmode)
       && register_operand (operands[3], V2HFmode)
       && riscv_vector::whole_reg_move_p (operands, V2HFmode, 7))
      || ((memory_operand (operands[0], V2HFmode)
	  || memory_operand (operands[3], V2HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 4096)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512HFmode)) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16DImode)
        || register_operand (operands[3], V16DImode)))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V16DImode)
       && register_operand (operands[3], V16DImode)
       && riscv_vector::whole_reg_move_p (operands, V16DImode, 7))
      || ((memory_operand (operands[0], V16DImode)
	  || memory_operand (operands[3], V16DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256SImode)
       || register_operand (operands[1], V256SImode))) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM2HImode)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256QImode)
       || register_operand (operands[1], V256QImode))) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024SFmode)
       || register_operand (operands[1], V1024SFmode))) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVMF4QImode).is_constant ()) && (!TARGET_XTHEADVECTOR)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2048HFmode)) && (riscv_vector::vls_mode_valid_p (V2048HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SImode)
       || register_operand (operands[1], V64SImode))) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V128QImode)
        || register_operand (operands[3], V128QImode)))) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( (register_operand (operands[0], V128QImode)
       && register_operand (operands[3], V128QImode)
       && riscv_vector::whole_reg_move_p (operands, V128QImode, 7))
      || ((memory_operand (operands[0], V128QImode)
	  || memory_operand (operands[3], V128QImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V1024BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM2SImode)
        || register_operand (operands[3], RVVM2SImode)))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V4DImode)
        || register_operand (operands[3], V4DImode)))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], V4DImode)
       && register_operand (operands[3], V4DImode)
       && riscv_vector::whole_reg_move_p (operands, V4DImode, 7))
      || ((memory_operand (operands[0], V4DImode)
	  || memory_operand (operands[3], V4DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V1HImode)
       || register_operand (operands[1], V1HImode))) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( reload_completed
   && (!register_operand (operands[0], V1HImode)
       || !register_operand (operands[1], V1HImode)))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM1DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM8DFmode)
        || register_operand (operands[3], RVVM8DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)) && ( (register_operand (operands[0], RVVM8DFmode)
       && register_operand (operands[3], RVVM8DFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM8DFmode, 7))
      || ((memory_operand (operands[0], RVVM8DFmode)
	  || memory_operand (operands[3], RVVM8DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V16SImode)
        || register_operand (operands[3], V16SImode)))) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM1HFmode)) && (TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_XANDESPERF
   && UINTVAL (operands[2]) != 1) && (TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64HFmode)
	|| register_operand (operands[3], V64HFmode)))) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128DImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 64)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_XOR || (IOR) == IOR) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V8SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1024SFmode)) && (riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BImode)
       || register_operand (operands[1], V2048BImode))) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V256HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512QImode)
       || register_operand (operands[1], V512QImode))) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(!TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512HFmode)) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2DImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( (operands[1] == CONSTM1_RTX (V512BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_HARD_FLOAT || TARGET_ZFINX) && (((!TARGET_64BIT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V512QImode)
       || register_operand (operands[1], V512QImode))) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V512HFmode)) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4HImode))) && ( 1)")
  (-1 "((TARGET_XTHEADVECTOR) && (TARGET_VECTOR_ELEN_FP_32)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( (operands[1] == CONSTM1_RTX (V1BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], DFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && can_create_pseudo_p ()) && (!TARGET_64BIT)")
  (0 "(QImode >= DImode) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V4SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V512BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512)) && (riscv_vector::vls_mode_valid_p (V512BImode) && TARGET_MIN_VLEN >= 512))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM4HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "(TARGET_ZBS) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && TARGET_64BIT) && (Pmode == SImode)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4SFmode)
        || register_operand (operands[3], RVVM4SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)) && ( (register_operand (operands[0], RVVM4SFmode)
       && register_operand (operands[3], RVVM4SFmode)
       && riscv_vector::whole_reg_move_p (operands, RVVM4SFmode, 7))
      || ((memory_operand (operands[0], RVVM4SFmode)
	  || memory_operand (operands[3], RVVM4SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZVKNED || TARGET_ZVKSED) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V1024BFmode)
       || register_operand (operands[1], V1024BFmode))) && ((riscv_vector::vls_mode_valid_p (V1024BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "TARGET_ZABHA")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)) && ( 1)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V1HFmode)
       || register_operand (operands[1], V1HFmode))) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32BImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V8HFmode)) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HFmode)
       || register_operand (operands[1], V256HFmode))) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( 1)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVMF4BFmode)
	|| register_operand (operands[3], RVVMF4BFmode)))) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, RVVMF4BFmode, 7))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256HFmode)
       || register_operand (operands[1], V256HFmode))) && ((riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && (TARGET_ZVFHMIN || TARGET_ZVFH)) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_64BIT && !TARGET_ZBA && !TARGET_XTHEADBB && !TARGET_XTHEADMEMIDX
   && !TARGET_XANDESPERF
   && !(REG_P (operands[1]) && VL_REG_P (REGNO (operands[1])))) && ( reload_completed
   && REG_P (operands[1])
   && !paradoxical_subreg_p (operands[0]))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V128HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "TARGET_64BIT && TARGET_ZBA
   && riscv_shamt_matches_mask_p (INTVAL (operands[2]), INTVAL (operands[3]))
   /* Ensure the mask includes all the bits in SImode.  */
   && ((INTVAL (operands[3]) & (HOST_WIDE_INT_1U << 31)) != 0)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V32BFmode)
	|| register_operand (operands[3], V32BFmode)))) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_ZVKNHA || TARGET_ZVKNHB || TARGET_ZVKG) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (!TARGET_XTHEADVECTOR)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V64DFmode)) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256DFmode)
       || register_operand (operands[1], V256DFmode))) && ((riscv_vector::vls_mode_valid_p (V256DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4DImode) && !TARGET_64BIT) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V256QImode)
       || register_operand (operands[1], V256QImode))) && ((riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2BImode))) && ( 1)")
  (-1 "(TARGET_ZVFBFWMA) && (TARGET_VECTOR_ELEN_BF_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN > 32)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V4SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64SFmode)
       || register_operand (operands[1], V64SFmode))) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V2048QImode)) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && (TARGET_VECTOR_ELEN_BF_16))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 512)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], HFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512QImode) && TARGET_MIN_VLEN >= 512) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32BImode)
       || register_operand (operands[1], V32BImode))) && ((riscv_vector::vls_mode_valid_p (V32BImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVMF8QImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVFNRCLIPXFQF) && (TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR_AUTOVEC_SEGMENT) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
   && (register_operand (operands[0], V16DImode)
       || register_operand (operands[1], V16DImode))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)) && ( reload_completed
   && (!register_operand (operands[0], V16DImode)
       || !register_operand (operands[1], V16DImode)))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_64BIT)")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 4096) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V16QImode))")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(TARGET_ZICBOP) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR
    && (register_operand (operands[0], RVVM2HImode)
        || register_operand (operands[3], RVVM2HImode)))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8QImode))) && ( (operands[1] == CONSTM1_RTX (V8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "(TARGET_ZVBB || TARGET_ZVKB) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2SFmode) && TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V1HFmode)) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF4HImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "reload_completed")
  (-1 "((!SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_OPERAND (INTVAL (operands[3]) >> INTVAL (operands[2]))
    && (!TARGET_ZBS || popcount_hwi (INTVAL (operands[3])) > 1)
    && (INTVAL (operands[3]) & ((1ULL << INTVAL (operands[2])) - 1)) == 0)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V256SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( 1)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM8HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], RVVM4HFmode)
	|| register_operand (operands[3], RVVM4HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 128)) && ( !strided_load_broadcast_p ()
   && (BFmode == HFmode
       || BFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == DImode))")
  (-1 "((TARGET_ZBS
    && INTVAL (operands[3]) + 1 == GET_MODE_BITSIZE (DImode))) && (TARGET_64BIT)")
  (-1 "TARGET_ZKNH && TARGET_64BIT")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64DFmode)
        || register_operand (operands[3], V64DFmode)))) && (riscv_vector::vls_mode_valid_p (V64DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 512)) && ( (register_operand (operands[0], V64DFmode)
       && register_operand (operands[3], V64DFmode)
       && riscv_vector::whole_reg_move_p (operands, V64DFmode, 7))
      || ((memory_operand (operands[0], V64DFmode)
	  || memory_operand (operands[3], V64DFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V64HImode)
	|| register_operand (operands[3], V64HImode)))) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V32SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (V8BImode)).exists ()) && ((((((Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode)))")
  (-1 "((TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((TARGET_VECTOR_ELEN_64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_SLT && INTVAL (operands[2]) < 11) && (!TARGET_64BIT)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V256QImode)
	|| register_operand (operands[3], V256QImode)))) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))")
  (-1 "(TARGET_VECTOR && TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR) && (((!TARGET_XTHEADVECTOR) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V128BFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V512SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], QImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_ZICOND_LIKE || TARGET_XTHEADCONDMOV) && can_create_pseudo_p ()) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128QImode)
       || register_operand (operands[1], V128QImode))) && ((riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V1HFmode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V1HImode)
        || register_operand (operands[3], V1HImode)))) && (riscv_vector::vls_mode_valid_p (V1HImode))) && ( (register_operand (operands[0], V1HImode)
       && register_operand (operands[3], V1HImode)
       && riscv_vector::whole_reg_move_p (operands, V1HImode, 7))
      || ((memory_operand (operands[0], V1HImode)
	  || memory_operand (operands[3], V1HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V4DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DFmode) && TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64HFmode)
        || register_operand (operands[3], V64HFmode)))) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V256HImode)
        || register_operand (operands[3], V256HImode)))) && (riscv_vector::vls_mode_valid_p (V256HImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "TARGET_VECTOR && GET_MODE_NUNITS (RVVM2HImode).is_constant ()")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V512DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && TARGET_XANDESVSINTLOAD
    && register_operand (operands[0], RVVMF8QImode))) && (TARGET_MIN_VLEN > 32)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_ZBB || TARGET_ZBKB) && !TARGET_ZCB
   && !optimize_function_for_size_p (cfun)
   && rtx_equal_p (operands[0], operands[2])
   && riscv_const_insns (operands[3], false) == 1) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (RVVM2HFmode) && can_create_pseudo_p ()) && (TARGET_ZVFH)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4096BImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BImode)
       || register_operand (operands[1], V2048BImode))) && ((riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == SImode))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2QImode)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4SImode)) && (riscv_vector::vls_mode_valid_p (V4SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128SImode)
        || register_operand (operands[3], V128SImode)))) && (riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32HFmode)
       || register_operand (operands[1], V32HFmode))) && ((riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32BImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( !strided_load_broadcast_p ()
   && (DFmode == HFmode
       || DFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_FP_64) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V16DImode)
	|| register_operand (operands[3], V16DImode)))) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V128BFmode)
        || register_operand (operands[3], V128BFmode)))) && (riscv_vector::vls_mode_valid_p (V128BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR) && ((TARGET_VECTOR_ELEN_64 && TARGET_64BIT) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128SImode)
       || register_operand (operands[1], V128SImode))) && ((riscv_vector::vls_mode_valid_p (V128SImode) && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SImode) && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_ZVBB) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024SImode) && TARGET_MIN_VLEN >= 4096)) && ( 1)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V256BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 512)")
  (-1 "(riscv_split_symbol (operands[2], operands[1], MAX_MACHINE_MODE, NULL)) && (Pmode == DImode)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V1024BImode) && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], V64DImode)
        || register_operand (operands[3], V64DImode)))) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V8QImode)
	|| register_operand (operands[3], V8QImode)))) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V8QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "(TARGET_HARD_FLOAT) && ((!TARGET_64BIT) && (TARGET_ZFH || TARGET_ZHINX))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)) && ( (operands[1] == CONSTM1_RTX (V256BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SFmode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SImode)
       || register_operand (operands[1], V32SImode))) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V512HFmode)
        || register_operand (operands[3], V512HFmode)))) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 1024)) && ( (register_operand (operands[0], V512HFmode)
       && register_operand (operands[3], V512HFmode)
       && riscv_vector::whole_reg_move_p (operands, V512HFmode, 7))
      || ((memory_operand (operands[0], V512HFmode)
	  || memory_operand (operands[3], V512HFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SImode) && TARGET_ZVFH)) && ( 1)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_BF_16) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_XTHEADMAC) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (RVVM4HImode)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8SImode)) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4SFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32)) && ( 1)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && Pmode == SImode) && (riscv_vector::vls_mode_valid_p (V1QImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p ()
   && (SFmode == HFmode
       || SFmode == BFmode)
   && can_create_pseudo_p ())")
  (-1 "TARGET_ZKND && !TARGET_64BIT")
  (-1 "(TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1HFmode) && TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32DImode)
        || register_operand (operands[3], V32DImode)))) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V32DImode)
       && register_operand (operands[3], V32DImode)
       && riscv_vector::whole_reg_move_p (operands, V32DImode, 7))
      || ((memory_operand (operands[0], V32DImode)
	  || memory_operand (operands[3], V32DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16DImode) && TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V256SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8SImode))) && ( 1)")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF2BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2DImode) && !TARGET_64BIT) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVMF2HFmode)
        || register_operand (operands[3], RVVMF2HFmode)))) && (TARGET_VECTOR_ELEN_FP_16)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V32SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 128) && (Pmode == SImode)) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR
   && can_create_pseudo_p ()
   && riscv_vector::get_vector_mode (Pmode, GET_MODE_NUNITS (RVVMF8BImode)).exists ()) && (Pmode == SImode)) && ( 1)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (RVVM4DFmode) && can_create_pseudo_p ()) && (TARGET_VECTOR_ELEN_FP_64)) && ( 1)")
  (-1 "TARGET_64BIT && TARGET_ZBA
   && (INTVAL (operands[3]) >> INTVAL (operands[2])) == 0xffffffff")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V8BFmode) && TARGET_VECTOR_ELEN_BF_16)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_BF_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "!TARGET_XTHEADMEMIDX && (!MEM_P (operands[1]) || TARGET_BYTE)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "TARGET_64BIT && TARGET_ZBB && sext_hwi (INTVAL (operands[2]), 32) >= 0")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V16SImode)) && (riscv_vector::vls_mode_valid_p (V16SImode) && TARGET_MIN_VLEN >= 64)")
  (-1 "((TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1024HImode) && TARGET_MIN_VLEN >= 2048)) && ( REG_P (operands[0]) && REG_P (operands[1])
   && REGNO (operands[0]) == REGNO (operands[1]))")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V4HImode))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (V8HImode).is_constant ()) && (riscv_vector::vls_mode_valid_p (V8HImode))")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 128)) && ( 1)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V128BImode)
       || register_operand (operands[1], V128BImode))) && ((riscv_vector::vls_mode_valid_p (V128BImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "(TARGET_VECTOR && GET_MODE_NUNITS (RVVM8DFmode).is_constant ()) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_ZMMUL || TARGET_MUL) && !TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM2DFmode)) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "((TARGET_VECTOR && !HONOR_SNANS (V8DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V8DFmode) && TARGET_VECTOR_ELEN_FP_64 && TARGET_MIN_VLEN >= 64)) && ( 1)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1SFmode)
        || register_operand (operands[3], RVVM1SFmode)))) && (TARGET_VECTOR_ELEN_FP_32)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2048QImode) && TARGET_MIN_VLEN >= 2048)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1SImode)
        || register_operand (operands[3], RVVM1SImode)))) && ( (register_operand (operands[0], RVVM1SImode)
       && register_operand (operands[3], RVVM1SImode)
       && riscv_vector::whole_reg_move_p (operands, RVVM1SImode, 7))
      || ((memory_operand (operands[0], RVVM1SImode)
	  || memory_operand (operands[3], RVVM1SImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (!TARGET_64BIT)) && ( reload_completed)")
  (-1 "(TARGET_HARD_FLOAT && TARGET_ZFA) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && ((riscv_vector::vls_mode_valid_p (V32QImode)) && (Pmode == SImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V1024QImode) && TARGET_MIN_VLEN >= 1024)) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512DImode)) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 4096)")
  (-1 "(TARGET_64BIT
   && TARGET_ZBS
   && (INTVAL (operands[2]) & 0x1f) != 0x1f) && (TARGET_64BIT)")
  (-1 "(TARGET_ZVBC) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (DImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "TARGET_ZKNE && TARGET_64BIT")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V4HFmode)) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V8DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 64)")
  (-1 "(known_gt (GET_MODE_BITSIZE (QImode), GET_MODE_BITSIZE (Pmode))) && (riscv_vector::vls_mode_valid_p (V128QImode) && TARGET_MIN_VLEN >= 128)")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V32SImode)
       || register_operand (operands[1], V32SImode))) && ((riscv_vector::vls_mode_valid_p (V32SImode) && TARGET_MIN_VLEN >= 128) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V32HImode)
        || register_operand (operands[3], V32HImode)))) && (riscv_vector::vls_mode_valid_p (V32HImode) && TARGET_MIN_VLEN >= 64)) && ( (register_operand (operands[0], V32HImode)
       && register_operand (operands[3], V32HImode)
       && riscv_vector::whole_reg_move_p (operands, V32HImode, 7))
      || ((memory_operand (operands[0], V32HImode)
	  || memory_operand (operands[3], V32HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2QImode))) && ( 1)")
  (-1 "((TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V2HFmode) && TARGET_VECTOR_ELEN_FP_16)) && ( 1)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V2048BImode) && TARGET_MIN_VLEN >= 2048)) && ( 1)")
  (-1 "(TARGET_SHIFT
    && !SMALL_OPERAND (INTVAL (operands[2]))
    && !SMALL_OPERAND (INTVAL (operands[3]))
    && SMALL_AFTER_COMMON_TRAILING_SHIFT (INTVAL (operands[2]),
					     INTVAL (operands[3]))) && (TARGET_64BIT)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V128SFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V128SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 512)")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V16HImode)
        || register_operand (operands[3], V16HImode)))) && (riscv_vector::vls_mode_valid_p (V16HImode))) && ( (register_operand (operands[0], V16HImode)
       && register_operand (operands[3], V16HImode)
       && riscv_vector::whole_reg_move_p (operands, V16HImode, 7))
      || ((memory_operand (operands[0], V16HImode)
	  || memory_operand (operands[3], V16HImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((ctz_hwi (INTVAL (operands[3]) & GET_MODE_MASK (word_mode))
    == INTVAL (operands[2]))) && (!TARGET_64BIT)")
  (-1 "(TARGET_VECTOR) && (TARGET_VECTOR_ELEN_FP_16 && TARGET_VECTOR_ELEN_FP_32 && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && TARGET_XANDESVDOT) && (riscv_vector::vls_mode_valid_p (V128DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 1024)")
  (-1 "((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4QImode)
	|| register_operand (operands[3], V4QImode)))) && (riscv_vector::vls_mode_valid_p (V4QImode))")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V4HFmode) && TARGET_ZVFH)")
  (-1 "(TARGET_HARD_FLOAT  || TARGET_ZFINX) && (TARGET_ZFH || TARGET_ZHINX)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512SImode) && TARGET_MIN_VLEN >= 2048) && (Pmode == DImode))")
  (-1 "(TARGET_VECTOR && TARGET_64BIT && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V256DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 2048)")
  (-1 "(TARGET_VECTOR) && (((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (TARGET_VECTOR_ELEN_64)) && (TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64HFmode)
       || register_operand (operands[1], V64HFmode))) && ((riscv_vector::vls_mode_valid_p (V64HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 128) && (Pmode == DImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF8QImode)) && (TARGET_VECTOR_ELEN_64)")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM1DFmode)
        || register_operand (operands[3], RVVM1DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (V4DImode)) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_HARD_FLOAT) && (TARGET_DOUBLE_FLOAT || TARGET_ZDINX)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 256)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V1024HFmode)
	|| register_operand (operands[3], V1024HFmode)))) && (riscv_vector::vls_mode_valid_p (V1024HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 2048)) && ( riscv_vector::whole_reg_move_p (operands, V1024HFmode, 7))")
  (-1 "(TARGET_VECTOR) && ((Pmode == SImode) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR)))")
  (-1 "TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVM1SImode)")
  (-1 "(TARGET_VECTOR && TARGET_XSFVCP) && (riscv_vector::vls_mode_valid_p (V32QImode))")
  (-1 "((TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V2048BFmode)
       || register_operand (operands[1], V2048BFmode))) && ((riscv_vector::vls_mode_valid_p (V2048BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 4096) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V8QImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "!TARGET_64BIT
   && (register_operand (operands[0], DImode)
       || reg_or_0_operand (operands[1], DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32QImode))) && ( !reload_completed
  && riscv_vector::whole_reg_loadstore_p (operands[0], operands[2],
					  operands[1], operands[3],
					  operands[4]))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V64SFmode)
        || register_operand (operands[3], V64SFmode)))) && (riscv_vector::vls_mode_valid_p (V64SFmode) && TARGET_VECTOR_ELEN_FP_32 && TARGET_MIN_VLEN >= 256)) && ( (register_operand (operands[0], V64SFmode)
       && register_operand (operands[3], V64SFmode)
       && riscv_vector::whole_reg_move_p (operands, V64SFmode, 7))
      || ((memory_operand (operands[0], V64SFmode)
	  || memory_operand (operands[3], V64SFmode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "((TARGET_64BIT && riscv_const_insns (operands[3], false) == 1)) && ( reload_completed)")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && Pmode == DImode) && (riscv_vector::vls_mode_valid_p (V64QImode) && TARGET_MIN_VLEN >= 64)")
  (0 "(TARGET_VECTOR && 0) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)) && ((riscv_vector::vls_mode_valid_p (V512BFmode) && TARGET_VECTOR_ELEN_BF_16 && TARGET_MIN_VLEN >= 1024) && (Pmode == SImode))")
  (-1 "(((TARGET_VECTOR
    && (register_operand (operands[0], V2DImode)
        || register_operand (operands[3], V2DImode)))) && (riscv_vector::vls_mode_valid_p (V2DImode) && TARGET_VECTOR_ELEN_64)) && ( (register_operand (operands[0], V2DImode)
       && register_operand (operands[3], V2DImode)
       && riscv_vector::whole_reg_move_p (operands, V2DImode, 7))
      || ((memory_operand (operands[0], V2DImode)
	  || memory_operand (operands[3], V2DImode))
	 && operands[2] != operands[0]
	 && !reload_completed
	 && riscv_vector::whole_reg_loadstore_p (operands[0], operands[3],
						 operands[1], operands[4],
						 operands[7])))")
  (-1 "(TARGET_VECTOR) && ( (operands[1] == CONSTM1_RTX (RVVMF8BImode)
       && operands[4] == CONST1_RTX (Pmode)
       && (register_operand (operands[3], SImode)
           || satisfies_constraint_J (operands[3]))))")
  (-1 "((TARGET_VECTOR) && (!TARGET_XTHEADVECTOR)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "((TARGET_ZVBB && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512)) && ( 1)")
  (-1 "(TARGET_VECTOR
   && (register_operand (operands[0], V8BImode)
       || register_operand (operands[1], V8BImode))) && (riscv_vector::vls_mode_valid_p (V8BImode))")
  (-1 "(TARGET_VECTOR) && (((riscv_vector::vls_mode_valid_p (V64HImode) && TARGET_MIN_VLEN >= 128) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_XANDESPERF
   && (UINTVAL (operands[2]) < 32)
   && ((INTVAL (operands[2]) + 32) <= 64)) && (TARGET_64BIT)")
  (-1 "((TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64 && TARGET_VECTOR_ELEN_FP_16) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))) && ( reload_completed)")
  (-1 "(TARGET_VECTOR && TARGET_VECTOR_MISALIGN_SUPPORTED) && (riscv_vector::vls_mode_valid_p (V256QImode) && TARGET_MIN_VLEN >= 256)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_gt_one (V512HImode)) && (riscv_vector::vls_mode_valid_p (V512HImode) && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && (lra_in_progress || reload_completed)
   && (register_operand (operands[0], V64DImode)
       || register_operand (operands[1], V64DImode))) && ((riscv_vector::vls_mode_valid_p (V64DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 512) && (Pmode == SImode))")
  (-1 "(TARGET_VECTOR) && ((((TARGET_VECTOR_ELEN_64) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))")
  (-1 "(TARGET_HARD_FLOAT && USE_LOAD_ADDRESS_MACRO (operands[1])
   && (!TARGET_DOUBLE_FLOAT || TARGET_64BIT)) && ((TARGET_HARD_FLOAT || TARGET_ZFINX) && (Pmode == DImode))")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V64SImode) && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V512HFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V1DFmode) && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V1DFmode) && TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && riscv_vector::cmp_lmul_le_one (RVVMF4HImode)) && ((TARGET_VECTOR_ELEN_64) && (!TARGET_XTHEADVECTOR))")
  (-1 "(TARGET_VECTOR && can_create_pseudo_p ()) && (riscv_vector::vls_mode_valid_p (V512DImode) && TARGET_FULL_V && TARGET_MIN_VLEN >= 4096)")
  (-1 "((TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32DImode) && TARGET_VECTOR_ELEN_64 && TARGET_MIN_VLEN >= 256)) && ( !strided_load_broadcast_p () && can_create_pseudo_p ())")
  (-1 "(TARGET_VECTOR) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_VECTOR_ELEN_FP_16 && TARGET_MIN_VLEN >= 64)")
  (-1 "(TARGET_VECTOR && !TARGET_XTHEADVECTOR) && (riscv_vector::vls_mode_valid_p (V1DImode) && TARGET_VECTOR_ELEN_64)")
  (-1 "(TARGET_VECTOR && !HONOR_SNANS (V32HFmode)) && (riscv_vector::vls_mode_valid_p (V32HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 64)")
  (-1 "(((TARGET_XTHEADVECTOR
    && (register_operand (operands[0], V4DImode)
	|| register_operand (operands[3], V4DImode)))) && (riscv_vector::vls_mode_valid_p (V4DImode) && TARGET_VECTOR_ELEN_64)) && ( riscv_vector::whole_reg_move_p (operands, V4DImode, 7))")
  (-1 "((TARGET_VECTOR
    && (register_operand (operands[0], RVVM4DFmode)
        || register_operand (operands[3], RVVM4DFmode)))) && (TARGET_VECTOR_ELEN_FP_64)")
  (-1 "(TARGET_VECTOR && !flag_trapping_math && !flag_rounding_math) && (riscv_vector::vls_mode_valid_p (V512HFmode) && TARGET_ZVFH && TARGET_MIN_VLEN >= 1024)")
])
