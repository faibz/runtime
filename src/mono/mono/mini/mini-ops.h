
MINI_OP(OP_LOAD,	"load")
MINI_OP(OP_LDADDR,	"ldaddr")
MINI_OP(OP_STORE,	"store")
MINI_OP(OP_OBJADDR,	"objaddr")
MINI_OP(OP_VTADDR,	"vtaddr")
MINI_OP(OP_PHI,		"phi")
MINI_OP(OP_RENAME,	"rename")
MINI_OP(OP_COMPARE,	"compare")
MINI_OP(OP_COMPARE_IMM,	"compare_imm")
MINI_OP(OP_FCOMPARE,	"fcompare")
MINI_OP(OP_LCOMPARE,	"lcompare")
MINI_OP(OP_ICOMPARE,	"icompare")
MINI_OP(OP_ICOMPARE_IMM,	"icompare_imm")
MINI_OP(OP_LOCAL,	"local")
MINI_OP(OP_ARG,		"arg")
MINI_OP(OP_ARGLIST,	"oparglist")
MINI_OP(OP_OUTARG,	"outarg")
MINI_OP(OP_OUTARG_REG,	"outarg_reg")
MINI_OP(OP_OUTARG_IMM,	"outarg_imm")
MINI_OP(OP_OUTARG_R4,	"outarg_r4")
MINI_OP(OP_OUTARG_R8,	"outarg_r8")
MINI_OP(OP_OUTARG_VT,	"outarg_vt")
MINI_OP(OP_INARG_VT,	"inarg_vt")
MINI_OP(OP_RETARG,	"retarg")
MINI_OP(OP_SETRET,	"setret")
MINI_OP(OP_SETFRET,	"setfret")
MINI_OP(OP_SETLRET,	"setlret")
MINI_OP(OP_SETREG,	"setreg")
MINI_OP(OP_SETREGIMM,	"setregimm")
MINI_OP(OP_SETFREG,	"setfreg")
MINI_OP(OP_CHECK_THIS,	"checkthis")
MINI_OP(OP_VOIDCALL,	"voidcall")
MINI_OP(OP_VOIDCALLVIRT,	"voidcallvirt")
MINI_OP(OP_VOIDCALL_REG,	"voidcall_reg")
MINI_OP(OP_VOIDCALL_MEMBASE,	"voidcall_membase")
MINI_OP(OP_FCALL,	"fcall")
MINI_OP(OP_FCALLVIRT,	"fcallvirt")
MINI_OP(OP_FCALL_REG,	"fcall_reg")
MINI_OP(OP_FCALL_MEMBASE,	"fcall_membase")
MINI_OP(OP_LCALL,	"lcall")
MINI_OP(OP_LCALLVIRT,	"lcallvirt")
MINI_OP(OP_LCALL_REG,	"lcall_reg")
MINI_OP(OP_LCALL_MEMBASE,	"lcall_membase")
MINI_OP(OP_VCALL, 	"vcall")
MINI_OP(OP_VCALLVIRT, 	"vcallvirt")
MINI_OP(OP_VCALL_REG,	"vcall_reg")
MINI_OP(OP_VCALL_MEMBASE,	"vcall_membase")
MINI_OP(OP_CALL_REG,	"call_reg")
MINI_OP(OP_CALL_MEMBASE,	"call_membase")
MINI_OP(OP_TRAP,	"trap")
MINI_OP(OP_ICONST,	"iconst")
MINI_OP(OP_I8CONST,	"i8const")
MINI_OP(OP_R4CONST,	"r4const")
MINI_OP(OP_R8CONST,	"r8const")
MINI_OP(OP_REGVAR,	"regvar")
MINI_OP(OP_REG,		"reg")
MINI_OP(OP_REGOFFSET,	"regoffset")
MINI_OP(OP_LABEL,	"label")
MINI_OP(OP_CHECK_ARRAY_TYPE,	"check_array_type")
MINI_OP(OP_ARRAY_RANK,	"array_rank")
MINI_OP(OP_THROW_OR_NULL,	"throw_or_null")
MINI_OP(OP_REFANYTYPE,	"refanytype")

