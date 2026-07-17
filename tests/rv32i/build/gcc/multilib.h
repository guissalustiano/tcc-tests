static const char *const multilib_raw[] = {
". !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc !mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32i/ilp32 march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32im/ilp32 !march=rv32i !march=rv32ic march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32iac/ilp32 !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32imac/ilp32 !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32imafc/ilp32f !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc !mabi=ilp32 mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv64imac/lp64 !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc march=rv64imac !march=rv64imafdc !march=rv64gc !mabi=ilp32 !mabi=ilp32f mabi=lp64 !mabi=lp64d;",
"rv64imafdc/lp64d !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac march=rv64imafdc !march=rv64gc !mabi=ilp32 !mabi=ilp32f !mabi=lp64 mabi=lp64d;",
NULL
};

static const char *const multilib_reuse_raw[] = {
"rv32i/ilp32 !march=rv32i march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32im/ilp32 !march=rv32i !march=rv32ic !march=rv32im march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc mabi=ilp32 !mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32imafc/ilp32f !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc !mabi=ilp32 mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv32imafc/ilp32f !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc march=rv32gc !march=rv64imac !march=rv64imafdc !march=rv64gc !mabi=ilp32 mabi=ilp32f !mabi=lp64 !mabi=lp64d;",
"rv64imafdc/lp64d !march=rv32i !march=rv32ic !march=rv32im !march=rv32imc !march=rv32iac !march=rv32imac !march=rv32imafc !march=rv32imafdc !march=rv32gc !march=rv64imac !march=rv64imafdc march=rv64gc !mabi=ilp32 !mabi=ilp32f !mabi=lp64 mabi=lp64d;",
NULL
};

static const char *const multilib_matches_raw[] = {
"march=rv32i march=rv32i;",
"march=rv32ic march=rv32ic;",
"march=rv32im march=rv32im;",
"march=rv32imc march=rv32imc;",
"march=rv32iac march=rv32iac;",
"march=rv32imac march=rv32imac;",
"march=rv32imafc march=rv32imafc;",
"march=rv32imafdc march=rv32imafdc;",
"march=rv32gc march=rv32gc;",
"march=rv64imac march=rv64imac;",
"march=rv64imafdc march=rv64imafdc;",
"march=rv64gc march=rv64gc;",
"mabi=ilp32 mabi=ilp32;",
"mabi=ilp32f mabi=ilp32f;",
"mabi=lp64 mabi=lp64;",
"mabi=lp64d mabi=lp64d;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "march=rv32i/march=rv32ic/march=rv32im/march=rv32imc/march=rv32iac/march=rv32imac/march=rv32imafc/march=rv32imafdc/march=rv32gc/march=rv64imac/march=rv64imafdc/march=rv64gc mabi=ilp32/mabi=ilp32f/mabi=lp64/mabi=lp64d";