MINI_OP(OP_STORE_MEMBASE_IMM,"store_membase_imm")
MINI_OP(OP_STORE_MEMBASE_REG,"store_membase_reg")
MINI_OP(OP_STOREI1_MEMBASE_IMM, "storei1_membase_imm")
MINI_OP(OP_STOREI1_MEMBASE_REG, "storei1_membase_reg")
MINI_OP(OP_STOREI2_MEMBASE_IMM, "storei2_membase_imm")
MINI_OP(OP_STOREI2_MEMBASE_REG, "storei2_membase_reg")
MINI_OP(OP_STOREI4_MEMBASE_IMM, "storei4_membase_imm")
MINI_OP(OP_STOREI4_MEMBASE_REG, "storei4_membase_reg")
MINI_OP(OP_STOREI8_MEMBASE_IMM, "storei8_membase_imm")
MINI_OP(OP_STOREI8_MEMBASE_REG, "storei8_membase_reg")
MINI_OP(OP_STORER4_MEMBASE_REG, "storer4_membase_reg")
MINI_OP(OP_STORER8_MEMBASE_REG, "storer8_membase_reg")
MINI_OP(OP_LOAD_MEMBASE,	"load_membase")
MINI_OP(OP_LOADI1_MEMBASE,"loadi1_membase")
MINI_OP(OP_LOADU1_MEMBASE,"loadu1_membase")
MINI_OP(OP_LOADI2_MEMBASE,"loadi2_membase")
MINI_OP(OP_LOADU2_MEMBASE,"loadu2_membase")
MINI_OP(OP_LOADI4_MEMBASE,"loadi4_membase")
MINI_OP(OP_LOADU4_MEMBASE,"loadu4_membase")
MINI_OP(OP_LOADI8_MEMBASE,"loadi8_membase")
MINI_OP(OP_LOADR4_MEMBASE,"loadr4_membase")
MINI_OP(OP_LOADR8_MEMBASE,"loadr8_membase")
MINI_OP(OP_LOADR8_SPILL_MEMBASE,"loadr8_spill_membase")
MINI_OP(OP_LOADU4_MEM,"loadu4_mem")
MINI_OP(OP_MOVE,	"move")
MINI_OP(OP_FMOVE,	"fmove")

MINI_OP(OP_ADD_IMM,    "add_imm")
MINI_OP(OP_SUB_IMM,    "sub_imm")
MINI_OP(OP_MUL_IMM,    "mul_imm")
MINI_OP(OP_DIV_IMM,    "div_imm")
MINI_OP(OP_DIV_UN_IMM, "div_un_imm")
MINI_OP(OP_REM_IMM,    "rem_imm")
MINI_OP(OP_REM_UN_IMM, "rem_un_imm")
MINI_OP(OP_AND_IMM,    "and_imm")
MINI_OP(OP_OR_IMM,     "or_imm")
MINI_OP(OP_XOR_IMM,    "xor_imm")
MINI_OP(OP_SHL_IMM,    "shl_imm")
MINI_OP(OP_SHR_IMM,    "shr_imm")
MINI_OP(OP_SHR_UN_IMM, "shr_un_imm")

/* exceptions: must be in the same order as the matching CEE_ branch opcodes */
MINI_OP(OP_COND_EXC_EQ, "cond_exc_eq")
MINI_OP(OP_COND_EXC_GE, "cond_exc_ge")
MINI_OP(OP_COND_EXC_GT, "cond_exc_gt")
MINI_OP(OP_COND_EXC_LE, "cond_exc_le")
MINI_OP(OP_COND_EXC_LT, "cond_exc_lt")
MINI_OP(OP_COND_EXC_NE_UN, "cond_exc_ne_un")
MINI_OP(OP_COND_EXC_GE_UN, "cond_exc_ge_un")
MINI_OP(OP_COND_EXC_GT_UN, "cond_exc_gt_un")
MINI_OP(OP_COND_EXC_LE_UN, "cond_exc_le_un")
MINI_OP(OP_COND_EXC_LT_UN, "cond_exc_lt_un")

MINI_OP(OP_COND_EXC_OV, "cond_exc_ov")
MINI_OP(OP_COND_EXC_NO, "cond_exc_no")
MINI_OP(OP_COND_EXC_C, "cond_exc_c")
MINI_OP(OP_COND_EXC_NC, "cond_exc_nc")

/* 64 bit opcodes: must be in the same order as the matching CEE_ opcodes: binops_op_map */
MINI_OP(OP_LADD,    "long_add")
MINI_OP(OP_LSUB,    "long_sub")
MINI_OP(OP_LMUL,    "long_mul")
MINI_OP(OP_LDIV,    "long_div")
MINI_OP(OP_LDIV_UN, "long_div_un")
MINI_OP(OP_LREM,    "long_rem")
MINI_OP(OP_LREM_UN, "long_rem_un")
MINI_OP(OP_LAND,    "long_and")
MINI_OP(OP_LOR,     "long_or")
MINI_OP(OP_LXOR,    "long_xor")
MINI_OP(OP_LSHL,    "long_shl")
MINI_OP(OP_LSHR,    "long_shr")
MINI_OP(OP_LSHR_UN, "long_shr_un")

/* 64 bit opcodes: must be in the same order as the matching CEE_ opcodes: unops_op_map */
MINI_OP(OP_LNEG,       "long_neg")
MINI_OP(OP_LNOT,       "long_not")
MINI_OP(OP_LCONV_TO_I1,"long_conv_to_i1")
MINI_OP(OP_LCONV_TO_I2,"long_conv_to_i2")
MINI_OP(OP_LCONV_TO_I4,"long_conv_to_i4")
MINI_OP(OP_LCONV_TO_I8,"long_conv_to_i8")
MINI_OP(OP_LCONV_TO_R4,"long_conv_to_r4")
MINI_OP(OP_LCONV_TO_R8,"long_conv_to_r8")
MINI_OP(OP_LCONV_TO_U4,"long_conv_to_u4")
MINI_OP(OP_LCONV_TO_U8,"long_conv_to_u8")

MINI_OP(OP_LCONV_TO_U2,   "long_conv_to_u2")
MINI_OP(OP_LCONV_TO_U1,   "long_conv_to_u1")
MINI_OP(OP_LCONV_TO_I,    "long_conv_to_i")
MINI_OP(OP_LCONV_TO_OVF_I,"long_conv_to_ovf_i")
MINI_OP(OP_LCONV_TO_OVF_U,"long_conv_to_ovf_u")
MINI_OP(OP_LADD_OVF,      "long_add_ovf")
MINI_OP(OP_LADD_OVF_UN,   "long_add_ovf_un")
MINI_OP(OP_LMUL_OVF,      "long_mul_ovf")
MINI_OP(OP_LMUL_OVF_UN,   "long_mul_ovf_un")
MINI_OP(OP_LSUB_OVF,      "long_sub_ovf")
MINI_OP(OP_LSUB_OVF_UN,   "long_sub_ovf_un")

MINI_OP(OP_LCONV_TO_OVF_I1_UN,"long_conv_to_ovf_i1_un")
MINI_OP(OP_LCONV_TO_OVF_I2_UN,"long_conv_to_ovf_i2_un")
MINI_OP(OP_LCONV_TO_OVF_I4_UN,"long_conv_to_ovf_i4_un")
MINI_OP(OP_LCONV_TO_OVF_I8_UN,"long_conv_to_ovf_i8_un")
MINI_OP(OP_LCONV_TO_OVF_U1_UN,"long_conv_to_ovf_u1_un")
MINI_OP(OP_LCONV_TO_OVF_U2_UN,"long_conv_to_ovf_u2_un")
MINI_OP(OP_LCONV_TO_OVF_U4_UN,"long_conv_to_ovf_u4_un")
MINI_OP(OP_LCONV_TO_OVF_U8_UN,"long_conv_to_ovf_u8_un")
MINI_OP(OP_LCONV_TO_OVF_I_UN, "long_conv_to_ovf_i_un")
MINI_OP(OP_LCONV_TO_OVF_U_UN, "long_conv_to_ovf_u_un")

MINI_OP(OP_LCONV_TO_OVF_I1,"long_conv_to_ovf_i1")
MINI_OP(OP_LCONV_TO_OVF_U1,"long_conv_to_ovf_u1")
MINI_OP(OP_LCONV_TO_OVF_I2,"long_conv_to_ovf_i2")
MINI_OP(OP_LCONV_TO_OVF_U2,"long_conv_to_ovf_u2")
MINI_OP(OP_LCONV_TO_OVF_I4,"long_conv_to_ovf_i4")
MINI_OP(OP_LCONV_TO_OVF_U4,"long_conv_to_ovf_u4")
MINI_OP(OP_LCONV_TO_OVF_I8,"long_conv_to_ovf_i8")
MINI_OP(OP_LCONV_TO_OVF_U8,"long_conv_to_ovf_u8")

MINI_OP(OP_LCEQ,   "long_ceq")
MINI_OP(OP_LCGT,   "long_cgt")
MINI_OP(OP_LCGT_UN,"long_cgt_un")
MINI_OP(OP_LCLT,   "long_clt")
MINI_OP(OP_LCLT_UN,"long_clt_un")

MINI_OP(OP_LCONV_TO_R_UN,"long_conv_to_r_un")
MINI_OP(OP_LCONV_TO_U,   "long_conv_to_u")
MINI_OP(OP_LSHR_IMM,	 "long_shr_imm")
MINI_OP(OP_LSHR_UN_IMM,  "long_shr_un_imm")
MINI_OP(OP_LSHL_IMM,     "long_shl_imm")
MINI_OP(OP_LADD_IMM,     "long_add_imm")
MINI_OP(OP_LSUB_IMM,     "long_sub_imm")

MINI_OP(OP_LBEQ,    "long_beq")
MINI_OP(OP_LBNE_UN, "long_bne_un")
MINI_OP(OP_LBLT,    "long_blt")
MINI_OP(OP_LBLT_UN, "long_blt_un")
MINI_OP(OP_LBGT,    "long_bgt")
MINI_OP(OP_LBGT_UN, "long_btg_un")
MINI_OP(OP_LBGE,    "long_bge")
MINI_OP(OP_LBGE_UN, "long_bge_un")
MINI_OP(OP_LBLE,    "long_ble")
MINI_OP(OP_LBLE_UN, "long_ble_un")

/* 32 bit opcodes on 64 bit machines */
MINI_OP(OP_IADD,    "int_add")
MINI_OP(OP_ISUB,    "int_sub")
MINI_OP(OP_IMUL,    "int_mul")
MINI_OP(OP_IMUL_OVF,    "int_mul_ovf")
MINI_OP(OP_IMUL_OVF_UN, "int_mul_ovf_un")
MINI_OP(OP_IDIV,    "int_div")
MINI_OP(OP_IDIV_UN, "int_div_un")
MINI_OP(OP_IREM,    "int_rem")
MINI_OP(OP_IREM_UN, "int_rem_un")
MINI_OP(OP_IAND,    "int_and")
MINI_OP(OP_IOR,     "int_or")
MINI_OP(OP_IXOR,    "int_xor")
MINI_OP(OP_ISHL,    "int_shl")
MINI_OP(OP_ISHR,    "int_shr")
MINI_OP(OP_ISHR_UN, "int_shr_un")
MINI_OP(OP_IADC,     "int_adc")
MINI_OP(OP_IADC_IMM, "int_adc_imm")
MINI_OP(OP_ISBB,     "int_sbb")
MINI_OP(OP_ISBB_IMM, "int_sbb_imm")
MINI_OP(OP_IADDCC,   "int_addcc")
MINI_OP(OP_ISUBCC,   "int_subcc")

MINI_OP(OP_IADD_IMM,    "int_add_imm")
MINI_OP(OP_ISUB_IMM,    "int_sub_imm")
MINI_OP(OP_IMUL_IMM,    "int_mul_imm")
MINI_OP(OP_IDIV_IMM,    "int_div_imm")
MINI_OP(OP_IDIV_UN_IMM, "int_div_un_imm")
MINI_OP(OP_IREM_IMM,    "int_rem_imm")
MINI_OP(OP_IREM_UN_IMM, "int_rem_un_imm")
MINI_OP(OP_IAND_IMM,    "int_and_imm")
MINI_OP(OP_IOR_IMM,     "int_or_imm")
MINI_OP(OP_IXOR_IMM,    "int_xor_imm")
MINI_OP(OP_ISHL_IMM,    "int_shl_imm")
MINI_OP(OP_ISHR_IMM,    "int_shr_imm")
MINI_OP(OP_ISHR_UN_IMM, "int_shr_un_imm")

MINI_OP(OP_INEG,       "int_neg")
MINI_OP(OP_INOT,       "int_not")

MINI_OP(OP_ICEQ,   "int_ceq")
MINI_OP(OP_ICGT,   "int_cgt")
MINI_OP(OP_ICGT_UN,"int_cgt_un")
MINI_OP(OP_ICLT,   "int_clt")
MINI_OP(OP_ICLT_UN,"int_clt_un")

MINI_OP(OP_IBEQ,    "int_beq")
MINI_OP(OP_IBNE_UN, "int_bne_un")
MINI_OP(OP_IBLT,    "int_blt")
MINI_OP(OP_IBLT_UN, "int_blt_un")
MINI_OP(OP_IBGT,    "int_bgt")
MINI_OP(OP_IBGT_UN, "int_bgt_un")
MINI_OP(OP_IBGE,    "int_bge")
MINI_OP(OP_IBGE_UN, "int_bge_un")
MINI_OP(OP_IBLE,    "int_ble")
MINI_OP(OP_IBLE_UN, "int_ble_un")

MINI_OP(OP_COND_EXC_IOV, "cond_exc_iov")
MINI_OP(OP_COND_EXC_IC, "cond_exc_ic")

MINI_OP(OP_FBEQ,   "float_beq")
MINI_OP(OP_FBNE_UN,"float_bne_un")
MINI_OP(OP_FBLT,   "float_blt")
MINI_OP(OP_FBLT_UN,"float_blt_un")
MINI_OP(OP_FBGT,   "float_bgt")
MINI_OP(OP_FBGT_UN,"float_btg_un")
MINI_OP(OP_FBGE,   "float_bge")
MINI_OP(OP_FBGE_UN,"float_bge_un")
MINI_OP(OP_FBLE,   "float_ble")
MINI_OP(OP_FBLE_UN,"float_ble_un")

MINI_OP(OP_LONG_SHRUN_32, "long_shr_un_32")

/* float opcodes: must be in the same order as the matching CEE_ opcodes: binops_op_map */
MINI_OP(OP_FADD,   "float_add")
MINI_OP(OP_FSUB,   "float_sub")
MINI_OP(OP_FMUL,   "float_mul")
MINI_OP(OP_FDIV,   "float_div")
MINI_OP(OP_FDIV_UN,"float_div_un")
MINI_OP(OP_FREM,   "float_rem")
MINI_OP(OP_FREM_UN,"float_rem_un")

/* float opcodes: must be in the same order as the matching CEE_ opcodes: unops_op_map */
MINI_OP(OP_FNEG,       "float_neg")
MINI_OP(OP_FNOT,       "float_not")
MINI_OP(OP_FCONV_TO_I1,"float_conv_to_i1")
MINI_OP(OP_FCONV_TO_I2,"float_conv_to_i2")
MINI_OP(OP_FCONV_TO_I4,"float_conv_to_i4")
MINI_OP(OP_FCONV_TO_I8,"float_conv_to_i8")
MINI_OP(OP_FCONV_TO_R4,"float_conv_to_r4")
MINI_OP(OP_FCONV_TO_R8,"float_conv_to_r8")
MINI_OP(OP_FCONV_TO_U4,"float_conv_to_u4")
MINI_OP(OP_FCONV_TO_U8,"float_conv_to_u8")

MINI_OP(OP_FCONV_TO_U2,   "float_conv_to_u2")
MINI_OP(OP_FCONV_TO_U1,   "float_conv_to_u1")
MINI_OP(OP_FCONV_TO_I,    "float_conv_to_i")
MINI_OP(OP_FCONV_TO_OVF_I,"float_conv_to_ovf_i")
MINI_OP(OP_FCONV_TO_OVF_U,"float_conv_to_ovd_u")
MINI_OP(OP_FADD_OVF,      "float_add_ovf")
MINI_OP(OP_FADD_OVF_UN,   "float_add_ovf_un")
MINI_OP(OP_FMUL_OVF,      "float_mul_ovf")
MINI_OP(OP_FMUL_OVF_UN,   "float_mul_ovf_un")
MINI_OP(OP_FSUB_OVF,      "float_sub_ovf")
MINI_OP(OP_FSUB_OVF_UN,   "float_sub_ovf_un")

MINI_OP(OP_FCONV_TO_OVF_I1_UN,"float_conv_to_ovf_i1_un")
MINI_OP(OP_FCONV_TO_OVF_I2_UN,"float_conv_to_ovf_i2_un")
MINI_OP(OP_FCONV_TO_OVF_I4_UN,"float_conv_to_ovf_i4_un")
MINI_OP(OP_FCONV_TO_OVF_I8_UN,"float_conv_to_ovf_i8_un")
MINI_OP(OP_FCONV_TO_OVF_U1_UN,"float_conv_to_ovf_u1_un")
MINI_OP(OP_FCONV_TO_OVF_U2_UN,"float_conv_to_ovf_u2_un")
MINI_OP(OP_FCONV_TO_OVF_U4_UN,"float_conv_to_ovf_u4_un")
MINI_OP(OP_FCONV_TO_OVF_U8_UN,"float_conv_to_ovf_u8_un")
MINI_OP(OP_FCONV_TO_OVF_I_UN, "float_conv_to_ovf_i_un")
MINI_OP(OP_FCONV_TO_OVF_U_UN, "float_conv_to_ovf_u_un")

MINI_OP(OP_FCONV_TO_OVF_I1,"float_conv_to_ovf_i1")
MINI_OP(OP_FCONV_TO_OVF_U1,"float_conv_to_ovf_u1")
MINI_OP(OP_FCONV_TO_OVF_I2,"float_conv_to_ovf_i2")
MINI_OP(OP_FCONV_TO_OVF_U2,"float_conv_to_ovf_u2")
MINI_OP(OP_FCONV_TO_OVF_I4,"float_conv_to_ovf_i4")
MINI_OP(OP_FCONV_TO_OVF_U4,"float_conv_to_ovf_u4")
MINI_OP(OP_FCONV_TO_OVF_I8,"float_conv_to_ovf_i8")
MINI_OP(OP_FCONV_TO_OVF_U8,"float_conv_to_ovf_u8")

MINI_OP(OP_FCEQ,   "float_ceq")
MINI_OP(OP_FCGT,   "float_cgt")
MINI_OP(OP_FCGT_UN,"float_cgt_un")
MINI_OP(OP_FCLT,   "float_clt")
MINI_OP(OP_FCLT_UN,"float_clt_un")

MINI_OP(OP_FCONV_TO_U,	"float_conv_to_u")

MINI_OP(OP_GROUP, "group")

/* aot compiler */
MINI_OP(OP_AOTCONST, "aot_const")

/* used to impl unbox */
MINI_OP(OP_UNBOXCAST  , "unboxcast")

/* exception related opcodes */
MINI_OP(OP_CALL_HANDLER  , "call_handler")
MINI_OP(OP_START_HANDLER  , "start_handler")
MINI_OP(OP_ENDFILTER,  "op_endfilter")

/* inline (long)int * (long)int */
MINI_OP(OP_BIGMUL, "op_bigmul")
MINI_OP(OP_BIGMUL_UN, "op_bigmul_un")

/* opcodes most architecture have */
MINI_OP(OP_ADC,     "adc")
MINI_OP(OP_ADC_IMM, "adc_imm")
MINI_OP(OP_SBB,     "sbb")
MINI_OP(OP_SBB_IMM, "sbb_imm")
MINI_OP(OP_ADDCC,   "addcc")
MINI_OP(OP_SUBCC,   "subcc")
MINI_OP(OP_BR_REG,  "br_reg")
MINI_OP(OP_SEXT_I1,  "sext_i1")
MINI_OP(OP_SEXT_I2,  "sext_i2")
MINI_OP(OP_CNE,      "cne")
/* to implement the upper half of long32 add and sub */
MINI_OP(OP_ADD_OVF_CARRY,   "add_ovf_carry")
MINI_OP(OP_SUB_OVF_CARRY,   "sub_ovf_carry")
MINI_OP(OP_ADD_OVF_UN_CARRY,   "add_ovf_un_carry")
MINI_OP(OP_SUB_OVF_UN_CARRY,   "sub_ovf_un_carry")

/* FP functions usually done by the CPU */
MINI_OP(OP_SIN,     "sin")
MINI_OP(OP_COS,     "cos")
MINI_OP(OP_ABS,     "abs")
MINI_OP(OP_TAN,     "tan")
MINI_OP(OP_ATAN,    "atan")
MINI_OP(OP_SQRT,    "sqrt")
/* to optimize strings */
MINI_OP(OP_GETCHR, "getchar")
MINI_OP(OP_STRLEN, "strlen")
MINI_OP(OP_GETTYPE, "gettype")
/* get adrress of element in a 2D array */
MINI_OP(OP_LDELEMA2D, "getldelema2")
/* inlined small memcpy with constant length */
MINI_OP(OP_MEMCPY, "memcpy")
/* inlined small memset with constant length */
MINI_OP(OP_MEMSET, "memset")
/* type check that support custom remoting types */
MINI_OP(OP_CISINST, "cisinst")
MINI_OP(OP_CCASTCLASS, "ccastclass")
MINI_OP(OP_SAVE_LMF, "save_lmf")
MINI_OP(OP_RESTORE_LMF, "restore_lmf")

/* x86 specific */
MINI_OP(OP_X86_TEST_NULL,          "x86_test_null")
MINI_OP(OP_X86_COMPARE_MEMBASE_REG,"x86_compare_membase_reg")
MINI_OP(OP_X86_COMPARE_MEMBASE_IMM,"x86_compare_membase_imm")
MINI_OP(OP_X86_COMPARE_REG_MEMBASE,"x86_compare_reg_membase")
MINI_OP(OP_X86_INC_REG,            "x86_inc_reg")
MINI_OP(OP_X86_INC_MEMBASE,        "x86_inc_membase")
MINI_OP(OP_X86_DEC_REG,            "x86_dec_reg")
MINI_OP(OP_X86_DEC_MEMBASE,        "x86_dec_membase")
MINI_OP(OP_X86_ADD_MEMBASE_IMM,    "x86_add_membase_imm")
MINI_OP(OP_X86_SUB_MEMBASE_IMM,    "x86_sub_membase_imm")
MINI_OP(OP_X86_PUSH_MEMBASE,       "x86_push_membase")
MINI_OP(OP_X86_PUSH_IMM,           "x86_push_imm")
MINI_OP(OP_X86_PUSH,               "x86_push")
MINI_OP(OP_X86_PUSH_FP,            "x86_push_fp")
MINI_OP(OP_X86_PUSH_OBJ,           "x86_push_obj")
MINI_OP(OP_X86_LEA,                "x86_lea")
MINI_OP(OP_X86_LEA_MEMBASE,        "x86_lea_membase")
MINI_OP(OP_X86_XCHG,               "x86_xchg")
MINI_OP(OP_X86_FPOP,               "x86_fpop")
MINI_OP(OP_X86_FP_LOAD_I8,         "x86_fp_load_i8")
MINI_OP(OP_X86_FP_LOAD_I4,         "x86_fp_load_i4")
MINI_OP(OP_X86_SETEQ_MEMBASE,      "x86_seteq_membase")
MINI_OP(OP_X86_SETNE_MEMBASE,      "x86_setne_membase")
MINI_OP(OP_X86_ADD_MEMBASE,        "x86_add_membase")
MINI_OP(OP_X86_SUB_MEMBASE,        "x86_sub_membase")
MINI_OP(OP_X86_MUL_MEMBASE,        "x86_mul_membase")

MINI_OP(OP_AMD64_SET_XMMREG_R4,          "amd64_set_xmmreg_r4")
MINI_OP(OP_AMD64_SET_XMMREG_R8,          "amd64_set_xmmreg_r8")
MINI_OP(OP_AMD64_OUTARG_XMMREG_R4,       "amd64_outarg_xmmreg_r4")
MINI_OP(OP_AMD64_OUTARG_XMMREG_R8,       "amd64_outarg_xmmreg_r8")
MINI_OP(OP_AMD64_ICOMPARE_MEMBASE_REG,   "amd64_icompare_membase_reg")
MINI_OP(OP_AMD64_ICOMPARE_MEMBASE_IMM,   "amd64_icompare_membase_imm")
MINI_OP(OP_AMD64_ICOMPARE_REG_MEMBASE,   "amd64_icompare_reg_membase")
MINI_OP(OP_AMD64_OUTARG_ALIGN_STACK,     "amd64_outarg_align_stack")
	
MINI_OP(OP_PPC_SUBFIC,             "ppc_subfic")
MINI_OP(OP_PPC_SUBFZE,             "ppc_subfze")

MINI_OP(OP_SPARC_OUTARG_REGPAIR,   "sparc_outarg_regpair")
MINI_OP(OP_SPARC_OUTARG_MEM,       "sparc_outarg_mem")
MINI_OP(OP_SPARC_OUTARG_MEMPAIR,   "sparc_outarg_mempair")
MINI_OP(OP_SPARC_OUTARG_SPLIT_REG_STACK, "sparc_outarg_split_reg_stack")
MINI_OP(OP_SPARC_OUTARG_FLOAT_REG, "sparc_outarg_float_reg")
MINI_OP(OP_SPARC_OUTARG_DOUBLE_REG, "sparc_outarg_double_reg")
MINI_OP(OP_SPARC_INARG_VT,         "sparc_inarg_vt")
MINI_OP(OP_SPARC_LOCALLOC_IMM,     "sparc_localloc_imm")
MINI_OP(OP_SPARC_SETFREG_FLOAT,   "sparc_setfreg_float")
MINI_OP(OP_SPARC_BRZ,              "sparc_brz")
MINI_OP(OP_SPARC_BRLEZ,            "sparc_brlez")
MINI_OP(OP_SPARC_BRLZ,             "sparc_brlz")
MINI_OP(OP_SPARC_BRNZ,             "sparc_brnz")
MINI_OP(OP_SPARC_BRGZ,             "sparc_brgz")
MINI_OP(OP_SPARC_BRGEZ,            "sparc_brgez")
MINI_OP(OP_SPARC_COND_EXC_EQZ,     "sparc_cond_exc_eqz")
MINI_OP(OP_SPARC_COND_EXC_GEZ,     "sparc_cond_exc_gez")
MINI_OP(OP_SPARC_COND_EXC_GTZ,     "sparc_cond_exc_gtz")
MINI_OP(OP_SPARC_COND_EXC_LEZ,     "sparc_cond_exc_lez")
MINI_OP(OP_SPARC_COND_EXC_LTZ,     "sparc_cond_exc_ltz")
MINI_OP(OP_SPARC_COND_EXC_NEZ,     "sparc_cond_exc_nez")


MINI_OP(OP_S390_LOADARG,	   "s390_loadarg")
MINI_OP(OP_S390_ARGPTR, 	   "s390_argptr")
MINI_OP(OP_S390_STKARG, 	   "s390_stkarg")
MINI_OP(OP_S390_MOVE,	 	   "s390_move")
MINI_OP(OP_S390_SETF4RET,	   "s390_setf4ret")
