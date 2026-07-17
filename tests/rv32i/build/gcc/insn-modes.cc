/* Generated automatically from machmode.def and config/riscv/riscv-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "OI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "HF",
  "BF",
  "SF",
  "DF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "COI",
  "BC",
  "HC",
  "SC",
  "DC",
  "TC",
  "RVVMF8BI",
  "RVVMF16BI",
  "RVVMF32BI",
  "RVVMF64BI",
  "V1BI",
  "V2BI",
  "V4BI",
  "V8BI",
  "RVVMF4BI",
  "V16BI",
  "RVVMF2BI",
  "V32BI",
  "RVVM1BI",
  "V64BI",
  "V128BI",
  "V256BI",
  "V512BI",
  "V1024BI",
  "V2048BI",
  "V4096BI",
  "RVVM1QI",
  "RVVM2QI",
  "RVVMF2QI",
  "RVVM1HI",
  "RVVM4QI",
  "RVVMF4QI",
  "RVVM2HI",
  "RVVMF2HI",
  "RVVM1SI",
  "RVVM8QI",
  "RVVMF8QI",
  "RVVM4HI",
  "RVVMF4HI",
  "RVVM2SI",
  "RVVMF2SI",
  "RVVM1DI",
  "RVVM8HI",
  "RVVM4SI",
  "RVVM2DI",
  "RVVM8SI",
  "RVVM4DI",
  "RVVM8DI",
  "V1QI",
  "RVVMF8x2QI",
  "RVVMF4x2QI",
  "RVVMF2x2QI",
  "RVVM1x2QI",
  "RVVM2x2QI",
  "RVVM4x2QI",
  "V2QI",
  "V1HI",
  "RVVMF8x3QI",
  "RVVMF4x3QI",
  "RVVMF2x3QI",
  "RVVM1x3QI",
  "RVVM2x3QI",
  "RVVMF8x4QI",
  "RVVMF4x4QI",
  "RVVMF2x4QI",
  "RVVM1x4QI",
  "RVVM2x4QI",
  "V4QI",
  "RVVMF4x2HI",
  "RVVMF2x2HI",
  "RVVM1x2HI",
  "RVVM2x2HI",
  "RVVM4x2HI",
  "V2HI",
  "V1SI",
  "RVVMF8x5QI",
  "RVVMF4x5QI",
  "RVVMF2x5QI",
  "RVVM1x5QI",
  "RVVMF8x6QI",
  "RVVMF4x6QI",
  "RVVMF2x6QI",
  "RVVM1x6QI",
  "RVVMF4x3HI",
  "RVVMF2x3HI",
  "RVVM1x3HI",
  "RVVM2x3HI",
  "RVVMF8x7QI",
  "RVVMF4x7QI",
  "RVVMF2x7QI",
  "RVVM1x7QI",
  "RVVMF8x8QI",
  "RVVMF4x8QI",
  "RVVMF2x8QI",
  "RVVM1x8QI",
  "V8QI",
  "RVVMF4x4HI",
  "RVVMF2x4HI",
  "RVVM1x4HI",
  "RVVM2x4HI",
  "V4HI",
  "RVVMF2x2SI",
  "RVVM1x2SI",
  "RVVM2x2SI",
  "RVVM4x2SI",
  "V2SI",
  "V1DI",
  "RVVMF4x5HI",
  "RVVMF2x5HI",
  "RVVM1x5HI",
  "RVVMF4x6HI",
  "RVVMF2x6HI",
  "RVVM1x6HI",
  "RVVMF2x3SI",
  "RVVM1x3SI",
  "RVVM2x3SI",
  "RVVMF4x7HI",
  "RVVMF2x7HI",
  "RVVM1x7HI",
  "V16QI",
  "RVVMF4x8HI",
  "RVVMF2x8HI",
  "RVVM1x8HI",
  "V8HI",
  "RVVMF2x4SI",
  "RVVM1x4SI",
  "RVVM2x4SI",
  "V4SI",
  "RVVM1x2DI",
  "RVVM2x2DI",
  "RVVM4x2DI",
  "V2DI",
  "RVVMF2x5SI",
  "RVVM1x5SI",
  "RVVMF2x6SI",
  "RVVM1x6SI",
  "RVVM1x3DI",
  "RVVM2x3DI",
  "RVVMF2x7SI",
  "RVVM1x7SI",
  "V32QI",
  "V16HI",
  "RVVMF2x8SI",
  "RVVM1x8SI",
  "V8SI",
  "RVVM1x4DI",
  "RVVM2x4DI",
  "V4DI",
  "RVVM1x5DI",
  "RVVM1x6DI",
  "RVVM1x7DI",
  "V64QI",
  "V32HI",
  "V16SI",
  "RVVM1x8DI",
  "V8DI",
  "V128QI",
  "V64HI",
  "V32SI",
  "V16DI",
  "V256QI",
  "V128HI",
  "V64SI",
  "V32DI",
  "V512QI",
  "V256HI",
  "V128SI",
  "V64DI",
  "V1024QI",
  "V512HI",
  "V256SI",
  "V128DI",
  "V2048QI",
  "V1024HI",
  "V512SI",
  "V256DI",
  "V4096QI",
  "V2048HI",
  "V1024SI",
  "V512DI",
  "RVVM1BF",
  "RVVM1HF",
  "RVVM2BF",
  "RVVM2HF",
  "RVVMF2BF",
  "RVVMF2HF",
  "RVVM1SF",
  "RVVM4BF",
  "RVVM4HF",
  "RVVMF4BF",
  "RVVMF4HF",
  "RVVM2SF",
  "RVVMF2SF",
  "RVVM1DF",
  "RVVM8BF",
  "RVVM8HF",
  "RVVM4SF",
  "RVVM2DF",
  "RVVM8SF",
  "RVVM4DF",
  "RVVM8DF",
  "V1HF",
  "V1BF",
  "RVVMF4x2BF",
  "RVVMF2x2BF",
  "RVVM1x2BF",
  "RVVMF4x2HF",
  "RVVMF2x2HF",
  "RVVM1x2HF",
  "RVVM2x2BF",
  "RVVM2x2HF",
  "RVVM4x2BF",
  "RVVM4x2HF",
  "V2HF",
  "V2BF",
  "V1SF",
  "RVVMF4x3BF",
  "RVVMF2x3BF",
  "RVVM1x3BF",
  "RVVMF4x3HF",
  "RVVMF2x3HF",
  "RVVM1x3HF",
  "RVVM2x3BF",
  "RVVM2x3HF",
  "RVVMF4x4BF",
  "RVVMF2x4BF",
  "RVVM1x4BF",
  "RVVMF4x4HF",
  "RVVMF2x4HF",
  "RVVM1x4HF",
  "RVVM2x4BF",
  "RVVM2x4HF",
  "V4HF",
  "V4BF",
  "RVVMF2x2SF",
  "RVVM1x2SF",
  "RVVM2x2SF",
  "RVVM4x2SF",
  "V2SF",
  "V1DF",
  "RVVMF4x5BF",
  "RVVMF2x5BF",
  "RVVM1x5BF",
  "RVVMF4x5HF",
  "RVVMF2x5HF",
  "RVVM1x5HF",
  "RVVMF4x6BF",
  "RVVMF2x6BF",
  "RVVM1x6BF",
  "RVVMF4x6HF",
  "RVVMF2x6HF",
  "RVVM1x6HF",
  "RVVMF2x3SF",
  "RVVM1x3SF",
  "RVVM2x3SF",
  "RVVMF4x7BF",
  "RVVMF2x7BF",
  "RVVM1x7BF",
  "RVVMF4x7HF",
  "RVVMF2x7HF",
  "RVVM1x7HF",
  "RVVMF4x8BF",
  "RVVMF2x8BF",
  "RVVM1x8BF",
  "RVVMF4x8HF",
  "RVVMF2x8HF",
  "RVVM1x8HF",
  "V8HF",
  "V8BF",
  "RVVMF2x4SF",
  "RVVM1x4SF",
  "RVVM2x4SF",
  "V4SF",
  "RVVM1x2DF",
  "RVVM2x2DF",
  "RVVM4x2DF",
  "V2DF",
  "RVVMF2x5SF",
  "RVVM1x5SF",
  "RVVMF2x6SF",
  "RVVM1x6SF",
  "RVVM1x3DF",
  "RVVM2x3DF",
  "RVVMF2x7SF",
  "RVVM1x7SF",
  "V16HF",
  "V16BF",
  "RVVMF2x8SF",
  "RVVM1x8SF",
  "V8SF",
  "RVVM1x4DF",
  "RVVM2x4DF",
  "V4DF",
  "RVVM1x5DF",
  "RVVM1x6DF",
  "RVVM1x7DF",
  "V32HF",
  "V32BF",
  "V16SF",
  "RVVM1x8DF",
  "V8DF",
  "V64HF",
  "V64BF",
  "V32SF",
  "V16DF",
  "V128HF",
  "V128BF",
  "V64SF",
  "V32DF",
  "V256HF",
  "V256BF",
  "V128SF",
  "V64DF",
  "V512HF",
  "V512BF",
  "V256SF",
  "V128DF",
  "V1024HF",
  "V1024BF",
  "V512SF",
  "V256DF",
  "V2048HF",
  "V2048BF",
  "V1024SF",
  "V512DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_INT,                /* OI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* HF */
  MODE_FLOAT,              /* BF */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_INT,        /* COI */
  MODE_COMPLEX_FLOAT,      /* BC */
  MODE_COMPLEX_FLOAT,      /* HC */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_BOOL,        /* RVVMF8BI */
  MODE_VECTOR_BOOL,        /* RVVMF16BI */
  MODE_VECTOR_BOOL,        /* RVVMF32BI */
  MODE_VECTOR_BOOL,        /* RVVMF64BI */
  MODE_VECTOR_BOOL,        /* V1BI */
  MODE_VECTOR_BOOL,        /* V2BI */
  MODE_VECTOR_BOOL,        /* V4BI */
  MODE_VECTOR_BOOL,        /* V8BI */
  MODE_VECTOR_BOOL,        /* RVVMF4BI */
  MODE_VECTOR_BOOL,        /* V16BI */
  MODE_VECTOR_BOOL,        /* RVVMF2BI */
  MODE_VECTOR_BOOL,        /* V32BI */
  MODE_VECTOR_BOOL,        /* RVVM1BI */
  MODE_VECTOR_BOOL,        /* V64BI */
  MODE_VECTOR_BOOL,        /* V128BI */
  MODE_VECTOR_BOOL,        /* V256BI */
  MODE_VECTOR_BOOL,        /* V512BI */
  MODE_VECTOR_BOOL,        /* V1024BI */
  MODE_VECTOR_BOOL,        /* V2048BI */
  MODE_VECTOR_BOOL,        /* V4096BI */
  MODE_VECTOR_INT,         /* RVVM1QI */
  MODE_VECTOR_INT,         /* RVVM2QI */
  MODE_VECTOR_INT,         /* RVVMF2QI */
  MODE_VECTOR_INT,         /* RVVM1HI */
  MODE_VECTOR_INT,         /* RVVM4QI */
  MODE_VECTOR_INT,         /* RVVMF4QI */
  MODE_VECTOR_INT,         /* RVVM2HI */
  MODE_VECTOR_INT,         /* RVVMF2HI */
  MODE_VECTOR_INT,         /* RVVM1SI */
  MODE_VECTOR_INT,         /* RVVM8QI */
  MODE_VECTOR_INT,         /* RVVMF8QI */
  MODE_VECTOR_INT,         /* RVVM4HI */
  MODE_VECTOR_INT,         /* RVVMF4HI */
  MODE_VECTOR_INT,         /* RVVM2SI */
  MODE_VECTOR_INT,         /* RVVMF2SI */
  MODE_VECTOR_INT,         /* RVVM1DI */
  MODE_VECTOR_INT,         /* RVVM8HI */
  MODE_VECTOR_INT,         /* RVVM4SI */
  MODE_VECTOR_INT,         /* RVVM2DI */
  MODE_VECTOR_INT,         /* RVVM8SI */
  MODE_VECTOR_INT,         /* RVVM4DI */
  MODE_VECTOR_INT,         /* RVVM8DI */
  MODE_VECTOR_INT,         /* V1QI */
  MODE_VECTOR_INT,         /* RVVMF8x2QI */
  MODE_VECTOR_INT,         /* RVVMF4x2QI */
  MODE_VECTOR_INT,         /* RVVMF2x2QI */
  MODE_VECTOR_INT,         /* RVVM1x2QI */
  MODE_VECTOR_INT,         /* RVVM2x2QI */
  MODE_VECTOR_INT,         /* RVVM4x2QI */
  MODE_VECTOR_INT,         /* V2QI */
  MODE_VECTOR_INT,         /* V1HI */
  MODE_VECTOR_INT,         /* RVVMF8x3QI */
  MODE_VECTOR_INT,         /* RVVMF4x3QI */
  MODE_VECTOR_INT,         /* RVVMF2x3QI */
  MODE_VECTOR_INT,         /* RVVM1x3QI */
  MODE_VECTOR_INT,         /* RVVM2x3QI */
  MODE_VECTOR_INT,         /* RVVMF8x4QI */
  MODE_VECTOR_INT,         /* RVVMF4x4QI */
  MODE_VECTOR_INT,         /* RVVMF2x4QI */
  MODE_VECTOR_INT,         /* RVVM1x4QI */
  MODE_VECTOR_INT,         /* RVVM2x4QI */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* RVVMF4x2HI */
  MODE_VECTOR_INT,         /* RVVMF2x2HI */
  MODE_VECTOR_INT,         /* RVVM1x2HI */
  MODE_VECTOR_INT,         /* RVVM2x2HI */
  MODE_VECTOR_INT,         /* RVVM4x2HI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V1SI */
  MODE_VECTOR_INT,         /* RVVMF8x5QI */
  MODE_VECTOR_INT,         /* RVVMF4x5QI */
  MODE_VECTOR_INT,         /* RVVMF2x5QI */
  MODE_VECTOR_INT,         /* RVVM1x5QI */
  MODE_VECTOR_INT,         /* RVVMF8x6QI */
  MODE_VECTOR_INT,         /* RVVMF4x6QI */
  MODE_VECTOR_INT,         /* RVVMF2x6QI */
  MODE_VECTOR_INT,         /* RVVM1x6QI */
  MODE_VECTOR_INT,         /* RVVMF4x3HI */
  MODE_VECTOR_INT,         /* RVVMF2x3HI */
  MODE_VECTOR_INT,         /* RVVM1x3HI */
  MODE_VECTOR_INT,         /* RVVM2x3HI */
  MODE_VECTOR_INT,         /* RVVMF8x7QI */
  MODE_VECTOR_INT,         /* RVVMF4x7QI */
  MODE_VECTOR_INT,         /* RVVMF2x7QI */
  MODE_VECTOR_INT,         /* RVVM1x7QI */
  MODE_VECTOR_INT,         /* RVVMF8x8QI */
  MODE_VECTOR_INT,         /* RVVMF4x8QI */
  MODE_VECTOR_INT,         /* RVVMF2x8QI */
  MODE_VECTOR_INT,         /* RVVM1x8QI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* RVVMF4x4HI */
  MODE_VECTOR_INT,         /* RVVMF2x4HI */
  MODE_VECTOR_INT,         /* RVVM1x4HI */
  MODE_VECTOR_INT,         /* RVVM2x4HI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* RVVMF2x2SI */
  MODE_VECTOR_INT,         /* RVVM1x2SI */
  MODE_VECTOR_INT,         /* RVVM2x2SI */
  MODE_VECTOR_INT,         /* RVVM4x2SI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* RVVMF4x5HI */
  MODE_VECTOR_INT,         /* RVVMF2x5HI */
  MODE_VECTOR_INT,         /* RVVM1x5HI */
  MODE_VECTOR_INT,         /* RVVMF4x6HI */
  MODE_VECTOR_INT,         /* RVVMF2x6HI */
  MODE_VECTOR_INT,         /* RVVM1x6HI */
  MODE_VECTOR_INT,         /* RVVMF2x3SI */
  MODE_VECTOR_INT,         /* RVVM1x3SI */
  MODE_VECTOR_INT,         /* RVVM2x3SI */
  MODE_VECTOR_INT,         /* RVVMF4x7HI */
  MODE_VECTOR_INT,         /* RVVMF2x7HI */
  MODE_VECTOR_INT,         /* RVVM1x7HI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* RVVMF4x8HI */
  MODE_VECTOR_INT,         /* RVVMF2x8HI */
  MODE_VECTOR_INT,         /* RVVM1x8HI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* RVVMF2x4SI */
  MODE_VECTOR_INT,         /* RVVM1x4SI */
  MODE_VECTOR_INT,         /* RVVM2x4SI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* RVVM1x2DI */
  MODE_VECTOR_INT,         /* RVVM2x2DI */
  MODE_VECTOR_INT,         /* RVVM4x2DI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* RVVMF2x5SI */
  MODE_VECTOR_INT,         /* RVVM1x5SI */
  MODE_VECTOR_INT,         /* RVVMF2x6SI */
  MODE_VECTOR_INT,         /* RVVM1x6SI */
  MODE_VECTOR_INT,         /* RVVM1x3DI */
  MODE_VECTOR_INT,         /* RVVM2x3DI */
  MODE_VECTOR_INT,         /* RVVMF2x7SI */
  MODE_VECTOR_INT,         /* RVVM1x7SI */
  MODE_VECTOR_INT,         /* V32QI */
  MODE_VECTOR_INT,         /* V16HI */
  MODE_VECTOR_INT,         /* RVVMF2x8SI */
  MODE_VECTOR_INT,         /* RVVM1x8SI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* RVVM1x4DI */
  MODE_VECTOR_INT,         /* RVVM2x4DI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_INT,         /* RVVM1x5DI */
  MODE_VECTOR_INT,         /* RVVM1x6DI */
  MODE_VECTOR_INT,         /* RVVM1x7DI */
  MODE_VECTOR_INT,         /* V64QI */
  MODE_VECTOR_INT,         /* V32HI */
  MODE_VECTOR_INT,         /* V16SI */
  MODE_VECTOR_INT,         /* RVVM1x8DI */
  MODE_VECTOR_INT,         /* V8DI */
  MODE_VECTOR_INT,         /* V128QI */
  MODE_VECTOR_INT,         /* V64HI */
  MODE_VECTOR_INT,         /* V32SI */
  MODE_VECTOR_INT,         /* V16DI */
  MODE_VECTOR_INT,         /* V256QI */
  MODE_VECTOR_INT,         /* V128HI */
  MODE_VECTOR_INT,         /* V64SI */
  MODE_VECTOR_INT,         /* V32DI */
  MODE_VECTOR_INT,         /* V512QI */
  MODE_VECTOR_INT,         /* V256HI */
  MODE_VECTOR_INT,         /* V128SI */
  MODE_VECTOR_INT,         /* V64DI */
  MODE_VECTOR_INT,         /* V1024QI */
  MODE_VECTOR_INT,         /* V512HI */
  MODE_VECTOR_INT,         /* V256SI */
  MODE_VECTOR_INT,         /* V128DI */
  MODE_VECTOR_INT,         /* V2048QI */
  MODE_VECTOR_INT,         /* V1024HI */
  MODE_VECTOR_INT,         /* V512SI */
  MODE_VECTOR_INT,         /* V256DI */
  MODE_VECTOR_INT,         /* V4096QI */
  MODE_VECTOR_INT,         /* V2048HI */
  MODE_VECTOR_INT,         /* V1024SI */
  MODE_VECTOR_INT,         /* V512DI */
  MODE_VECTOR_FLOAT,       /* RVVM1BF */
  MODE_VECTOR_FLOAT,       /* RVVM1HF */
  MODE_VECTOR_FLOAT,       /* RVVM2BF */
  MODE_VECTOR_FLOAT,       /* RVVM2HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2HF */
  MODE_VECTOR_FLOAT,       /* RVVM1SF */
  MODE_VECTOR_FLOAT,       /* RVVM4BF */
  MODE_VECTOR_FLOAT,       /* RVVM4HF */
  MODE_VECTOR_FLOAT,       /* RVVMF4BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4HF */
  MODE_VECTOR_FLOAT,       /* RVVM2SF */
  MODE_VECTOR_FLOAT,       /* RVVMF2SF */
  MODE_VECTOR_FLOAT,       /* RVVM1DF */
  MODE_VECTOR_FLOAT,       /* RVVM8BF */
  MODE_VECTOR_FLOAT,       /* RVVM8HF */
  MODE_VECTOR_FLOAT,       /* RVVM4SF */
  MODE_VECTOR_FLOAT,       /* RVVM2DF */
  MODE_VECTOR_FLOAT,       /* RVVM8SF */
  MODE_VECTOR_FLOAT,       /* RVVM4DF */
  MODE_VECTOR_FLOAT,       /* RVVM8DF */
  MODE_VECTOR_FLOAT,       /* V1HF */
  MODE_VECTOR_FLOAT,       /* V1BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x2BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x2BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x2BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x2HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x2HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x2HF */
  MODE_VECTOR_FLOAT,       /* RVVM2x2BF */
  MODE_VECTOR_FLOAT,       /* RVVM2x2HF */
  MODE_VECTOR_FLOAT,       /* RVVM4x2BF */
  MODE_VECTOR_FLOAT,       /* RVVM4x2HF */
  MODE_VECTOR_FLOAT,       /* V2HF */
  MODE_VECTOR_FLOAT,       /* V2BF */
  MODE_VECTOR_FLOAT,       /* V1SF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x3BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x3BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x3BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x3HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x3HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x3HF */
  MODE_VECTOR_FLOAT,       /* RVVM2x3BF */
  MODE_VECTOR_FLOAT,       /* RVVM2x3HF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x4BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x4BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x4BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x4HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x4HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x4HF */
  MODE_VECTOR_FLOAT,       /* RVVM2x4BF */
  MODE_VECTOR_FLOAT,       /* RVVM2x4HF */
  MODE_VECTOR_FLOAT,       /* V4HF */
  MODE_VECTOR_FLOAT,       /* V4BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x2SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x2SF */
  MODE_VECTOR_FLOAT,       /* RVVM2x2SF */
  MODE_VECTOR_FLOAT,       /* RVVM4x2SF */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V1DF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x5BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x5BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x5BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x5HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x5HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x5HF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x6BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x6BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x6BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x6HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x6HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x6HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x3SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x3SF */
  MODE_VECTOR_FLOAT,       /* RVVM2x3SF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x7BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x7BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x7BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x7HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x7HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x7HF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x8BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x8BF */
  MODE_VECTOR_FLOAT,       /* RVVM1x8BF */
  MODE_VECTOR_FLOAT,       /* RVVMF4x8HF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x8HF */
  MODE_VECTOR_FLOAT,       /* RVVM1x8HF */
  MODE_VECTOR_FLOAT,       /* V8HF */
  MODE_VECTOR_FLOAT,       /* V8BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x4SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x4SF */
  MODE_VECTOR_FLOAT,       /* RVVM2x4SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x2DF */
  MODE_VECTOR_FLOAT,       /* RVVM2x2DF */
  MODE_VECTOR_FLOAT,       /* RVVM4x2DF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x5SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x5SF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x6SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x6SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x3DF */
  MODE_VECTOR_FLOAT,       /* RVVM2x3DF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x7SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x7SF */
  MODE_VECTOR_FLOAT,       /* V16HF */
  MODE_VECTOR_FLOAT,       /* V16BF */
  MODE_VECTOR_FLOAT,       /* RVVMF2x8SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x8SF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x4DF */
  MODE_VECTOR_FLOAT,       /* RVVM2x4DF */
  MODE_VECTOR_FLOAT,       /* V4DF */
  MODE_VECTOR_FLOAT,       /* RVVM1x5DF */
  MODE_VECTOR_FLOAT,       /* RVVM1x6DF */
  MODE_VECTOR_FLOAT,       /* RVVM1x7DF */
  MODE_VECTOR_FLOAT,       /* V32HF */
  MODE_VECTOR_FLOAT,       /* V32BF */
  MODE_VECTOR_FLOAT,       /* V16SF */
  MODE_VECTOR_FLOAT,       /* RVVM1x8DF */
  MODE_VECTOR_FLOAT,       /* V8DF */
  MODE_VECTOR_FLOAT,       /* V64HF */
  MODE_VECTOR_FLOAT,       /* V64BF */
  MODE_VECTOR_FLOAT,       /* V32SF */
  MODE_VECTOR_FLOAT,       /* V16DF */
  MODE_VECTOR_FLOAT,       /* V128HF */
  MODE_VECTOR_FLOAT,       /* V128BF */
  MODE_VECTOR_FLOAT,       /* V64SF */
  MODE_VECTOR_FLOAT,       /* V32DF */
  MODE_VECTOR_FLOAT,       /* V256HF */
  MODE_VECTOR_FLOAT,       /* V256BF */
  MODE_VECTOR_FLOAT,       /* V128SF */
  MODE_VECTOR_FLOAT,       /* V64DF */
  MODE_VECTOR_FLOAT,       /* V512HF */
  MODE_VECTOR_FLOAT,       /* V512BF */
  MODE_VECTOR_FLOAT,       /* V256SF */
  MODE_VECTOR_FLOAT,       /* V128DF */
  MODE_VECTOR_FLOAT,       /* V1024HF */
  MODE_VECTOR_FLOAT,       /* V1024BF */
  MODE_VECTOR_FLOAT,       /* V512SF */
  MODE_VECTOR_FLOAT,       /* V256DF */
  MODE_VECTOR_FLOAT,       /* V2048HF */
  MODE_VECTOR_FLOAT,       /* V2048BF */
  MODE_VECTOR_FLOAT,       /* V1024SF */
  MODE_VECTOR_FLOAT,       /* V512DF */
};

poly_uint16 mode_precision[NUM_MACHINE_MODES] = 
{
  { 0, 0 },                /* VOID */
  { 0, 0 },                /* BLK */
  { 4 * BITS_PER_UNIT, 0 },/* CC */
  { 1, 0 },                /* BI */
  { 1 * BITS_PER_UNIT, 0 },/* QI */
  { 2 * BITS_PER_UNIT, 0 },/* HI */
  { 4 * BITS_PER_UNIT, 0 },/* SI */
  { 8 * BITS_PER_UNIT, 0 },/* DI */
  { 16 * BITS_PER_UNIT, 0 }, /* TI */
  { 32 * BITS_PER_UNIT, 0 }, /* OI */
  { 1 * BITS_PER_UNIT, 0 },/* QQ */
  { 2 * BITS_PER_UNIT, 0 },/* HQ */
  { 4 * BITS_PER_UNIT, 0 },/* SQ */
  { 8 * BITS_PER_UNIT, 0 },/* DQ */
  { 16 * BITS_PER_UNIT, 0 }, /* TQ */
  { 1 * BITS_PER_UNIT, 0 },/* UQQ */
  { 2 * BITS_PER_UNIT, 0 },/* UHQ */
  { 4 * BITS_PER_UNIT, 0 },/* USQ */
  { 8 * BITS_PER_UNIT, 0 },/* UDQ */
  { 16 * BITS_PER_UNIT, 0 }, /* UTQ */
  { 2 * BITS_PER_UNIT, 0 },/* HA */
  { 4 * BITS_PER_UNIT, 0 },/* SA */
  { 8 * BITS_PER_UNIT, 0 },/* DA */
  { 16 * BITS_PER_UNIT, 0 }, /* TA */
  { 2 * BITS_PER_UNIT, 0 },/* UHA */
  { 4 * BITS_PER_UNIT, 0 },/* USA */
  { 8 * BITS_PER_UNIT, 0 },/* UDA */
  { 16 * BITS_PER_UNIT, 0 }, /* UTA */
  { 2 * BITS_PER_UNIT, 0 },/* HF */
  { 2 * BITS_PER_UNIT, 0 },/* BF */
  { 4 * BITS_PER_UNIT, 0 },/* SF */
  { 8 * BITS_PER_UNIT, 0 },/* DF */
  { 16 * BITS_PER_UNIT, 0 }, /* TF */
  { 4 * BITS_PER_UNIT, 0 },/* SD */
  { 8 * BITS_PER_UNIT, 0 },/* DD */
  { 16 * BITS_PER_UNIT, 0 }, /* TD */
  { 2 * BITS_PER_UNIT, 0 },/* CQI */
  { 4 * BITS_PER_UNIT, 0 },/* CHI */
  { 8 * BITS_PER_UNIT, 0 },/* CSI */
  { 16 * BITS_PER_UNIT, 0 }, /* CDI */
  { 32 * BITS_PER_UNIT, 0 }, /* CTI */
  { 64 * BITS_PER_UNIT, 0 }, /* COI */
  { 4 * BITS_PER_UNIT, 0 },/* BC */
  { 4 * BITS_PER_UNIT, 0 },/* HC */
  { 8 * BITS_PER_UNIT, 0 },/* SC */
  { 16 * BITS_PER_UNIT, 0 }, /* DC */
  { 32 * BITS_PER_UNIT, 0 }, /* TC */
  { 1 * BITS_PER_UNIT, 0 },/* RVVMF8BI */
  { 1 * BITS_PER_UNIT, 0 },/* RVVMF16BI */
  { 1 * BITS_PER_UNIT, 0 },/* RVVMF32BI */
  { 1 * BITS_PER_UNIT, 0 },/* RVVMF64BI */
  { 1 * BITS_PER_UNIT, 0 },/* V1BI */
  { 1 * BITS_PER_UNIT, 0 },/* V2BI */
  { 1 * BITS_PER_UNIT, 0 },/* V4BI */
  { 1 * BITS_PER_UNIT, 0 },/* V8BI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVMF4BI */
  { 2 * BITS_PER_UNIT, 0 },/* V16BI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2BI */
  { 4 * BITS_PER_UNIT, 0 },/* V32BI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1BI */
  { 8 * BITS_PER_UNIT, 0 },/* V64BI */
  { 16 * BITS_PER_UNIT, 0 }, /* V128BI */
  { 32 * BITS_PER_UNIT, 0 }, /* V256BI */
  { 64 * BITS_PER_UNIT, 0 }, /* V512BI */
  { 128 * BITS_PER_UNIT, 0 },  /* V1024BI */
  { 256 * BITS_PER_UNIT, 0 },  /* V2048BI */
  { 512 * BITS_PER_UNIT, 0 },  /* V4096BI */
  { 1 * BITS_PER_UNIT, 0 },/* RVVM1QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVMF2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM1HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1DI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM8HI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM4SI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2DI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM8SI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM4DI */
  { 64 * BITS_PER_UNIT, 0 }, /* RVVM8DI */
  { 1 * BITS_PER_UNIT, 0 },/* V1QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVMF8x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVMF4x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVMF2x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM1x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM2x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM4x2QI */
  { 2 * BITS_PER_UNIT, 0 },/* V2QI */
  { 2 * BITS_PER_UNIT, 0 },/* V1HI */
  { 3 * BITS_PER_UNIT, 0 },/* RVVMF8x3QI */
  { 3 * BITS_PER_UNIT, 0 },/* RVVMF4x3QI */
  { 3 * BITS_PER_UNIT, 0 },/* RVVMF2x3QI */
  { 3 * BITS_PER_UNIT, 0 },/* RVVM1x3QI */
  { 3 * BITS_PER_UNIT, 0 },/* RVVM2x3QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF8x4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF4x4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2x4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1x4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2x4QI */
  { 4 * BITS_PER_UNIT, 0 },/* V4QI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF4x2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2x2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1x2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2x2HI */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM4x2HI */
  { 4 * BITS_PER_UNIT, 0 },/* V2HI */
  { 4 * BITS_PER_UNIT, 0 },/* V1SI */
  { 5 * BITS_PER_UNIT, 0 },/* RVVMF8x5QI */
  { 5 * BITS_PER_UNIT, 0 },/* RVVMF4x5QI */
  { 5 * BITS_PER_UNIT, 0 },/* RVVMF2x5QI */
  { 5 * BITS_PER_UNIT, 0 },/* RVVM1x5QI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF8x6QI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF4x6QI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF2x6QI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM1x6QI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF4x3HI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF2x3HI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM1x3HI */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM2x3HI */
  { 7 * BITS_PER_UNIT, 0 },/* RVVMF8x7QI */
  { 7 * BITS_PER_UNIT, 0 },/* RVVMF4x7QI */
  { 7 * BITS_PER_UNIT, 0 },/* RVVMF2x7QI */
  { 7 * BITS_PER_UNIT, 0 },/* RVVM1x7QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF8x8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4x8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x8QI */
  { 8 * BITS_PER_UNIT, 0 },/* V8QI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4x4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2x4HI */
  { 8 * BITS_PER_UNIT, 0 },/* V4HI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x2SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x2SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2x2SI */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM4x2SI */
  { 8 * BITS_PER_UNIT, 0 },/* V2SI */
  { 8 * BITS_PER_UNIT, 0 },/* V1DI */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF4x5HI */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF2x5HI */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVM1x5HI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF4x6HI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF2x6HI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM1x6HI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF2x3SI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM1x3SI */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM2x3SI */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF4x7HI */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF2x7HI */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVM1x7HI */
  { 16 * BITS_PER_UNIT, 0 }, /* V16QI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF4x8HI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF2x8HI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x8HI */
  { 16 * BITS_PER_UNIT, 0 }, /* V8HI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF2x4SI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x4SI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2x4SI */
  { 16 * BITS_PER_UNIT, 0 }, /* V4SI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x2DI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2x2DI */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM4x2DI */
  { 16 * BITS_PER_UNIT, 0 }, /* V2DI */
  { 20 * BITS_PER_UNIT, 0 }, /* RVVMF2x5SI */
  { 20 * BITS_PER_UNIT, 0 }, /* RVVM1x5SI */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVMF2x6SI */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM1x6SI */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM1x3DI */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM2x3DI */
  { 28 * BITS_PER_UNIT, 0 }, /* RVVMF2x7SI */
  { 28 * BITS_PER_UNIT, 0 }, /* RVVM1x7SI */
  { 32 * BITS_PER_UNIT, 0 }, /* V32QI */
  { 32 * BITS_PER_UNIT, 0 }, /* V16HI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVMF2x8SI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM1x8SI */
  { 32 * BITS_PER_UNIT, 0 }, /* V8SI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM1x4DI */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM2x4DI */
  { 32 * BITS_PER_UNIT, 0 }, /* V4DI */
  { 40 * BITS_PER_UNIT, 0 }, /* RVVM1x5DI */
  { 48 * BITS_PER_UNIT, 0 }, /* RVVM1x6DI */
  { 56 * BITS_PER_UNIT, 0 }, /* RVVM1x7DI */
  { 64 * BITS_PER_UNIT, 0 }, /* V64QI */
  { 64 * BITS_PER_UNIT, 0 }, /* V32HI */
  { 64 * BITS_PER_UNIT, 0 }, /* V16SI */
  { 64 * BITS_PER_UNIT, 0 }, /* RVVM1x8DI */
  { 64 * BITS_PER_UNIT, 0 }, /* V8DI */
  { 128 * BITS_PER_UNIT, 0 },  /* V128QI */
  { 128 * BITS_PER_UNIT, 0 },  /* V64HI */
  { 128 * BITS_PER_UNIT, 0 },  /* V32SI */
  { 128 * BITS_PER_UNIT, 0 },  /* V16DI */
  { 256 * BITS_PER_UNIT, 0 },  /* V256QI */
  { 256 * BITS_PER_UNIT, 0 },  /* V128HI */
  { 256 * BITS_PER_UNIT, 0 },  /* V64SI */
  { 256 * BITS_PER_UNIT, 0 },  /* V32DI */
  { 512 * BITS_PER_UNIT, 0 },  /* V512QI */
  { 512 * BITS_PER_UNIT, 0 },  /* V256HI */
  { 512 * BITS_PER_UNIT, 0 },  /* V128SI */
  { 512 * BITS_PER_UNIT, 0 },  /* V64DI */
  { 1024 * BITS_PER_UNIT, 0 },   /* V1024QI */
  { 1024 * BITS_PER_UNIT, 0 },   /* V512HI */
  { 1024 * BITS_PER_UNIT, 0 },   /* V256SI */
  { 1024 * BITS_PER_UNIT, 0 },   /* V128DI */
  { 2048 * BITS_PER_UNIT, 0 },   /* V2048QI */
  { 2048 * BITS_PER_UNIT, 0 },   /* V1024HI */
  { 2048 * BITS_PER_UNIT, 0 },   /* V512SI */
  { 2048 * BITS_PER_UNIT, 0 },   /* V256DI */
  { 4096 * BITS_PER_UNIT, 0 },   /* V4096QI */
  { 4096 * BITS_PER_UNIT, 0 },   /* V2048HI */
  { 4096 * BITS_PER_UNIT, 0 },   /* V1024SI */
  { 4096 * BITS_PER_UNIT, 0 },   /* V512DI */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM1BF */
  { 2 * BITS_PER_UNIT, 0 },/* RVVM1HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM4HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1DF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM8BF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM8HF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM4SF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2DF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM8SF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM4DF */
  { 64 * BITS_PER_UNIT, 0 }, /* RVVM8DF */
  { 2 * BITS_PER_UNIT, 0 },/* V1HF */
  { 2 * BITS_PER_UNIT, 0 },/* V1BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF4x2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2x2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1x2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF4x2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVMF2x2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM1x2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2x2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM2x2HF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM4x2BF */
  { 4 * BITS_PER_UNIT, 0 },/* RVVM4x2HF */
  { 4 * BITS_PER_UNIT, 0 },/* V2HF */
  { 4 * BITS_PER_UNIT, 0 },/* V2BF */
  { 4 * BITS_PER_UNIT, 0 },/* V1SF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF4x3BF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF2x3BF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM1x3BF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF4x3HF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVMF2x3HF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM1x3HF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM2x3BF */
  { 6 * BITS_PER_UNIT, 0 },/* RVVM2x3HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4x4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF4x4HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x4HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x4HF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2x4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2x4HF */
  { 8 * BITS_PER_UNIT, 0 },/* V4HF */
  { 8 * BITS_PER_UNIT, 0 },/* V4BF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVMF2x2SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM1x2SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM2x2SF */
  { 8 * BITS_PER_UNIT, 0 },/* RVVM4x2SF */
  { 8 * BITS_PER_UNIT, 0 },/* V2SF */
  { 8 * BITS_PER_UNIT, 0 },/* V1DF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF4x5BF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF2x5BF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVM1x5BF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF4x5HF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVMF2x5HF */
  { 10 * BITS_PER_UNIT, 0 }, /* RVVM1x5HF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF4x6BF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF2x6BF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM1x6BF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF4x6HF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF2x6HF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM1x6HF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVMF2x3SF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM1x3SF */
  { 12 * BITS_PER_UNIT, 0 }, /* RVVM2x3SF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF4x7BF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF2x7BF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVM1x7BF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF4x7HF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVMF2x7HF */
  { 14 * BITS_PER_UNIT, 0 }, /* RVVM1x7HF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF4x8BF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF2x8BF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x8BF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF4x8HF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF2x8HF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x8HF */
  { 16 * BITS_PER_UNIT, 0 }, /* V8HF */
  { 16 * BITS_PER_UNIT, 0 }, /* V8BF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVMF2x4SF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x4SF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2x4SF */
  { 16 * BITS_PER_UNIT, 0 }, /* V4SF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM1x2DF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM2x2DF */
  { 16 * BITS_PER_UNIT, 0 }, /* RVVM4x2DF */
  { 16 * BITS_PER_UNIT, 0 }, /* V2DF */
  { 20 * BITS_PER_UNIT, 0 }, /* RVVMF2x5SF */
  { 20 * BITS_PER_UNIT, 0 }, /* RVVM1x5SF */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVMF2x6SF */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM1x6SF */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM1x3DF */
  { 24 * BITS_PER_UNIT, 0 }, /* RVVM2x3DF */
  { 28 * BITS_PER_UNIT, 0 }, /* RVVMF2x7SF */
  { 28 * BITS_PER_UNIT, 0 }, /* RVVM1x7SF */
  { 32 * BITS_PER_UNIT, 0 }, /* V16HF */
  { 32 * BITS_PER_UNIT, 0 }, /* V16BF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVMF2x8SF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM1x8SF */
  { 32 * BITS_PER_UNIT, 0 }, /* V8SF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM1x4DF */
  { 32 * BITS_PER_UNIT, 0 }, /* RVVM2x4DF */
  { 32 * BITS_PER_UNIT, 0 }, /* V4DF */
  { 40 * BITS_PER_UNIT, 0 }, /* RVVM1x5DF */
  { 48 * BITS_PER_UNIT, 0 }, /* RVVM1x6DF */
  { 56 * BITS_PER_UNIT, 0 }, /* RVVM1x7DF */
  { 64 * BITS_PER_UNIT, 0 }, /* V32HF */
  { 64 * BITS_PER_UNIT, 0 }, /* V32BF */
  { 64 * BITS_PER_UNIT, 0 }, /* V16SF */
  { 64 * BITS_PER_UNIT, 0 }, /* RVVM1x8DF */
  { 64 * BITS_PER_UNIT, 0 }, /* V8DF */
  { 128 * BITS_PER_UNIT, 0 },  /* V64HF */
  { 128 * BITS_PER_UNIT, 0 },  /* V64BF */
  { 128 * BITS_PER_UNIT, 0 },  /* V32SF */
  { 128 * BITS_PER_UNIT, 0 },  /* V16DF */
  { 256 * BITS_PER_UNIT, 0 },  /* V128HF */
  { 256 * BITS_PER_UNIT, 0 },  /* V128BF */
  { 256 * BITS_PER_UNIT, 0 },  /* V64SF */
  { 256 * BITS_PER_UNIT, 0 },  /* V32DF */
  { 512 * BITS_PER_UNIT, 0 },  /* V256HF */
  { 512 * BITS_PER_UNIT, 0 },  /* V256BF */
  { 512 * BITS_PER_UNIT, 0 },  /* V128SF */
  { 512 * BITS_PER_UNIT, 0 },  /* V64DF */
  { 1024 * BITS_PER_UNIT, 0 },   /* V512HF */
  { 1024 * BITS_PER_UNIT, 0 },   /* V512BF */
  { 1024 * BITS_PER_UNIT, 0 },   /* V256SF */
  { 1024 * BITS_PER_UNIT, 0 },   /* V128DF */
  { 2048 * BITS_PER_UNIT, 0 },   /* V1024HF */
  { 2048 * BITS_PER_UNIT, 0 },   /* V1024BF */
  { 2048 * BITS_PER_UNIT, 0 },   /* V512SF */
  { 2048 * BITS_PER_UNIT, 0 },   /* V256DF */
  { 4096 * BITS_PER_UNIT, 0 },   /* V2048HF */
  { 4096 * BITS_PER_UNIT, 0 },   /* V2048BF */
  { 4096 * BITS_PER_UNIT, 0 },   /* V1024SF */
  { 4096 * BITS_PER_UNIT, 0 },   /* V512DF */
};

poly_uint16 mode_size[NUM_MACHINE_MODES] = 
{
  { 0, 0 },                /* VOID */
  { 0, 0 },                /* BLK */
  { 4, 0 },                /* CC */
  { 1, 0 },                /* BI */
  { 1, 0 },                /* QI */
  { 2, 0 },                /* HI */
  { 4, 0 },                /* SI */
  { 8, 0 },                /* DI */
  { 16, 0 },               /* TI */
  { 32, 0 },               /* OI */
  { 1, 0 },                /* QQ */
  { 2, 0 },                /* HQ */
  { 4, 0 },                /* SQ */
  { 8, 0 },                /* DQ */
  { 16, 0 },               /* TQ */
  { 1, 0 },                /* UQQ */
  { 2, 0 },                /* UHQ */
  { 4, 0 },                /* USQ */
  { 8, 0 },                /* UDQ */
  { 16, 0 },               /* UTQ */
  { 2, 0 },                /* HA */
  { 4, 0 },                /* SA */
  { 8, 0 },                /* DA */
  { 16, 0 },               /* TA */
  { 2, 0 },                /* UHA */
  { 4, 0 },                /* USA */
  { 8, 0 },                /* UDA */
  { 16, 0 },               /* UTA */
  { 2, 0 },                /* HF */
  { 2, 0 },                /* BF */
  { 4, 0 },                /* SF */
  { 8, 0 },                /* DF */
  { 16, 0 },               /* TF */
  { 4, 0 },                /* SD */
  { 8, 0 },                /* DD */
  { 16, 0 },               /* TD */
  { 2, 0 },                /* CQI */
  { 4, 0 },                /* CHI */
  { 8, 0 },                /* CSI */
  { 16, 0 },               /* CDI */
  { 32, 0 },               /* CTI */
  { 64, 0 },               /* COI */
  { 4, 0 },                /* BC */
  { 4, 0 },                /* HC */
  { 8, 0 },                /* SC */
  { 16, 0 },               /* DC */
  { 32, 0 },               /* TC */
  { 1, 0 },                /* RVVMF8BI */
  { 1, 0 },                /* RVVMF16BI */
  { 1, 0 },                /* RVVMF32BI */
  { 1, 0 },                /* RVVMF64BI */
  { 1, 0 },                /* V1BI */
  { 1, 0 },                /* V2BI */
  { 1, 0 },                /* V4BI */
  { 1, 0 },                /* V8BI */
  { 2, 0 },                /* RVVMF4BI */
  { 2, 0 },                /* V16BI */
  { 4, 0 },                /* RVVMF2BI */
  { 4, 0 },                /* V32BI */
  { 8, 0 },                /* RVVM1BI */
  { 8, 0 },                /* V64BI */
  { 16, 0 },               /* V128BI */
  { 32, 0 },               /* V256BI */
  { 64, 0 },               /* V512BI */
  { 128, 0 },              /* V1024BI */
  { 256, 0 },              /* V2048BI */
  { 512, 0 },              /* V4096BI */
  { 1, 0 },                /* RVVM1QI */
  { 2, 0 },                /* RVVM2QI */
  { 2, 0 },                /* RVVMF2QI */
  { 2, 0 },                /* RVVM1HI */
  { 4, 0 },                /* RVVM4QI */
  { 4, 0 },                /* RVVMF4QI */
  { 4, 0 },                /* RVVM2HI */
  { 4, 0 },                /* RVVMF2HI */
  { 4, 0 },                /* RVVM1SI */
  { 8, 0 },                /* RVVM8QI */
  { 8, 0 },                /* RVVMF8QI */
  { 8, 0 },                /* RVVM4HI */
  { 8, 0 },                /* RVVMF4HI */
  { 8, 0 },                /* RVVM2SI */
  { 8, 0 },                /* RVVMF2SI */
  { 8, 0 },                /* RVVM1DI */
  { 16, 0 },               /* RVVM8HI */
  { 16, 0 },               /* RVVM4SI */
  { 16, 0 },               /* RVVM2DI */
  { 32, 0 },               /* RVVM8SI */
  { 32, 0 },               /* RVVM4DI */
  { 64, 0 },               /* RVVM8DI */
  { 1, 0 },                /* V1QI */
  { 2, 0 },                /* RVVMF8x2QI */
  { 2, 0 },                /* RVVMF4x2QI */
  { 2, 0 },                /* RVVMF2x2QI */
  { 2, 0 },                /* RVVM1x2QI */
  { 2, 0 },                /* RVVM2x2QI */
  { 2, 0 },                /* RVVM4x2QI */
  { 2, 0 },                /* V2QI */
  { 2, 0 },                /* V1HI */
  { 3, 0 },                /* RVVMF8x3QI */
  { 3, 0 },                /* RVVMF4x3QI */
  { 3, 0 },                /* RVVMF2x3QI */
  { 3, 0 },                /* RVVM1x3QI */
  { 3, 0 },                /* RVVM2x3QI */
  { 4, 0 },                /* RVVMF8x4QI */
  { 4, 0 },                /* RVVMF4x4QI */
  { 4, 0 },                /* RVVMF2x4QI */
  { 4, 0 },                /* RVVM1x4QI */
  { 4, 0 },                /* RVVM2x4QI */
  { 4, 0 },                /* V4QI */
  { 4, 0 },                /* RVVMF4x2HI */
  { 4, 0 },                /* RVVMF2x2HI */
  { 4, 0 },                /* RVVM1x2HI */
  { 4, 0 },                /* RVVM2x2HI */
  { 4, 0 },                /* RVVM4x2HI */
  { 4, 0 },                /* V2HI */
  { 4, 0 },                /* V1SI */
  { 5, 0 },                /* RVVMF8x5QI */
  { 5, 0 },                /* RVVMF4x5QI */
  { 5, 0 },                /* RVVMF2x5QI */
  { 5, 0 },                /* RVVM1x5QI */
  { 6, 0 },                /* RVVMF8x6QI */
  { 6, 0 },                /* RVVMF4x6QI */
  { 6, 0 },                /* RVVMF2x6QI */
  { 6, 0 },                /* RVVM1x6QI */
  { 6, 0 },                /* RVVMF4x3HI */
  { 6, 0 },                /* RVVMF2x3HI */
  { 6, 0 },                /* RVVM1x3HI */
  { 6, 0 },                /* RVVM2x3HI */
  { 7, 0 },                /* RVVMF8x7QI */
  { 7, 0 },                /* RVVMF4x7QI */
  { 7, 0 },                /* RVVMF2x7QI */
  { 7, 0 },                /* RVVM1x7QI */
  { 8, 0 },                /* RVVMF8x8QI */
  { 8, 0 },                /* RVVMF4x8QI */
  { 8, 0 },                /* RVVMF2x8QI */
  { 8, 0 },                /* RVVM1x8QI */
  { 8, 0 },                /* V8QI */
  { 8, 0 },                /* RVVMF4x4HI */
  { 8, 0 },                /* RVVMF2x4HI */
  { 8, 0 },                /* RVVM1x4HI */
  { 8, 0 },                /* RVVM2x4HI */
  { 8, 0 },                /* V4HI */
  { 8, 0 },                /* RVVMF2x2SI */
  { 8, 0 },                /* RVVM1x2SI */
  { 8, 0 },                /* RVVM2x2SI */
  { 8, 0 },                /* RVVM4x2SI */
  { 8, 0 },                /* V2SI */
  { 8, 0 },                /* V1DI */
  { 10, 0 },               /* RVVMF4x5HI */
  { 10, 0 },               /* RVVMF2x5HI */
  { 10, 0 },               /* RVVM1x5HI */
  { 12, 0 },               /* RVVMF4x6HI */
  { 12, 0 },               /* RVVMF2x6HI */
  { 12, 0 },               /* RVVM1x6HI */
  { 12, 0 },               /* RVVMF2x3SI */
  { 12, 0 },               /* RVVM1x3SI */
  { 12, 0 },               /* RVVM2x3SI */
  { 14, 0 },               /* RVVMF4x7HI */
  { 14, 0 },               /* RVVMF2x7HI */
  { 14, 0 },               /* RVVM1x7HI */
  { 16, 0 },               /* V16QI */
  { 16, 0 },               /* RVVMF4x8HI */
  { 16, 0 },               /* RVVMF2x8HI */
  { 16, 0 },               /* RVVM1x8HI */
  { 16, 0 },               /* V8HI */
  { 16, 0 },               /* RVVMF2x4SI */
  { 16, 0 },               /* RVVM1x4SI */
  { 16, 0 },               /* RVVM2x4SI */
  { 16, 0 },               /* V4SI */
  { 16, 0 },               /* RVVM1x2DI */
  { 16, 0 },               /* RVVM2x2DI */
  { 16, 0 },               /* RVVM4x2DI */
  { 16, 0 },               /* V2DI */
  { 20, 0 },               /* RVVMF2x5SI */
  { 20, 0 },               /* RVVM1x5SI */
  { 24, 0 },               /* RVVMF2x6SI */
  { 24, 0 },               /* RVVM1x6SI */
  { 24, 0 },               /* RVVM1x3DI */
  { 24, 0 },               /* RVVM2x3DI */
  { 28, 0 },               /* RVVMF2x7SI */
  { 28, 0 },               /* RVVM1x7SI */
  { 32, 0 },               /* V32QI */
  { 32, 0 },               /* V16HI */
  { 32, 0 },               /* RVVMF2x8SI */
  { 32, 0 },               /* RVVM1x8SI */
  { 32, 0 },               /* V8SI */
  { 32, 0 },               /* RVVM1x4DI */
  { 32, 0 },               /* RVVM2x4DI */
  { 32, 0 },               /* V4DI */
  { 40, 0 },               /* RVVM1x5DI */
  { 48, 0 },               /* RVVM1x6DI */
  { 56, 0 },               /* RVVM1x7DI */
  { 64, 0 },               /* V64QI */
  { 64, 0 },               /* V32HI */
  { 64, 0 },               /* V16SI */
  { 64, 0 },               /* RVVM1x8DI */
  { 64, 0 },               /* V8DI */
  { 128, 0 },              /* V128QI */
  { 128, 0 },              /* V64HI */
  { 128, 0 },              /* V32SI */
  { 128, 0 },              /* V16DI */
  { 256, 0 },              /* V256QI */
  { 256, 0 },              /* V128HI */
  { 256, 0 },              /* V64SI */
  { 256, 0 },              /* V32DI */
  { 512, 0 },              /* V512QI */
  { 512, 0 },              /* V256HI */
  { 512, 0 },              /* V128SI */
  { 512, 0 },              /* V64DI */
  { 1024, 0 },             /* V1024QI */
  { 1024, 0 },             /* V512HI */
  { 1024, 0 },             /* V256SI */
  { 1024, 0 },             /* V128DI */
  { 2048, 0 },             /* V2048QI */
  { 2048, 0 },             /* V1024HI */
  { 2048, 0 },             /* V512SI */
  { 2048, 0 },             /* V256DI */
  { 4096, 0 },             /* V4096QI */
  { 4096, 0 },             /* V2048HI */
  { 4096, 0 },             /* V1024SI */
  { 4096, 0 },             /* V512DI */
  { 2, 0 },                /* RVVM1BF */
  { 2, 0 },                /* RVVM1HF */
  { 4, 0 },                /* RVVM2BF */
  { 4, 0 },                /* RVVM2HF */
  { 4, 0 },                /* RVVMF2BF */
  { 4, 0 },                /* RVVMF2HF */
  { 4, 0 },                /* RVVM1SF */
  { 8, 0 },                /* RVVM4BF */
  { 8, 0 },                /* RVVM4HF */
  { 8, 0 },                /* RVVMF4BF */
  { 8, 0 },                /* RVVMF4HF */
  { 8, 0 },                /* RVVM2SF */
  { 8, 0 },                /* RVVMF2SF */
  { 8, 0 },                /* RVVM1DF */
  { 16, 0 },               /* RVVM8BF */
  { 16, 0 },               /* RVVM8HF */
  { 16, 0 },               /* RVVM4SF */
  { 16, 0 },               /* RVVM2DF */
  { 32, 0 },               /* RVVM8SF */
  { 32, 0 },               /* RVVM4DF */
  { 64, 0 },               /* RVVM8DF */
  { 2, 0 },                /* V1HF */
  { 2, 0 },                /* V1BF */
  { 4, 0 },                /* RVVMF4x2BF */
  { 4, 0 },                /* RVVMF2x2BF */
  { 4, 0 },                /* RVVM1x2BF */
  { 4, 0 },                /* RVVMF4x2HF */
  { 4, 0 },                /* RVVMF2x2HF */
  { 4, 0 },                /* RVVM1x2HF */
  { 4, 0 },                /* RVVM2x2BF */
  { 4, 0 },                /* RVVM2x2HF */
  { 4, 0 },                /* RVVM4x2BF */
  { 4, 0 },                /* RVVM4x2HF */
  { 4, 0 },                /* V2HF */
  { 4, 0 },                /* V2BF */
  { 4, 0 },                /* V1SF */
  { 6, 0 },                /* RVVMF4x3BF */
  { 6, 0 },                /* RVVMF2x3BF */
  { 6, 0 },                /* RVVM1x3BF */
  { 6, 0 },                /* RVVMF4x3HF */
  { 6, 0 },                /* RVVMF2x3HF */
  { 6, 0 },                /* RVVM1x3HF */
  { 6, 0 },                /* RVVM2x3BF */
  { 6, 0 },                /* RVVM2x3HF */
  { 8, 0 },                /* RVVMF4x4BF */
  { 8, 0 },                /* RVVMF2x4BF */
  { 8, 0 },                /* RVVM1x4BF */
  { 8, 0 },                /* RVVMF4x4HF */
  { 8, 0 },                /* RVVMF2x4HF */
  { 8, 0 },                /* RVVM1x4HF */
  { 8, 0 },                /* RVVM2x4BF */
  { 8, 0 },                /* RVVM2x4HF */
  { 8, 0 },                /* V4HF */
  { 8, 0 },                /* V4BF */
  { 8, 0 },                /* RVVMF2x2SF */
  { 8, 0 },                /* RVVM1x2SF */
  { 8, 0 },                /* RVVM2x2SF */
  { 8, 0 },                /* RVVM4x2SF */
  { 8, 0 },                /* V2SF */
  { 8, 0 },                /* V1DF */
  { 10, 0 },               /* RVVMF4x5BF */
  { 10, 0 },               /* RVVMF2x5BF */
  { 10, 0 },               /* RVVM1x5BF */
  { 10, 0 },               /* RVVMF4x5HF */
  { 10, 0 },               /* RVVMF2x5HF */
  { 10, 0 },               /* RVVM1x5HF */
  { 12, 0 },               /* RVVMF4x6BF */
  { 12, 0 },               /* RVVMF2x6BF */
  { 12, 0 },               /* RVVM1x6BF */
  { 12, 0 },               /* RVVMF4x6HF */
  { 12, 0 },               /* RVVMF2x6HF */
  { 12, 0 },               /* RVVM1x6HF */
  { 12, 0 },               /* RVVMF2x3SF */
  { 12, 0 },               /* RVVM1x3SF */
  { 12, 0 },               /* RVVM2x3SF */
  { 14, 0 },               /* RVVMF4x7BF */
  { 14, 0 },               /* RVVMF2x7BF */
  { 14, 0 },               /* RVVM1x7BF */
  { 14, 0 },               /* RVVMF4x7HF */
  { 14, 0 },               /* RVVMF2x7HF */
  { 14, 0 },               /* RVVM1x7HF */
  { 16, 0 },               /* RVVMF4x8BF */
  { 16, 0 },               /* RVVMF2x8BF */
  { 16, 0 },               /* RVVM1x8BF */
  { 16, 0 },               /* RVVMF4x8HF */
  { 16, 0 },               /* RVVMF2x8HF */
  { 16, 0 },               /* RVVM1x8HF */
  { 16, 0 },               /* V8HF */
  { 16, 0 },               /* V8BF */
  { 16, 0 },               /* RVVMF2x4SF */
  { 16, 0 },               /* RVVM1x4SF */
  { 16, 0 },               /* RVVM2x4SF */
  { 16, 0 },               /* V4SF */
  { 16, 0 },               /* RVVM1x2DF */
  { 16, 0 },               /* RVVM2x2DF */
  { 16, 0 },               /* RVVM4x2DF */
  { 16, 0 },               /* V2DF */
  { 20, 0 },               /* RVVMF2x5SF */
  { 20, 0 },               /* RVVM1x5SF */
  { 24, 0 },               /* RVVMF2x6SF */
  { 24, 0 },               /* RVVM1x6SF */
  { 24, 0 },               /* RVVM1x3DF */
  { 24, 0 },               /* RVVM2x3DF */
  { 28, 0 },               /* RVVMF2x7SF */
  { 28, 0 },               /* RVVM1x7SF */
  { 32, 0 },               /* V16HF */
  { 32, 0 },               /* V16BF */
  { 32, 0 },               /* RVVMF2x8SF */
  { 32, 0 },               /* RVVM1x8SF */
  { 32, 0 },               /* V8SF */
  { 32, 0 },               /* RVVM1x4DF */
  { 32, 0 },               /* RVVM2x4DF */
  { 32, 0 },               /* V4DF */
  { 40, 0 },               /* RVVM1x5DF */
  { 48, 0 },               /* RVVM1x6DF */
  { 56, 0 },               /* RVVM1x7DF */
  { 64, 0 },               /* V32HF */
  { 64, 0 },               /* V32BF */
  { 64, 0 },               /* V16SF */
  { 64, 0 },               /* RVVM1x8DF */
  { 64, 0 },               /* V8DF */
  { 128, 0 },              /* V64HF */
  { 128, 0 },              /* V64BF */
  { 128, 0 },              /* V32SF */
  { 128, 0 },              /* V16DF */
  { 256, 0 },              /* V128HF */
  { 256, 0 },              /* V128BF */
  { 256, 0 },              /* V64SF */
  { 256, 0 },              /* V32DF */
  { 512, 0 },              /* V256HF */
  { 512, 0 },              /* V256BF */
  { 512, 0 },              /* V128SF */
  { 512, 0 },              /* V64DF */
  { 1024, 0 },             /* V512HF */
  { 1024, 0 },             /* V512BF */
  { 1024, 0 },             /* V256SF */
  { 1024, 0 },             /* V128DF */
  { 2048, 0 },             /* V1024HF */
  { 2048, 0 },             /* V1024BF */
  { 2048, 0 },             /* V512SF */
  { 2048, 0 },             /* V256DF */
  { 4096, 0 },             /* V2048HF */
  { 4096, 0 },             /* V2048BF */
  { 4096, 0 },             /* V1024SF */
  { 4096, 0 },             /* V512DF */
};

poly_uint16 mode_nunits[NUM_MACHINE_MODES] = 
{
  { 0, 0 },                /* VOID */
  { 0, 0 },                /* BLK */
  { 1, 0 },                /* CC */
  { 1, 0 },                /* BI */
  { 1, 0 },                /* QI */
  { 1, 0 },                /* HI */
  { 1, 0 },                /* SI */
  { 1, 0 },                /* DI */
  { 1, 0 },                /* TI */
  { 1, 0 },                /* OI */
  { 1, 0 },                /* QQ */
  { 1, 0 },                /* HQ */
  { 1, 0 },                /* SQ */
  { 1, 0 },                /* DQ */
  { 1, 0 },                /* TQ */
  { 1, 0 },                /* UQQ */
  { 1, 0 },                /* UHQ */
  { 1, 0 },                /* USQ */
  { 1, 0 },                /* UDQ */
  { 1, 0 },                /* UTQ */
  { 1, 0 },                /* HA */
  { 1, 0 },                /* SA */
  { 1, 0 },                /* DA */
  { 1, 0 },                /* TA */
  { 1, 0 },                /* UHA */
  { 1, 0 },                /* USA */
  { 1, 0 },                /* UDA */
  { 1, 0 },                /* UTA */
  { 1, 0 },                /* HF */
  { 1, 0 },                /* BF */
  { 1, 0 },                /* SF */
  { 1, 0 },                /* DF */
  { 1, 0 },                /* TF */
  { 1, 0 },                /* SD */
  { 1, 0 },                /* DD */
  { 1, 0 },                /* TD */
  { 2, 0 },                /* CQI */
  { 2, 0 },                /* CHI */
  { 2, 0 },                /* CSI */
  { 2, 0 },                /* CDI */
  { 2, 0 },                /* CTI */
  { 2, 0 },                /* COI */
  { 2, 0 },                /* BC */
  { 2, 0 },                /* HC */
  { 2, 0 },                /* SC */
  { 2, 0 },                /* DC */
  { 2, 0 },                /* TC */
  { 8, 0 },                /* RVVMF8BI */
  { 4, 0 },                /* RVVMF16BI */
  { 2, 0 },                /* RVVMF32BI */
  { 1, 0 },                /* RVVMF64BI */
  { 1, 0 },                /* V1BI */
  { 2, 0 },                /* V2BI */
  { 4, 0 },                /* V4BI */
  { 8, 0 },                /* V8BI */
  { 16, 0 },               /* RVVMF4BI */
  { 16, 0 },               /* V16BI */
  { 32, 0 },               /* RVVMF2BI */
  { 32, 0 },               /* V32BI */
  { 64, 0 },               /* RVVM1BI */
  { 64, 0 },               /* V64BI */
  { 128, 0 },              /* V128BI */
  { 256, 0 },              /* V256BI */
  { 512, 0 },              /* V512BI */
  { 1024, 0 },             /* V1024BI */
  { 2048, 0 },             /* V2048BI */
  { 4096, 0 },             /* V4096BI */
  { 1, 0 },                /* RVVM1QI */
  { 2, 0 },                /* RVVM2QI */
  { 2, 0 },                /* RVVMF2QI */
  { 1, 0 },                /* RVVM1HI */
  { 4, 0 },                /* RVVM4QI */
  { 4, 0 },                /* RVVMF4QI */
  { 2, 0 },                /* RVVM2HI */
  { 2, 0 },                /* RVVMF2HI */
  { 1, 0 },                /* RVVM1SI */
  { 8, 0 },                /* RVVM8QI */
  { 8, 0 },                /* RVVMF8QI */
  { 4, 0 },                /* RVVM4HI */
  { 4, 0 },                /* RVVMF4HI */
  { 2, 0 },                /* RVVM2SI */
  { 2, 0 },                /* RVVMF2SI */
  { 1, 0 },                /* RVVM1DI */
  { 8, 0 },                /* RVVM8HI */
  { 4, 0 },                /* RVVM4SI */
  { 2, 0 },                /* RVVM2DI */
  { 8, 0 },                /* RVVM8SI */
  { 4, 0 },                /* RVVM4DI */
  { 8, 0 },                /* RVVM8DI */
  { 1, 0 },                /* V1QI */
  { 2, 0 },                /* RVVMF8x2QI */
  { 2, 0 },                /* RVVMF4x2QI */
  { 2, 0 },                /* RVVMF2x2QI */
  { 2, 0 },                /* RVVM1x2QI */
  { 2, 0 },                /* RVVM2x2QI */
  { 2, 0 },                /* RVVM4x2QI */
  { 2, 0 },                /* V2QI */
  { 1, 0 },                /* V1HI */
  { 3, 0 },                /* RVVMF8x3QI */
  { 3, 0 },                /* RVVMF4x3QI */
  { 3, 0 },                /* RVVMF2x3QI */
  { 3, 0 },                /* RVVM1x3QI */
  { 3, 0 },                /* RVVM2x3QI */
  { 4, 0 },                /* RVVMF8x4QI */
  { 4, 0 },                /* RVVMF4x4QI */
  { 4, 0 },                /* RVVMF2x4QI */
  { 4, 0 },                /* RVVM1x4QI */
  { 4, 0 },                /* RVVM2x4QI */
  { 4, 0 },                /* V4QI */
  { 2, 0 },                /* RVVMF4x2HI */
  { 2, 0 },                /* RVVMF2x2HI */
  { 2, 0 },                /* RVVM1x2HI */
  { 2, 0 },                /* RVVM2x2HI */
  { 2, 0 },                /* RVVM4x2HI */
  { 2, 0 },                /* V2HI */
  { 1, 0 },                /* V1SI */
  { 5, 0 },                /* RVVMF8x5QI */
  { 5, 0 },                /* RVVMF4x5QI */
  { 5, 0 },                /* RVVMF2x5QI */
  { 5, 0 },                /* RVVM1x5QI */
  { 6, 0 },                /* RVVMF8x6QI */
  { 6, 0 },                /* RVVMF4x6QI */
  { 6, 0 },                /* RVVMF2x6QI */
  { 6, 0 },                /* RVVM1x6QI */
  { 3, 0 },                /* RVVMF4x3HI */
  { 3, 0 },                /* RVVMF2x3HI */
  { 3, 0 },                /* RVVM1x3HI */
  { 3, 0 },                /* RVVM2x3HI */
  { 7, 0 },                /* RVVMF8x7QI */
  { 7, 0 },                /* RVVMF4x7QI */
  { 7, 0 },                /* RVVMF2x7QI */
  { 7, 0 },                /* RVVM1x7QI */
  { 8, 0 },                /* RVVMF8x8QI */
  { 8, 0 },                /* RVVMF4x8QI */
  { 8, 0 },                /* RVVMF2x8QI */
  { 8, 0 },                /* RVVM1x8QI */
  { 8, 0 },                /* V8QI */
  { 4, 0 },                /* RVVMF4x4HI */
  { 4, 0 },                /* RVVMF2x4HI */
  { 4, 0 },                /* RVVM1x4HI */
  { 4, 0 },                /* RVVM2x4HI */
  { 4, 0 },                /* V4HI */
  { 2, 0 },                /* RVVMF2x2SI */
  { 2, 0 },                /* RVVM1x2SI */
  { 2, 0 },                /* RVVM2x2SI */
  { 2, 0 },                /* RVVM4x2SI */
  { 2, 0 },                /* V2SI */
  { 1, 0 },                /* V1DI */
  { 5, 0 },                /* RVVMF4x5HI */
  { 5, 0 },                /* RVVMF2x5HI */
  { 5, 0 },                /* RVVM1x5HI */
  { 6, 0 },                /* RVVMF4x6HI */
  { 6, 0 },                /* RVVMF2x6HI */
  { 6, 0 },                /* RVVM1x6HI */
  { 3, 0 },                /* RVVMF2x3SI */
  { 3, 0 },                /* RVVM1x3SI */
  { 3, 0 },                /* RVVM2x3SI */
  { 7, 0 },                /* RVVMF4x7HI */
  { 7, 0 },                /* RVVMF2x7HI */
  { 7, 0 },                /* RVVM1x7HI */
  { 16, 0 },               /* V16QI */
  { 8, 0 },                /* RVVMF4x8HI */
  { 8, 0 },                /* RVVMF2x8HI */
  { 8, 0 },                /* RVVM1x8HI */
  { 8, 0 },                /* V8HI */
  { 4, 0 },                /* RVVMF2x4SI */
  { 4, 0 },                /* RVVM1x4SI */
  { 4, 0 },                /* RVVM2x4SI */
  { 4, 0 },                /* V4SI */
  { 2, 0 },                /* RVVM1x2DI */
  { 2, 0 },                /* RVVM2x2DI */
  { 2, 0 },                /* RVVM4x2DI */
  { 2, 0 },                /* V2DI */
  { 5, 0 },                /* RVVMF2x5SI */
  { 5, 0 },                /* RVVM1x5SI */
  { 6, 0 },                /* RVVMF2x6SI */
  { 6, 0 },                /* RVVM1x6SI */
  { 3, 0 },                /* RVVM1x3DI */
  { 3, 0 },                /* RVVM2x3DI */
  { 7, 0 },                /* RVVMF2x7SI */
  { 7, 0 },                /* RVVM1x7SI */
  { 32, 0 },               /* V32QI */
  { 16, 0 },               /* V16HI */
  { 8, 0 },                /* RVVMF2x8SI */
  { 8, 0 },                /* RVVM1x8SI */
  { 8, 0 },                /* V8SI */
  { 4, 0 },                /* RVVM1x4DI */
  { 4, 0 },                /* RVVM2x4DI */
  { 4, 0 },                /* V4DI */
  { 5, 0 },                /* RVVM1x5DI */
  { 6, 0 },                /* RVVM1x6DI */
  { 7, 0 },                /* RVVM1x7DI */
  { 64, 0 },               /* V64QI */
  { 32, 0 },               /* V32HI */
  { 16, 0 },               /* V16SI */
  { 8, 0 },                /* RVVM1x8DI */
  { 8, 0 },                /* V8DI */
  { 128, 0 },              /* V128QI */
  { 64, 0 },               /* V64HI */
  { 32, 0 },               /* V32SI */
  { 16, 0 },               /* V16DI */
  { 256, 0 },              /* V256QI */
  { 128, 0 },              /* V128HI */
  { 64, 0 },               /* V64SI */
  { 32, 0 },               /* V32DI */
  { 512, 0 },              /* V512QI */
  { 256, 0 },              /* V256HI */
  { 128, 0 },              /* V128SI */
  { 64, 0 },               /* V64DI */
  { 1024, 0 },             /* V1024QI */
  { 512, 0 },              /* V512HI */
  { 256, 0 },              /* V256SI */
  { 128, 0 },              /* V128DI */
  { 2048, 0 },             /* V2048QI */
  { 1024, 0 },             /* V1024HI */
  { 512, 0 },              /* V512SI */
  { 256, 0 },              /* V256DI */
  { 4096, 0 },             /* V4096QI */
  { 2048, 0 },             /* V2048HI */
  { 1024, 0 },             /* V1024SI */
  { 512, 0 },              /* V512DI */
  { 1, 0 },                /* RVVM1BF */
  { 1, 0 },                /* RVVM1HF */
  { 2, 0 },                /* RVVM2BF */
  { 2, 0 },                /* RVVM2HF */
  { 2, 0 },                /* RVVMF2BF */
  { 2, 0 },                /* RVVMF2HF */
  { 1, 0 },                /* RVVM1SF */
  { 4, 0 },                /* RVVM4BF */
  { 4, 0 },                /* RVVM4HF */
  { 4, 0 },                /* RVVMF4BF */
  { 4, 0 },                /* RVVMF4HF */
  { 2, 0 },                /* RVVM2SF */
  { 2, 0 },                /* RVVMF2SF */
  { 1, 0 },                /* RVVM1DF */
  { 8, 0 },                /* RVVM8BF */
  { 8, 0 },                /* RVVM8HF */
  { 4, 0 },                /* RVVM4SF */
  { 2, 0 },                /* RVVM2DF */
  { 8, 0 },                /* RVVM8SF */
  { 4, 0 },                /* RVVM4DF */
  { 8, 0 },                /* RVVM8DF */
  { 1, 0 },                /* V1HF */
  { 1, 0 },                /* V1BF */
  { 2, 0 },                /* RVVMF4x2BF */
  { 2, 0 },                /* RVVMF2x2BF */
  { 2, 0 },                /* RVVM1x2BF */
  { 2, 0 },                /* RVVMF4x2HF */
  { 2, 0 },                /* RVVMF2x2HF */
  { 2, 0 },                /* RVVM1x2HF */
  { 2, 0 },                /* RVVM2x2BF */
  { 2, 0 },                /* RVVM2x2HF */
  { 2, 0 },                /* RVVM4x2BF */
  { 2, 0 },                /* RVVM4x2HF */
  { 2, 0 },                /* V2HF */
  { 2, 0 },                /* V2BF */
  { 1, 0 },                /* V1SF */
  { 3, 0 },                /* RVVMF4x3BF */
  { 3, 0 },                /* RVVMF2x3BF */
  { 3, 0 },                /* RVVM1x3BF */
  { 3, 0 },                /* RVVMF4x3HF */
  { 3, 0 },                /* RVVMF2x3HF */
  { 3, 0 },                /* RVVM1x3HF */
  { 3, 0 },                /* RVVM2x3BF */
  { 3, 0 },                /* RVVM2x3HF */
  { 4, 0 },                /* RVVMF4x4BF */
  { 4, 0 },                /* RVVMF2x4BF */
  { 4, 0 },                /* RVVM1x4BF */
  { 4, 0 },                /* RVVMF4x4HF */
  { 4, 0 },                /* RVVMF2x4HF */
  { 4, 0 },                /* RVVM1x4HF */
  { 4, 0 },                /* RVVM2x4BF */
  { 4, 0 },                /* RVVM2x4HF */
  { 4, 0 },                /* V4HF */
  { 4, 0 },                /* V4BF */
  { 2, 0 },                /* RVVMF2x2SF */
  { 2, 0 },                /* RVVM1x2SF */
  { 2, 0 },                /* RVVM2x2SF */
  { 2, 0 },                /* RVVM4x2SF */
  { 2, 0 },                /* V2SF */
  { 1, 0 },                /* V1DF */
  { 5, 0 },                /* RVVMF4x5BF */
  { 5, 0 },                /* RVVMF2x5BF */
  { 5, 0 },                /* RVVM1x5BF */
  { 5, 0 },                /* RVVMF4x5HF */
  { 5, 0 },                /* RVVMF2x5HF */
  { 5, 0 },                /* RVVM1x5HF */
  { 6, 0 },                /* RVVMF4x6BF */
  { 6, 0 },                /* RVVMF2x6BF */
  { 6, 0 },                /* RVVM1x6BF */
  { 6, 0 },                /* RVVMF4x6HF */
  { 6, 0 },                /* RVVMF2x6HF */
  { 6, 0 },                /* RVVM1x6HF */
  { 3, 0 },                /* RVVMF2x3SF */
  { 3, 0 },                /* RVVM1x3SF */
  { 3, 0 },                /* RVVM2x3SF */
  { 7, 0 },                /* RVVMF4x7BF */
  { 7, 0 },                /* RVVMF2x7BF */
  { 7, 0 },                /* RVVM1x7BF */
  { 7, 0 },                /* RVVMF4x7HF */
  { 7, 0 },                /* RVVMF2x7HF */
  { 7, 0 },                /* RVVM1x7HF */
  { 8, 0 },                /* RVVMF4x8BF */
  { 8, 0 },                /* RVVMF2x8BF */
  { 8, 0 },                /* RVVM1x8BF */
  { 8, 0 },                /* RVVMF4x8HF */
  { 8, 0 },                /* RVVMF2x8HF */
  { 8, 0 },                /* RVVM1x8HF */
  { 8, 0 },                /* V8HF */
  { 8, 0 },                /* V8BF */
  { 4, 0 },                /* RVVMF2x4SF */
  { 4, 0 },                /* RVVM1x4SF */
  { 4, 0 },                /* RVVM2x4SF */
  { 4, 0 },                /* V4SF */
  { 2, 0 },                /* RVVM1x2DF */
  { 2, 0 },                /* RVVM2x2DF */
  { 2, 0 },                /* RVVM4x2DF */
  { 2, 0 },                /* V2DF */
  { 5, 0 },                /* RVVMF2x5SF */
  { 5, 0 },                /* RVVM1x5SF */
  { 6, 0 },                /* RVVMF2x6SF */
  { 6, 0 },                /* RVVM1x6SF */
  { 3, 0 },                /* RVVM1x3DF */
  { 3, 0 },                /* RVVM2x3DF */
  { 7, 0 },                /* RVVMF2x7SF */
  { 7, 0 },                /* RVVM1x7SF */
  { 16, 0 },               /* V16HF */
  { 16, 0 },               /* V16BF */
  { 8, 0 },                /* RVVMF2x8SF */
  { 8, 0 },                /* RVVM1x8SF */
  { 8, 0 },                /* V8SF */
  { 4, 0 },                /* RVVM1x4DF */
  { 4, 0 },                /* RVVM2x4DF */
  { 4, 0 },                /* V4DF */
  { 5, 0 },                /* RVVM1x5DF */
  { 6, 0 },                /* RVVM1x6DF */
  { 7, 0 },                /* RVVM1x7DF */
  { 32, 0 },               /* V32HF */
  { 32, 0 },               /* V32BF */
  { 16, 0 },               /* V16SF */
  { 8, 0 },                /* RVVM1x8DF */
  { 8, 0 },                /* V8DF */
  { 64, 0 },               /* V64HF */
  { 64, 0 },               /* V64BF */
  { 32, 0 },               /* V32SF */
  { 16, 0 },               /* V16DF */
  { 128, 0 },              /* V128HF */
  { 128, 0 },              /* V128BF */
  { 64, 0 },               /* V64SF */
  { 32, 0 },               /* V32DF */
  { 256, 0 },              /* V256HF */
  { 256, 0 },              /* V256BF */
  { 128, 0 },              /* V128SF */
  { 64, 0 },               /* V64DF */
  { 512, 0 },              /* V512HF */
  { 512, 0 },              /* V512BF */
  { 256, 0 },              /* V256SF */
  { 128, 0 },              /* V128DF */
  { 1024, 0 },             /* V1024HF */
  { 1024, 0 },             /* V1024BF */
  { 512, 0 },              /* V512SF */
  { 256, 0 },              /* V256DF */
  { 2048, 0 },             /* V2048HF */
  { 2048, 0 },             /* V2048BF */
  { 1024, 0 },             /* V1024SF */
  { 512, 0 },              /* V512DF */
};

const unsigned short mode_next[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_VOIDmode,              /* OI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_BFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_VOIDmode,              /* COI */
  E_HCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_RVVMF16BImode,         /* RVVMF8BI */
  E_RVVMF32BImode,         /* RVVMF16BI */
  E_RVVMF64BImode,         /* RVVMF32BI */
  E_V1BImode,              /* RVVMF64BI */
  E_V2BImode,              /* V1BI */
  E_V4BImode,              /* V2BI */
  E_V8BImode,              /* V4BI */
  E_RVVMF4BImode,          /* V8BI */
  E_V16BImode,             /* RVVMF4BI */
  E_RVVMF2BImode,          /* V16BI */
  E_V32BImode,             /* RVVMF2BI */
  E_RVVM1BImode,           /* V32BI */
  E_V64BImode,             /* RVVM1BI */
  E_V128BImode,            /* V64BI */
  E_V256BImode,            /* V128BI */
  E_V512BImode,            /* V256BI */
  E_V1024BImode,           /* V512BI */
  E_V2048BImode,           /* V1024BI */
  E_V4096BImode,           /* V2048BI */
  E_VOIDmode,              /* V4096BI */
  E_RVVM2QImode,           /* RVVM1QI */
  E_RVVMF2QImode,          /* RVVM2QI */
  E_RVVM1HImode,           /* RVVMF2QI */
  E_RVVM4QImode,           /* RVVM1HI */
  E_RVVMF4QImode,          /* RVVM4QI */
  E_RVVM2HImode,           /* RVVMF4QI */
  E_RVVMF2HImode,          /* RVVM2HI */
  E_RVVM1SImode,           /* RVVMF2HI */
  E_RVVM8QImode,           /* RVVM1SI */
  E_RVVMF8QImode,          /* RVVM8QI */
  E_RVVM4HImode,           /* RVVMF8QI */
  E_RVVMF4HImode,          /* RVVM4HI */
  E_RVVM2SImode,           /* RVVMF4HI */
  E_RVVMF2SImode,          /* RVVM2SI */
  E_RVVM1DImode,           /* RVVMF2SI */
  E_RVVM8HImode,           /* RVVM1DI */
  E_RVVM4SImode,           /* RVVM8HI */
  E_RVVM2DImode,           /* RVVM4SI */
  E_RVVM8SImode,           /* RVVM2DI */
  E_RVVM4DImode,           /* RVVM8SI */
  E_RVVM8DImode,           /* RVVM4DI */
  E_V1QImode,              /* RVVM8DI */
  E_RVVMF8x2QImode,        /* V1QI */
  E_RVVMF4x2QImode,        /* RVVMF8x2QI */
  E_RVVMF2x2QImode,        /* RVVMF4x2QI */
  E_RVVM1x2QImode,         /* RVVMF2x2QI */
  E_RVVM2x2QImode,         /* RVVM1x2QI */
  E_RVVM4x2QImode,         /* RVVM2x2QI */
  E_V2QImode,              /* RVVM4x2QI */
  E_V1HImode,              /* V2QI */
  E_RVVMF8x3QImode,        /* V1HI */
  E_RVVMF4x3QImode,        /* RVVMF8x3QI */
  E_RVVMF2x3QImode,        /* RVVMF4x3QI */
  E_RVVM1x3QImode,         /* RVVMF2x3QI */
  E_RVVM2x3QImode,         /* RVVM1x3QI */
  E_RVVMF8x4QImode,        /* RVVM2x3QI */
  E_RVVMF4x4QImode,        /* RVVMF8x4QI */
  E_RVVMF2x4QImode,        /* RVVMF4x4QI */
  E_RVVM1x4QImode,         /* RVVMF2x4QI */
  E_RVVM2x4QImode,         /* RVVM1x4QI */
  E_V4QImode,              /* RVVM2x4QI */
  E_RVVMF4x2HImode,        /* V4QI */
  E_RVVMF2x2HImode,        /* RVVMF4x2HI */
  E_RVVM1x2HImode,         /* RVVMF2x2HI */
  E_RVVM2x2HImode,         /* RVVM1x2HI */
  E_RVVM4x2HImode,         /* RVVM2x2HI */
  E_V2HImode,              /* RVVM4x2HI */
  E_V1SImode,              /* V2HI */
  E_RVVMF8x5QImode,        /* V1SI */
  E_RVVMF4x5QImode,        /* RVVMF8x5QI */
  E_RVVMF2x5QImode,        /* RVVMF4x5QI */
  E_RVVM1x5QImode,         /* RVVMF2x5QI */
  E_RVVMF8x6QImode,        /* RVVM1x5QI */
  E_RVVMF4x6QImode,        /* RVVMF8x6QI */
  E_RVVMF2x6QImode,        /* RVVMF4x6QI */
  E_RVVM1x6QImode,         /* RVVMF2x6QI */
  E_RVVMF4x3HImode,        /* RVVM1x6QI */
  E_RVVMF2x3HImode,        /* RVVMF4x3HI */
  E_RVVM1x3HImode,         /* RVVMF2x3HI */
  E_RVVM2x3HImode,         /* RVVM1x3HI */
  E_RVVMF8x7QImode,        /* RVVM2x3HI */
  E_RVVMF4x7QImode,        /* RVVMF8x7QI */
  E_RVVMF2x7QImode,        /* RVVMF4x7QI */
  E_RVVM1x7QImode,         /* RVVMF2x7QI */
  E_RVVMF8x8QImode,        /* RVVM1x7QI */
  E_RVVMF4x8QImode,        /* RVVMF8x8QI */
  E_RVVMF2x8QImode,        /* RVVMF4x8QI */
  E_RVVM1x8QImode,         /* RVVMF2x8QI */
  E_V8QImode,              /* RVVM1x8QI */
  E_RVVMF4x4HImode,        /* V8QI */
  E_RVVMF2x4HImode,        /* RVVMF4x4HI */
  E_RVVM1x4HImode,         /* RVVMF2x4HI */
  E_RVVM2x4HImode,         /* RVVM1x4HI */
  E_V4HImode,              /* RVVM2x4HI */
  E_RVVMF2x2SImode,        /* V4HI */
  E_RVVM1x2SImode,         /* RVVMF2x2SI */
  E_RVVM2x2SImode,         /* RVVM1x2SI */
  E_RVVM4x2SImode,         /* RVVM2x2SI */
  E_V2SImode,              /* RVVM4x2SI */
  E_V1DImode,              /* V2SI */
  E_RVVMF4x5HImode,        /* V1DI */
  E_RVVMF2x5HImode,        /* RVVMF4x5HI */
  E_RVVM1x5HImode,         /* RVVMF2x5HI */
  E_RVVMF4x6HImode,        /* RVVM1x5HI */
  E_RVVMF2x6HImode,        /* RVVMF4x6HI */
  E_RVVM1x6HImode,         /* RVVMF2x6HI */
  E_RVVMF2x3SImode,        /* RVVM1x6HI */
  E_RVVM1x3SImode,         /* RVVMF2x3SI */
  E_RVVM2x3SImode,         /* RVVM1x3SI */
  E_RVVMF4x7HImode,        /* RVVM2x3SI */
  E_RVVMF2x7HImode,        /* RVVMF4x7HI */
  E_RVVM1x7HImode,         /* RVVMF2x7HI */
  E_V16QImode,             /* RVVM1x7HI */
  E_RVVMF4x8HImode,        /* V16QI */
  E_RVVMF2x8HImode,        /* RVVMF4x8HI */
  E_RVVM1x8HImode,         /* RVVMF2x8HI */
  E_V8HImode,              /* RVVM1x8HI */
  E_RVVMF2x4SImode,        /* V8HI */
  E_RVVM1x4SImode,         /* RVVMF2x4SI */
  E_RVVM2x4SImode,         /* RVVM1x4SI */
  E_V4SImode,              /* RVVM2x4SI */
  E_RVVM1x2DImode,         /* V4SI */
  E_RVVM2x2DImode,         /* RVVM1x2DI */
  E_RVVM4x2DImode,         /* RVVM2x2DI */
  E_V2DImode,              /* RVVM4x2DI */
  E_RVVMF2x5SImode,        /* V2DI */
  E_RVVM1x5SImode,         /* RVVMF2x5SI */
  E_RVVMF2x6SImode,        /* RVVM1x5SI */
  E_RVVM1x6SImode,         /* RVVMF2x6SI */
  E_RVVM1x3DImode,         /* RVVM1x6SI */
  E_RVVM2x3DImode,         /* RVVM1x3DI */
  E_RVVMF2x7SImode,        /* RVVM2x3DI */
  E_RVVM1x7SImode,         /* RVVMF2x7SI */
  E_V32QImode,             /* RVVM1x7SI */
  E_V16HImode,             /* V32QI */
  E_RVVMF2x8SImode,        /* V16HI */
  E_RVVM1x8SImode,         /* RVVMF2x8SI */
  E_V8SImode,              /* RVVM1x8SI */
  E_RVVM1x4DImode,         /* V8SI */
  E_RVVM2x4DImode,         /* RVVM1x4DI */
  E_V4DImode,              /* RVVM2x4DI */
  E_RVVM1x5DImode,         /* V4DI */
  E_RVVM1x6DImode,         /* RVVM1x5DI */
  E_RVVM1x7DImode,         /* RVVM1x6DI */
  E_V64QImode,             /* RVVM1x7DI */
  E_V32HImode,             /* V64QI */
  E_V16SImode,             /* V32HI */
  E_RVVM1x8DImode,         /* V16SI */
  E_V8DImode,              /* RVVM1x8DI */
  E_V128QImode,            /* V8DI */
  E_V64HImode,             /* V128QI */
  E_V32SImode,             /* V64HI */
  E_V16DImode,             /* V32SI */
  E_V256QImode,            /* V16DI */
  E_V128HImode,            /* V256QI */
  E_V64SImode,             /* V128HI */
  E_V32DImode,             /* V64SI */
  E_V512QImode,            /* V32DI */
  E_V256HImode,            /* V512QI */
  E_V128SImode,            /* V256HI */
  E_V64DImode,             /* V128SI */
  E_V1024QImode,           /* V64DI */
  E_V512HImode,            /* V1024QI */
  E_V256SImode,            /* V512HI */
  E_V128DImode,            /* V256SI */
  E_V2048QImode,           /* V128DI */
  E_V1024HImode,           /* V2048QI */
  E_V512SImode,            /* V1024HI */
  E_V256DImode,            /* V512SI */
  E_V4096QImode,           /* V256DI */
  E_V2048HImode,           /* V4096QI */
  E_V1024SImode,           /* V2048HI */
  E_V512DImode,            /* V1024SI */
  E_VOIDmode,              /* V512DI */
  E_RVVM1HFmode,           /* RVVM1BF */
  E_RVVM2BFmode,           /* RVVM1HF */
  E_RVVM2HFmode,           /* RVVM2BF */
  E_RVVMF2BFmode,          /* RVVM2HF */
  E_RVVMF2HFmode,          /* RVVMF2BF */
  E_RVVM1SFmode,           /* RVVMF2HF */
  E_RVVM4BFmode,           /* RVVM1SF */
  E_RVVM4HFmode,           /* RVVM4BF */
  E_RVVMF4BFmode,          /* RVVM4HF */
  E_RVVMF4HFmode,          /* RVVMF4BF */
  E_RVVM2SFmode,           /* RVVMF4HF */
  E_RVVMF2SFmode,          /* RVVM2SF */
  E_RVVM1DFmode,           /* RVVMF2SF */
  E_RVVM8BFmode,           /* RVVM1DF */
  E_RVVM8HFmode,           /* RVVM8BF */
  E_RVVM4SFmode,           /* RVVM8HF */
  E_RVVM2DFmode,           /* RVVM4SF */
  E_RVVM8SFmode,           /* RVVM2DF */
  E_RVVM4DFmode,           /* RVVM8SF */
  E_RVVM8DFmode,           /* RVVM4DF */
  E_V1HFmode,              /* RVVM8DF */
  E_V1BFmode,              /* V1HF */
  E_RVVMF4x2BFmode,        /* V1BF */
  E_RVVMF2x2BFmode,        /* RVVMF4x2BF */
  E_RVVM1x2BFmode,         /* RVVMF2x2BF */
  E_RVVMF4x2HFmode,        /* RVVM1x2BF */
  E_RVVMF2x2HFmode,        /* RVVMF4x2HF */
  E_RVVM1x2HFmode,         /* RVVMF2x2HF */
  E_RVVM2x2BFmode,         /* RVVM1x2HF */
  E_RVVM2x2HFmode,         /* RVVM2x2BF */
  E_RVVM4x2BFmode,         /* RVVM2x2HF */
  E_RVVM4x2HFmode,         /* RVVM4x2BF */
  E_V2HFmode,              /* RVVM4x2HF */
  E_V2BFmode,              /* V2HF */
  E_V1SFmode,              /* V2BF */
  E_RVVMF4x3BFmode,        /* V1SF */
  E_RVVMF2x3BFmode,        /* RVVMF4x3BF */
  E_RVVM1x3BFmode,         /* RVVMF2x3BF */
  E_RVVMF4x3HFmode,        /* RVVM1x3BF */
  E_RVVMF2x3HFmode,        /* RVVMF4x3HF */
  E_RVVM1x3HFmode,         /* RVVMF2x3HF */
  E_RVVM2x3BFmode,         /* RVVM1x3HF */
  E_RVVM2x3HFmode,         /* RVVM2x3BF */
  E_RVVMF4x4BFmode,        /* RVVM2x3HF */
  E_RVVMF2x4BFmode,        /* RVVMF4x4BF */
  E_RVVM1x4BFmode,         /* RVVMF2x4BF */
  E_RVVMF4x4HFmode,        /* RVVM1x4BF */
  E_RVVMF2x4HFmode,        /* RVVMF4x4HF */
  E_RVVM1x4HFmode,         /* RVVMF2x4HF */
  E_RVVM2x4BFmode,         /* RVVM1x4HF */
  E_RVVM2x4HFmode,         /* RVVM2x4BF */
  E_V4HFmode,              /* RVVM2x4HF */
  E_V4BFmode,              /* V4HF */
  E_RVVMF2x2SFmode,        /* V4BF */
  E_RVVM1x2SFmode,         /* RVVMF2x2SF */
  E_RVVM2x2SFmode,         /* RVVM1x2SF */
  E_RVVM4x2SFmode,         /* RVVM2x2SF */
  E_V2SFmode,              /* RVVM4x2SF */
  E_V1DFmode,              /* V2SF */
  E_RVVMF4x5BFmode,        /* V1DF */
  E_RVVMF2x5BFmode,        /* RVVMF4x5BF */
  E_RVVM1x5BFmode,         /* RVVMF2x5BF */
  E_RVVMF4x5HFmode,        /* RVVM1x5BF */
  E_RVVMF2x5HFmode,        /* RVVMF4x5HF */
  E_RVVM1x5HFmode,         /* RVVMF2x5HF */
  E_RVVMF4x6BFmode,        /* RVVM1x5HF */
  E_RVVMF2x6BFmode,        /* RVVMF4x6BF */
  E_RVVM1x6BFmode,         /* RVVMF2x6BF */
  E_RVVMF4x6HFmode,        /* RVVM1x6BF */
  E_RVVMF2x6HFmode,        /* RVVMF4x6HF */
  E_RVVM1x6HFmode,         /* RVVMF2x6HF */
  E_RVVMF2x3SFmode,        /* RVVM1x6HF */
  E_RVVM1x3SFmode,         /* RVVMF2x3SF */
  E_RVVM2x3SFmode,         /* RVVM1x3SF */
  E_RVVMF4x7BFmode,        /* RVVM2x3SF */
  E_RVVMF2x7BFmode,        /* RVVMF4x7BF */
  E_RVVM1x7BFmode,         /* RVVMF2x7BF */
  E_RVVMF4x7HFmode,        /* RVVM1x7BF */
  E_RVVMF2x7HFmode,        /* RVVMF4x7HF */
  E_RVVM1x7HFmode,         /* RVVMF2x7HF */
  E_RVVMF4x8BFmode,        /* RVVM1x7HF */
  E_RVVMF2x8BFmode,        /* RVVMF4x8BF */
  E_RVVM1x8BFmode,         /* RVVMF2x8BF */
  E_RVVMF4x8HFmode,        /* RVVM1x8BF */
  E_RVVMF2x8HFmode,        /* RVVMF4x8HF */
  E_RVVM1x8HFmode,         /* RVVMF2x8HF */
  E_V8HFmode,              /* RVVM1x8HF */
  E_V8BFmode,              /* V8HF */
  E_RVVMF2x4SFmode,        /* V8BF */
  E_RVVM1x4SFmode,         /* RVVMF2x4SF */
  E_RVVM2x4SFmode,         /* RVVM1x4SF */
  E_V4SFmode,              /* RVVM2x4SF */
  E_RVVM1x2DFmode,         /* V4SF */
  E_RVVM2x2DFmode,         /* RVVM1x2DF */
  E_RVVM4x2DFmode,         /* RVVM2x2DF */
  E_V2DFmode,              /* RVVM4x2DF */
  E_RVVMF2x5SFmode,        /* V2DF */
  E_RVVM1x5SFmode,         /* RVVMF2x5SF */
  E_RVVMF2x6SFmode,        /* RVVM1x5SF */
  E_RVVM1x6SFmode,         /* RVVMF2x6SF */
  E_RVVM1x3DFmode,         /* RVVM1x6SF */
  E_RVVM2x3DFmode,         /* RVVM1x3DF */
  E_RVVMF2x7SFmode,        /* RVVM2x3DF */
  E_RVVM1x7SFmode,         /* RVVMF2x7SF */
  E_V16HFmode,             /* RVVM1x7SF */
  E_V16BFmode,             /* V16HF */
  E_RVVMF2x8SFmode,        /* V16BF */
  E_RVVM1x8SFmode,         /* RVVMF2x8SF */
  E_V8SFmode,              /* RVVM1x8SF */
  E_RVVM1x4DFmode,         /* V8SF */
  E_RVVM2x4DFmode,         /* RVVM1x4DF */
  E_V4DFmode,              /* RVVM2x4DF */
  E_RVVM1x5DFmode,         /* V4DF */
  E_RVVM1x6DFmode,         /* RVVM1x5DF */
  E_RVVM1x7DFmode,         /* RVVM1x6DF */
  E_V32HFmode,             /* RVVM1x7DF */
  E_V32BFmode,             /* V32HF */
  E_V16SFmode,             /* V32BF */
  E_RVVM1x8DFmode,         /* V16SF */
  E_V8DFmode,              /* RVVM1x8DF */
  E_V64HFmode,             /* V8DF */
  E_V64BFmode,             /* V64HF */
  E_V32SFmode,             /* V64BF */
  E_V16DFmode,             /* V32SF */
  E_V128HFmode,            /* V16DF */
  E_V128BFmode,            /* V128HF */
  E_V64SFmode,             /* V128BF */
  E_V32DFmode,             /* V64SF */
  E_V256HFmode,            /* V32DF */
  E_V256BFmode,            /* V256HF */
  E_V128SFmode,            /* V256BF */
  E_V64DFmode,             /* V128SF */
  E_V512HFmode,            /* V64DF */
  E_V512BFmode,            /* V512HF */
  E_V256SFmode,            /* V512BF */
  E_V128DFmode,            /* V256SF */
  E_V1024HFmode,           /* V128DF */
  E_V1024BFmode,           /* V1024HF */
  E_V512SFmode,            /* V1024BF */
  E_V256DFmode,            /* V512SF */
  E_V2048HFmode,           /* V256DF */
  E_V2048BFmode,           /* V2048HF */
  E_V1024SFmode,           /* V2048BF */
  E_V512DFmode,            /* V1024SF */
  E_VOIDmode,              /* V512DF */
};

const unsigned short mode_wider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_VOIDmode,              /* OI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_VOIDmode,              /* CQI */
  E_VOIDmode,              /* CHI */
  E_VOIDmode,              /* CSI */
  E_VOIDmode,              /* CDI */
  E_VOIDmode,              /* CTI */
  E_VOIDmode,              /* COI */
  E_SCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* RVVMF8BI */
  E_VOIDmode,              /* RVVMF16BI */
  E_VOIDmode,              /* RVVMF32BI */
  E_VOIDmode,              /* RVVMF64BI */
  E_VOIDmode,              /* V1BI */
  E_VOIDmode,              /* V2BI */
  E_VOIDmode,              /* V4BI */
  E_VOIDmode,              /* V8BI */
  E_VOIDmode,              /* RVVMF4BI */
  E_VOIDmode,              /* V16BI */
  E_VOIDmode,              /* RVVMF2BI */
  E_VOIDmode,              /* V32BI */
  E_VOIDmode,              /* RVVM1BI */
  E_VOIDmode,              /* V64BI */
  E_VOIDmode,              /* V128BI */
  E_VOIDmode,              /* V256BI */
  E_VOIDmode,              /* V512BI */
  E_VOIDmode,              /* V1024BI */
  E_VOIDmode,              /* V2048BI */
  E_VOIDmode,              /* V4096BI */
  E_VOIDmode,              /* RVVM1QI */
  E_VOIDmode,              /* RVVM2QI */
  E_VOIDmode,              /* RVVMF2QI */
  E_VOIDmode,              /* RVVM1HI */
  E_VOIDmode,              /* RVVM4QI */
  E_VOIDmode,              /* RVVMF4QI */
  E_VOIDmode,              /* RVVM2HI */
  E_VOIDmode,              /* RVVMF2HI */
  E_VOIDmode,              /* RVVM1SI */
  E_VOIDmode,              /* RVVM8QI */
  E_VOIDmode,              /* RVVMF8QI */
  E_VOIDmode,              /* RVVM4HI */
  E_VOIDmode,              /* RVVMF4HI */
  E_VOIDmode,              /* RVVM2SI */
  E_VOIDmode,              /* RVVMF2SI */
  E_VOIDmode,              /* RVVM1DI */
  E_VOIDmode,              /* RVVM8HI */
  E_VOIDmode,              /* RVVM4SI */
  E_VOIDmode,              /* RVVM2DI */
  E_VOIDmode,              /* RVVM8SI */
  E_VOIDmode,              /* RVVM4DI */
  E_VOIDmode,              /* RVVM8DI */
  E_VOIDmode,              /* V1QI */
  E_VOIDmode,              /* RVVMF8x2QI */
  E_VOIDmode,              /* RVVMF4x2QI */
  E_VOIDmode,              /* RVVMF2x2QI */
  E_VOIDmode,              /* RVVM1x2QI */
  E_VOIDmode,              /* RVVM2x2QI */
  E_VOIDmode,              /* RVVM4x2QI */
  E_VOIDmode,              /* V2QI */
  E_VOIDmode,              /* V1HI */
  E_VOIDmode,              /* RVVMF8x3QI */
  E_VOIDmode,              /* RVVMF4x3QI */
  E_VOIDmode,              /* RVVMF2x3QI */
  E_VOIDmode,              /* RVVM1x3QI */
  E_VOIDmode,              /* RVVM2x3QI */
  E_VOIDmode,              /* RVVMF8x4QI */
  E_VOIDmode,              /* RVVMF4x4QI */
  E_VOIDmode,              /* RVVMF2x4QI */
  E_VOIDmode,              /* RVVM1x4QI */
  E_VOIDmode,              /* RVVM2x4QI */
  E_VOIDmode,              /* V4QI */
  E_VOIDmode,              /* RVVMF4x2HI */
  E_VOIDmode,              /* RVVMF2x2HI */
  E_VOIDmode,              /* RVVM1x2HI */
  E_VOIDmode,              /* RVVM2x2HI */
  E_VOIDmode,              /* RVVM4x2HI */
  E_VOIDmode,              /* V2HI */
  E_VOIDmode,              /* V1SI */
  E_VOIDmode,              /* RVVMF8x5QI */
  E_VOIDmode,              /* RVVMF4x5QI */
  E_VOIDmode,              /* RVVMF2x5QI */
  E_VOIDmode,              /* RVVM1x5QI */
  E_VOIDmode,              /* RVVMF8x6QI */
  E_VOIDmode,              /* RVVMF4x6QI */
  E_VOIDmode,              /* RVVMF2x6QI */
  E_VOIDmode,              /* RVVM1x6QI */
  E_VOIDmode,              /* RVVMF4x3HI */
  E_VOIDmode,              /* RVVMF2x3HI */
  E_VOIDmode,              /* RVVM1x3HI */
  E_VOIDmode,              /* RVVM2x3HI */
  E_VOIDmode,              /* RVVMF8x7QI */
  E_VOIDmode,              /* RVVMF4x7QI */
  E_VOIDmode,              /* RVVMF2x7QI */
  E_VOIDmode,              /* RVVM1x7QI */
  E_VOIDmode,              /* RVVMF8x8QI */
  E_VOIDmode,              /* RVVMF4x8QI */
  E_VOIDmode,              /* RVVMF2x8QI */
  E_VOIDmode,              /* RVVM1x8QI */
  E_VOIDmode,              /* V8QI */
  E_VOIDmode,              /* RVVMF4x4HI */
  E_VOIDmode,              /* RVVMF2x4HI */
  E_VOIDmode,              /* RVVM1x4HI */
  E_VOIDmode,              /* RVVM2x4HI */
  E_VOIDmode,              /* V4HI */
  E_VOIDmode,              /* RVVMF2x2SI */
  E_VOIDmode,              /* RVVM1x2SI */
  E_VOIDmode,              /* RVVM2x2SI */
  E_VOIDmode,              /* RVVM4x2SI */
  E_VOIDmode,              /* V2SI */
  E_VOIDmode,              /* V1DI */
  E_VOIDmode,              /* RVVMF4x5HI */
  E_VOIDmode,              /* RVVMF2x5HI */
  E_VOIDmode,              /* RVVM1x5HI */
  E_VOIDmode,              /* RVVMF4x6HI */
  E_VOIDmode,              /* RVVMF2x6HI */
  E_VOIDmode,              /* RVVM1x6HI */
  E_VOIDmode,              /* RVVMF2x3SI */
  E_VOIDmode,              /* RVVM1x3SI */
  E_VOIDmode,              /* RVVM2x3SI */
  E_VOIDmode,              /* RVVMF4x7HI */
  E_VOIDmode,              /* RVVMF2x7HI */
  E_VOIDmode,              /* RVVM1x7HI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* RVVMF4x8HI */
  E_VOIDmode,              /* RVVMF2x8HI */
  E_VOIDmode,              /* RVVM1x8HI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* RVVMF2x4SI */
  E_VOIDmode,              /* RVVM1x4SI */
  E_VOIDmode,              /* RVVM2x4SI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* RVVM1x2DI */
  E_VOIDmode,              /* RVVM2x2DI */
  E_VOIDmode,              /* RVVM4x2DI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* RVVMF2x5SI */
  E_VOIDmode,              /* RVVM1x5SI */
  E_VOIDmode,              /* RVVMF2x6SI */
  E_VOIDmode,              /* RVVM1x6SI */
  E_VOIDmode,              /* RVVM1x3DI */
  E_VOIDmode,              /* RVVM2x3DI */
  E_VOIDmode,              /* RVVMF2x7SI */
  E_VOIDmode,              /* RVVM1x7SI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* RVVMF2x8SI */
  E_VOIDmode,              /* RVVM1x8SI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* RVVM1x4DI */
  E_VOIDmode,              /* RVVM2x4DI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* RVVM1x5DI */
  E_VOIDmode,              /* RVVM1x6DI */
  E_VOIDmode,              /* RVVM1x7DI */
  E_VOIDmode,              /* V64QI */
  E_VOIDmode,              /* V32HI */
  E_VOIDmode,              /* V16SI */
  E_VOIDmode,              /* RVVM1x8DI */
  E_VOIDmode,              /* V8DI */
  E_VOIDmode,              /* V128QI */
  E_VOIDmode,              /* V64HI */
  E_VOIDmode,              /* V32SI */
  E_VOIDmode,              /* V16DI */
  E_VOIDmode,              /* V256QI */
  E_VOIDmode,              /* V128HI */
  E_VOIDmode,              /* V64SI */
  E_VOIDmode,              /* V32DI */
  E_VOIDmode,              /* V512QI */
  E_VOIDmode,              /* V256HI */
  E_VOIDmode,              /* V128SI */
  E_VOIDmode,              /* V64DI */
  E_VOIDmode,              /* V1024QI */
  E_VOIDmode,              /* V512HI */
  E_VOIDmode,              /* V256SI */
  E_VOIDmode,              /* V128DI */
  E_VOIDmode,              /* V2048QI */
  E_VOIDmode,              /* V1024HI */
  E_VOIDmode,              /* V512SI */
  E_VOIDmode,              /* V256DI */
  E_VOIDmode,              /* V4096QI */
  E_VOIDmode,              /* V2048HI */
  E_VOIDmode,              /* V1024SI */
  E_VOIDmode,              /* V512DI */
  E_VOIDmode,              /* RVVM1BF */
  E_VOIDmode,              /* RVVM1HF */
  E_VOIDmode,              /* RVVM2BF */
  E_VOIDmode,              /* RVVM2HF */
  E_VOIDmode,              /* RVVMF2BF */
  E_VOIDmode,              /* RVVMF2HF */
  E_VOIDmode,              /* RVVM1SF */
  E_VOIDmode,              /* RVVM4BF */
  E_VOIDmode,              /* RVVM4HF */
  E_VOIDmode,              /* RVVMF4BF */
  E_VOIDmode,              /* RVVMF4HF */
  E_VOIDmode,              /* RVVM2SF */
  E_VOIDmode,              /* RVVMF2SF */
  E_VOIDmode,              /* RVVM1DF */
  E_VOIDmode,              /* RVVM8BF */
  E_VOIDmode,              /* RVVM8HF */
  E_VOIDmode,              /* RVVM4SF */
  E_VOIDmode,              /* RVVM2DF */
  E_VOIDmode,              /* RVVM8SF */
  E_VOIDmode,              /* RVVM4DF */
  E_VOIDmode,              /* RVVM8DF */
  E_VOIDmode,              /* V1HF */
  E_VOIDmode,              /* V1BF */
  E_VOIDmode,              /* RVVMF4x2BF */
  E_VOIDmode,              /* RVVMF2x2BF */
  E_VOIDmode,              /* RVVM1x2BF */
  E_VOIDmode,              /* RVVMF4x2HF */
  E_VOIDmode,              /* RVVMF2x2HF */
  E_VOIDmode,              /* RVVM1x2HF */
  E_VOIDmode,              /* RVVM2x2BF */
  E_VOIDmode,              /* RVVM2x2HF */
  E_VOIDmode,              /* RVVM4x2BF */
  E_VOIDmode,              /* RVVM4x2HF */
  E_VOIDmode,              /* V2HF */
  E_VOIDmode,              /* V2BF */
  E_VOIDmode,              /* V1SF */
  E_VOIDmode,              /* RVVMF4x3BF */
  E_VOIDmode,              /* RVVMF2x3BF */
  E_VOIDmode,              /* RVVM1x3BF */
  E_VOIDmode,              /* RVVMF4x3HF */
  E_VOIDmode,              /* RVVMF2x3HF */
  E_VOIDmode,              /* RVVM1x3HF */
  E_VOIDmode,              /* RVVM2x3BF */
  E_VOIDmode,              /* RVVM2x3HF */
  E_VOIDmode,              /* RVVMF4x4BF */
  E_VOIDmode,              /* RVVMF2x4BF */
  E_VOIDmode,              /* RVVM1x4BF */
  E_VOIDmode,              /* RVVMF4x4HF */
  E_VOIDmode,              /* RVVMF2x4HF */
  E_VOIDmode,              /* RVVM1x4HF */
  E_VOIDmode,              /* RVVM2x4BF */
  E_VOIDmode,              /* RVVM2x4HF */
  E_VOIDmode,              /* V4HF */
  E_VOIDmode,              /* V4BF */
  E_VOIDmode,              /* RVVMF2x2SF */
  E_VOIDmode,              /* RVVM1x2SF */
  E_VOIDmode,              /* RVVM2x2SF */
  E_VOIDmode,              /* RVVM4x2SF */
  E_VOIDmode,              /* V2SF */
  E_VOIDmode,              /* V1DF */
  E_VOIDmode,              /* RVVMF4x5BF */
  E_VOIDmode,              /* RVVMF2x5BF */
  E_VOIDmode,              /* RVVM1x5BF */
  E_VOIDmode,              /* RVVMF4x5HF */
  E_VOIDmode,              /* RVVMF2x5HF */
  E_VOIDmode,              /* RVVM1x5HF */
  E_VOIDmode,              /* RVVMF4x6BF */
  E_VOIDmode,              /* RVVMF2x6BF */
  E_VOIDmode,              /* RVVM1x6BF */
  E_VOIDmode,              /* RVVMF4x6HF */
  E_VOIDmode,              /* RVVMF2x6HF */
  E_VOIDmode,              /* RVVM1x6HF */
  E_VOIDmode,              /* RVVMF2x3SF */
  E_VOIDmode,              /* RVVM1x3SF */
  E_VOIDmode,              /* RVVM2x3SF */
  E_VOIDmode,              /* RVVMF4x7BF */
  E_VOIDmode,              /* RVVMF2x7BF */
  E_VOIDmode,              /* RVVM1x7BF */
  E_VOIDmode,              /* RVVMF4x7HF */
  E_VOIDmode,              /* RVVMF2x7HF */
  E_VOIDmode,              /* RVVM1x7HF */
  E_VOIDmode,              /* RVVMF4x8BF */
  E_VOIDmode,              /* RVVMF2x8BF */
  E_VOIDmode,              /* RVVM1x8BF */
  E_VOIDmode,              /* RVVMF4x8HF */
  E_VOIDmode,              /* RVVMF2x8HF */
  E_VOIDmode,              /* RVVM1x8HF */
  E_VOIDmode,              /* V8HF */
  E_VOIDmode,              /* V8BF */
  E_VOIDmode,              /* RVVMF2x4SF */
  E_VOIDmode,              /* RVVM1x4SF */
  E_VOIDmode,              /* RVVM2x4SF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* RVVM1x2DF */
  E_VOIDmode,              /* RVVM2x2DF */
  E_VOIDmode,              /* RVVM4x2DF */
  E_VOIDmode,              /* V2DF */
  E_VOIDmode,              /* RVVMF2x5SF */
  E_VOIDmode,              /* RVVM1x5SF */
  E_VOIDmode,              /* RVVMF2x6SF */
  E_VOIDmode,              /* RVVM1x6SF */
  E_VOIDmode,              /* RVVM1x3DF */
  E_VOIDmode,              /* RVVM2x3DF */
  E_VOIDmode,              /* RVVMF2x7SF */
  E_VOIDmode,              /* RVVM1x7SF */
  E_VOIDmode,              /* V16HF */
  E_VOIDmode,              /* V16BF */
  E_VOIDmode,              /* RVVMF2x8SF */
  E_VOIDmode,              /* RVVM1x8SF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* RVVM1x4DF */
  E_VOIDmode,              /* RVVM2x4DF */
  E_VOIDmode,              /* V4DF */
  E_VOIDmode,              /* RVVM1x5DF */
  E_VOIDmode,              /* RVVM1x6DF */
  E_VOIDmode,              /* RVVM1x7DF */
  E_VOIDmode,              /* V32HF */
  E_VOIDmode,              /* V32BF */
  E_VOIDmode,              /* V16SF */
  E_VOIDmode,              /* RVVM1x8DF */
  E_VOIDmode,              /* V8DF */
  E_VOIDmode,              /* V64HF */
  E_VOIDmode,              /* V64BF */
  E_VOIDmode,              /* V32SF */
  E_VOIDmode,              /* V16DF */
  E_VOIDmode,              /* V128HF */
  E_VOIDmode,              /* V128BF */
  E_VOIDmode,              /* V64SF */
  E_VOIDmode,              /* V32DF */
  E_VOIDmode,              /* V256HF */
  E_VOIDmode,              /* V256BF */
  E_VOIDmode,              /* V128SF */
  E_VOIDmode,              /* V64DF */
  E_VOIDmode,              /* V512HF */
  E_VOIDmode,              /* V512BF */
  E_VOIDmode,              /* V256SF */
  E_VOIDmode,              /* V128DF */
  E_VOIDmode,              /* V1024HF */
  E_VOIDmode,              /* V1024BF */
  E_VOIDmode,              /* V512SF */
  E_VOIDmode,              /* V256DF */
  E_VOIDmode,              /* V2048HF */
  E_VOIDmode,              /* V2048BF */
  E_VOIDmode,              /* V1024SF */
  E_VOIDmode,              /* V512DF */
};

const unsigned short mode_2xwider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_VOIDmode,              /* OI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_VOIDmode,              /* COI */
  E_SCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_RVVMF4BImode,          /* RVVMF8BI */
  E_VOIDmode,              /* RVVMF16BI */
  E_VOIDmode,              /* RVVMF32BI */
  E_VOIDmode,              /* RVVMF64BI */
  E_VOIDmode,              /* V1BI */
  E_VOIDmode,              /* V2BI */
  E_VOIDmode,              /* V4BI */
  E_RVVMF4BImode,          /* V8BI */
  E_RVVMF2BImode,          /* RVVMF4BI */
  E_RVVMF2BImode,          /* V16BI */
  E_RVVM1BImode,           /* RVVMF2BI */
  E_RVVM1BImode,           /* V32BI */
  E_V128BImode,            /* RVVM1BI */
  E_V128BImode,            /* V64BI */
  E_V256BImode,            /* V128BI */
  E_V512BImode,            /* V256BI */
  E_V1024BImode,           /* V512BI */
  E_V2048BImode,           /* V1024BI */
  E_V4096BImode,           /* V2048BI */
  E_VOIDmode,              /* V4096BI */
  E_RVVM2QImode,           /* RVVM1QI */
  E_RVVM4QImode,           /* RVVM2QI */
  E_RVVM4QImode,           /* RVVMF2QI */
  E_RVVM2HImode,           /* RVVM1HI */
  E_RVVM8QImode,           /* RVVM4QI */
  E_RVVM8QImode,           /* RVVMF4QI */
  E_RVVM4HImode,           /* RVVM2HI */
  E_RVVM4HImode,           /* RVVMF2HI */
  E_RVVM2SImode,           /* RVVM1SI */
  E_V16QImode,             /* RVVM8QI */
  E_V16QImode,             /* RVVMF8QI */
  E_RVVM8HImode,           /* RVVM4HI */
  E_RVVM8HImode,           /* RVVMF4HI */
  E_RVVM4SImode,           /* RVVM2SI */
  E_RVVM4SImode,           /* RVVMF2SI */
  E_RVVM2DImode,           /* RVVM1DI */
  E_V16HImode,             /* RVVM8HI */
  E_RVVM8SImode,           /* RVVM4SI */
  E_RVVM4DImode,           /* RVVM2DI */
  E_V16SImode,             /* RVVM8SI */
  E_RVVM8DImode,           /* RVVM4DI */
  E_V16DImode,             /* RVVM8DI */
  E_RVVMF8x2QImode,        /* V1QI */
  E_RVVMF8x4QImode,        /* RVVMF8x2QI */
  E_RVVMF8x4QImode,        /* RVVMF4x2QI */
  E_RVVMF8x4QImode,        /* RVVMF2x2QI */
  E_RVVMF8x4QImode,        /* RVVM1x2QI */
  E_RVVMF8x4QImode,        /* RVVM2x2QI */
  E_RVVMF8x4QImode,        /* RVVM4x2QI */
  E_RVVMF8x4QImode,        /* V2QI */
  E_RVVMF4x2HImode,        /* V1HI */
  E_RVVMF8x6QImode,        /* RVVMF8x3QI */
  E_RVVMF8x6QImode,        /* RVVMF4x3QI */
  E_RVVMF8x6QImode,        /* RVVMF2x3QI */
  E_RVVMF8x6QImode,        /* RVVM1x3QI */
  E_RVVMF8x6QImode,        /* RVVM2x3QI */
  E_RVVMF8x8QImode,        /* RVVMF8x4QI */
  E_RVVMF8x8QImode,        /* RVVMF4x4QI */
  E_RVVMF8x8QImode,        /* RVVMF2x4QI */
  E_RVVMF8x8QImode,        /* RVVM1x4QI */
  E_RVVMF8x8QImode,        /* RVVM2x4QI */
  E_RVVMF8x8QImode,        /* V4QI */
  E_RVVMF4x4HImode,        /* RVVMF4x2HI */
  E_RVVMF4x4HImode,        /* RVVMF2x2HI */
  E_RVVMF4x4HImode,        /* RVVM1x2HI */
  E_RVVMF4x4HImode,        /* RVVM2x2HI */
  E_RVVMF4x4HImode,        /* RVVM4x2HI */
  E_RVVMF4x4HImode,        /* V2HI */
  E_RVVMF2x2SImode,        /* V1SI */
  E_VOIDmode,              /* RVVMF8x5QI */
  E_VOIDmode,              /* RVVMF4x5QI */
  E_VOIDmode,              /* RVVMF2x5QI */
  E_VOIDmode,              /* RVVM1x5QI */
  E_VOIDmode,              /* RVVMF8x6QI */
  E_VOIDmode,              /* RVVMF4x6QI */
  E_VOIDmode,              /* RVVMF2x6QI */
  E_VOIDmode,              /* RVVM1x6QI */
  E_RVVMF4x6HImode,        /* RVVMF4x3HI */
  E_RVVMF4x6HImode,        /* RVVMF2x3HI */
  E_RVVMF4x6HImode,        /* RVVM1x3HI */
  E_RVVMF4x6HImode,        /* RVVM2x3HI */
  E_VOIDmode,              /* RVVMF8x7QI */
  E_VOIDmode,              /* RVVMF4x7QI */
  E_VOIDmode,              /* RVVMF2x7QI */
  E_VOIDmode,              /* RVVM1x7QI */
  E_V16QImode,             /* RVVMF8x8QI */
  E_V16QImode,             /* RVVMF4x8QI */
  E_V16QImode,             /* RVVMF2x8QI */
  E_V16QImode,             /* RVVM1x8QI */
  E_V16QImode,             /* V8QI */
  E_RVVMF4x8HImode,        /* RVVMF4x4HI */
  E_RVVMF4x8HImode,        /* RVVMF2x4HI */
  E_RVVMF4x8HImode,        /* RVVM1x4HI */
  E_RVVMF4x8HImode,        /* RVVM2x4HI */
  E_RVVMF4x8HImode,        /* V4HI */
  E_RVVMF2x4SImode,        /* RVVMF2x2SI */
  E_RVVMF2x4SImode,        /* RVVM1x2SI */
  E_RVVMF2x4SImode,        /* RVVM2x2SI */
  E_RVVMF2x4SImode,        /* RVVM4x2SI */
  E_RVVMF2x4SImode,        /* V2SI */
  E_RVVM1x2DImode,         /* V1DI */
  E_VOIDmode,              /* RVVMF4x5HI */
  E_VOIDmode,              /* RVVMF2x5HI */
  E_VOIDmode,              /* RVVM1x5HI */
  E_VOIDmode,              /* RVVMF4x6HI */
  E_VOIDmode,              /* RVVMF2x6HI */
  E_VOIDmode,              /* RVVM1x6HI */
  E_RVVMF2x6SImode,        /* RVVMF2x3SI */
  E_RVVMF2x6SImode,        /* RVVM1x3SI */
  E_RVVMF2x6SImode,        /* RVVM2x3SI */
  E_VOIDmode,              /* RVVMF4x7HI */
  E_VOIDmode,              /* RVVMF2x7HI */
  E_VOIDmode,              /* RVVM1x7HI */
  E_V32QImode,             /* V16QI */
  E_V16HImode,             /* RVVMF4x8HI */
  E_V16HImode,             /* RVVMF2x8HI */
  E_V16HImode,             /* RVVM1x8HI */
  E_V16HImode,             /* V8HI */
  E_RVVMF2x8SImode,        /* RVVMF2x4SI */
  E_RVVMF2x8SImode,        /* RVVM1x4SI */
  E_RVVMF2x8SImode,        /* RVVM2x4SI */
  E_RVVMF2x8SImode,        /* V4SI */
  E_RVVM1x4DImode,         /* RVVM1x2DI */
  E_RVVM1x4DImode,         /* RVVM2x2DI */
  E_RVVM1x4DImode,         /* RVVM4x2DI */
  E_RVVM1x4DImode,         /* V2DI */
  E_VOIDmode,              /* RVVMF2x5SI */
  E_VOIDmode,              /* RVVM1x5SI */
  E_VOIDmode,              /* RVVMF2x6SI */
  E_VOIDmode,              /* RVVM1x6SI */
  E_RVVM1x6DImode,         /* RVVM1x3DI */
  E_RVVM1x6DImode,         /* RVVM2x3DI */
  E_VOIDmode,              /* RVVMF2x7SI */
  E_VOIDmode,              /* RVVM1x7SI */
  E_V64QImode,             /* V32QI */
  E_V32HImode,             /* V16HI */
  E_V16SImode,             /* RVVMF2x8SI */
  E_V16SImode,             /* RVVM1x8SI */
  E_V16SImode,             /* V8SI */
  E_RVVM1x8DImode,         /* RVVM1x4DI */
  E_RVVM1x8DImode,         /* RVVM2x4DI */
  E_RVVM1x8DImode,         /* V4DI */
  E_VOIDmode,              /* RVVM1x5DI */
  E_VOIDmode,              /* RVVM1x6DI */
  E_VOIDmode,              /* RVVM1x7DI */
  E_V128QImode,            /* V64QI */
  E_V64HImode,             /* V32HI */
  E_V32SImode,             /* V16SI */
  E_V16DImode,             /* RVVM1x8DI */
  E_V16DImode,             /* V8DI */
  E_V256QImode,            /* V128QI */
  E_V128HImode,            /* V64HI */
  E_V64SImode,             /* V32SI */
  E_V32DImode,             /* V16DI */
  E_V512QImode,            /* V256QI */
  E_V256HImode,            /* V128HI */
  E_V128SImode,            /* V64SI */
  E_V64DImode,             /* V32DI */
  E_V1024QImode,           /* V512QI */
  E_V512HImode,            /* V256HI */
  E_V256SImode,            /* V128SI */
  E_V128DImode,            /* V64DI */
  E_V2048QImode,           /* V1024QI */
  E_V1024HImode,           /* V512HI */
  E_V512SImode,            /* V256SI */
  E_V256DImode,            /* V128DI */
  E_V4096QImode,           /* V2048QI */
  E_V2048HImode,           /* V1024HI */
  E_V1024SImode,           /* V512SI */
  E_V512DImode,            /* V256DI */
  E_VOIDmode,              /* V4096QI */
  E_VOIDmode,              /* V2048HI */
  E_VOIDmode,              /* V1024SI */
  E_VOIDmode,              /* V512DI */
  E_RVVM2BFmode,           /* RVVM1BF */
  E_RVVM2HFmode,           /* RVVM1HF */
  E_RVVM4BFmode,           /* RVVM2BF */
  E_RVVM4HFmode,           /* RVVM2HF */
  E_RVVM4BFmode,           /* RVVMF2BF */
  E_RVVM4HFmode,           /* RVVMF2HF */
  E_RVVM2SFmode,           /* RVVM1SF */
  E_RVVM8BFmode,           /* RVVM4BF */
  E_RVVM8HFmode,           /* RVVM4HF */
  E_RVVM8BFmode,           /* RVVMF4BF */
  E_RVVM8HFmode,           /* RVVMF4HF */
  E_RVVM4SFmode,           /* RVVM2SF */
  E_RVVM4SFmode,           /* RVVMF2SF */
  E_RVVM2DFmode,           /* RVVM1DF */
  E_V16BFmode,             /* RVVM8BF */
  E_V16HFmode,             /* RVVM8HF */
  E_RVVM8SFmode,           /* RVVM4SF */
  E_RVVM4DFmode,           /* RVVM2DF */
  E_V16SFmode,             /* RVVM8SF */
  E_RVVM8DFmode,           /* RVVM4DF */
  E_V16DFmode,             /* RVVM8DF */
  E_RVVMF4x2HFmode,        /* V1HF */
  E_RVVMF4x2BFmode,        /* V1BF */
  E_RVVMF4x4BFmode,        /* RVVMF4x2BF */
  E_RVVMF4x4BFmode,        /* RVVMF2x2BF */
  E_RVVMF4x4BFmode,        /* RVVM1x2BF */
  E_RVVMF4x4HFmode,        /* RVVMF4x2HF */
  E_RVVMF4x4HFmode,        /* RVVMF2x2HF */
  E_RVVMF4x4HFmode,        /* RVVM1x2HF */
  E_RVVMF4x4BFmode,        /* RVVM2x2BF */
  E_RVVMF4x4HFmode,        /* RVVM2x2HF */
  E_RVVMF4x4BFmode,        /* RVVM4x2BF */
  E_RVVMF4x4HFmode,        /* RVVM4x2HF */
  E_RVVMF4x4HFmode,        /* V2HF */
  E_RVVMF4x4BFmode,        /* V2BF */
  E_RVVMF2x2SFmode,        /* V1SF */
  E_RVVMF4x6BFmode,        /* RVVMF4x3BF */
  E_RVVMF4x6BFmode,        /* RVVMF2x3BF */
  E_RVVMF4x6BFmode,        /* RVVM1x3BF */
  E_RVVMF4x6HFmode,        /* RVVMF4x3HF */
  E_RVVMF4x6HFmode,        /* RVVMF2x3HF */
  E_RVVMF4x6HFmode,        /* RVVM1x3HF */
  E_RVVMF4x6BFmode,        /* RVVM2x3BF */
  E_RVVMF4x6HFmode,        /* RVVM2x3HF */
  E_RVVMF4x8BFmode,        /* RVVMF4x4BF */
  E_RVVMF4x8BFmode,        /* RVVMF2x4BF */
  E_RVVMF4x8BFmode,        /* RVVM1x4BF */
  E_RVVMF4x8HFmode,        /* RVVMF4x4HF */
  E_RVVMF4x8HFmode,        /* RVVMF2x4HF */
  E_RVVMF4x8HFmode,        /* RVVM1x4HF */
  E_RVVMF4x8BFmode,        /* RVVM2x4BF */
  E_RVVMF4x8HFmode,        /* RVVM2x4HF */
  E_RVVMF4x8HFmode,        /* V4HF */
  E_RVVMF4x8BFmode,        /* V4BF */
  E_RVVMF2x4SFmode,        /* RVVMF2x2SF */
  E_RVVMF2x4SFmode,        /* RVVM1x2SF */
  E_RVVMF2x4SFmode,        /* RVVM2x2SF */
  E_RVVMF2x4SFmode,        /* RVVM4x2SF */
  E_RVVMF2x4SFmode,        /* V2SF */
  E_RVVM1x2DFmode,         /* V1DF */
  E_VOIDmode,              /* RVVMF4x5BF */
  E_VOIDmode,              /* RVVMF2x5BF */
  E_VOIDmode,              /* RVVM1x5BF */
  E_VOIDmode,              /* RVVMF4x5HF */
  E_VOIDmode,              /* RVVMF2x5HF */
  E_VOIDmode,              /* RVVM1x5HF */
  E_VOIDmode,              /* RVVMF4x6BF */
  E_VOIDmode,              /* RVVMF2x6BF */
  E_VOIDmode,              /* RVVM1x6BF */
  E_VOIDmode,              /* RVVMF4x6HF */
  E_VOIDmode,              /* RVVMF2x6HF */
  E_VOIDmode,              /* RVVM1x6HF */
  E_RVVMF2x6SFmode,        /* RVVMF2x3SF */
  E_RVVMF2x6SFmode,        /* RVVM1x3SF */
  E_RVVMF2x6SFmode,        /* RVVM2x3SF */
  E_VOIDmode,              /* RVVMF4x7BF */
  E_VOIDmode,              /* RVVMF2x7BF */
  E_VOIDmode,              /* RVVM1x7BF */
  E_VOIDmode,              /* RVVMF4x7HF */
  E_VOIDmode,              /* RVVMF2x7HF */
  E_VOIDmode,              /* RVVM1x7HF */
  E_V16BFmode,             /* RVVMF4x8BF */
  E_V16BFmode,             /* RVVMF2x8BF */
  E_V16BFmode,             /* RVVM1x8BF */
  E_V16HFmode,             /* RVVMF4x8HF */
  E_V16HFmode,             /* RVVMF2x8HF */
  E_V16HFmode,             /* RVVM1x8HF */
  E_V16HFmode,             /* V8HF */
  E_V16BFmode,             /* V8BF */
  E_RVVMF2x8SFmode,        /* RVVMF2x4SF */
  E_RVVMF2x8SFmode,        /* RVVM1x4SF */
  E_RVVMF2x8SFmode,        /* RVVM2x4SF */
  E_RVVMF2x8SFmode,        /* V4SF */
  E_RVVM1x4DFmode,         /* RVVM1x2DF */
  E_RVVM1x4DFmode,         /* RVVM2x2DF */
  E_RVVM1x4DFmode,         /* RVVM4x2DF */
  E_RVVM1x4DFmode,         /* V2DF */
  E_VOIDmode,              /* RVVMF2x5SF */
  E_VOIDmode,              /* RVVM1x5SF */
  E_VOIDmode,              /* RVVMF2x6SF */
  E_VOIDmode,              /* RVVM1x6SF */
  E_RVVM1x6DFmode,         /* RVVM1x3DF */
  E_RVVM1x6DFmode,         /* RVVM2x3DF */
  E_VOIDmode,              /* RVVMF2x7SF */
  E_VOIDmode,              /* RVVM1x7SF */
  E_V32HFmode,             /* V16HF */
  E_V32BFmode,             /* V16BF */
  E_V16SFmode,             /* RVVMF2x8SF */
  E_V16SFmode,             /* RVVM1x8SF */
  E_V16SFmode,             /* V8SF */
  E_RVVM1x8DFmode,         /* RVVM1x4DF */
  E_RVVM1x8DFmode,         /* RVVM2x4DF */
  E_RVVM1x8DFmode,         /* V4DF */
  E_VOIDmode,              /* RVVM1x5DF */
  E_VOIDmode,              /* RVVM1x6DF */
  E_VOIDmode,              /* RVVM1x7DF */
  E_V64HFmode,             /* V32HF */
  E_V64BFmode,             /* V32BF */
  E_V32SFmode,             /* V16SF */
  E_V16DFmode,             /* RVVM1x8DF */
  E_V16DFmode,             /* V8DF */
  E_V128HFmode,            /* V64HF */
  E_V128BFmode,            /* V64BF */
  E_V64SFmode,             /* V32SF */
  E_V32DFmode,             /* V16DF */
  E_V256HFmode,            /* V128HF */
  E_V256BFmode,            /* V128BF */
  E_V128SFmode,            /* V64SF */
  E_V64DFmode,             /* V32DF */
  E_V512HFmode,            /* V256HF */
  E_V512BFmode,            /* V256BF */
  E_V256SFmode,            /* V128SF */
  E_V128DFmode,            /* V64DF */
  E_V1024HFmode,           /* V512HF */
  E_V1024BFmode,           /* V512BF */
  E_V512SFmode,            /* V256SF */
  E_V256DFmode,            /* V128DF */
  E_V2048HFmode,           /* V1024HF */
  E_V2048BFmode,           /* V1024BF */
  E_V1024SFmode,           /* V512SF */
  E_V512DFmode,            /* V256DF */
  E_VOIDmode,              /* V2048HF */
  E_VOIDmode,              /* V2048BF */
  E_VOIDmode,              /* V1024SF */
  E_VOIDmode,              /* V512DF */
};

const unsigned short mode_complex[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* BI */
  E_CQImode,               /* QI */
  E_CHImode,               /* HI */
  E_CSImode,               /* SI */
  E_CDImode,               /* DI */
  E_CTImode,               /* TI */
  E_COImode,               /* OI */
  E_VOIDmode,              /* QQ */
  E_VOIDmode,              /* HQ */
  E_VOIDmode,              /* SQ */
  E_VOIDmode,              /* DQ */
  E_VOIDmode,              /* TQ */
  E_VOIDmode,              /* UQQ */
  E_VOIDmode,              /* UHQ */
  E_VOIDmode,              /* USQ */
  E_VOIDmode,              /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_VOIDmode,              /* HA */
  E_VOIDmode,              /* SA */
  E_VOIDmode,              /* DA */
  E_VOIDmode,              /* TA */
  E_VOIDmode,              /* UHA */
  E_VOIDmode,              /* USA */
  E_VOIDmode,              /* UDA */
  E_VOIDmode,              /* UTA */
  E_HCmode,                /* HF */
  E_BCmode,                /* BF */
  E_SCmode,                /* SF */
  E_DCmode,                /* DF */
  E_TCmode,                /* TF */
  E_VOIDmode,              /* SD */
  E_VOIDmode,              /* DD */
  E_VOIDmode,              /* TD */
  E_VOIDmode,              /* CQI */
  E_VOIDmode,              /* CHI */
  E_VOIDmode,              /* CSI */
  E_VOIDmode,              /* CDI */
  E_VOIDmode,              /* CTI */
  E_VOIDmode,              /* COI */
  E_VOIDmode,              /* BC */
  E_VOIDmode,              /* HC */
  E_VOIDmode,              /* SC */
  E_VOIDmode,              /* DC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* RVVMF8BI */
  E_VOIDmode,              /* RVVMF16BI */
  E_VOIDmode,              /* RVVMF32BI */
  E_VOIDmode,              /* RVVMF64BI */
  E_VOIDmode,              /* V1BI */
  E_VOIDmode,              /* V2BI */
  E_VOIDmode,              /* V4BI */
  E_VOIDmode,              /* V8BI */
  E_VOIDmode,              /* RVVMF4BI */
  E_VOIDmode,              /* V16BI */
  E_VOIDmode,              /* RVVMF2BI */
  E_VOIDmode,              /* V32BI */
  E_VOIDmode,              /* RVVM1BI */
  E_VOIDmode,              /* V64BI */
  E_VOIDmode,              /* V128BI */
  E_VOIDmode,              /* V256BI */
  E_VOIDmode,              /* V512BI */
  E_VOIDmode,              /* V1024BI */
  E_VOIDmode,              /* V2048BI */
  E_VOIDmode,              /* V4096BI */
  E_VOIDmode,              /* RVVM1QI */
  E_VOIDmode,              /* RVVM2QI */
  E_VOIDmode,              /* RVVMF2QI */
  E_VOIDmode,              /* RVVM1HI */
  E_VOIDmode,              /* RVVM4QI */
  E_VOIDmode,              /* RVVMF4QI */
  E_VOIDmode,              /* RVVM2HI */
  E_VOIDmode,              /* RVVMF2HI */
  E_VOIDmode,              /* RVVM1SI */
  E_VOIDmode,              /* RVVM8QI */
  E_VOIDmode,              /* RVVMF8QI */
  E_VOIDmode,              /* RVVM4HI */
  E_VOIDmode,              /* RVVMF4HI */
  E_VOIDmode,              /* RVVM2SI */
  E_VOIDmode,              /* RVVMF2SI */
  E_VOIDmode,              /* RVVM1DI */
  E_VOIDmode,              /* RVVM8HI */
  E_VOIDmode,              /* RVVM4SI */
  E_VOIDmode,              /* RVVM2DI */
  E_VOIDmode,              /* RVVM8SI */
  E_VOIDmode,              /* RVVM4DI */
  E_VOIDmode,              /* RVVM8DI */
  E_VOIDmode,              /* V1QI */
  E_VOIDmode,              /* RVVMF8x2QI */
  E_VOIDmode,              /* RVVMF4x2QI */
  E_VOIDmode,              /* RVVMF2x2QI */
  E_VOIDmode,              /* RVVM1x2QI */
  E_VOIDmode,              /* RVVM2x2QI */
  E_VOIDmode,              /* RVVM4x2QI */
  E_VOIDmode,              /* V2QI */
  E_VOIDmode,              /* V1HI */
  E_VOIDmode,              /* RVVMF8x3QI */
  E_VOIDmode,              /* RVVMF4x3QI */
  E_VOIDmode,              /* RVVMF2x3QI */
  E_VOIDmode,              /* RVVM1x3QI */
  E_VOIDmode,              /* RVVM2x3QI */
  E_VOIDmode,              /* RVVMF8x4QI */
  E_VOIDmode,              /* RVVMF4x4QI */
  E_VOIDmode,              /* RVVMF2x4QI */
  E_VOIDmode,              /* RVVM1x4QI */
  E_VOIDmode,              /* RVVM2x4QI */
  E_VOIDmode,              /* V4QI */
  E_VOIDmode,              /* RVVMF4x2HI */
  E_VOIDmode,              /* RVVMF2x2HI */
  E_VOIDmode,              /* RVVM1x2HI */
  E_VOIDmode,              /* RVVM2x2HI */
  E_VOIDmode,              /* RVVM4x2HI */
  E_VOIDmode,              /* V2HI */
  E_VOIDmode,              /* V1SI */
  E_VOIDmode,              /* RVVMF8x5QI */
  E_VOIDmode,              /* RVVMF4x5QI */
  E_VOIDmode,              /* RVVMF2x5QI */
  E_VOIDmode,              /* RVVM1x5QI */
  E_VOIDmode,              /* RVVMF8x6QI */
  E_VOIDmode,              /* RVVMF4x6QI */
  E_VOIDmode,              /* RVVMF2x6QI */
  E_VOIDmode,              /* RVVM1x6QI */
  E_VOIDmode,              /* RVVMF4x3HI */
  E_VOIDmode,              /* RVVMF2x3HI */
  E_VOIDmode,              /* RVVM1x3HI */
  E_VOIDmode,              /* RVVM2x3HI */
  E_VOIDmode,              /* RVVMF8x7QI */
  E_VOIDmode,              /* RVVMF4x7QI */
  E_VOIDmode,              /* RVVMF2x7QI */
  E_VOIDmode,              /* RVVM1x7QI */
  E_VOIDmode,              /* RVVMF8x8QI */
  E_VOIDmode,              /* RVVMF4x8QI */
  E_VOIDmode,              /* RVVMF2x8QI */
  E_VOIDmode,              /* RVVM1x8QI */
  E_VOIDmode,              /* V8QI */
  E_VOIDmode,              /* RVVMF4x4HI */
  E_VOIDmode,              /* RVVMF2x4HI */
  E_VOIDmode,              /* RVVM1x4HI */
  E_VOIDmode,              /* RVVM2x4HI */
  E_VOIDmode,              /* V4HI */
  E_VOIDmode,              /* RVVMF2x2SI */
  E_VOIDmode,              /* RVVM1x2SI */
  E_VOIDmode,              /* RVVM2x2SI */
  E_VOIDmode,              /* RVVM4x2SI */
  E_VOIDmode,              /* V2SI */
  E_VOIDmode,              /* V1DI */
  E_VOIDmode,              /* RVVMF4x5HI */
  E_VOIDmode,              /* RVVMF2x5HI */
  E_VOIDmode,              /* RVVM1x5HI */
  E_VOIDmode,              /* RVVMF4x6HI */
  E_VOIDmode,              /* RVVMF2x6HI */
  E_VOIDmode,              /* RVVM1x6HI */
  E_VOIDmode,              /* RVVMF2x3SI */
  E_VOIDmode,              /* RVVM1x3SI */
  E_VOIDmode,              /* RVVM2x3SI */
  E_VOIDmode,              /* RVVMF4x7HI */
  E_VOIDmode,              /* RVVMF2x7HI */
  E_VOIDmode,              /* RVVM1x7HI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* RVVMF4x8HI */
  E_VOIDmode,              /* RVVMF2x8HI */
  E_VOIDmode,              /* RVVM1x8HI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* RVVMF2x4SI */
  E_VOIDmode,              /* RVVM1x4SI */
  E_VOIDmode,              /* RVVM2x4SI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* RVVM1x2DI */
  E_VOIDmode,              /* RVVM2x2DI */
  E_VOIDmode,              /* RVVM4x2DI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* RVVMF2x5SI */
  E_VOIDmode,              /* RVVM1x5SI */
  E_VOIDmode,              /* RVVMF2x6SI */
  E_VOIDmode,              /* RVVM1x6SI */
  E_VOIDmode,              /* RVVM1x3DI */
  E_VOIDmode,              /* RVVM2x3DI */
  E_VOIDmode,              /* RVVMF2x7SI */
  E_VOIDmode,              /* RVVM1x7SI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* RVVMF2x8SI */
  E_VOIDmode,              /* RVVM1x8SI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* RVVM1x4DI */
  E_VOIDmode,              /* RVVM2x4DI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* RVVM1x5DI */
  E_VOIDmode,              /* RVVM1x6DI */
  E_VOIDmode,              /* RVVM1x7DI */
  E_VOIDmode,              /* V64QI */
  E_VOIDmode,              /* V32HI */
  E_VOIDmode,              /* V16SI */
  E_VOIDmode,              /* RVVM1x8DI */
  E_VOIDmode,              /* V8DI */
  E_VOIDmode,              /* V128QI */
  E_VOIDmode,              /* V64HI */
  E_VOIDmode,              /* V32SI */
  E_VOIDmode,              /* V16DI */
  E_VOIDmode,              /* V256QI */
  E_VOIDmode,              /* V128HI */
  E_VOIDmode,              /* V64SI */
  E_VOIDmode,              /* V32DI */
  E_VOIDmode,              /* V512QI */
  E_VOIDmode,              /* V256HI */
  E_VOIDmode,              /* V128SI */
  E_VOIDmode,              /* V64DI */
  E_VOIDmode,              /* V1024QI */
  E_VOIDmode,              /* V512HI */
  E_VOIDmode,              /* V256SI */
  E_VOIDmode,              /* V128DI */
  E_VOIDmode,              /* V2048QI */
  E_VOIDmode,              /* V1024HI */
  E_VOIDmode,              /* V512SI */
  E_VOIDmode,              /* V256DI */
  E_VOIDmode,              /* V4096QI */
  E_VOIDmode,              /* V2048HI */
  E_VOIDmode,              /* V1024SI */
  E_VOIDmode,              /* V512DI */
  E_VOIDmode,              /* RVVM1BF */
  E_VOIDmode,              /* RVVM1HF */
  E_VOIDmode,              /* RVVM2BF */
  E_VOIDmode,              /* RVVM2HF */
  E_VOIDmode,              /* RVVMF2BF */
  E_VOIDmode,              /* RVVMF2HF */
  E_VOIDmode,              /* RVVM1SF */
  E_VOIDmode,              /* RVVM4BF */
  E_VOIDmode,              /* RVVM4HF */
  E_VOIDmode,              /* RVVMF4BF */
  E_VOIDmode,              /* RVVMF4HF */
  E_VOIDmode,              /* RVVM2SF */
  E_VOIDmode,              /* RVVMF2SF */
  E_VOIDmode,              /* RVVM1DF */
  E_VOIDmode,              /* RVVM8BF */
  E_VOIDmode,              /* RVVM8HF */
  E_VOIDmode,              /* RVVM4SF */
  E_VOIDmode,              /* RVVM2DF */
  E_VOIDmode,              /* RVVM8SF */
  E_VOIDmode,              /* RVVM4DF */
  E_VOIDmode,              /* RVVM8DF */
  E_VOIDmode,              /* V1HF */
  E_VOIDmode,              /* V1BF */
  E_VOIDmode,              /* RVVMF4x2BF */
  E_VOIDmode,              /* RVVMF2x2BF */
  E_VOIDmode,              /* RVVM1x2BF */
  E_VOIDmode,              /* RVVMF4x2HF */
  E_VOIDmode,              /* RVVMF2x2HF */
  E_VOIDmode,              /* RVVM1x2HF */
  E_VOIDmode,              /* RVVM2x2BF */
  E_VOIDmode,              /* RVVM2x2HF */
  E_VOIDmode,              /* RVVM4x2BF */
  E_VOIDmode,              /* RVVM4x2HF */
  E_VOIDmode,              /* V2HF */
  E_VOIDmode,              /* V2BF */
  E_VOIDmode,              /* V1SF */
  E_VOIDmode,              /* RVVMF4x3BF */
  E_VOIDmode,              /* RVVMF2x3BF */
  E_VOIDmode,              /* RVVM1x3BF */
  E_VOIDmode,              /* RVVMF4x3HF */
  E_VOIDmode,              /* RVVMF2x3HF */
  E_VOIDmode,              /* RVVM1x3HF */
  E_VOIDmode,              /* RVVM2x3BF */
  E_VOIDmode,              /* RVVM2x3HF */
  E_VOIDmode,              /* RVVMF4x4BF */
  E_VOIDmode,              /* RVVMF2x4BF */
  E_VOIDmode,              /* RVVM1x4BF */
  E_VOIDmode,              /* RVVMF4x4HF */
  E_VOIDmode,              /* RVVMF2x4HF */
  E_VOIDmode,              /* RVVM1x4HF */
  E_VOIDmode,              /* RVVM2x4BF */
  E_VOIDmode,              /* RVVM2x4HF */
  E_VOIDmode,              /* V4HF */
  E_VOIDmode,              /* V4BF */
  E_VOIDmode,              /* RVVMF2x2SF */
  E_VOIDmode,              /* RVVM1x2SF */
  E_VOIDmode,              /* RVVM2x2SF */
  E_VOIDmode,              /* RVVM4x2SF */
  E_VOIDmode,              /* V2SF */
  E_VOIDmode,              /* V1DF */
  E_VOIDmode,              /* RVVMF4x5BF */
  E_VOIDmode,              /* RVVMF2x5BF */
  E_VOIDmode,              /* RVVM1x5BF */
  E_VOIDmode,              /* RVVMF4x5HF */
  E_VOIDmode,              /* RVVMF2x5HF */
  E_VOIDmode,              /* RVVM1x5HF */
  E_VOIDmode,              /* RVVMF4x6BF */
  E_VOIDmode,              /* RVVMF2x6BF */
  E_VOIDmode,              /* RVVM1x6BF */
  E_VOIDmode,              /* RVVMF4x6HF */
  E_VOIDmode,              /* RVVMF2x6HF */
  E_VOIDmode,              /* RVVM1x6HF */
  E_VOIDmode,              /* RVVMF2x3SF */
  E_VOIDmode,              /* RVVM1x3SF */
  E_VOIDmode,              /* RVVM2x3SF */
  E_VOIDmode,              /* RVVMF4x7BF */
  E_VOIDmode,              /* RVVMF2x7BF */
  E_VOIDmode,              /* RVVM1x7BF */
  E_VOIDmode,              /* RVVMF4x7HF */
  E_VOIDmode,              /* RVVMF2x7HF */
  E_VOIDmode,              /* RVVM1x7HF */
  E_VOIDmode,              /* RVVMF4x8BF */
  E_VOIDmode,              /* RVVMF2x8BF */
  E_VOIDmode,              /* RVVM1x8BF */
  E_VOIDmode,              /* RVVMF4x8HF */
  E_VOIDmode,              /* RVVMF2x8HF */
  E_VOIDmode,              /* RVVM1x8HF */
  E_VOIDmode,              /* V8HF */
  E_VOIDmode,              /* V8BF */
  E_VOIDmode,              /* RVVMF2x4SF */
  E_VOIDmode,              /* RVVM1x4SF */
  E_VOIDmode,              /* RVVM2x4SF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* RVVM1x2DF */
  E_VOIDmode,              /* RVVM2x2DF */
  E_VOIDmode,              /* RVVM4x2DF */
  E_VOIDmode,              /* V2DF */
  E_VOIDmode,              /* RVVMF2x5SF */
  E_VOIDmode,              /* RVVM1x5SF */
  E_VOIDmode,              /* RVVMF2x6SF */
  E_VOIDmode,              /* RVVM1x6SF */
  E_VOIDmode,              /* RVVM1x3DF */
  E_VOIDmode,              /* RVVM2x3DF */
  E_VOIDmode,              /* RVVMF2x7SF */
  E_VOIDmode,              /* RVVM1x7SF */
  E_VOIDmode,              /* V16HF */
  E_VOIDmode,              /* V16BF */
  E_VOIDmode,              /* RVVMF2x8SF */
  E_VOIDmode,              /* RVVM1x8SF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* RVVM1x4DF */
  E_VOIDmode,              /* RVVM2x4DF */
  E_VOIDmode,              /* V4DF */
  E_VOIDmode,              /* RVVM1x5DF */
  E_VOIDmode,              /* RVVM1x6DF */
  E_VOIDmode,              /* RVVM1x7DF */
  E_VOIDmode,              /* V32HF */
  E_VOIDmode,              /* V32BF */
  E_VOIDmode,              /* V16SF */
  E_VOIDmode,              /* RVVM1x8DF */
  E_VOIDmode,              /* V8DF */
  E_VOIDmode,              /* V64HF */
  E_VOIDmode,              /* V64BF */
  E_VOIDmode,              /* V32SF */
  E_VOIDmode,              /* V16DF */
  E_VOIDmode,              /* V128HF */
  E_VOIDmode,              /* V128BF */
  E_VOIDmode,              /* V64SF */
  E_VOIDmode,              /* V32DF */
  E_VOIDmode,              /* V256HF */
  E_VOIDmode,              /* V256BF */
  E_VOIDmode,              /* V128SF */
  E_VOIDmode,              /* V64DF */
  E_VOIDmode,              /* V512HF */
  E_VOIDmode,              /* V512BF */
  E_VOIDmode,              /* V256SF */
  E_VOIDmode,              /* V128DF */
  E_VOIDmode,              /* V1024HF */
  E_VOIDmode,              /* V1024BF */
  E_VOIDmode,              /* V512SF */
  E_VOIDmode,              /* V256DF */
  E_VOIDmode,              /* V2048HF */
  E_VOIDmode,              /* V2048BF */
  E_VOIDmode,              /* V1024SF */
  E_VOIDmode,              /* V512DF */
};

unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] = 
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? HOST_WIDE_INT_M1U                        \
   : (HOST_WIDE_INT_1U << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (32*BITS_PER_UNIT),    /* OI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* SQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* DQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* TQ */
  MODE_MASK (1*BITS_PER_UNIT),   /* UQQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* USQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SA */
  MODE_MASK (8*BITS_PER_UNIT),   /* DA */
  MODE_MASK (16*BITS_PER_UNIT),    /* TA */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHA */
  MODE_MASK (4*BITS_PER_UNIT),   /* USA */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDA */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTA */
  MODE_MASK (2*BITS_PER_UNIT),   /* HF */
  MODE_MASK (2*BITS_PER_UNIT),   /* BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SD */
  MODE_MASK (8*BITS_PER_UNIT),   /* DD */
  MODE_MASK (16*BITS_PER_UNIT),    /* TD */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (64*BITS_PER_UNIT),    /* COI */
  MODE_MASK (4*BITS_PER_UNIT),   /* BC */
  MODE_MASK (4*BITS_PER_UNIT),   /* HC */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (1*BITS_PER_UNIT),   /* RVVMF8BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* RVVMF16BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* RVVMF32BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* RVVMF64BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* V1BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* V2BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* V4BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* V8BI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVMF4BI */
  MODE_MASK (2*BITS_PER_UNIT),   /* V16BI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2BI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V32BI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1BI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V64BI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V128BI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V256BI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V512BI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V1024BI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V2048BI */
  MODE_MASK (512*BITS_PER_UNIT),     /* V4096BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* RVVM1QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVMF2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM1HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM4DI */
  MODE_MASK (64*BITS_PER_UNIT),    /* RVVM8DI */
  MODE_MASK (1*BITS_PER_UNIT),   /* V1QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVMF8x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVMF4x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVMF2x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM1x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM2x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM4x2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* V2QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* V1HI */
  MODE_MASK (3*BITS_PER_UNIT),   /* RVVMF8x3QI */
  MODE_MASK (3*BITS_PER_UNIT),   /* RVVMF4x3QI */
  MODE_MASK (3*BITS_PER_UNIT),   /* RVVMF2x3QI */
  MODE_MASK (3*BITS_PER_UNIT),   /* RVVM1x3QI */
  MODE_MASK (3*BITS_PER_UNIT),   /* RVVM2x3QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF8x4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF4x4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2x4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1x4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2x4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF4x2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2x2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1x2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2x2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM4x2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V1SI */
  MODE_MASK (5*BITS_PER_UNIT),   /* RVVMF8x5QI */
  MODE_MASK (5*BITS_PER_UNIT),   /* RVVMF4x5QI */
  MODE_MASK (5*BITS_PER_UNIT),   /* RVVMF2x5QI */
  MODE_MASK (5*BITS_PER_UNIT),   /* RVVM1x5QI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF8x6QI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF4x6QI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF2x6QI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM1x6QI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF4x3HI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF2x3HI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM1x3HI */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM2x3HI */
  MODE_MASK (7*BITS_PER_UNIT),   /* RVVMF8x7QI */
  MODE_MASK (7*BITS_PER_UNIT),   /* RVVMF4x7QI */
  MODE_MASK (7*BITS_PER_UNIT),   /* RVVMF2x7QI */
  MODE_MASK (7*BITS_PER_UNIT),   /* RVVM1x7QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF8x8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4x8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4x4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2x4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2x2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM4x2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DI */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF4x5HI */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF2x5HI */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVM1x5HI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF4x6HI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF2x6HI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM1x6HI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF2x3SI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM1x3SI */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM2x3SI */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF4x7HI */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF2x7HI */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVM1x7HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF4x8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF2x8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF2x4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2x4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x2DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2x2DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM4x2DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (20*BITS_PER_UNIT),    /* RVVMF2x5SI */
  MODE_MASK (20*BITS_PER_UNIT),    /* RVVM1x5SI */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVMF2x6SI */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM1x6SI */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM1x3DI */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM2x3DI */
  MODE_MASK (28*BITS_PER_UNIT),    /* RVVMF2x7SI */
  MODE_MASK (28*BITS_PER_UNIT),    /* RVVM1x7SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V32QI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVMF2x8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM1x8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM1x4DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM2x4DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DI */
  MODE_MASK (40*BITS_PER_UNIT),    /* RVVM1x5DI */
  MODE_MASK (48*BITS_PER_UNIT),    /* RVVM1x6DI */
  MODE_MASK (56*BITS_PER_UNIT),    /* RVVM1x7DI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V64QI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32HI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V16SI */
  MODE_MASK (64*BITS_PER_UNIT),    /* RVVM1x8DI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V128QI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64HI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V32SI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V16DI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V256QI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V128HI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V64SI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V32DI */
  MODE_MASK (512*BITS_PER_UNIT),     /* V512QI */
  MODE_MASK (512*BITS_PER_UNIT),     /* V256HI */
  MODE_MASK (512*BITS_PER_UNIT),     /* V128SI */
  MODE_MASK (512*BITS_PER_UNIT),     /* V64DI */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V1024QI */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V512HI */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V256SI */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V128DI */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V2048QI */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V1024HI */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V512SI */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V256DI */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V4096QI */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V2048HI */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V1024SI */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V512DI */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM1BF */
  MODE_MASK (2*BITS_PER_UNIT),   /* RVVM1HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM4DF */
  MODE_MASK (64*BITS_PER_UNIT),    /* RVVM8DF */
  MODE_MASK (2*BITS_PER_UNIT),   /* V1HF */
  MODE_MASK (2*BITS_PER_UNIT),   /* V1BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF4x2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2x2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1x2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF4x2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVMF2x2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM1x2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2x2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM2x2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM4x2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* RVVM4x2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* V1SF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF4x3BF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF2x3BF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM1x3BF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF4x3HF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVMF2x3HF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM1x3HF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM2x3BF */
  MODE_MASK (6*BITS_PER_UNIT),   /* RVVM2x3HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4x4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF4x4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2x4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2x4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVMF2x2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM1x2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM2x2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* RVVM4x2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF4x5BF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF2x5BF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVM1x5BF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF4x5HF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVMF2x5HF */
  MODE_MASK (10*BITS_PER_UNIT),    /* RVVM1x5HF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF4x6BF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF2x6BF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM1x6BF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF4x6HF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF2x6HF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM1x6HF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVMF2x3SF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM1x3SF */
  MODE_MASK (12*BITS_PER_UNIT),    /* RVVM2x3SF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF4x7BF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF2x7BF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVM1x7BF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF4x7HF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVMF2x7HF */
  MODE_MASK (14*BITS_PER_UNIT),    /* RVVM1x7HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF4x8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF2x8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF4x8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF2x8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVMF2x4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2x4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM1x2DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM2x2DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* RVVM4x2DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
  MODE_MASK (20*BITS_PER_UNIT),    /* RVVMF2x5SF */
  MODE_MASK (20*BITS_PER_UNIT),    /* RVVM1x5SF */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVMF2x6SF */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM1x6SF */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM1x3DF */
  MODE_MASK (24*BITS_PER_UNIT),    /* RVVM2x3DF */
  MODE_MASK (28*BITS_PER_UNIT),    /* RVVMF2x7SF */
  MODE_MASK (28*BITS_PER_UNIT),    /* RVVM1x7SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16BF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVMF2x8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM1x8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM1x4DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* RVVM2x4DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DF */
  MODE_MASK (40*BITS_PER_UNIT),    /* RVVM1x5DF */
  MODE_MASK (48*BITS_PER_UNIT),    /* RVVM1x6DF */
  MODE_MASK (56*BITS_PER_UNIT),    /* RVVM1x7DF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32HF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32BF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V16SF */
  MODE_MASK (64*BITS_PER_UNIT),    /* RVVM1x8DF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64HF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64BF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V32SF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V16DF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V128HF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V128BF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V64SF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V32DF */
  MODE_MASK (512*BITS_PER_UNIT),     /* V256HF */
  MODE_MASK (512*BITS_PER_UNIT),     /* V256BF */
  MODE_MASK (512*BITS_PER_UNIT),     /* V128SF */
  MODE_MASK (512*BITS_PER_UNIT),     /* V64DF */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V512HF */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V512BF */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V256SF */
  MODE_MASK (1024*BITS_PER_UNIT),      /* V128DF */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V1024HF */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V1024BF */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V512SF */
  MODE_MASK (2048*BITS_PER_UNIT),      /* V256DF */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V2048HF */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V2048BF */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V1024SF */
  MODE_MASK (4096*BITS_PER_UNIT),      /* V512DF */
#undef MODE_MASK
};

const unsigned short mode_inner[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_CCmode,                /* CC */
  E_BImode,                /* BI */
  E_QImode,                /* QI */
  E_HImode,                /* HI */
  E_SImode,                /* SI */
  E_DImode,                /* DI */
  E_TImode,                /* TI */
  E_OImode,                /* OI */
  E_QQmode,                /* QQ */
  E_HQmode,                /* HQ */
  E_SQmode,                /* SQ */
  E_DQmode,                /* DQ */
  E_TQmode,                /* TQ */
  E_UQQmode,               /* UQQ */
  E_UHQmode,               /* UHQ */
  E_USQmode,               /* USQ */
  E_UDQmode,               /* UDQ */
  E_UTQmode,               /* UTQ */
  E_HAmode,                /* HA */
  E_SAmode,                /* SA */
  E_DAmode,                /* DA */
  E_TAmode,                /* TA */
  E_UHAmode,               /* UHA */
  E_USAmode,               /* USA */
  E_UDAmode,               /* UDA */
  E_UTAmode,               /* UTA */
  E_HFmode,                /* HF */
  E_BFmode,                /* BF */
  E_SFmode,                /* SF */
  E_DFmode,                /* DF */
  E_TFmode,                /* TF */
  E_SDmode,                /* SD */
  E_DDmode,                /* DD */
  E_TDmode,                /* TD */
  E_QImode,                /* CQI */
  E_HImode,                /* CHI */
  E_SImode,                /* CSI */
  E_DImode,                /* CDI */
  E_TImode,                /* CTI */
  E_OImode,                /* COI */
  E_BFmode,                /* BC */
  E_HFmode,                /* HC */
  E_SFmode,                /* SC */
  E_DFmode,                /* DC */
  E_TFmode,                /* TC */
  E_BImode,                /* RVVMF8BI */
  E_BImode,                /* RVVMF16BI */
  E_BImode,                /* RVVMF32BI */
  E_BImode,                /* RVVMF64BI */
  E_BImode,                /* V1BI */
  E_BImode,                /* V2BI */
  E_BImode,                /* V4BI */
  E_BImode,                /* V8BI */
  E_BImode,                /* RVVMF4BI */
  E_BImode,                /* V16BI */
  E_BImode,                /* RVVMF2BI */
  E_BImode,                /* V32BI */
  E_BImode,                /* RVVM1BI */
  E_BImode,                /* V64BI */
  E_BImode,                /* V128BI */
  E_BImode,                /* V256BI */
  E_BImode,                /* V512BI */
  E_BImode,                /* V1024BI */
  E_BImode,                /* V2048BI */
  E_BImode,                /* V4096BI */
  E_QImode,                /* RVVM1QI */
  E_QImode,                /* RVVM2QI */
  E_QImode,                /* RVVMF2QI */
  E_HImode,                /* RVVM1HI */
  E_QImode,                /* RVVM4QI */
  E_QImode,                /* RVVMF4QI */
  E_HImode,                /* RVVM2HI */
  E_HImode,                /* RVVMF2HI */
  E_SImode,                /* RVVM1SI */
  E_QImode,                /* RVVM8QI */
  E_QImode,                /* RVVMF8QI */
  E_HImode,                /* RVVM4HI */
  E_HImode,                /* RVVMF4HI */
  E_SImode,                /* RVVM2SI */
  E_SImode,                /* RVVMF2SI */
  E_DImode,                /* RVVM1DI */
  E_HImode,                /* RVVM8HI */
  E_SImode,                /* RVVM4SI */
  E_DImode,                /* RVVM2DI */
  E_SImode,                /* RVVM8SI */
  E_DImode,                /* RVVM4DI */
  E_DImode,                /* RVVM8DI */
  E_QImode,                /* V1QI */
  E_QImode,                /* RVVMF8x2QI */
  E_QImode,                /* RVVMF4x2QI */
  E_QImode,                /* RVVMF2x2QI */
  E_QImode,                /* RVVM1x2QI */
  E_QImode,                /* RVVM2x2QI */
  E_QImode,                /* RVVM4x2QI */
  E_QImode,                /* V2QI */
  E_HImode,                /* V1HI */
  E_QImode,                /* RVVMF8x3QI */
  E_QImode,                /* RVVMF4x3QI */
  E_QImode,                /* RVVMF2x3QI */
  E_QImode,                /* RVVM1x3QI */
  E_QImode,                /* RVVM2x3QI */
  E_QImode,                /* RVVMF8x4QI */
  E_QImode,                /* RVVMF4x4QI */
  E_QImode,                /* RVVMF2x4QI */
  E_QImode,                /* RVVM1x4QI */
  E_QImode,                /* RVVM2x4QI */
  E_QImode,                /* V4QI */
  E_HImode,                /* RVVMF4x2HI */
  E_HImode,                /* RVVMF2x2HI */
  E_HImode,                /* RVVM1x2HI */
  E_HImode,                /* RVVM2x2HI */
  E_HImode,                /* RVVM4x2HI */
  E_HImode,                /* V2HI */
  E_SImode,                /* V1SI */
  E_QImode,                /* RVVMF8x5QI */
  E_QImode,                /* RVVMF4x5QI */
  E_QImode,                /* RVVMF2x5QI */
  E_QImode,                /* RVVM1x5QI */
  E_QImode,                /* RVVMF8x6QI */
  E_QImode,                /* RVVMF4x6QI */
  E_QImode,                /* RVVMF2x6QI */
  E_QImode,                /* RVVM1x6QI */
  E_HImode,                /* RVVMF4x3HI */
  E_HImode,                /* RVVMF2x3HI */
  E_HImode,                /* RVVM1x3HI */
  E_HImode,                /* RVVM2x3HI */
  E_QImode,                /* RVVMF8x7QI */
  E_QImode,                /* RVVMF4x7QI */
  E_QImode,                /* RVVMF2x7QI */
  E_QImode,                /* RVVM1x7QI */
  E_QImode,                /* RVVMF8x8QI */
  E_QImode,                /* RVVMF4x8QI */
  E_QImode,                /* RVVMF2x8QI */
  E_QImode,                /* RVVM1x8QI */
  E_QImode,                /* V8QI */
  E_HImode,                /* RVVMF4x4HI */
  E_HImode,                /* RVVMF2x4HI */
  E_HImode,                /* RVVM1x4HI */
  E_HImode,                /* RVVM2x4HI */
  E_HImode,                /* V4HI */
  E_SImode,                /* RVVMF2x2SI */
  E_SImode,                /* RVVM1x2SI */
  E_SImode,                /* RVVM2x2SI */
  E_SImode,                /* RVVM4x2SI */
  E_SImode,                /* V2SI */
  E_DImode,                /* V1DI */
  E_HImode,                /* RVVMF4x5HI */
  E_HImode,                /* RVVMF2x5HI */
  E_HImode,                /* RVVM1x5HI */
  E_HImode,                /* RVVMF4x6HI */
  E_HImode,                /* RVVMF2x6HI */
  E_HImode,                /* RVVM1x6HI */
  E_SImode,                /* RVVMF2x3SI */
  E_SImode,                /* RVVM1x3SI */
  E_SImode,                /* RVVM2x3SI */
  E_HImode,                /* RVVMF4x7HI */
  E_HImode,                /* RVVMF2x7HI */
  E_HImode,                /* RVVM1x7HI */
  E_QImode,                /* V16QI */
  E_HImode,                /* RVVMF4x8HI */
  E_HImode,                /* RVVMF2x8HI */
  E_HImode,                /* RVVM1x8HI */
  E_HImode,                /* V8HI */
  E_SImode,                /* RVVMF2x4SI */
  E_SImode,                /* RVVM1x4SI */
  E_SImode,                /* RVVM2x4SI */
  E_SImode,                /* V4SI */
  E_DImode,                /* RVVM1x2DI */
  E_DImode,                /* RVVM2x2DI */
  E_DImode,                /* RVVM4x2DI */
  E_DImode,                /* V2DI */
  E_SImode,                /* RVVMF2x5SI */
  E_SImode,                /* RVVM1x5SI */
  E_SImode,                /* RVVMF2x6SI */
  E_SImode,                /* RVVM1x6SI */
  E_DImode,                /* RVVM1x3DI */
  E_DImode,                /* RVVM2x3DI */
  E_SImode,                /* RVVMF2x7SI */
  E_SImode,                /* RVVM1x7SI */
  E_QImode,                /* V32QI */
  E_HImode,                /* V16HI */
  E_SImode,                /* RVVMF2x8SI */
  E_SImode,                /* RVVM1x8SI */
  E_SImode,                /* V8SI */
  E_DImode,                /* RVVM1x4DI */
  E_DImode,                /* RVVM2x4DI */
  E_DImode,                /* V4DI */
  E_DImode,                /* RVVM1x5DI */
  E_DImode,                /* RVVM1x6DI */
  E_DImode,                /* RVVM1x7DI */
  E_QImode,                /* V64QI */
  E_HImode,                /* V32HI */
  E_SImode,                /* V16SI */
  E_DImode,                /* RVVM1x8DI */
  E_DImode,                /* V8DI */
  E_QImode,                /* V128QI */
  E_HImode,                /* V64HI */
  E_SImode,                /* V32SI */
  E_DImode,                /* V16DI */
  E_QImode,                /* V256QI */
  E_HImode,                /* V128HI */
  E_SImode,                /* V64SI */
  E_DImode,                /* V32DI */
  E_QImode,                /* V512QI */
  E_HImode,                /* V256HI */
  E_SImode,                /* V128SI */
  E_DImode,                /* V64DI */
  E_QImode,                /* V1024QI */
  E_HImode,                /* V512HI */
  E_SImode,                /* V256SI */
  E_DImode,                /* V128DI */
  E_QImode,                /* V2048QI */
  E_HImode,                /* V1024HI */
  E_SImode,                /* V512SI */
  E_DImode,                /* V256DI */
  E_QImode,                /* V4096QI */
  E_HImode,                /* V2048HI */
  E_SImode,                /* V1024SI */
  E_DImode,                /* V512DI */
  E_BFmode,                /* RVVM1BF */
  E_HFmode,                /* RVVM1HF */
  E_BFmode,                /* RVVM2BF */
  E_HFmode,                /* RVVM2HF */
  E_BFmode,                /* RVVMF2BF */
  E_HFmode,                /* RVVMF2HF */
  E_SFmode,                /* RVVM1SF */
  E_BFmode,                /* RVVM4BF */
  E_HFmode,                /* RVVM4HF */
  E_BFmode,                /* RVVMF4BF */
  E_HFmode,                /* RVVMF4HF */
  E_SFmode,                /* RVVM2SF */
  E_SFmode,                /* RVVMF2SF */
  E_DFmode,                /* RVVM1DF */
  E_BFmode,                /* RVVM8BF */
  E_HFmode,                /* RVVM8HF */
  E_SFmode,                /* RVVM4SF */
  E_DFmode,                /* RVVM2DF */
  E_SFmode,                /* RVVM8SF */
  E_DFmode,                /* RVVM4DF */
  E_DFmode,                /* RVVM8DF */
  E_HFmode,                /* V1HF */
  E_BFmode,                /* V1BF */
  E_BFmode,                /* RVVMF4x2BF */
  E_BFmode,                /* RVVMF2x2BF */
  E_BFmode,                /* RVVM1x2BF */
  E_HFmode,                /* RVVMF4x2HF */
  E_HFmode,                /* RVVMF2x2HF */
  E_HFmode,                /* RVVM1x2HF */
  E_BFmode,                /* RVVM2x2BF */
  E_HFmode,                /* RVVM2x2HF */
  E_BFmode,                /* RVVM4x2BF */
  E_HFmode,                /* RVVM4x2HF */
  E_HFmode,                /* V2HF */
  E_BFmode,                /* V2BF */
  E_SFmode,                /* V1SF */
  E_BFmode,                /* RVVMF4x3BF */
  E_BFmode,                /* RVVMF2x3BF */
  E_BFmode,                /* RVVM1x3BF */
  E_HFmode,                /* RVVMF4x3HF */
  E_HFmode,                /* RVVMF2x3HF */
  E_HFmode,                /* RVVM1x3HF */
  E_BFmode,                /* RVVM2x3BF */
  E_HFmode,                /* RVVM2x3HF */
  E_BFmode,                /* RVVMF4x4BF */
  E_BFmode,                /* RVVMF2x4BF */
  E_BFmode,                /* RVVM1x4BF */
  E_HFmode,                /* RVVMF4x4HF */
  E_HFmode,                /* RVVMF2x4HF */
  E_HFmode,                /* RVVM1x4HF */
  E_BFmode,                /* RVVM2x4BF */
  E_HFmode,                /* RVVM2x4HF */
  E_HFmode,                /* V4HF */
  E_BFmode,                /* V4BF */
  E_SFmode,                /* RVVMF2x2SF */
  E_SFmode,                /* RVVM1x2SF */
  E_SFmode,                /* RVVM2x2SF */
  E_SFmode,                /* RVVM4x2SF */
  E_SFmode,                /* V2SF */
  E_DFmode,                /* V1DF */
  E_BFmode,                /* RVVMF4x5BF */
  E_BFmode,                /* RVVMF2x5BF */
  E_BFmode,                /* RVVM1x5BF */
  E_HFmode,                /* RVVMF4x5HF */
  E_HFmode,                /* RVVMF2x5HF */
  E_HFmode,                /* RVVM1x5HF */
  E_BFmode,                /* RVVMF4x6BF */
  E_BFmode,                /* RVVMF2x6BF */
  E_BFmode,                /* RVVM1x6BF */
  E_HFmode,                /* RVVMF4x6HF */
  E_HFmode,                /* RVVMF2x6HF */
  E_HFmode,                /* RVVM1x6HF */
  E_SFmode,                /* RVVMF2x3SF */
  E_SFmode,                /* RVVM1x3SF */
  E_SFmode,                /* RVVM2x3SF */
  E_BFmode,                /* RVVMF4x7BF */
  E_BFmode,                /* RVVMF2x7BF */
  E_BFmode,                /* RVVM1x7BF */
  E_HFmode,                /* RVVMF4x7HF */
  E_HFmode,                /* RVVMF2x7HF */
  E_HFmode,                /* RVVM1x7HF */
  E_BFmode,                /* RVVMF4x8BF */
  E_BFmode,                /* RVVMF2x8BF */
  E_BFmode,                /* RVVM1x8BF */
  E_HFmode,                /* RVVMF4x8HF */
  E_HFmode,                /* RVVMF2x8HF */
  E_HFmode,                /* RVVM1x8HF */
  E_HFmode,                /* V8HF */
  E_BFmode,                /* V8BF */
  E_SFmode,                /* RVVMF2x4SF */
  E_SFmode,                /* RVVM1x4SF */
  E_SFmode,                /* RVVM2x4SF */
  E_SFmode,                /* V4SF */
  E_DFmode,                /* RVVM1x2DF */
  E_DFmode,                /* RVVM2x2DF */
  E_DFmode,                /* RVVM4x2DF */
  E_DFmode,                /* V2DF */
  E_SFmode,                /* RVVMF2x5SF */
  E_SFmode,                /* RVVM1x5SF */
  E_SFmode,                /* RVVMF2x6SF */
  E_SFmode,                /* RVVM1x6SF */
  E_DFmode,                /* RVVM1x3DF */
  E_DFmode,                /* RVVM2x3DF */
  E_SFmode,                /* RVVMF2x7SF */
  E_SFmode,                /* RVVM1x7SF */
  E_HFmode,                /* V16HF */
  E_BFmode,                /* V16BF */
  E_SFmode,                /* RVVMF2x8SF */
  E_SFmode,                /* RVVM1x8SF */
  E_SFmode,                /* V8SF */
  E_DFmode,                /* RVVM1x4DF */
  E_DFmode,                /* RVVM2x4DF */
  E_DFmode,                /* V4DF */
  E_DFmode,                /* RVVM1x5DF */
  E_DFmode,                /* RVVM1x6DF */
  E_DFmode,                /* RVVM1x7DF */
  E_HFmode,                /* V32HF */
  E_BFmode,                /* V32BF */
  E_SFmode,                /* V16SF */
  E_DFmode,                /* RVVM1x8DF */
  E_DFmode,                /* V8DF */
  E_HFmode,                /* V64HF */
  E_BFmode,                /* V64BF */
  E_SFmode,                /* V32SF */
  E_DFmode,                /* V16DF */
  E_HFmode,                /* V128HF */
  E_BFmode,                /* V128BF */
  E_SFmode,                /* V64SF */
  E_DFmode,                /* V32DF */
  E_HFmode,                /* V256HF */
  E_BFmode,                /* V256BF */
  E_SFmode,                /* V128SF */
  E_DFmode,                /* V64DF */
  E_HFmode,                /* V512HF */
  E_BFmode,                /* V512BF */
  E_SFmode,                /* V256SF */
  E_DFmode,                /* V128DF */
  E_HFmode,                /* V1024HF */
  E_BFmode,                /* V1024BF */
  E_SFmode,                /* V512SF */
  E_DFmode,                /* V256DF */
  E_HFmode,                /* V2048HF */
  E_BFmode,                /* V2048BF */
  E_SFmode,                /* V1024SF */
  E_DFmode,                /* V512DF */
};

unsigned char mode_unit_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  32,                      /* OI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  2,                       /* HF */
  2,                       /* BF */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  32,                      /* COI */
  2,                       /* BC */
  2,                       /* HC */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  1,                       /* RVVMF8BI */
  1,                       /* RVVMF16BI */
  1,                       /* RVVMF32BI */
  1,                       /* RVVMF64BI */
  1,                       /* V1BI */
  1,                       /* V2BI */
  1,                       /* V4BI */
  1,                       /* V8BI */
  1,                       /* RVVMF4BI */
  1,                       /* V16BI */
  1,                       /* RVVMF2BI */
  1,                       /* V32BI */
  1,                       /* RVVM1BI */
  1,                       /* V64BI */
  1,                       /* V128BI */
  1,                       /* V256BI */
  1,                       /* V512BI */
  1,                       /* V1024BI */
  1,                       /* V2048BI */
  1,                       /* V4096BI */
  1,                       /* RVVM1QI */
  1,                       /* RVVM2QI */
  1,                       /* RVVMF2QI */
  2,                       /* RVVM1HI */
  1,                       /* RVVM4QI */
  1,                       /* RVVMF4QI */
  2,                       /* RVVM2HI */
  2,                       /* RVVMF2HI */
  4,                       /* RVVM1SI */
  1,                       /* RVVM8QI */
  1,                       /* RVVMF8QI */
  2,                       /* RVVM4HI */
  2,                       /* RVVMF4HI */
  4,                       /* RVVM2SI */
  4,                       /* RVVMF2SI */
  8,                       /* RVVM1DI */
  2,                       /* RVVM8HI */
  4,                       /* RVVM4SI */
  8,                       /* RVVM2DI */
  4,                       /* RVVM8SI */
  8,                       /* RVVM4DI */
  8,                       /* RVVM8DI */
  1,                       /* V1QI */
  1,                       /* RVVMF8x2QI */
  1,                       /* RVVMF4x2QI */
  1,                       /* RVVMF2x2QI */
  1,                       /* RVVM1x2QI */
  1,                       /* RVVM2x2QI */
  1,                       /* RVVM4x2QI */
  1,                       /* V2QI */
  2,                       /* V1HI */
  1,                       /* RVVMF8x3QI */
  1,                       /* RVVMF4x3QI */
  1,                       /* RVVMF2x3QI */
  1,                       /* RVVM1x3QI */
  1,                       /* RVVM2x3QI */
  1,                       /* RVVMF8x4QI */
  1,                       /* RVVMF4x4QI */
  1,                       /* RVVMF2x4QI */
  1,                       /* RVVM1x4QI */
  1,                       /* RVVM2x4QI */
  1,                       /* V4QI */
  2,                       /* RVVMF4x2HI */
  2,                       /* RVVMF2x2HI */
  2,                       /* RVVM1x2HI */
  2,                       /* RVVM2x2HI */
  2,                       /* RVVM4x2HI */
  2,                       /* V2HI */
  4,                       /* V1SI */
  1,                       /* RVVMF8x5QI */
  1,                       /* RVVMF4x5QI */
  1,                       /* RVVMF2x5QI */
  1,                       /* RVVM1x5QI */
  1,                       /* RVVMF8x6QI */
  1,                       /* RVVMF4x6QI */
  1,                       /* RVVMF2x6QI */
  1,                       /* RVVM1x6QI */
  2,                       /* RVVMF4x3HI */
  2,                       /* RVVMF2x3HI */
  2,                       /* RVVM1x3HI */
  2,                       /* RVVM2x3HI */
  1,                       /* RVVMF8x7QI */
  1,                       /* RVVMF4x7QI */
  1,                       /* RVVMF2x7QI */
  1,                       /* RVVM1x7QI */
  1,                       /* RVVMF8x8QI */
  1,                       /* RVVMF4x8QI */
  1,                       /* RVVMF2x8QI */
  1,                       /* RVVM1x8QI */
  1,                       /* V8QI */
  2,                       /* RVVMF4x4HI */
  2,                       /* RVVMF2x4HI */
  2,                       /* RVVM1x4HI */
  2,                       /* RVVM2x4HI */
  2,                       /* V4HI */
  4,                       /* RVVMF2x2SI */
  4,                       /* RVVM1x2SI */
  4,                       /* RVVM2x2SI */
  4,                       /* RVVM4x2SI */
  4,                       /* V2SI */
  8,                       /* V1DI */
  2,                       /* RVVMF4x5HI */
  2,                       /* RVVMF2x5HI */
  2,                       /* RVVM1x5HI */
  2,                       /* RVVMF4x6HI */
  2,                       /* RVVMF2x6HI */
  2,                       /* RVVM1x6HI */
  4,                       /* RVVMF2x3SI */
  4,                       /* RVVM1x3SI */
  4,                       /* RVVM2x3SI */
  2,                       /* RVVMF4x7HI */
  2,                       /* RVVMF2x7HI */
  2,                       /* RVVM1x7HI */
  1,                       /* V16QI */
  2,                       /* RVVMF4x8HI */
  2,                       /* RVVMF2x8HI */
  2,                       /* RVVM1x8HI */
  2,                       /* V8HI */
  4,                       /* RVVMF2x4SI */
  4,                       /* RVVM1x4SI */
  4,                       /* RVVM2x4SI */
  4,                       /* V4SI */
  8,                       /* RVVM1x2DI */
  8,                       /* RVVM2x2DI */
  8,                       /* RVVM4x2DI */
  8,                       /* V2DI */
  4,                       /* RVVMF2x5SI */
  4,                       /* RVVM1x5SI */
  4,                       /* RVVMF2x6SI */
  4,                       /* RVVM1x6SI */
  8,                       /* RVVM1x3DI */
  8,                       /* RVVM2x3DI */
  4,                       /* RVVMF2x7SI */
  4,                       /* RVVM1x7SI */
  1,                       /* V32QI */
  2,                       /* V16HI */
  4,                       /* RVVMF2x8SI */
  4,                       /* RVVM1x8SI */
  4,                       /* V8SI */
  8,                       /* RVVM1x4DI */
  8,                       /* RVVM2x4DI */
  8,                       /* V4DI */
  8,                       /* RVVM1x5DI */
  8,                       /* RVVM1x6DI */
  8,                       /* RVVM1x7DI */
  1,                       /* V64QI */
  2,                       /* V32HI */
  4,                       /* V16SI */
  8,                       /* RVVM1x8DI */
  8,                       /* V8DI */
  1,                       /* V128QI */
  2,                       /* V64HI */
  4,                       /* V32SI */
  8,                       /* V16DI */
  1,                       /* V256QI */
  2,                       /* V128HI */
  4,                       /* V64SI */
  8,                       /* V32DI */
  1,                       /* V512QI */
  2,                       /* V256HI */
  4,                       /* V128SI */
  8,                       /* V64DI */
  1,                       /* V1024QI */
  2,                       /* V512HI */
  4,                       /* V256SI */
  8,                       /* V128DI */
  1,                       /* V2048QI */
  2,                       /* V1024HI */
  4,                       /* V512SI */
  8,                       /* V256DI */
  1,                       /* V4096QI */
  2,                       /* V2048HI */
  4,                       /* V1024SI */
  8,                       /* V512DI */
  2,                       /* RVVM1BF */
  2,                       /* RVVM1HF */
  2,                       /* RVVM2BF */
  2,                       /* RVVM2HF */
  2,                       /* RVVMF2BF */
  2,                       /* RVVMF2HF */
  4,                       /* RVVM1SF */
  2,                       /* RVVM4BF */
  2,                       /* RVVM4HF */
  2,                       /* RVVMF4BF */
  2,                       /* RVVMF4HF */
  4,                       /* RVVM2SF */
  4,                       /* RVVMF2SF */
  8,                       /* RVVM1DF */
  2,                       /* RVVM8BF */
  2,                       /* RVVM8HF */
  4,                       /* RVVM4SF */
  8,                       /* RVVM2DF */
  4,                       /* RVVM8SF */
  8,                       /* RVVM4DF */
  8,                       /* RVVM8DF */
  2,                       /* V1HF */
  2,                       /* V1BF */
  2,                       /* RVVMF4x2BF */
  2,                       /* RVVMF2x2BF */
  2,                       /* RVVM1x2BF */
  2,                       /* RVVMF4x2HF */
  2,                       /* RVVMF2x2HF */
  2,                       /* RVVM1x2HF */
  2,                       /* RVVM2x2BF */
  2,                       /* RVVM2x2HF */
  2,                       /* RVVM4x2BF */
  2,                       /* RVVM4x2HF */
  2,                       /* V2HF */
  2,                       /* V2BF */
  4,                       /* V1SF */
  2,                       /* RVVMF4x3BF */
  2,                       /* RVVMF2x3BF */
  2,                       /* RVVM1x3BF */
  2,                       /* RVVMF4x3HF */
  2,                       /* RVVMF2x3HF */
  2,                       /* RVVM1x3HF */
  2,                       /* RVVM2x3BF */
  2,                       /* RVVM2x3HF */
  2,                       /* RVVMF4x4BF */
  2,                       /* RVVMF2x4BF */
  2,                       /* RVVM1x4BF */
  2,                       /* RVVMF4x4HF */
  2,                       /* RVVMF2x4HF */
  2,                       /* RVVM1x4HF */
  2,                       /* RVVM2x4BF */
  2,                       /* RVVM2x4HF */
  2,                       /* V4HF */
  2,                       /* V4BF */
  4,                       /* RVVMF2x2SF */
  4,                       /* RVVM1x2SF */
  4,                       /* RVVM2x2SF */
  4,                       /* RVVM4x2SF */
  4,                       /* V2SF */
  8,                       /* V1DF */
  2,                       /* RVVMF4x5BF */
  2,                       /* RVVMF2x5BF */
  2,                       /* RVVM1x5BF */
  2,                       /* RVVMF4x5HF */
  2,                       /* RVVMF2x5HF */
  2,                       /* RVVM1x5HF */
  2,                       /* RVVMF4x6BF */
  2,                       /* RVVMF2x6BF */
  2,                       /* RVVM1x6BF */
  2,                       /* RVVMF4x6HF */
  2,                       /* RVVMF2x6HF */
  2,                       /* RVVM1x6HF */
  4,                       /* RVVMF2x3SF */
  4,                       /* RVVM1x3SF */
  4,                       /* RVVM2x3SF */
  2,                       /* RVVMF4x7BF */
  2,                       /* RVVMF2x7BF */
  2,                       /* RVVM1x7BF */
  2,                       /* RVVMF4x7HF */
  2,                       /* RVVMF2x7HF */
  2,                       /* RVVM1x7HF */
  2,                       /* RVVMF4x8BF */
  2,                       /* RVVMF2x8BF */
  2,                       /* RVVM1x8BF */
  2,                       /* RVVMF4x8HF */
  2,                       /* RVVMF2x8HF */
  2,                       /* RVVM1x8HF */
  2,                       /* V8HF */
  2,                       /* V8BF */
  4,                       /* RVVMF2x4SF */
  4,                       /* RVVM1x4SF */
  4,                       /* RVVM2x4SF */
  4,                       /* V4SF */
  8,                       /* RVVM1x2DF */
  8,                       /* RVVM2x2DF */
  8,                       /* RVVM4x2DF */
  8,                       /* V2DF */
  4,                       /* RVVMF2x5SF */
  4,                       /* RVVM1x5SF */
  4,                       /* RVVMF2x6SF */
  4,                       /* RVVM1x6SF */
  8,                       /* RVVM1x3DF */
  8,                       /* RVVM2x3DF */
  4,                       /* RVVMF2x7SF */
  4,                       /* RVVM1x7SF */
  2,                       /* V16HF */
  2,                       /* V16BF */
  4,                       /* RVVMF2x8SF */
  4,                       /* RVVM1x8SF */
  4,                       /* V8SF */
  8,                       /* RVVM1x4DF */
  8,                       /* RVVM2x4DF */
  8,                       /* V4DF */
  8,                       /* RVVM1x5DF */
  8,                       /* RVVM1x6DF */
  8,                       /* RVVM1x7DF */
  2,                       /* V32HF */
  2,                       /* V32BF */
  4,                       /* V16SF */
  8,                       /* RVVM1x8DF */
  8,                       /* V8DF */
  2,                       /* V64HF */
  2,                       /* V64BF */
  4,                       /* V32SF */
  8,                       /* V16DF */
  2,                       /* V128HF */
  2,                       /* V128BF */
  4,                       /* V64SF */
  8,                       /* V32DF */
  2,                       /* V256HF */
  2,                       /* V256BF */
  4,                       /* V128SF */
  8,                       /* V64DF */
  2,                       /* V512HF */
  2,                       /* V512BF */
  4,                       /* V256SF */
  8,                       /* V128DF */
  2,                       /* V1024HF */
  2,                       /* V1024BF */
  4,                       /* V512SF */
  8,                       /* V256DF */
  2,                       /* V2048HF */
  2,                       /* V2048BF */
  4,                       /* V1024SF */
  8,                       /* V512DF */
};

const unsigned short mode_unit_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  32*BITS_PER_UNIT,        /* OI */
  1*BITS_PER_UNIT,         /* QQ */
  2*BITS_PER_UNIT,         /* HQ */
  4*BITS_PER_UNIT,         /* SQ */
  8*BITS_PER_UNIT,         /* DQ */
  16*BITS_PER_UNIT,        /* TQ */
  1*BITS_PER_UNIT,         /* UQQ */
  2*BITS_PER_UNIT,         /* UHQ */
  4*BITS_PER_UNIT,         /* USQ */
  8*BITS_PER_UNIT,         /* UDQ */
  16*BITS_PER_UNIT,        /* UTQ */
  2*BITS_PER_UNIT,         /* HA */
  4*BITS_PER_UNIT,         /* SA */
  8*BITS_PER_UNIT,         /* DA */
  16*BITS_PER_UNIT,        /* TA */
  2*BITS_PER_UNIT,         /* UHA */
  4*BITS_PER_UNIT,         /* USA */
  8*BITS_PER_UNIT,         /* UDA */
  16*BITS_PER_UNIT,        /* UTA */
  2*BITS_PER_UNIT,         /* HF */
  2*BITS_PER_UNIT,         /* BF */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  1*BITS_PER_UNIT,         /* CQI */
  2*BITS_PER_UNIT,         /* CHI */
  4*BITS_PER_UNIT,         /* CSI */
  8*BITS_PER_UNIT,         /* CDI */
  16*BITS_PER_UNIT,        /* CTI */
  32*BITS_PER_UNIT,        /* COI */
  2*BITS_PER_UNIT,         /* BC */
  2*BITS_PER_UNIT,         /* HC */
  4*BITS_PER_UNIT,         /* SC */
  8*BITS_PER_UNIT,         /* DC */
  16*BITS_PER_UNIT,        /* TC */
  1,                       /* RVVMF8BI */
  1,                       /* RVVMF16BI */
  1,                       /* RVVMF32BI */
  1,                       /* RVVMF64BI */
  1,                       /* V1BI */
  1,                       /* V2BI */
  1,                       /* V4BI */
  1,                       /* V8BI */
  1,                       /* RVVMF4BI */
  1,                       /* V16BI */
  1,                       /* RVVMF2BI */
  1,                       /* V32BI */
  1,                       /* RVVM1BI */
  1,                       /* V64BI */
  1,                       /* V128BI */
  1,                       /* V256BI */
  1,                       /* V512BI */
  1,                       /* V1024BI */
  1,                       /* V2048BI */
  1,                       /* V4096BI */
  1*BITS_PER_UNIT,         /* RVVM1QI */
  1*BITS_PER_UNIT,         /* RVVM2QI */
  1*BITS_PER_UNIT,         /* RVVMF2QI */
  2*BITS_PER_UNIT,         /* RVVM1HI */
  1*BITS_PER_UNIT,         /* RVVM4QI */
  1*BITS_PER_UNIT,         /* RVVMF4QI */
  2*BITS_PER_UNIT,         /* RVVM2HI */
  2*BITS_PER_UNIT,         /* RVVMF2HI */
  4*BITS_PER_UNIT,         /* RVVM1SI */
  1*BITS_PER_UNIT,         /* RVVM8QI */
  1*BITS_PER_UNIT,         /* RVVMF8QI */
  2*BITS_PER_UNIT,         /* RVVM4HI */
  2*BITS_PER_UNIT,         /* RVVMF4HI */
  4*BITS_PER_UNIT,         /* RVVM2SI */
  4*BITS_PER_UNIT,         /* RVVMF2SI */
  8*BITS_PER_UNIT,         /* RVVM1DI */
  2*BITS_PER_UNIT,         /* RVVM8HI */
  4*BITS_PER_UNIT,         /* RVVM4SI */
  8*BITS_PER_UNIT,         /* RVVM2DI */
  4*BITS_PER_UNIT,         /* RVVM8SI */
  8*BITS_PER_UNIT,         /* RVVM4DI */
  8*BITS_PER_UNIT,         /* RVVM8DI */
  1*BITS_PER_UNIT,         /* V1QI */
  1*BITS_PER_UNIT,         /* RVVMF8x2QI */
  1*BITS_PER_UNIT,         /* RVVMF4x2QI */
  1*BITS_PER_UNIT,         /* RVVMF2x2QI */
  1*BITS_PER_UNIT,         /* RVVM1x2QI */
  1*BITS_PER_UNIT,         /* RVVM2x2QI */
  1*BITS_PER_UNIT,         /* RVVM4x2QI */
  1*BITS_PER_UNIT,         /* V2QI */
  2*BITS_PER_UNIT,         /* V1HI */
  1*BITS_PER_UNIT,         /* RVVMF8x3QI */
  1*BITS_PER_UNIT,         /* RVVMF4x3QI */
  1*BITS_PER_UNIT,         /* RVVMF2x3QI */
  1*BITS_PER_UNIT,         /* RVVM1x3QI */
  1*BITS_PER_UNIT,         /* RVVM2x3QI */
  1*BITS_PER_UNIT,         /* RVVMF8x4QI */
  1*BITS_PER_UNIT,         /* RVVMF4x4QI */
  1*BITS_PER_UNIT,         /* RVVMF2x4QI */
  1*BITS_PER_UNIT,         /* RVVM1x4QI */
  1*BITS_PER_UNIT,         /* RVVM2x4QI */
  1*BITS_PER_UNIT,         /* V4QI */
  2*BITS_PER_UNIT,         /* RVVMF4x2HI */
  2*BITS_PER_UNIT,         /* RVVMF2x2HI */
  2*BITS_PER_UNIT,         /* RVVM1x2HI */
  2*BITS_PER_UNIT,         /* RVVM2x2HI */
  2*BITS_PER_UNIT,         /* RVVM4x2HI */
  2*BITS_PER_UNIT,         /* V2HI */
  4*BITS_PER_UNIT,         /* V1SI */
  1*BITS_PER_UNIT,         /* RVVMF8x5QI */
  1*BITS_PER_UNIT,         /* RVVMF4x5QI */
  1*BITS_PER_UNIT,         /* RVVMF2x5QI */
  1*BITS_PER_UNIT,         /* RVVM1x5QI */
  1*BITS_PER_UNIT,         /* RVVMF8x6QI */
  1*BITS_PER_UNIT,         /* RVVMF4x6QI */
  1*BITS_PER_UNIT,         /* RVVMF2x6QI */
  1*BITS_PER_UNIT,         /* RVVM1x6QI */
  2*BITS_PER_UNIT,         /* RVVMF4x3HI */
  2*BITS_PER_UNIT,         /* RVVMF2x3HI */
  2*BITS_PER_UNIT,         /* RVVM1x3HI */
  2*BITS_PER_UNIT,         /* RVVM2x3HI */
  1*BITS_PER_UNIT,         /* RVVMF8x7QI */
  1*BITS_PER_UNIT,         /* RVVMF4x7QI */
  1*BITS_PER_UNIT,         /* RVVMF2x7QI */
  1*BITS_PER_UNIT,         /* RVVM1x7QI */
  1*BITS_PER_UNIT,         /* RVVMF8x8QI */
  1*BITS_PER_UNIT,         /* RVVMF4x8QI */
  1*BITS_PER_UNIT,         /* RVVMF2x8QI */
  1*BITS_PER_UNIT,         /* RVVM1x8QI */
  1*BITS_PER_UNIT,         /* V8QI */
  2*BITS_PER_UNIT,         /* RVVMF4x4HI */
  2*BITS_PER_UNIT,         /* RVVMF2x4HI */
  2*BITS_PER_UNIT,         /* RVVM1x4HI */
  2*BITS_PER_UNIT,         /* RVVM2x4HI */
  2*BITS_PER_UNIT,         /* V4HI */
  4*BITS_PER_UNIT,         /* RVVMF2x2SI */
  4*BITS_PER_UNIT,         /* RVVM1x2SI */
  4*BITS_PER_UNIT,         /* RVVM2x2SI */
  4*BITS_PER_UNIT,         /* RVVM4x2SI */
  4*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  2*BITS_PER_UNIT,         /* RVVMF4x5HI */
  2*BITS_PER_UNIT,         /* RVVMF2x5HI */
  2*BITS_PER_UNIT,         /* RVVM1x5HI */
  2*BITS_PER_UNIT,         /* RVVMF4x6HI */
  2*BITS_PER_UNIT,         /* RVVMF2x6HI */
  2*BITS_PER_UNIT,         /* RVVM1x6HI */
  4*BITS_PER_UNIT,         /* RVVMF2x3SI */
  4*BITS_PER_UNIT,         /* RVVM1x3SI */
  4*BITS_PER_UNIT,         /* RVVM2x3SI */
  2*BITS_PER_UNIT,         /* RVVMF4x7HI */
  2*BITS_PER_UNIT,         /* RVVMF2x7HI */
  2*BITS_PER_UNIT,         /* RVVM1x7HI */
  1*BITS_PER_UNIT,         /* V16QI */
  2*BITS_PER_UNIT,         /* RVVMF4x8HI */
  2*BITS_PER_UNIT,         /* RVVMF2x8HI */
  2*BITS_PER_UNIT,         /* RVVM1x8HI */
  2*BITS_PER_UNIT,         /* V8HI */
  4*BITS_PER_UNIT,         /* RVVMF2x4SI */
  4*BITS_PER_UNIT,         /* RVVM1x4SI */
  4*BITS_PER_UNIT,         /* RVVM2x4SI */
  4*BITS_PER_UNIT,         /* V4SI */
  8*BITS_PER_UNIT,         /* RVVM1x2DI */
  8*BITS_PER_UNIT,         /* RVVM2x2DI */
  8*BITS_PER_UNIT,         /* RVVM4x2DI */
  8*BITS_PER_UNIT,         /* V2DI */
  4*BITS_PER_UNIT,         /* RVVMF2x5SI */
  4*BITS_PER_UNIT,         /* RVVM1x5SI */
  4*BITS_PER_UNIT,         /* RVVMF2x6SI */
  4*BITS_PER_UNIT,         /* RVVM1x6SI */
  8*BITS_PER_UNIT,         /* RVVM1x3DI */
  8*BITS_PER_UNIT,         /* RVVM2x3DI */
  4*BITS_PER_UNIT,         /* RVVMF2x7SI */
  4*BITS_PER_UNIT,         /* RVVM1x7SI */
  1*BITS_PER_UNIT,         /* V32QI */
  2*BITS_PER_UNIT,         /* V16HI */
  4*BITS_PER_UNIT,         /* RVVMF2x8SI */
  4*BITS_PER_UNIT,         /* RVVM1x8SI */
  4*BITS_PER_UNIT,         /* V8SI */
  8*BITS_PER_UNIT,         /* RVVM1x4DI */
  8*BITS_PER_UNIT,         /* RVVM2x4DI */
  8*BITS_PER_UNIT,         /* V4DI */
  8*BITS_PER_UNIT,         /* RVVM1x5DI */
  8*BITS_PER_UNIT,         /* RVVM1x6DI */
  8*BITS_PER_UNIT,         /* RVVM1x7DI */
  1*BITS_PER_UNIT,         /* V64QI */
  2*BITS_PER_UNIT,         /* V32HI */
  4*BITS_PER_UNIT,         /* V16SI */
  8*BITS_PER_UNIT,         /* RVVM1x8DI */
  8*BITS_PER_UNIT,         /* V8DI */
  1*BITS_PER_UNIT,         /* V128QI */
  2*BITS_PER_UNIT,         /* V64HI */
  4*BITS_PER_UNIT,         /* V32SI */
  8*BITS_PER_UNIT,         /* V16DI */
  1*BITS_PER_UNIT,         /* V256QI */
  2*BITS_PER_UNIT,         /* V128HI */
  4*BITS_PER_UNIT,         /* V64SI */
  8*BITS_PER_UNIT,         /* V32DI */
  1*BITS_PER_UNIT,         /* V512QI */
  2*BITS_PER_UNIT,         /* V256HI */
  4*BITS_PER_UNIT,         /* V128SI */
  8*BITS_PER_UNIT,         /* V64DI */
  1*BITS_PER_UNIT,         /* V1024QI */
  2*BITS_PER_UNIT,         /* V512HI */
  4*BITS_PER_UNIT,         /* V256SI */
  8*BITS_PER_UNIT,         /* V128DI */
  1*BITS_PER_UNIT,         /* V2048QI */
  2*BITS_PER_UNIT,         /* V1024HI */
  4*BITS_PER_UNIT,         /* V512SI */
  8*BITS_PER_UNIT,         /* V256DI */
  1*BITS_PER_UNIT,         /* V4096QI */
  2*BITS_PER_UNIT,         /* V2048HI */
  4*BITS_PER_UNIT,         /* V1024SI */
  8*BITS_PER_UNIT,         /* V512DI */
  2*BITS_PER_UNIT,         /* RVVM1BF */
  2*BITS_PER_UNIT,         /* RVVM1HF */
  2*BITS_PER_UNIT,         /* RVVM2BF */
  2*BITS_PER_UNIT,         /* RVVM2HF */
  2*BITS_PER_UNIT,         /* RVVMF2BF */
  2*BITS_PER_UNIT,         /* RVVMF2HF */
  4*BITS_PER_UNIT,         /* RVVM1SF */
  2*BITS_PER_UNIT,         /* RVVM4BF */
  2*BITS_PER_UNIT,         /* RVVM4HF */
  2*BITS_PER_UNIT,         /* RVVMF4BF */
  2*BITS_PER_UNIT,         /* RVVMF4HF */
  4*BITS_PER_UNIT,         /* RVVM2SF */
  4*BITS_PER_UNIT,         /* RVVMF2SF */
  8*BITS_PER_UNIT,         /* RVVM1DF */
  2*BITS_PER_UNIT,         /* RVVM8BF */
  2*BITS_PER_UNIT,         /* RVVM8HF */
  4*BITS_PER_UNIT,         /* RVVM4SF */
  8*BITS_PER_UNIT,         /* RVVM2DF */
  4*BITS_PER_UNIT,         /* RVVM8SF */
  8*BITS_PER_UNIT,         /* RVVM4DF */
  8*BITS_PER_UNIT,         /* RVVM8DF */
  2*BITS_PER_UNIT,         /* V1HF */
  2*BITS_PER_UNIT,         /* V1BF */
  2*BITS_PER_UNIT,         /* RVVMF4x2BF */
  2*BITS_PER_UNIT,         /* RVVMF2x2BF */
  2*BITS_PER_UNIT,         /* RVVM1x2BF */
  2*BITS_PER_UNIT,         /* RVVMF4x2HF */
  2*BITS_PER_UNIT,         /* RVVMF2x2HF */
  2*BITS_PER_UNIT,         /* RVVM1x2HF */
  2*BITS_PER_UNIT,         /* RVVM2x2BF */
  2*BITS_PER_UNIT,         /* RVVM2x2HF */
  2*BITS_PER_UNIT,         /* RVVM4x2BF */
  2*BITS_PER_UNIT,         /* RVVM4x2HF */
  2*BITS_PER_UNIT,         /* V2HF */
  2*BITS_PER_UNIT,         /* V2BF */
  4*BITS_PER_UNIT,         /* V1SF */
  2*BITS_PER_UNIT,         /* RVVMF4x3BF */
  2*BITS_PER_UNIT,         /* RVVMF2x3BF */
  2*BITS_PER_UNIT,         /* RVVM1x3BF */
  2*BITS_PER_UNIT,         /* RVVMF4x3HF */
  2*BITS_PER_UNIT,         /* RVVMF2x3HF */
  2*BITS_PER_UNIT,         /* RVVM1x3HF */
  2*BITS_PER_UNIT,         /* RVVM2x3BF */
  2*BITS_PER_UNIT,         /* RVVM2x3HF */
  2*BITS_PER_UNIT,         /* RVVMF4x4BF */
  2*BITS_PER_UNIT,         /* RVVMF2x4BF */
  2*BITS_PER_UNIT,         /* RVVM1x4BF */
  2*BITS_PER_UNIT,         /* RVVMF4x4HF */
  2*BITS_PER_UNIT,         /* RVVMF2x4HF */
  2*BITS_PER_UNIT,         /* RVVM1x4HF */
  2*BITS_PER_UNIT,         /* RVVM2x4BF */
  2*BITS_PER_UNIT,         /* RVVM2x4HF */
  2*BITS_PER_UNIT,         /* V4HF */
  2*BITS_PER_UNIT,         /* V4BF */
  4*BITS_PER_UNIT,         /* RVVMF2x2SF */
  4*BITS_PER_UNIT,         /* RVVM1x2SF */
  4*BITS_PER_UNIT,         /* RVVM2x2SF */
  4*BITS_PER_UNIT,         /* RVVM4x2SF */
  4*BITS_PER_UNIT,         /* V2SF */
  8*BITS_PER_UNIT,         /* V1DF */
  2*BITS_PER_UNIT,         /* RVVMF4x5BF */
  2*BITS_PER_UNIT,         /* RVVMF2x5BF */
  2*BITS_PER_UNIT,         /* RVVM1x5BF */
  2*BITS_PER_UNIT,         /* RVVMF4x5HF */
  2*BITS_PER_UNIT,         /* RVVMF2x5HF */
  2*BITS_PER_UNIT,         /* RVVM1x5HF */
  2*BITS_PER_UNIT,         /* RVVMF4x6BF */
  2*BITS_PER_UNIT,         /* RVVMF2x6BF */
  2*BITS_PER_UNIT,         /* RVVM1x6BF */
  2*BITS_PER_UNIT,         /* RVVMF4x6HF */
  2*BITS_PER_UNIT,         /* RVVMF2x6HF */
  2*BITS_PER_UNIT,         /* RVVM1x6HF */
  4*BITS_PER_UNIT,         /* RVVMF2x3SF */
  4*BITS_PER_UNIT,         /* RVVM1x3SF */
  4*BITS_PER_UNIT,         /* RVVM2x3SF */
  2*BITS_PER_UNIT,         /* RVVMF4x7BF */
  2*BITS_PER_UNIT,         /* RVVMF2x7BF */
  2*BITS_PER_UNIT,         /* RVVM1x7BF */
  2*BITS_PER_UNIT,         /* RVVMF4x7HF */
  2*BITS_PER_UNIT,         /* RVVMF2x7HF */
  2*BITS_PER_UNIT,         /* RVVM1x7HF */
  2*BITS_PER_UNIT,         /* RVVMF4x8BF */
  2*BITS_PER_UNIT,         /* RVVMF2x8BF */
  2*BITS_PER_UNIT,         /* RVVM1x8BF */
  2*BITS_PER_UNIT,         /* RVVMF4x8HF */
  2*BITS_PER_UNIT,         /* RVVMF2x8HF */
  2*BITS_PER_UNIT,         /* RVVM1x8HF */
  2*BITS_PER_UNIT,         /* V8HF */
  2*BITS_PER_UNIT,         /* V8BF */
  4*BITS_PER_UNIT,         /* RVVMF2x4SF */
  4*BITS_PER_UNIT,         /* RVVM1x4SF */
  4*BITS_PER_UNIT,         /* RVVM2x4SF */
  4*BITS_PER_UNIT,         /* V4SF */
  8*BITS_PER_UNIT,         /* RVVM1x2DF */
  8*BITS_PER_UNIT,         /* RVVM2x2DF */
  8*BITS_PER_UNIT,         /* RVVM4x2DF */
  8*BITS_PER_UNIT,         /* V2DF */
  4*BITS_PER_UNIT,         /* RVVMF2x5SF */
  4*BITS_PER_UNIT,         /* RVVM1x5SF */
  4*BITS_PER_UNIT,         /* RVVMF2x6SF */
  4*BITS_PER_UNIT,         /* RVVM1x6SF */
  8*BITS_PER_UNIT,         /* RVVM1x3DF */
  8*BITS_PER_UNIT,         /* RVVM2x3DF */
  4*BITS_PER_UNIT,         /* RVVMF2x7SF */
  4*BITS_PER_UNIT,         /* RVVM1x7SF */
  2*BITS_PER_UNIT,         /* V16HF */
  2*BITS_PER_UNIT,         /* V16BF */
  4*BITS_PER_UNIT,         /* RVVMF2x8SF */
  4*BITS_PER_UNIT,         /* RVVM1x8SF */
  4*BITS_PER_UNIT,         /* V8SF */
  8*BITS_PER_UNIT,         /* RVVM1x4DF */
  8*BITS_PER_UNIT,         /* RVVM2x4DF */
  8*BITS_PER_UNIT,         /* V4DF */
  8*BITS_PER_UNIT,         /* RVVM1x5DF */
  8*BITS_PER_UNIT,         /* RVVM1x6DF */
  8*BITS_PER_UNIT,         /* RVVM1x7DF */
  2*BITS_PER_UNIT,         /* V32HF */
  2*BITS_PER_UNIT,         /* V32BF */
  4*BITS_PER_UNIT,         /* V16SF */
  8*BITS_PER_UNIT,         /* RVVM1x8DF */
  8*BITS_PER_UNIT,         /* V8DF */
  2*BITS_PER_UNIT,         /* V64HF */
  2*BITS_PER_UNIT,         /* V64BF */
  4*BITS_PER_UNIT,         /* V32SF */
  8*BITS_PER_UNIT,         /* V16DF */
  2*BITS_PER_UNIT,         /* V128HF */
  2*BITS_PER_UNIT,         /* V128BF */
  4*BITS_PER_UNIT,         /* V64SF */
  8*BITS_PER_UNIT,         /* V32DF */
  2*BITS_PER_UNIT,         /* V256HF */
  2*BITS_PER_UNIT,         /* V256BF */
  4*BITS_PER_UNIT,         /* V128SF */
  8*BITS_PER_UNIT,         /* V64DF */
  2*BITS_PER_UNIT,         /* V512HF */
  2*BITS_PER_UNIT,         /* V512BF */
  4*BITS_PER_UNIT,         /* V256SF */
  8*BITS_PER_UNIT,         /* V128DF */
  2*BITS_PER_UNIT,         /* V1024HF */
  2*BITS_PER_UNIT,         /* V1024BF */
  4*BITS_PER_UNIT,         /* V512SF */
  8*BITS_PER_UNIT,         /* V256DF */
  2*BITS_PER_UNIT,         /* V2048HF */
  2*BITS_PER_UNIT,         /* V2048BF */
  4*BITS_PER_UNIT,         /* V1024SF */
  8*BITS_PER_UNIT,         /* V512DF */
};

unsigned short mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  32,                      /* OI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  2,                       /* HF */
  2,                       /* BF */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  32,                      /* COI */
  2,                       /* BC */
  2,                       /* HC */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  1,                       /* RVVMF8BI */
  1,                       /* RVVMF16BI */
  1,                       /* RVVMF32BI */
  1,                       /* RVVMF64BI */
  1,                       /* V1BI */
  1,                       /* V2BI */
  1,                       /* V4BI */
  1,                       /* V8BI */
  2,                       /* RVVMF4BI */
  2,                       /* V16BI */
  4,                       /* RVVMF2BI */
  4,                       /* V32BI */
  8,                       /* RVVM1BI */
  8,                       /* V64BI */
  16,                      /* V128BI */
  32,                      /* V256BI */
  64,                      /* V512BI */
  128,                     /* V1024BI */
  256,                     /* V2048BI */
  512,                     /* V4096BI */
  1,                       /* RVVM1QI */
  2,                       /* RVVM2QI */
  2,                       /* RVVMF2QI */
  2,                       /* RVVM1HI */
  4,                       /* RVVM4QI */
  4,                       /* RVVMF4QI */
  4,                       /* RVVM2HI */
  4,                       /* RVVMF2HI */
  4,                       /* RVVM1SI */
  8,                       /* RVVM8QI */
  8,                       /* RVVMF8QI */
  8,                       /* RVVM4HI */
  8,                       /* RVVMF4HI */
  8,                       /* RVVM2SI */
  8,                       /* RVVMF2SI */
  8,                       /* RVVM1DI */
  16,                      /* RVVM8HI */
  16,                      /* RVVM4SI */
  16,                      /* RVVM2DI */
  32,                      /* RVVM8SI */
  32,                      /* RVVM4DI */
  64,                      /* RVVM8DI */
  1,                       /* V1QI */
  2,                       /* RVVMF8x2QI */
  2,                       /* RVVMF4x2QI */
  2,                       /* RVVMF2x2QI */
  2,                       /* RVVM1x2QI */
  2,                       /* RVVM2x2QI */
  2,                       /* RVVM4x2QI */
  2,                       /* V2QI */
  2,                       /* V1HI */
  1,                       /* RVVMF8x3QI */
  1,                       /* RVVMF4x3QI */
  1,                       /* RVVMF2x3QI */
  1,                       /* RVVM1x3QI */
  1,                       /* RVVM2x3QI */
  4,                       /* RVVMF8x4QI */
  4,                       /* RVVMF4x4QI */
  4,                       /* RVVMF2x4QI */
  4,                       /* RVVM1x4QI */
  4,                       /* RVVM2x4QI */
  4,                       /* V4QI */
  4,                       /* RVVMF4x2HI */
  4,                       /* RVVMF2x2HI */
  4,                       /* RVVM1x2HI */
  4,                       /* RVVM2x2HI */
  4,                       /* RVVM4x2HI */
  4,                       /* V2HI */
  4,                       /* V1SI */
  1,                       /* RVVMF8x5QI */
  1,                       /* RVVMF4x5QI */
  1,                       /* RVVMF2x5QI */
  1,                       /* RVVM1x5QI */
  2,                       /* RVVMF8x6QI */
  2,                       /* RVVMF4x6QI */
  2,                       /* RVVMF2x6QI */
  2,                       /* RVVM1x6QI */
  2,                       /* RVVMF4x3HI */
  2,                       /* RVVMF2x3HI */
  2,                       /* RVVM1x3HI */
  2,                       /* RVVM2x3HI */
  1,                       /* RVVMF8x7QI */
  1,                       /* RVVMF4x7QI */
  1,                       /* RVVMF2x7QI */
  1,                       /* RVVM1x7QI */
  8,                       /* RVVMF8x8QI */
  8,                       /* RVVMF4x8QI */
  8,                       /* RVVMF2x8QI */
  8,                       /* RVVM1x8QI */
  8,                       /* V8QI */
  8,                       /* RVVMF4x4HI */
  8,                       /* RVVMF2x4HI */
  8,                       /* RVVM1x4HI */
  8,                       /* RVVM2x4HI */
  8,                       /* V4HI */
  8,                       /* RVVMF2x2SI */
  8,                       /* RVVM1x2SI */
  8,                       /* RVVM2x2SI */
  8,                       /* RVVM4x2SI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  2,                       /* RVVMF4x5HI */
  2,                       /* RVVMF2x5HI */
  2,                       /* RVVM1x5HI */
  4,                       /* RVVMF4x6HI */
  4,                       /* RVVMF2x6HI */
  4,                       /* RVVM1x6HI */
  4,                       /* RVVMF2x3SI */
  4,                       /* RVVM1x3SI */
  4,                       /* RVVM2x3SI */
  2,                       /* RVVMF4x7HI */
  2,                       /* RVVMF2x7HI */
  2,                       /* RVVM1x7HI */
  16,                      /* V16QI */
  16,                      /* RVVMF4x8HI */
  16,                      /* RVVMF2x8HI */
  16,                      /* RVVM1x8HI */
  16,                      /* V8HI */
  16,                      /* RVVMF2x4SI */
  16,                      /* RVVM1x4SI */
  16,                      /* RVVM2x4SI */
  16,                      /* V4SI */
  16,                      /* RVVM1x2DI */
  16,                      /* RVVM2x2DI */
  16,                      /* RVVM4x2DI */
  16,                      /* V2DI */
  4,                       /* RVVMF2x5SI */
  4,                       /* RVVM1x5SI */
  8,                       /* RVVMF2x6SI */
  8,                       /* RVVM1x6SI */
  8,                       /* RVVM1x3DI */
  8,                       /* RVVM2x3DI */
  4,                       /* RVVMF2x7SI */
  4,                       /* RVVM1x7SI */
  32,                      /* V32QI */
  32,                      /* V16HI */
  32,                      /* RVVMF2x8SI */
  32,                      /* RVVM1x8SI */
  32,                      /* V8SI */
  32,                      /* RVVM1x4DI */
  32,                      /* RVVM2x4DI */
  32,                      /* V4DI */
  8,                       /* RVVM1x5DI */
  16,                      /* RVVM1x6DI */
  8,                       /* RVVM1x7DI */
  64,                      /* V64QI */
  64,                      /* V32HI */
  64,                      /* V16SI */
  64,                      /* RVVM1x8DI */
  64,                      /* V8DI */
  128,                     /* V128QI */
  128,                     /* V64HI */
  128,                     /* V32SI */
  128,                     /* V16DI */
  256,                     /* V256QI */
  256,                     /* V128HI */
  256,                     /* V64SI */
  256,                     /* V32DI */
  512,                     /* V512QI */
  512,                     /* V256HI */
  512,                     /* V128SI */
  512,                     /* V64DI */
  1024,                    /* V1024QI */
  1024,                    /* V512HI */
  1024,                    /* V256SI */
  1024,                    /* V128DI */
  2048,                    /* V2048QI */
  2048,                    /* V1024HI */
  2048,                    /* V512SI */
  2048,                    /* V256DI */
  4096,                    /* V4096QI */
  4096,                    /* V2048HI */
  4096,                    /* V1024SI */
  4096,                    /* V512DI */
  2,                       /* RVVM1BF */
  2,                       /* RVVM1HF */
  4,                       /* RVVM2BF */
  4,                       /* RVVM2HF */
  4,                       /* RVVMF2BF */
  4,                       /* RVVMF2HF */
  4,                       /* RVVM1SF */
  8,                       /* RVVM4BF */
  8,                       /* RVVM4HF */
  8,                       /* RVVMF4BF */
  8,                       /* RVVMF4HF */
  8,                       /* RVVM2SF */
  8,                       /* RVVMF2SF */
  8,                       /* RVVM1DF */
  16,                      /* RVVM8BF */
  16,                      /* RVVM8HF */
  16,                      /* RVVM4SF */
  16,                      /* RVVM2DF */
  32,                      /* RVVM8SF */
  32,                      /* RVVM4DF */
  64,                      /* RVVM8DF */
  2,                       /* V1HF */
  2,                       /* V1BF */
  4,                       /* RVVMF4x2BF */
  4,                       /* RVVMF2x2BF */
  4,                       /* RVVM1x2BF */
  4,                       /* RVVMF4x2HF */
  4,                       /* RVVMF2x2HF */
  4,                       /* RVVM1x2HF */
  4,                       /* RVVM2x2BF */
  4,                       /* RVVM2x2HF */
  4,                       /* RVVM4x2BF */
  4,                       /* RVVM4x2HF */
  4,                       /* V2HF */
  4,                       /* V2BF */
  4,                       /* V1SF */
  2,                       /* RVVMF4x3BF */
  2,                       /* RVVMF2x3BF */
  2,                       /* RVVM1x3BF */
  2,                       /* RVVMF4x3HF */
  2,                       /* RVVMF2x3HF */
  2,                       /* RVVM1x3HF */
  2,                       /* RVVM2x3BF */
  2,                       /* RVVM2x3HF */
  8,                       /* RVVMF4x4BF */
  8,                       /* RVVMF2x4BF */
  8,                       /* RVVM1x4BF */
  8,                       /* RVVMF4x4HF */
  8,                       /* RVVMF2x4HF */
  8,                       /* RVVM1x4HF */
  8,                       /* RVVM2x4BF */
  8,                       /* RVVM2x4HF */
  8,                       /* V4HF */
  8,                       /* V4BF */
  8,                       /* RVVMF2x2SF */
  8,                       /* RVVM1x2SF */
  8,                       /* RVVM2x2SF */
  8,                       /* RVVM4x2SF */
  8,                       /* V2SF */
  8,                       /* V1DF */
  2,                       /* RVVMF4x5BF */
  2,                       /* RVVMF2x5BF */
  2,                       /* RVVM1x5BF */
  2,                       /* RVVMF4x5HF */
  2,                       /* RVVMF2x5HF */
  2,                       /* RVVM1x5HF */
  4,                       /* RVVMF4x6BF */
  4,                       /* RVVMF2x6BF */
  4,                       /* RVVM1x6BF */
  4,                       /* RVVMF4x6HF */
  4,                       /* RVVMF2x6HF */
  4,                       /* RVVM1x6HF */
  4,                       /* RVVMF2x3SF */
  4,                       /* RVVM1x3SF */
  4,                       /* RVVM2x3SF */
  2,                       /* RVVMF4x7BF */
  2,                       /* RVVMF2x7BF */
  2,                       /* RVVM1x7BF */
  2,                       /* RVVMF4x7HF */
  2,                       /* RVVMF2x7HF */
  2,                       /* RVVM1x7HF */
  16,                      /* RVVMF4x8BF */
  16,                      /* RVVMF2x8BF */
  16,                      /* RVVM1x8BF */
  16,                      /* RVVMF4x8HF */
  16,                      /* RVVMF2x8HF */
  16,                      /* RVVM1x8HF */
  16,                      /* V8HF */
  16,                      /* V8BF */
  16,                      /* RVVMF2x4SF */
  16,                      /* RVVM1x4SF */
  16,                      /* RVVM2x4SF */
  16,                      /* V4SF */
  16,                      /* RVVM1x2DF */
  16,                      /* RVVM2x2DF */
  16,                      /* RVVM4x2DF */
  16,                      /* V2DF */
  4,                       /* RVVMF2x5SF */
  4,                       /* RVVM1x5SF */
  8,                       /* RVVMF2x6SF */
  8,                       /* RVVM1x6SF */
  8,                       /* RVVM1x3DF */
  8,                       /* RVVM2x3DF */
  4,                       /* RVVMF2x7SF */
  4,                       /* RVVM1x7SF */
  32,                      /* V16HF */
  32,                      /* V16BF */
  32,                      /* RVVMF2x8SF */
  32,                      /* RVVM1x8SF */
  32,                      /* V8SF */
  32,                      /* RVVM1x4DF */
  32,                      /* RVVM2x4DF */
  32,                      /* V4DF */
  8,                       /* RVVM1x5DF */
  16,                      /* RVVM1x6DF */
  8,                       /* RVVM1x7DF */
  64,                      /* V32HF */
  64,                      /* V32BF */
  64,                      /* V16SF */
  64,                      /* RVVM1x8DF */
  64,                      /* V8DF */
  128,                     /* V64HF */
  128,                     /* V64BF */
  128,                     /* V32SF */
  128,                     /* V16DF */
  256,                     /* V128HF */
  256,                     /* V128BF */
  256,                     /* V64SF */
  256,                     /* V32DF */
  512,                     /* V256HF */
  512,                     /* V256BF */
  512,                     /* V128SF */
  512,                     /* V64DF */
  1024,                    /* V512HF */
  1024,                    /* V512BF */
  1024,                    /* V256SF */
  1024,                    /* V128DF */
  2048,                    /* V1024HF */
  2048,                    /* V1024BF */
  2048,                    /* V512SF */
  2048,                    /* V256DF */
  4096,                    /* V2048HF */
  4096,                    /* V2048BF */
  4096,                    /* V1024SF */
  4096,                    /* V512DF */
};

const unsigned short class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* HF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* BC */
  MIN_MODE_VECTOR_BOOL,    /* RVVMF8BI */
  MIN_MODE_VECTOR_INT,     /* RVVM1QI */
  MIN_MODE_VECTOR_FRACT,   /* VOID */
  MIN_MODE_VECTOR_UFRACT,  /* VOID */
  MIN_MODE_VECTOR_ACCUM,   /* VOID */
  MIN_MODE_VECTOR_UACCUM,  /* VOID */
  MIN_MODE_VECTOR_FLOAT,   /* RVVM1BF */
  MIN_MODE_OPAQUE,         /* VOID */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1 + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1] =
{
  &ieee_half_format,       /* HF */
  0,                       /* BF */
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  &ieee_quad_format,       /* TF */
  &decimal_single_format,  /* SD */
  &decimal_double_format,  /* DD */
  &decimal_quad_format,    /* TD */
};

void
adjust_mode_mask (machine_mode mode)
{
  unsigned int precision;
  if (GET_MODE_PRECISION (mode).is_constant (&precision)
      && precision < HOST_BITS_PER_WIDE_INT)
    mode_mask_array[mode] = (HOST_WIDE_INT_1U << precision) - 1;
  else
    mode_mask_array[mode] = HOST_WIDE_INT_M1U;
}

void
init_adjust_machine_modes (void)
{
  poly_uint16 ps ATTRIBUTE_UNUSED;
  size_t s ATTRIBUTE_UNUSED;

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2DFmode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2DFmode], mode_nunits[E_RVVM4x2DFmode]);
    mode_precision[E_RVVM4x2DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2DFmode], BITS_PER_UNIT, &mode_size[E_RVVM4x2DFmode]))
      mode_size[E_RVVM4x2DFmode] = -1;
    mode_nunits[E_RVVM4x2DFmode] = ps;
    adjust_mode_mask (E_RVVM4x2DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2DImode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2DImode], mode_nunits[E_RVVM4x2DImode]);
    mode_precision[E_RVVM4x2DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2DImode], BITS_PER_UNIT, &mode_size[E_RVVM4x2DImode]))
      mode_size[E_RVVM4x2DImode] = -1;
    mode_nunits[E_RVVM4x2DImode] = ps;
    adjust_mode_mask (E_RVVM4x2DImode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2SFmode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2SFmode], mode_nunits[E_RVVM4x2SFmode]);
    mode_precision[E_RVVM4x2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2SFmode], BITS_PER_UNIT, &mode_size[E_RVVM4x2SFmode]))
      mode_size[E_RVVM4x2SFmode] = -1;
    mode_nunits[E_RVVM4x2SFmode] = ps;
    adjust_mode_mask (E_RVVM4x2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2SImode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2SImode], mode_nunits[E_RVVM4x2SImode]);
    mode_precision[E_RVVM4x2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2SImode], BITS_PER_UNIT, &mode_size[E_RVVM4x2SImode]))
      mode_size[E_RVVM4x2SImode] = -1;
    mode_nunits[E_RVVM4x2SImode] = ps;
    adjust_mode_mask (E_RVVM4x2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2HFmode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2HFmode], mode_nunits[E_RVVM4x2HFmode]);
    mode_precision[E_RVVM4x2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2HFmode], BITS_PER_UNIT, &mode_size[E_RVVM4x2HFmode]))
      mode_size[E_RVVM4x2HFmode] = -1;
    mode_nunits[E_RVVM4x2HFmode] = ps;
    adjust_mode_mask (E_RVVM4x2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2BFmode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2BFmode], mode_nunits[E_RVVM4x2BFmode]);
    mode_precision[E_RVVM4x2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2BFmode], BITS_PER_UNIT, &mode_size[E_RVVM4x2BFmode]))
      mode_size[E_RVVM4x2BFmode] = -1;
    mode_nunits[E_RVVM4x2BFmode] = ps;
    adjust_mode_mask (E_RVVM4x2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2HImode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2HImode], mode_nunits[E_RVVM4x2HImode]);
    mode_precision[E_RVVM4x2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2HImode], BITS_PER_UNIT, &mode_size[E_RVVM4x2HImode]))
      mode_size[E_RVVM4x2HImode] = -1;
    mode_nunits[E_RVVM4x2HImode] = ps;
    adjust_mode_mask (E_RVVM4x2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:343 */
  ps = riscv_v_adjust_nunits (RVVM4x2QImode, false, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM4x2QImode], mode_nunits[E_RVVM4x2QImode]);
    mode_precision[E_RVVM4x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4x2QImode], BITS_PER_UNIT, &mode_size[E_RVVM4x2QImode]))
      mode_size[E_RVVM4x2QImode] = -1;
    mode_nunits[E_RVVM4x2QImode] = ps;
    adjust_mode_mask (E_RVVM4x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4DFmode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4DFmode], mode_nunits[E_RVVM2x4DFmode]);
    mode_precision[E_RVVM2x4DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4DFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x4DFmode]))
      mode_size[E_RVVM2x4DFmode] = -1;
    mode_nunits[E_RVVM2x4DFmode] = ps;
    adjust_mode_mask (E_RVVM2x4DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4DImode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4DImode], mode_nunits[E_RVVM2x4DImode]);
    mode_precision[E_RVVM2x4DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4DImode], BITS_PER_UNIT, &mode_size[E_RVVM2x4DImode]))
      mode_size[E_RVVM2x4DImode] = -1;
    mode_nunits[E_RVVM2x4DImode] = ps;
    adjust_mode_mask (E_RVVM2x4DImode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4SFmode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4SFmode], mode_nunits[E_RVVM2x4SFmode]);
    mode_precision[E_RVVM2x4SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4SFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x4SFmode]))
      mode_size[E_RVVM2x4SFmode] = -1;
    mode_nunits[E_RVVM2x4SFmode] = ps;
    adjust_mode_mask (E_RVVM2x4SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4SImode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4SImode], mode_nunits[E_RVVM2x4SImode]);
    mode_precision[E_RVVM2x4SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4SImode], BITS_PER_UNIT, &mode_size[E_RVVM2x4SImode]))
      mode_size[E_RVVM2x4SImode] = -1;
    mode_nunits[E_RVVM2x4SImode] = ps;
    adjust_mode_mask (E_RVVM2x4SImode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4HFmode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4HFmode], mode_nunits[E_RVVM2x4HFmode]);
    mode_precision[E_RVVM2x4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4HFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x4HFmode]))
      mode_size[E_RVVM2x4HFmode] = -1;
    mode_nunits[E_RVVM2x4HFmode] = ps;
    adjust_mode_mask (E_RVVM2x4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4BFmode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4BFmode], mode_nunits[E_RVVM2x4BFmode]);
    mode_precision[E_RVVM2x4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4BFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x4BFmode]))
      mode_size[E_RVVM2x4BFmode] = -1;
    mode_nunits[E_RVVM2x4BFmode] = ps;
    adjust_mode_mask (E_RVVM2x4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4HImode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4HImode], mode_nunits[E_RVVM2x4HImode]);
    mode_precision[E_RVVM2x4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4HImode], BITS_PER_UNIT, &mode_size[E_RVVM2x4HImode]))
      mode_size[E_RVVM2x4HImode] = -1;
    mode_nunits[E_RVVM2x4HImode] = ps;
    adjust_mode_mask (E_RVVM2x4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:305 */
  ps = riscv_v_adjust_nunits (RVVM2x4QImode, false, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x4QImode], mode_nunits[E_RVVM2x4QImode]);
    mode_precision[E_RVVM2x4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x4QImode], BITS_PER_UNIT, &mode_size[E_RVVM2x4QImode]))
      mode_size[E_RVVM2x4QImode] = -1;
    mode_nunits[E_RVVM2x4QImode] = ps;
    adjust_mode_mask (E_RVVM2x4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3DFmode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3DFmode], mode_nunits[E_RVVM2x3DFmode]);
    mode_precision[E_RVVM2x3DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3DFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x3DFmode]))
      mode_size[E_RVVM2x3DFmode] = -1;
    mode_nunits[E_RVVM2x3DFmode] = ps;
    adjust_mode_mask (E_RVVM2x3DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3DImode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3DImode], mode_nunits[E_RVVM2x3DImode]);
    mode_precision[E_RVVM2x3DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3DImode], BITS_PER_UNIT, &mode_size[E_RVVM2x3DImode]))
      mode_size[E_RVVM2x3DImode] = -1;
    mode_nunits[E_RVVM2x3DImode] = ps;
    adjust_mode_mask (E_RVVM2x3DImode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3SFmode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3SFmode], mode_nunits[E_RVVM2x3SFmode]);
    mode_precision[E_RVVM2x3SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3SFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x3SFmode]))
      mode_size[E_RVVM2x3SFmode] = -1;
    mode_nunits[E_RVVM2x3SFmode] = ps;
    adjust_mode_mask (E_RVVM2x3SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3SImode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3SImode], mode_nunits[E_RVVM2x3SImode]);
    mode_precision[E_RVVM2x3SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3SImode], BITS_PER_UNIT, &mode_size[E_RVVM2x3SImode]))
      mode_size[E_RVVM2x3SImode] = -1;
    mode_nunits[E_RVVM2x3SImode] = ps;
    adjust_mode_mask (E_RVVM2x3SImode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3HFmode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3HFmode], mode_nunits[E_RVVM2x3HFmode]);
    mode_precision[E_RVVM2x3HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3HFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x3HFmode]))
      mode_size[E_RVVM2x3HFmode] = -1;
    mode_nunits[E_RVVM2x3HFmode] = ps;
    adjust_mode_mask (E_RVVM2x3HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3BFmode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3BFmode], mode_nunits[E_RVVM2x3BFmode]);
    mode_precision[E_RVVM2x3BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3BFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x3BFmode]))
      mode_size[E_RVVM2x3BFmode] = -1;
    mode_nunits[E_RVVM2x3BFmode] = ps;
    adjust_mode_mask (E_RVVM2x3BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3HImode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3HImode], mode_nunits[E_RVVM2x3HImode]);
    mode_precision[E_RVVM2x3HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3HImode], BITS_PER_UNIT, &mode_size[E_RVVM2x3HImode]))
      mode_size[E_RVVM2x3HImode] = -1;
    mode_nunits[E_RVVM2x3HImode] = ps;
    adjust_mode_mask (E_RVVM2x3HImode);
  }

  {
    /* config/riscv/riscv-modes.def:304 */
  ps = riscv_v_adjust_nunits (RVVM2x3QImode, false, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x3QImode], mode_nunits[E_RVVM2x3QImode]);
    mode_precision[E_RVVM2x3QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x3QImode], BITS_PER_UNIT, &mode_size[E_RVVM2x3QImode]))
      mode_size[E_RVVM2x3QImode] = -1;
    mode_nunits[E_RVVM2x3QImode] = ps;
    adjust_mode_mask (E_RVVM2x3QImode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2DFmode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2DFmode], mode_nunits[E_RVVM2x2DFmode]);
    mode_precision[E_RVVM2x2DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2DFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x2DFmode]))
      mode_size[E_RVVM2x2DFmode] = -1;
    mode_nunits[E_RVVM2x2DFmode] = ps;
    adjust_mode_mask (E_RVVM2x2DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2DImode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2DImode], mode_nunits[E_RVVM2x2DImode]);
    mode_precision[E_RVVM2x2DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2DImode], BITS_PER_UNIT, &mode_size[E_RVVM2x2DImode]))
      mode_size[E_RVVM2x2DImode] = -1;
    mode_nunits[E_RVVM2x2DImode] = ps;
    adjust_mode_mask (E_RVVM2x2DImode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2SFmode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2SFmode], mode_nunits[E_RVVM2x2SFmode]);
    mode_precision[E_RVVM2x2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2SFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x2SFmode]))
      mode_size[E_RVVM2x2SFmode] = -1;
    mode_nunits[E_RVVM2x2SFmode] = ps;
    adjust_mode_mask (E_RVVM2x2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2SImode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2SImode], mode_nunits[E_RVVM2x2SImode]);
    mode_precision[E_RVVM2x2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2SImode], BITS_PER_UNIT, &mode_size[E_RVVM2x2SImode]))
      mode_size[E_RVVM2x2SImode] = -1;
    mode_nunits[E_RVVM2x2SImode] = ps;
    adjust_mode_mask (E_RVVM2x2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2HFmode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2HFmode], mode_nunits[E_RVVM2x2HFmode]);
    mode_precision[E_RVVM2x2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2HFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x2HFmode]))
      mode_size[E_RVVM2x2HFmode] = -1;
    mode_nunits[E_RVVM2x2HFmode] = ps;
    adjust_mode_mask (E_RVVM2x2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2BFmode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2BFmode], mode_nunits[E_RVVM2x2BFmode]);
    mode_precision[E_RVVM2x2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2BFmode], BITS_PER_UNIT, &mode_size[E_RVVM2x2BFmode]))
      mode_size[E_RVVM2x2BFmode] = -1;
    mode_nunits[E_RVVM2x2BFmode] = ps;
    adjust_mode_mask (E_RVVM2x2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2HImode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2HImode], mode_nunits[E_RVVM2x2HImode]);
    mode_precision[E_RVVM2x2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2HImode], BITS_PER_UNIT, &mode_size[E_RVVM2x2HImode]))
      mode_size[E_RVVM2x2HImode] = -1;
    mode_nunits[E_RVVM2x2HImode] = ps;
    adjust_mode_mask (E_RVVM2x2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:303 */
  ps = riscv_v_adjust_nunits (RVVM2x2QImode, false, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM2x2QImode], mode_nunits[E_RVVM2x2QImode]);
    mode_precision[E_RVVM2x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2x2QImode], BITS_PER_UNIT, &mode_size[E_RVVM2x2QImode]))
      mode_size[E_RVVM2x2QImode] = -1;
    mode_nunits[E_RVVM2x2QImode] = ps;
    adjust_mode_mask (E_RVVM2x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2DFmode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2DFmode], mode_nunits[E_RVVM1x2DFmode]);
    mode_precision[E_RVVM1x2DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x2DFmode]))
      mode_size[E_RVVM1x2DFmode] = -1;
    mode_nunits[E_RVVM1x2DFmode] = ps;
    adjust_mode_mask (E_RVVM1x2DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2DImode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2DImode], mode_nunits[E_RVVM1x2DImode]);
    mode_precision[E_RVVM1x2DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x2DImode]))
      mode_size[E_RVVM1x2DImode] = -1;
    mode_nunits[E_RVVM1x2DImode] = ps;
    adjust_mode_mask (E_RVVM1x2DImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2SFmode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2SFmode], mode_nunits[E_RVVM1x2SFmode]);
    mode_precision[E_RVVM1x2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x2SFmode]))
      mode_size[E_RVVM1x2SFmode] = -1;
    mode_nunits[E_RVVM1x2SFmode] = ps;
    adjust_mode_mask (E_RVVM1x2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2SFmode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2SFmode], mode_nunits[E_RVVMF2x2SFmode]);
    mode_precision[E_RVVMF2x2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2SFmode]))
      mode_size[E_RVVMF2x2SFmode] = -1;
    mode_nunits[E_RVVMF2x2SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2SImode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2SImode], mode_nunits[E_RVVM1x2SImode]);
    mode_precision[E_RVVM1x2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x2SImode]))
      mode_size[E_RVVM1x2SImode] = -1;
    mode_nunits[E_RVVM1x2SImode] = ps;
    adjust_mode_mask (E_RVVM1x2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2SImode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2SImode], mode_nunits[E_RVVMF2x2SImode]);
    mode_precision[E_RVVMF2x2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2SImode]))
      mode_size[E_RVVMF2x2SImode] = -1;
    mode_nunits[E_RVVMF2x2SImode] = ps;
    adjust_mode_mask (E_RVVMF2x2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2HFmode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2HFmode], mode_nunits[E_RVVM1x2HFmode]);
    mode_precision[E_RVVM1x2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x2HFmode]))
      mode_size[E_RVVM1x2HFmode] = -1;
    mode_nunits[E_RVVM1x2HFmode] = ps;
    adjust_mode_mask (E_RVVM1x2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2HFmode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2HFmode], mode_nunits[E_RVVMF2x2HFmode]);
    mode_precision[E_RVVMF2x2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2HFmode]))
      mode_size[E_RVVMF2x2HFmode] = -1;
    mode_nunits[E_RVVMF2x2HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF4x2HFmode, true, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x2HFmode], mode_nunits[E_RVVMF4x2HFmode]);
    mode_precision[E_RVVMF4x2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x2HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x2HFmode]))
      mode_size[E_RVVMF4x2HFmode] = -1;
    mode_nunits[E_RVVMF4x2HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2BFmode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2BFmode], mode_nunits[E_RVVM1x2BFmode]);
    mode_precision[E_RVVM1x2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x2BFmode]))
      mode_size[E_RVVM1x2BFmode] = -1;
    mode_nunits[E_RVVM1x2BFmode] = ps;
    adjust_mode_mask (E_RVVM1x2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2BFmode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2BFmode], mode_nunits[E_RVVMF2x2BFmode]);
    mode_precision[E_RVVMF2x2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2BFmode]))
      mode_size[E_RVVMF2x2BFmode] = -1;
    mode_nunits[E_RVVMF2x2BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF4x2BFmode, true, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x2BFmode], mode_nunits[E_RVVMF4x2BFmode]);
    mode_precision[E_RVVMF4x2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x2BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x2BFmode]))
      mode_size[E_RVVMF4x2BFmode] = -1;
    mode_nunits[E_RVVMF4x2BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2HImode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2HImode], mode_nunits[E_RVVM1x2HImode]);
    mode_precision[E_RVVM1x2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x2HImode]))
      mode_size[E_RVVM1x2HImode] = -1;
    mode_nunits[E_RVVM1x2HImode] = ps;
    adjust_mode_mask (E_RVVM1x2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2HImode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2HImode], mode_nunits[E_RVVMF2x2HImode]);
    mode_precision[E_RVVMF2x2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2HImode]))
      mode_size[E_RVVMF2x2HImode] = -1;
    mode_nunits[E_RVVMF2x2HImode] = ps;
    adjust_mode_mask (E_RVVMF2x2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF4x2HImode, true, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x2HImode], mode_nunits[E_RVVMF4x2HImode]);
    mode_precision[E_RVVMF4x2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x2HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x2HImode]))
      mode_size[E_RVVMF4x2HImode] = -1;
    mode_nunits[E_RVVMF4x2HImode] = ps;
    adjust_mode_mask (E_RVVMF4x2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVM1x2QImode, false, 1, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x2QImode], mode_nunits[E_RVVM1x2QImode]);
    mode_precision[E_RVVM1x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x2QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x2QImode]))
      mode_size[E_RVVM1x2QImode] = -1;
    mode_nunits[E_RVVM1x2QImode] = ps;
    adjust_mode_mask (E_RVVM1x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF2x2QImode, true, 2, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x2QImode], mode_nunits[E_RVVMF2x2QImode]);
    mode_precision[E_RVVMF2x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x2QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x2QImode]))
      mode_size[E_RVVMF2x2QImode] = -1;
    mode_nunits[E_RVVMF2x2QImode] = ps;
    adjust_mode_mask (E_RVVMF2x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF4x2QImode, true, 4, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x2QImode], mode_nunits[E_RVVMF4x2QImode]);
    mode_precision[E_RVVMF4x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x2QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x2QImode]))
      mode_size[E_RVVMF4x2QImode] = -1;
    mode_nunits[E_RVVMF4x2QImode] = ps;
    adjust_mode_mask (E_RVVMF4x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:265 */
  ps = riscv_v_adjust_nunits (RVVMF8x2QImode, true, 8, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x2QImode], mode_nunits[E_RVVMF8x2QImode]);
    mode_precision[E_RVVMF8x2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x2QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x2QImode]))
      mode_size[E_RVVMF8x2QImode] = -1;
    mode_nunits[E_RVVMF8x2QImode] = ps;
    adjust_mode_mask (E_RVVMF8x2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3DFmode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3DFmode], mode_nunits[E_RVVM1x3DFmode]);
    mode_precision[E_RVVM1x3DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x3DFmode]))
      mode_size[E_RVVM1x3DFmode] = -1;
    mode_nunits[E_RVVM1x3DFmode] = ps;
    adjust_mode_mask (E_RVVM1x3DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3DImode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3DImode], mode_nunits[E_RVVM1x3DImode]);
    mode_precision[E_RVVM1x3DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x3DImode]))
      mode_size[E_RVVM1x3DImode] = -1;
    mode_nunits[E_RVVM1x3DImode] = ps;
    adjust_mode_mask (E_RVVM1x3DImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3SFmode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3SFmode], mode_nunits[E_RVVM1x3SFmode]);
    mode_precision[E_RVVM1x3SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x3SFmode]))
      mode_size[E_RVVM1x3SFmode] = -1;
    mode_nunits[E_RVVM1x3SFmode] = ps;
    adjust_mode_mask (E_RVVM1x3SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3SFmode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3SFmode], mode_nunits[E_RVVMF2x3SFmode]);
    mode_precision[E_RVVMF2x3SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3SFmode]))
      mode_size[E_RVVMF2x3SFmode] = -1;
    mode_nunits[E_RVVMF2x3SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x3SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3SImode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3SImode], mode_nunits[E_RVVM1x3SImode]);
    mode_precision[E_RVVM1x3SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x3SImode]))
      mode_size[E_RVVM1x3SImode] = -1;
    mode_nunits[E_RVVM1x3SImode] = ps;
    adjust_mode_mask (E_RVVM1x3SImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3SImode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3SImode], mode_nunits[E_RVVMF2x3SImode]);
    mode_precision[E_RVVMF2x3SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3SImode]))
      mode_size[E_RVVMF2x3SImode] = -1;
    mode_nunits[E_RVVMF2x3SImode] = ps;
    adjust_mode_mask (E_RVVMF2x3SImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3HFmode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3HFmode], mode_nunits[E_RVVM1x3HFmode]);
    mode_precision[E_RVVM1x3HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x3HFmode]))
      mode_size[E_RVVM1x3HFmode] = -1;
    mode_nunits[E_RVVM1x3HFmode] = ps;
    adjust_mode_mask (E_RVVM1x3HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3HFmode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3HFmode], mode_nunits[E_RVVMF2x3HFmode]);
    mode_precision[E_RVVMF2x3HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3HFmode]))
      mode_size[E_RVVMF2x3HFmode] = -1;
    mode_nunits[E_RVVMF2x3HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x3HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF4x3HFmode, true, 4, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x3HFmode], mode_nunits[E_RVVMF4x3HFmode]);
    mode_precision[E_RVVMF4x3HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x3HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x3HFmode]))
      mode_size[E_RVVMF4x3HFmode] = -1;
    mode_nunits[E_RVVMF4x3HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x3HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3BFmode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3BFmode], mode_nunits[E_RVVM1x3BFmode]);
    mode_precision[E_RVVM1x3BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x3BFmode]))
      mode_size[E_RVVM1x3BFmode] = -1;
    mode_nunits[E_RVVM1x3BFmode] = ps;
    adjust_mode_mask (E_RVVM1x3BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3BFmode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3BFmode], mode_nunits[E_RVVMF2x3BFmode]);
    mode_precision[E_RVVMF2x3BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3BFmode]))
      mode_size[E_RVVMF2x3BFmode] = -1;
    mode_nunits[E_RVVMF2x3BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x3BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF4x3BFmode, true, 4, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x3BFmode], mode_nunits[E_RVVMF4x3BFmode]);
    mode_precision[E_RVVMF4x3BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x3BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x3BFmode]))
      mode_size[E_RVVMF4x3BFmode] = -1;
    mode_nunits[E_RVVMF4x3BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x3BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3HImode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3HImode], mode_nunits[E_RVVM1x3HImode]);
    mode_precision[E_RVVM1x3HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x3HImode]))
      mode_size[E_RVVM1x3HImode] = -1;
    mode_nunits[E_RVVM1x3HImode] = ps;
    adjust_mode_mask (E_RVVM1x3HImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3HImode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3HImode], mode_nunits[E_RVVMF2x3HImode]);
    mode_precision[E_RVVMF2x3HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3HImode]))
      mode_size[E_RVVMF2x3HImode] = -1;
    mode_nunits[E_RVVMF2x3HImode] = ps;
    adjust_mode_mask (E_RVVMF2x3HImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF4x3HImode, true, 4, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x3HImode], mode_nunits[E_RVVMF4x3HImode]);
    mode_precision[E_RVVMF4x3HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x3HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x3HImode]))
      mode_size[E_RVVMF4x3HImode] = -1;
    mode_nunits[E_RVVMF4x3HImode] = ps;
    adjust_mode_mask (E_RVVMF4x3HImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVM1x3QImode, false, 1, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x3QImode], mode_nunits[E_RVVM1x3QImode]);
    mode_precision[E_RVVM1x3QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x3QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x3QImode]))
      mode_size[E_RVVM1x3QImode] = -1;
    mode_nunits[E_RVVM1x3QImode] = ps;
    adjust_mode_mask (E_RVVM1x3QImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF2x3QImode, true, 2, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x3QImode], mode_nunits[E_RVVMF2x3QImode]);
    mode_precision[E_RVVMF2x3QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x3QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x3QImode]))
      mode_size[E_RVVMF2x3QImode] = -1;
    mode_nunits[E_RVVMF2x3QImode] = ps;
    adjust_mode_mask (E_RVVMF2x3QImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF4x3QImode, true, 4, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x3QImode], mode_nunits[E_RVVMF4x3QImode]);
    mode_precision[E_RVVMF4x3QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x3QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x3QImode]))
      mode_size[E_RVVMF4x3QImode] = -1;
    mode_nunits[E_RVVMF4x3QImode] = ps;
    adjust_mode_mask (E_RVVMF4x3QImode);
  }

  {
    /* config/riscv/riscv-modes.def:264 */
  ps = riscv_v_adjust_nunits (RVVMF8x3QImode, true, 8, 3);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x3QImode], mode_nunits[E_RVVMF8x3QImode]);
    mode_precision[E_RVVMF8x3QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x3QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x3QImode]))
      mode_size[E_RVVMF8x3QImode] = -1;
    mode_nunits[E_RVVMF8x3QImode] = ps;
    adjust_mode_mask (E_RVVMF8x3QImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4DFmode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4DFmode], mode_nunits[E_RVVM1x4DFmode]);
    mode_precision[E_RVVM1x4DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x4DFmode]))
      mode_size[E_RVVM1x4DFmode] = -1;
    mode_nunits[E_RVVM1x4DFmode] = ps;
    adjust_mode_mask (E_RVVM1x4DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4DImode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4DImode], mode_nunits[E_RVVM1x4DImode]);
    mode_precision[E_RVVM1x4DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x4DImode]))
      mode_size[E_RVVM1x4DImode] = -1;
    mode_nunits[E_RVVM1x4DImode] = ps;
    adjust_mode_mask (E_RVVM1x4DImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4SFmode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4SFmode], mode_nunits[E_RVVM1x4SFmode]);
    mode_precision[E_RVVM1x4SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x4SFmode]))
      mode_size[E_RVVM1x4SFmode] = -1;
    mode_nunits[E_RVVM1x4SFmode] = ps;
    adjust_mode_mask (E_RVVM1x4SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4SFmode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4SFmode], mode_nunits[E_RVVMF2x4SFmode]);
    mode_precision[E_RVVMF2x4SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4SFmode]))
      mode_size[E_RVVMF2x4SFmode] = -1;
    mode_nunits[E_RVVMF2x4SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x4SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4SImode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4SImode], mode_nunits[E_RVVM1x4SImode]);
    mode_precision[E_RVVM1x4SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x4SImode]))
      mode_size[E_RVVM1x4SImode] = -1;
    mode_nunits[E_RVVM1x4SImode] = ps;
    adjust_mode_mask (E_RVVM1x4SImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4SImode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4SImode], mode_nunits[E_RVVMF2x4SImode]);
    mode_precision[E_RVVMF2x4SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4SImode]))
      mode_size[E_RVVMF2x4SImode] = -1;
    mode_nunits[E_RVVMF2x4SImode] = ps;
    adjust_mode_mask (E_RVVMF2x4SImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4HFmode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4HFmode], mode_nunits[E_RVVM1x4HFmode]);
    mode_precision[E_RVVM1x4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x4HFmode]))
      mode_size[E_RVVM1x4HFmode] = -1;
    mode_nunits[E_RVVM1x4HFmode] = ps;
    adjust_mode_mask (E_RVVM1x4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4HFmode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4HFmode], mode_nunits[E_RVVMF2x4HFmode]);
    mode_precision[E_RVVMF2x4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4HFmode]))
      mode_size[E_RVVMF2x4HFmode] = -1;
    mode_nunits[E_RVVMF2x4HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF4x4HFmode, true, 4, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x4HFmode], mode_nunits[E_RVVMF4x4HFmode]);
    mode_precision[E_RVVMF4x4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x4HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x4HFmode]))
      mode_size[E_RVVMF4x4HFmode] = -1;
    mode_nunits[E_RVVMF4x4HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4BFmode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4BFmode], mode_nunits[E_RVVM1x4BFmode]);
    mode_precision[E_RVVM1x4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x4BFmode]))
      mode_size[E_RVVM1x4BFmode] = -1;
    mode_nunits[E_RVVM1x4BFmode] = ps;
    adjust_mode_mask (E_RVVM1x4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4BFmode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4BFmode], mode_nunits[E_RVVMF2x4BFmode]);
    mode_precision[E_RVVMF2x4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4BFmode]))
      mode_size[E_RVVMF2x4BFmode] = -1;
    mode_nunits[E_RVVMF2x4BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF4x4BFmode, true, 4, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x4BFmode], mode_nunits[E_RVVMF4x4BFmode]);
    mode_precision[E_RVVMF4x4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x4BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x4BFmode]))
      mode_size[E_RVVMF4x4BFmode] = -1;
    mode_nunits[E_RVVMF4x4BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4HImode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4HImode], mode_nunits[E_RVVM1x4HImode]);
    mode_precision[E_RVVM1x4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x4HImode]))
      mode_size[E_RVVM1x4HImode] = -1;
    mode_nunits[E_RVVM1x4HImode] = ps;
    adjust_mode_mask (E_RVVM1x4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4HImode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4HImode], mode_nunits[E_RVVMF2x4HImode]);
    mode_precision[E_RVVMF2x4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4HImode]))
      mode_size[E_RVVMF2x4HImode] = -1;
    mode_nunits[E_RVVMF2x4HImode] = ps;
    adjust_mode_mask (E_RVVMF2x4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF4x4HImode, true, 4, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x4HImode], mode_nunits[E_RVVMF4x4HImode]);
    mode_precision[E_RVVMF4x4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x4HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x4HImode]))
      mode_size[E_RVVMF4x4HImode] = -1;
    mode_nunits[E_RVVMF4x4HImode] = ps;
    adjust_mode_mask (E_RVVMF4x4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVM1x4QImode, false, 1, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x4QImode], mode_nunits[E_RVVM1x4QImode]);
    mode_precision[E_RVVM1x4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x4QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x4QImode]))
      mode_size[E_RVVM1x4QImode] = -1;
    mode_nunits[E_RVVM1x4QImode] = ps;
    adjust_mode_mask (E_RVVM1x4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF2x4QImode, true, 2, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x4QImode], mode_nunits[E_RVVMF2x4QImode]);
    mode_precision[E_RVVMF2x4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x4QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x4QImode]))
      mode_size[E_RVVMF2x4QImode] = -1;
    mode_nunits[E_RVVMF2x4QImode] = ps;
    adjust_mode_mask (E_RVVMF2x4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF4x4QImode, true, 4, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x4QImode], mode_nunits[E_RVVMF4x4QImode]);
    mode_precision[E_RVVMF4x4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x4QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x4QImode]))
      mode_size[E_RVVMF4x4QImode] = -1;
    mode_nunits[E_RVVMF4x4QImode] = ps;
    adjust_mode_mask (E_RVVMF4x4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:263 */
  ps = riscv_v_adjust_nunits (RVVMF8x4QImode, true, 8, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x4QImode], mode_nunits[E_RVVMF8x4QImode]);
    mode_precision[E_RVVMF8x4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x4QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x4QImode]))
      mode_size[E_RVVMF8x4QImode] = -1;
    mode_nunits[E_RVVMF8x4QImode] = ps;
    adjust_mode_mask (E_RVVMF8x4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5DFmode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5DFmode], mode_nunits[E_RVVM1x5DFmode]);
    mode_precision[E_RVVM1x5DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x5DFmode]))
      mode_size[E_RVVM1x5DFmode] = -1;
    mode_nunits[E_RVVM1x5DFmode] = ps;
    adjust_mode_mask (E_RVVM1x5DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5DImode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5DImode], mode_nunits[E_RVVM1x5DImode]);
    mode_precision[E_RVVM1x5DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x5DImode]))
      mode_size[E_RVVM1x5DImode] = -1;
    mode_nunits[E_RVVM1x5DImode] = ps;
    adjust_mode_mask (E_RVVM1x5DImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5SFmode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5SFmode], mode_nunits[E_RVVM1x5SFmode]);
    mode_precision[E_RVVM1x5SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x5SFmode]))
      mode_size[E_RVVM1x5SFmode] = -1;
    mode_nunits[E_RVVM1x5SFmode] = ps;
    adjust_mode_mask (E_RVVM1x5SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5SFmode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5SFmode], mode_nunits[E_RVVMF2x5SFmode]);
    mode_precision[E_RVVMF2x5SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5SFmode]))
      mode_size[E_RVVMF2x5SFmode] = -1;
    mode_nunits[E_RVVMF2x5SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x5SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5SImode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5SImode], mode_nunits[E_RVVM1x5SImode]);
    mode_precision[E_RVVM1x5SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x5SImode]))
      mode_size[E_RVVM1x5SImode] = -1;
    mode_nunits[E_RVVM1x5SImode] = ps;
    adjust_mode_mask (E_RVVM1x5SImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5SImode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5SImode], mode_nunits[E_RVVMF2x5SImode]);
    mode_precision[E_RVVMF2x5SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5SImode]))
      mode_size[E_RVVMF2x5SImode] = -1;
    mode_nunits[E_RVVMF2x5SImode] = ps;
    adjust_mode_mask (E_RVVMF2x5SImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5HFmode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5HFmode], mode_nunits[E_RVVM1x5HFmode]);
    mode_precision[E_RVVM1x5HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x5HFmode]))
      mode_size[E_RVVM1x5HFmode] = -1;
    mode_nunits[E_RVVM1x5HFmode] = ps;
    adjust_mode_mask (E_RVVM1x5HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5HFmode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5HFmode], mode_nunits[E_RVVMF2x5HFmode]);
    mode_precision[E_RVVMF2x5HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5HFmode]))
      mode_size[E_RVVMF2x5HFmode] = -1;
    mode_nunits[E_RVVMF2x5HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x5HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF4x5HFmode, true, 4, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x5HFmode], mode_nunits[E_RVVMF4x5HFmode]);
    mode_precision[E_RVVMF4x5HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x5HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x5HFmode]))
      mode_size[E_RVVMF4x5HFmode] = -1;
    mode_nunits[E_RVVMF4x5HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x5HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5BFmode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5BFmode], mode_nunits[E_RVVM1x5BFmode]);
    mode_precision[E_RVVM1x5BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x5BFmode]))
      mode_size[E_RVVM1x5BFmode] = -1;
    mode_nunits[E_RVVM1x5BFmode] = ps;
    adjust_mode_mask (E_RVVM1x5BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5BFmode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5BFmode], mode_nunits[E_RVVMF2x5BFmode]);
    mode_precision[E_RVVMF2x5BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5BFmode]))
      mode_size[E_RVVMF2x5BFmode] = -1;
    mode_nunits[E_RVVMF2x5BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x5BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF4x5BFmode, true, 4, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x5BFmode], mode_nunits[E_RVVMF4x5BFmode]);
    mode_precision[E_RVVMF4x5BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x5BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x5BFmode]))
      mode_size[E_RVVMF4x5BFmode] = -1;
    mode_nunits[E_RVVMF4x5BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x5BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5HImode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5HImode], mode_nunits[E_RVVM1x5HImode]);
    mode_precision[E_RVVM1x5HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x5HImode]))
      mode_size[E_RVVM1x5HImode] = -1;
    mode_nunits[E_RVVM1x5HImode] = ps;
    adjust_mode_mask (E_RVVM1x5HImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5HImode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5HImode], mode_nunits[E_RVVMF2x5HImode]);
    mode_precision[E_RVVMF2x5HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5HImode]))
      mode_size[E_RVVMF2x5HImode] = -1;
    mode_nunits[E_RVVMF2x5HImode] = ps;
    adjust_mode_mask (E_RVVMF2x5HImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF4x5HImode, true, 4, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x5HImode], mode_nunits[E_RVVMF4x5HImode]);
    mode_precision[E_RVVMF4x5HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x5HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x5HImode]))
      mode_size[E_RVVMF4x5HImode] = -1;
    mode_nunits[E_RVVMF4x5HImode] = ps;
    adjust_mode_mask (E_RVVMF4x5HImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVM1x5QImode, false, 1, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x5QImode], mode_nunits[E_RVVM1x5QImode]);
    mode_precision[E_RVVM1x5QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x5QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x5QImode]))
      mode_size[E_RVVM1x5QImode] = -1;
    mode_nunits[E_RVVM1x5QImode] = ps;
    adjust_mode_mask (E_RVVM1x5QImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF2x5QImode, true, 2, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x5QImode], mode_nunits[E_RVVMF2x5QImode]);
    mode_precision[E_RVVMF2x5QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x5QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x5QImode]))
      mode_size[E_RVVMF2x5QImode] = -1;
    mode_nunits[E_RVVMF2x5QImode] = ps;
    adjust_mode_mask (E_RVVMF2x5QImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF4x5QImode, true, 4, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x5QImode], mode_nunits[E_RVVMF4x5QImode]);
    mode_precision[E_RVVMF4x5QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x5QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x5QImode]))
      mode_size[E_RVVMF4x5QImode] = -1;
    mode_nunits[E_RVVMF4x5QImode] = ps;
    adjust_mode_mask (E_RVVMF4x5QImode);
  }

  {
    /* config/riscv/riscv-modes.def:262 */
  ps = riscv_v_adjust_nunits (RVVMF8x5QImode, true, 8, 5);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x5QImode], mode_nunits[E_RVVMF8x5QImode]);
    mode_precision[E_RVVMF8x5QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x5QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x5QImode]))
      mode_size[E_RVVMF8x5QImode] = -1;
    mode_nunits[E_RVVMF8x5QImode] = ps;
    adjust_mode_mask (E_RVVMF8x5QImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6DFmode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6DFmode], mode_nunits[E_RVVM1x6DFmode]);
    mode_precision[E_RVVM1x6DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x6DFmode]))
      mode_size[E_RVVM1x6DFmode] = -1;
    mode_nunits[E_RVVM1x6DFmode] = ps;
    adjust_mode_mask (E_RVVM1x6DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6DImode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6DImode], mode_nunits[E_RVVM1x6DImode]);
    mode_precision[E_RVVM1x6DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x6DImode]))
      mode_size[E_RVVM1x6DImode] = -1;
    mode_nunits[E_RVVM1x6DImode] = ps;
    adjust_mode_mask (E_RVVM1x6DImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6SFmode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6SFmode], mode_nunits[E_RVVM1x6SFmode]);
    mode_precision[E_RVVM1x6SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x6SFmode]))
      mode_size[E_RVVM1x6SFmode] = -1;
    mode_nunits[E_RVVM1x6SFmode] = ps;
    adjust_mode_mask (E_RVVM1x6SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6SFmode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6SFmode], mode_nunits[E_RVVMF2x6SFmode]);
    mode_precision[E_RVVMF2x6SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6SFmode]))
      mode_size[E_RVVMF2x6SFmode] = -1;
    mode_nunits[E_RVVMF2x6SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x6SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6SImode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6SImode], mode_nunits[E_RVVM1x6SImode]);
    mode_precision[E_RVVM1x6SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x6SImode]))
      mode_size[E_RVVM1x6SImode] = -1;
    mode_nunits[E_RVVM1x6SImode] = ps;
    adjust_mode_mask (E_RVVM1x6SImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6SImode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6SImode], mode_nunits[E_RVVMF2x6SImode]);
    mode_precision[E_RVVMF2x6SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6SImode]))
      mode_size[E_RVVMF2x6SImode] = -1;
    mode_nunits[E_RVVMF2x6SImode] = ps;
    adjust_mode_mask (E_RVVMF2x6SImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6HFmode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6HFmode], mode_nunits[E_RVVM1x6HFmode]);
    mode_precision[E_RVVM1x6HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x6HFmode]))
      mode_size[E_RVVM1x6HFmode] = -1;
    mode_nunits[E_RVVM1x6HFmode] = ps;
    adjust_mode_mask (E_RVVM1x6HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6HFmode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6HFmode], mode_nunits[E_RVVMF2x6HFmode]);
    mode_precision[E_RVVMF2x6HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6HFmode]))
      mode_size[E_RVVMF2x6HFmode] = -1;
    mode_nunits[E_RVVMF2x6HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x6HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF4x6HFmode, true, 4, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x6HFmode], mode_nunits[E_RVVMF4x6HFmode]);
    mode_precision[E_RVVMF4x6HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x6HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x6HFmode]))
      mode_size[E_RVVMF4x6HFmode] = -1;
    mode_nunits[E_RVVMF4x6HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x6HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6BFmode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6BFmode], mode_nunits[E_RVVM1x6BFmode]);
    mode_precision[E_RVVM1x6BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x6BFmode]))
      mode_size[E_RVVM1x6BFmode] = -1;
    mode_nunits[E_RVVM1x6BFmode] = ps;
    adjust_mode_mask (E_RVVM1x6BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6BFmode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6BFmode], mode_nunits[E_RVVMF2x6BFmode]);
    mode_precision[E_RVVMF2x6BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6BFmode]))
      mode_size[E_RVVMF2x6BFmode] = -1;
    mode_nunits[E_RVVMF2x6BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x6BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF4x6BFmode, true, 4, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x6BFmode], mode_nunits[E_RVVMF4x6BFmode]);
    mode_precision[E_RVVMF4x6BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x6BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x6BFmode]))
      mode_size[E_RVVMF4x6BFmode] = -1;
    mode_nunits[E_RVVMF4x6BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x6BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6HImode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6HImode], mode_nunits[E_RVVM1x6HImode]);
    mode_precision[E_RVVM1x6HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x6HImode]))
      mode_size[E_RVVM1x6HImode] = -1;
    mode_nunits[E_RVVM1x6HImode] = ps;
    adjust_mode_mask (E_RVVM1x6HImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6HImode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6HImode], mode_nunits[E_RVVMF2x6HImode]);
    mode_precision[E_RVVMF2x6HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6HImode]))
      mode_size[E_RVVMF2x6HImode] = -1;
    mode_nunits[E_RVVMF2x6HImode] = ps;
    adjust_mode_mask (E_RVVMF2x6HImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF4x6HImode, true, 4, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x6HImode], mode_nunits[E_RVVMF4x6HImode]);
    mode_precision[E_RVVMF4x6HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x6HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x6HImode]))
      mode_size[E_RVVMF4x6HImode] = -1;
    mode_nunits[E_RVVMF4x6HImode] = ps;
    adjust_mode_mask (E_RVVMF4x6HImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVM1x6QImode, false, 1, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x6QImode], mode_nunits[E_RVVM1x6QImode]);
    mode_precision[E_RVVM1x6QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x6QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x6QImode]))
      mode_size[E_RVVM1x6QImode] = -1;
    mode_nunits[E_RVVM1x6QImode] = ps;
    adjust_mode_mask (E_RVVM1x6QImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF2x6QImode, true, 2, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x6QImode], mode_nunits[E_RVVMF2x6QImode]);
    mode_precision[E_RVVMF2x6QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x6QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x6QImode]))
      mode_size[E_RVVMF2x6QImode] = -1;
    mode_nunits[E_RVVMF2x6QImode] = ps;
    adjust_mode_mask (E_RVVMF2x6QImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF4x6QImode, true, 4, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x6QImode], mode_nunits[E_RVVMF4x6QImode]);
    mode_precision[E_RVVMF4x6QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x6QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x6QImode]))
      mode_size[E_RVVMF4x6QImode] = -1;
    mode_nunits[E_RVVMF4x6QImode] = ps;
    adjust_mode_mask (E_RVVMF4x6QImode);
  }

  {
    /* config/riscv/riscv-modes.def:261 */
  ps = riscv_v_adjust_nunits (RVVMF8x6QImode, true, 8, 6);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x6QImode], mode_nunits[E_RVVMF8x6QImode]);
    mode_precision[E_RVVMF8x6QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x6QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x6QImode]))
      mode_size[E_RVVMF8x6QImode] = -1;
    mode_nunits[E_RVVMF8x6QImode] = ps;
    adjust_mode_mask (E_RVVMF8x6QImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7DFmode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7DFmode], mode_nunits[E_RVVM1x7DFmode]);
    mode_precision[E_RVVM1x7DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x7DFmode]))
      mode_size[E_RVVM1x7DFmode] = -1;
    mode_nunits[E_RVVM1x7DFmode] = ps;
    adjust_mode_mask (E_RVVM1x7DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7DImode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7DImode], mode_nunits[E_RVVM1x7DImode]);
    mode_precision[E_RVVM1x7DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x7DImode]))
      mode_size[E_RVVM1x7DImode] = -1;
    mode_nunits[E_RVVM1x7DImode] = ps;
    adjust_mode_mask (E_RVVM1x7DImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7SFmode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7SFmode], mode_nunits[E_RVVM1x7SFmode]);
    mode_precision[E_RVVM1x7SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x7SFmode]))
      mode_size[E_RVVM1x7SFmode] = -1;
    mode_nunits[E_RVVM1x7SFmode] = ps;
    adjust_mode_mask (E_RVVM1x7SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7SFmode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7SFmode], mode_nunits[E_RVVMF2x7SFmode]);
    mode_precision[E_RVVMF2x7SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7SFmode]))
      mode_size[E_RVVMF2x7SFmode] = -1;
    mode_nunits[E_RVVMF2x7SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x7SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7SImode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7SImode], mode_nunits[E_RVVM1x7SImode]);
    mode_precision[E_RVVM1x7SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x7SImode]))
      mode_size[E_RVVM1x7SImode] = -1;
    mode_nunits[E_RVVM1x7SImode] = ps;
    adjust_mode_mask (E_RVVM1x7SImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7SImode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7SImode], mode_nunits[E_RVVMF2x7SImode]);
    mode_precision[E_RVVMF2x7SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7SImode]))
      mode_size[E_RVVMF2x7SImode] = -1;
    mode_nunits[E_RVVMF2x7SImode] = ps;
    adjust_mode_mask (E_RVVMF2x7SImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7HFmode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7HFmode], mode_nunits[E_RVVM1x7HFmode]);
    mode_precision[E_RVVM1x7HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x7HFmode]))
      mode_size[E_RVVM1x7HFmode] = -1;
    mode_nunits[E_RVVM1x7HFmode] = ps;
    adjust_mode_mask (E_RVVM1x7HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7HFmode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7HFmode], mode_nunits[E_RVVMF2x7HFmode]);
    mode_precision[E_RVVMF2x7HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7HFmode]))
      mode_size[E_RVVMF2x7HFmode] = -1;
    mode_nunits[E_RVVMF2x7HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x7HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF4x7HFmode, true, 4, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x7HFmode], mode_nunits[E_RVVMF4x7HFmode]);
    mode_precision[E_RVVMF4x7HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x7HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x7HFmode]))
      mode_size[E_RVVMF4x7HFmode] = -1;
    mode_nunits[E_RVVMF4x7HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x7HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7BFmode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7BFmode], mode_nunits[E_RVVM1x7BFmode]);
    mode_precision[E_RVVM1x7BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x7BFmode]))
      mode_size[E_RVVM1x7BFmode] = -1;
    mode_nunits[E_RVVM1x7BFmode] = ps;
    adjust_mode_mask (E_RVVM1x7BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7BFmode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7BFmode], mode_nunits[E_RVVMF2x7BFmode]);
    mode_precision[E_RVVMF2x7BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7BFmode]))
      mode_size[E_RVVMF2x7BFmode] = -1;
    mode_nunits[E_RVVMF2x7BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x7BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF4x7BFmode, true, 4, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x7BFmode], mode_nunits[E_RVVMF4x7BFmode]);
    mode_precision[E_RVVMF4x7BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x7BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x7BFmode]))
      mode_size[E_RVVMF4x7BFmode] = -1;
    mode_nunits[E_RVVMF4x7BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x7BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7HImode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7HImode], mode_nunits[E_RVVM1x7HImode]);
    mode_precision[E_RVVM1x7HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x7HImode]))
      mode_size[E_RVVM1x7HImode] = -1;
    mode_nunits[E_RVVM1x7HImode] = ps;
    adjust_mode_mask (E_RVVM1x7HImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7HImode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7HImode], mode_nunits[E_RVVMF2x7HImode]);
    mode_precision[E_RVVMF2x7HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7HImode]))
      mode_size[E_RVVMF2x7HImode] = -1;
    mode_nunits[E_RVVMF2x7HImode] = ps;
    adjust_mode_mask (E_RVVMF2x7HImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF4x7HImode, true, 4, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x7HImode], mode_nunits[E_RVVMF4x7HImode]);
    mode_precision[E_RVVMF4x7HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x7HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x7HImode]))
      mode_size[E_RVVMF4x7HImode] = -1;
    mode_nunits[E_RVVMF4x7HImode] = ps;
    adjust_mode_mask (E_RVVMF4x7HImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVM1x7QImode, false, 1, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x7QImode], mode_nunits[E_RVVM1x7QImode]);
    mode_precision[E_RVVM1x7QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x7QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x7QImode]))
      mode_size[E_RVVM1x7QImode] = -1;
    mode_nunits[E_RVVM1x7QImode] = ps;
    adjust_mode_mask (E_RVVM1x7QImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF2x7QImode, true, 2, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x7QImode], mode_nunits[E_RVVMF2x7QImode]);
    mode_precision[E_RVVMF2x7QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x7QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x7QImode]))
      mode_size[E_RVVMF2x7QImode] = -1;
    mode_nunits[E_RVVMF2x7QImode] = ps;
    adjust_mode_mask (E_RVVMF2x7QImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF4x7QImode, true, 4, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x7QImode], mode_nunits[E_RVVMF4x7QImode]);
    mode_precision[E_RVVMF4x7QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x7QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x7QImode]))
      mode_size[E_RVVMF4x7QImode] = -1;
    mode_nunits[E_RVVMF4x7QImode] = ps;
    adjust_mode_mask (E_RVVMF4x7QImode);
  }

  {
    /* config/riscv/riscv-modes.def:260 */
  ps = riscv_v_adjust_nunits (RVVMF8x7QImode, true, 8, 7);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x7QImode], mode_nunits[E_RVVMF8x7QImode]);
    mode_precision[E_RVVMF8x7QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x7QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x7QImode]))
      mode_size[E_RVVMF8x7QImode] = -1;
    mode_nunits[E_RVVMF8x7QImode] = ps;
    adjust_mode_mask (E_RVVMF8x7QImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8DFmode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8DFmode], mode_nunits[E_RVVM1x8DFmode]);
    mode_precision[E_RVVM1x8DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x8DFmode]))
      mode_size[E_RVVM1x8DFmode] = -1;
    mode_nunits[E_RVVM1x8DFmode] = ps;
    adjust_mode_mask (E_RVVM1x8DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8DImode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8DImode], mode_nunits[E_RVVM1x8DImode]);
    mode_precision[E_RVVM1x8DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8DImode], BITS_PER_UNIT, &mode_size[E_RVVM1x8DImode]))
      mode_size[E_RVVM1x8DImode] = -1;
    mode_nunits[E_RVVM1x8DImode] = ps;
    adjust_mode_mask (E_RVVM1x8DImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8SFmode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8SFmode], mode_nunits[E_RVVM1x8SFmode]);
    mode_precision[E_RVVM1x8SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x8SFmode]))
      mode_size[E_RVVM1x8SFmode] = -1;
    mode_nunits[E_RVVM1x8SFmode] = ps;
    adjust_mode_mask (E_RVVM1x8SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8SFmode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8SFmode], mode_nunits[E_RVVMF2x8SFmode]);
    mode_precision[E_RVVMF2x8SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8SFmode]))
      mode_size[E_RVVMF2x8SFmode] = -1;
    mode_nunits[E_RVVMF2x8SFmode] = ps;
    adjust_mode_mask (E_RVVMF2x8SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8SImode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8SImode], mode_nunits[E_RVVM1x8SImode]);
    mode_precision[E_RVVM1x8SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8SImode], BITS_PER_UNIT, &mode_size[E_RVVM1x8SImode]))
      mode_size[E_RVVM1x8SImode] = -1;
    mode_nunits[E_RVVM1x8SImode] = ps;
    adjust_mode_mask (E_RVVM1x8SImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8SImode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8SImode], mode_nunits[E_RVVMF2x8SImode]);
    mode_precision[E_RVVMF2x8SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8SImode]))
      mode_size[E_RVVMF2x8SImode] = -1;
    mode_nunits[E_RVVMF2x8SImode] = ps;
    adjust_mode_mask (E_RVVMF2x8SImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8HFmode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8HFmode], mode_nunits[E_RVVM1x8HFmode]);
    mode_precision[E_RVVM1x8HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x8HFmode]))
      mode_size[E_RVVM1x8HFmode] = -1;
    mode_nunits[E_RVVM1x8HFmode] = ps;
    adjust_mode_mask (E_RVVM1x8HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8HFmode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8HFmode], mode_nunits[E_RVVMF2x8HFmode]);
    mode_precision[E_RVVMF2x8HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8HFmode]))
      mode_size[E_RVVMF2x8HFmode] = -1;
    mode_nunits[E_RVVMF2x8HFmode] = ps;
    adjust_mode_mask (E_RVVMF2x8HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF4x8HFmode, true, 4, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x8HFmode], mode_nunits[E_RVVMF4x8HFmode]);
    mode_precision[E_RVVMF4x8HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x8HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x8HFmode]))
      mode_size[E_RVVMF4x8HFmode] = -1;
    mode_nunits[E_RVVMF4x8HFmode] = ps;
    adjust_mode_mask (E_RVVMF4x8HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8BFmode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8BFmode], mode_nunits[E_RVVM1x8BFmode]);
    mode_precision[E_RVVM1x8BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1x8BFmode]))
      mode_size[E_RVVM1x8BFmode] = -1;
    mode_nunits[E_RVVM1x8BFmode] = ps;
    adjust_mode_mask (E_RVVM1x8BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8BFmode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8BFmode], mode_nunits[E_RVVMF2x8BFmode]);
    mode_precision[E_RVVMF2x8BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8BFmode]))
      mode_size[E_RVVMF2x8BFmode] = -1;
    mode_nunits[E_RVVMF2x8BFmode] = ps;
    adjust_mode_mask (E_RVVMF2x8BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF4x8BFmode, true, 4, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x8BFmode], mode_nunits[E_RVVMF4x8BFmode]);
    mode_precision[E_RVVMF4x8BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x8BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4x8BFmode]))
      mode_size[E_RVVMF4x8BFmode] = -1;
    mode_nunits[E_RVVMF4x8BFmode] = ps;
    adjust_mode_mask (E_RVVMF4x8BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8HImode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8HImode], mode_nunits[E_RVVM1x8HImode]);
    mode_precision[E_RVVM1x8HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8HImode], BITS_PER_UNIT, &mode_size[E_RVVM1x8HImode]))
      mode_size[E_RVVM1x8HImode] = -1;
    mode_nunits[E_RVVM1x8HImode] = ps;
    adjust_mode_mask (E_RVVM1x8HImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8HImode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8HImode], mode_nunits[E_RVVMF2x8HImode]);
    mode_precision[E_RVVMF2x8HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8HImode]))
      mode_size[E_RVVMF2x8HImode] = -1;
    mode_nunits[E_RVVMF2x8HImode] = ps;
    adjust_mode_mask (E_RVVMF2x8HImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF4x8HImode, true, 4, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x8HImode], mode_nunits[E_RVVMF4x8HImode]);
    mode_precision[E_RVVMF4x8HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x8HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x8HImode]))
      mode_size[E_RVVMF4x8HImode] = -1;
    mode_nunits[E_RVVMF4x8HImode] = ps;
    adjust_mode_mask (E_RVVMF4x8HImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVM1x8QImode, false, 1, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVM1x8QImode], mode_nunits[E_RVVM1x8QImode]);
    mode_precision[E_RVVM1x8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1x8QImode], BITS_PER_UNIT, &mode_size[E_RVVM1x8QImode]))
      mode_size[E_RVVM1x8QImode] = -1;
    mode_nunits[E_RVVM1x8QImode] = ps;
    adjust_mode_mask (E_RVVM1x8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF2x8QImode, true, 2, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2x8QImode], mode_nunits[E_RVVMF2x8QImode]);
    mode_precision[E_RVVMF2x8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2x8QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2x8QImode]))
      mode_size[E_RVVMF2x8QImode] = -1;
    mode_nunits[E_RVVMF2x8QImode] = ps;
    adjust_mode_mask (E_RVVMF2x8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF4x8QImode, true, 4, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4x8QImode], mode_nunits[E_RVVMF4x8QImode]);
    mode_precision[E_RVVMF4x8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4x8QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4x8QImode]))
      mode_size[E_RVVMF4x8QImode] = -1;
    mode_nunits[E_RVVMF4x8QImode] = ps;
    adjust_mode_mask (E_RVVMF4x8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:259 */
  ps = riscv_v_adjust_nunits (RVVMF8x8QImode, true, 8, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8x8QImode], mode_nunits[E_RVVMF8x8QImode]);
    mode_precision[E_RVVMF8x8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8x8QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8x8QImode]))
      mode_size[E_RVVMF8x8QImode] = -1;
    mode_nunits[E_RVVMF8x8QImode] = ps;
    adjust_mode_mask (E_RVVMF8x8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:169 */
  ps = riscv_v_adjust_nunits (RVVMF2SFmode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2SFmode], mode_nunits[E_RVVMF2SFmode]);
    mode_precision[E_RVVMF2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2SFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2SFmode]))
      mode_size[E_RVVMF2SFmode] = -1;
    mode_nunits[E_RVVMF2SFmode] = ps;
    adjust_mode_mask (E_RVVMF2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:168 */
  ps = riscv_v_adjust_nunits (RVVMF2SImode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2SImode], mode_nunits[E_RVVMF2SImode]);
    mode_precision[E_RVVMF2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2SImode], BITS_PER_UNIT, &mode_size[E_RVVMF2SImode]))
      mode_size[E_RVVMF2SImode] = -1;
    mode_nunits[E_RVVMF2SImode] = ps;
    adjust_mode_mask (E_RVVMF2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:167 */
  ps = riscv_v_adjust_nunits (RVVMF4HFmode, true, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4HFmode], mode_nunits[E_RVVMF4HFmode]);
    mode_precision[E_RVVMF4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4HFmode]))
      mode_size[E_RVVMF4HFmode] = -1;
    mode_nunits[E_RVVMF4HFmode] = ps;
    adjust_mode_mask (E_RVVMF4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:166 */
  ps = riscv_v_adjust_nunits (RVVMF2HFmode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2HFmode], mode_nunits[E_RVVMF2HFmode]);
    mode_precision[E_RVVMF2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2HFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2HFmode]))
      mode_size[E_RVVMF2HFmode] = -1;
    mode_nunits[E_RVVMF2HFmode] = ps;
    adjust_mode_mask (E_RVVMF2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:165 */
  ps = riscv_v_adjust_nunits (RVVMF4BFmode, true, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4BFmode], mode_nunits[E_RVVMF4BFmode]);
    mode_precision[E_RVVMF4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF4BFmode]))
      mode_size[E_RVVMF4BFmode] = -1;
    mode_nunits[E_RVVMF4BFmode] = ps;
    adjust_mode_mask (E_RVVMF4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:164 */
  ps = riscv_v_adjust_nunits (RVVMF2BFmode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2BFmode], mode_nunits[E_RVVMF2BFmode]);
    mode_precision[E_RVVMF2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2BFmode], BITS_PER_UNIT, &mode_size[E_RVVMF2BFmode]))
      mode_size[E_RVVMF2BFmode] = -1;
    mode_nunits[E_RVVMF2BFmode] = ps;
    adjust_mode_mask (E_RVVMF2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:163 */
  ps = riscv_v_adjust_nunits (RVVMF4HImode, true, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4HImode], mode_nunits[E_RVVMF4HImode]);
    mode_precision[E_RVVMF4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4HImode], BITS_PER_UNIT, &mode_size[E_RVVMF4HImode]))
      mode_size[E_RVVMF4HImode] = -1;
    mode_nunits[E_RVVMF4HImode] = ps;
    adjust_mode_mask (E_RVVMF4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:162 */
  ps = riscv_v_adjust_nunits (RVVMF2HImode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2HImode], mode_nunits[E_RVVMF2HImode]);
    mode_precision[E_RVVMF2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2HImode], BITS_PER_UNIT, &mode_size[E_RVVMF2HImode]))
      mode_size[E_RVVMF2HImode] = -1;
    mode_nunits[E_RVVMF2HImode] = ps;
    adjust_mode_mask (E_RVVMF2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:161 */
  ps = riscv_v_adjust_nunits (RVVMF8QImode, true, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8QImode], mode_nunits[E_RVVMF8QImode]);
    mode_precision[E_RVVMF8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8QImode], BITS_PER_UNIT, &mode_size[E_RVVMF8QImode]))
      mode_size[E_RVVMF8QImode] = -1;
    mode_nunits[E_RVVMF8QImode] = ps;
    adjust_mode_mask (E_RVVMF8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:160 */
  ps = riscv_v_adjust_nunits (RVVMF4QImode, true, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4QImode], mode_nunits[E_RVVMF4QImode]);
    mode_precision[E_RVVMF4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4QImode], BITS_PER_UNIT, &mode_size[E_RVVMF4QImode]))
      mode_size[E_RVVMF4QImode] = -1;
    mode_nunits[E_RVVMF4QImode] = ps;
    adjust_mode_mask (E_RVVMF4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:159 */
  ps = riscv_v_adjust_nunits (RVVMF2QImode, true, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2QImode], mode_nunits[E_RVVMF2QImode]);
    mode_precision[E_RVVMF2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2QImode], BITS_PER_UNIT, &mode_size[E_RVVMF2QImode]))
      mode_size[E_RVVMF2QImode] = -1;
    mode_nunits[E_RVVMF2QImode] = ps;
    adjust_mode_mask (E_RVVMF2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8DFmode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8DFmode], mode_nunits[E_RVVM8DFmode]);
    mode_precision[E_RVVM8DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8DFmode], BITS_PER_UNIT, &mode_size[E_RVVM8DFmode]))
      mode_size[E_RVVM8DFmode] = -1;
    mode_nunits[E_RVVM8DFmode] = ps;
    adjust_mode_mask (E_RVVM8DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8SFmode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8SFmode], mode_nunits[E_RVVM8SFmode]);
    mode_precision[E_RVVM8SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8SFmode], BITS_PER_UNIT, &mode_size[E_RVVM8SFmode]))
      mode_size[E_RVVM8SFmode] = -1;
    mode_nunits[E_RVVM8SFmode] = ps;
    adjust_mode_mask (E_RVVM8SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8HFmode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8HFmode], mode_nunits[E_RVVM8HFmode]);
    mode_precision[E_RVVM8HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8HFmode], BITS_PER_UNIT, &mode_size[E_RVVM8HFmode]))
      mode_size[E_RVVM8HFmode] = -1;
    mode_nunits[E_RVVM8HFmode] = ps;
    adjust_mode_mask (E_RVVM8HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8BFmode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8BFmode], mode_nunits[E_RVVM8BFmode]);
    mode_precision[E_RVVM8BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8BFmode], BITS_PER_UNIT, &mode_size[E_RVVM8BFmode]))
      mode_size[E_RVVM8BFmode] = -1;
    mode_nunits[E_RVVM8BFmode] = ps;
    adjust_mode_mask (E_RVVM8BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8DImode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8DImode], mode_nunits[E_RVVM8DImode]);
    mode_precision[E_RVVM8DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8DImode], BITS_PER_UNIT, &mode_size[E_RVVM8DImode]))
      mode_size[E_RVVM8DImode] = -1;
    mode_nunits[E_RVVM8DImode] = ps;
    adjust_mode_mask (E_RVVM8DImode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8SImode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8SImode], mode_nunits[E_RVVM8SImode]);
    mode_precision[E_RVVM8SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8SImode], BITS_PER_UNIT, &mode_size[E_RVVM8SImode]))
      mode_size[E_RVVM8SImode] = -1;
    mode_nunits[E_RVVM8SImode] = ps;
    adjust_mode_mask (E_RVVM8SImode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8HImode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8HImode], mode_nunits[E_RVVM8HImode]);
    mode_precision[E_RVVM8HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8HImode], BITS_PER_UNIT, &mode_size[E_RVVM8HImode]))
      mode_size[E_RVVM8HImode] = -1;
    mode_nunits[E_RVVM8HImode] = ps;
    adjust_mode_mask (E_RVVM8HImode);
  }

  {
    /* config/riscv/riscv-modes.def:149 */
  ps = riscv_v_adjust_nunits (RVVM8QImode, false, 8, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM8QImode], mode_nunits[E_RVVM8QImode]);
    mode_precision[E_RVVM8QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM8QImode], BITS_PER_UNIT, &mode_size[E_RVVM8QImode]))
      mode_size[E_RVVM8QImode] = -1;
    mode_nunits[E_RVVM8QImode] = ps;
    adjust_mode_mask (E_RVVM8QImode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4DFmode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4DFmode], mode_nunits[E_RVVM4DFmode]);
    mode_precision[E_RVVM4DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4DFmode], BITS_PER_UNIT, &mode_size[E_RVVM4DFmode]))
      mode_size[E_RVVM4DFmode] = -1;
    mode_nunits[E_RVVM4DFmode] = ps;
    adjust_mode_mask (E_RVVM4DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4SFmode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4SFmode], mode_nunits[E_RVVM4SFmode]);
    mode_precision[E_RVVM4SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4SFmode], BITS_PER_UNIT, &mode_size[E_RVVM4SFmode]))
      mode_size[E_RVVM4SFmode] = -1;
    mode_nunits[E_RVVM4SFmode] = ps;
    adjust_mode_mask (E_RVVM4SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4HFmode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4HFmode], mode_nunits[E_RVVM4HFmode]);
    mode_precision[E_RVVM4HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4HFmode], BITS_PER_UNIT, &mode_size[E_RVVM4HFmode]))
      mode_size[E_RVVM4HFmode] = -1;
    mode_nunits[E_RVVM4HFmode] = ps;
    adjust_mode_mask (E_RVVM4HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4BFmode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4BFmode], mode_nunits[E_RVVM4BFmode]);
    mode_precision[E_RVVM4BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4BFmode], BITS_PER_UNIT, &mode_size[E_RVVM4BFmode]))
      mode_size[E_RVVM4BFmode] = -1;
    mode_nunits[E_RVVM4BFmode] = ps;
    adjust_mode_mask (E_RVVM4BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4DImode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4DImode], mode_nunits[E_RVVM4DImode]);
    mode_precision[E_RVVM4DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4DImode], BITS_PER_UNIT, &mode_size[E_RVVM4DImode]))
      mode_size[E_RVVM4DImode] = -1;
    mode_nunits[E_RVVM4DImode] = ps;
    adjust_mode_mask (E_RVVM4DImode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4SImode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4SImode], mode_nunits[E_RVVM4SImode]);
    mode_precision[E_RVVM4SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4SImode], BITS_PER_UNIT, &mode_size[E_RVVM4SImode]))
      mode_size[E_RVVM4SImode] = -1;
    mode_nunits[E_RVVM4SImode] = ps;
    adjust_mode_mask (E_RVVM4SImode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4HImode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4HImode], mode_nunits[E_RVVM4HImode]);
    mode_precision[E_RVVM4HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4HImode], BITS_PER_UNIT, &mode_size[E_RVVM4HImode]))
      mode_size[E_RVVM4HImode] = -1;
    mode_nunits[E_RVVM4HImode] = ps;
    adjust_mode_mask (E_RVVM4HImode);
  }

  {
    /* config/riscv/riscv-modes.def:148 */
  ps = riscv_v_adjust_nunits (RVVM4QImode, false, 4, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM4QImode], mode_nunits[E_RVVM4QImode]);
    mode_precision[E_RVVM4QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM4QImode], BITS_PER_UNIT, &mode_size[E_RVVM4QImode]))
      mode_size[E_RVVM4QImode] = -1;
    mode_nunits[E_RVVM4QImode] = ps;
    adjust_mode_mask (E_RVVM4QImode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2DFmode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2DFmode], mode_nunits[E_RVVM2DFmode]);
    mode_precision[E_RVVM2DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2DFmode], BITS_PER_UNIT, &mode_size[E_RVVM2DFmode]))
      mode_size[E_RVVM2DFmode] = -1;
    mode_nunits[E_RVVM2DFmode] = ps;
    adjust_mode_mask (E_RVVM2DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2SFmode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2SFmode], mode_nunits[E_RVVM2SFmode]);
    mode_precision[E_RVVM2SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2SFmode], BITS_PER_UNIT, &mode_size[E_RVVM2SFmode]))
      mode_size[E_RVVM2SFmode] = -1;
    mode_nunits[E_RVVM2SFmode] = ps;
    adjust_mode_mask (E_RVVM2SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2HFmode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2HFmode], mode_nunits[E_RVVM2HFmode]);
    mode_precision[E_RVVM2HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2HFmode], BITS_PER_UNIT, &mode_size[E_RVVM2HFmode]))
      mode_size[E_RVVM2HFmode] = -1;
    mode_nunits[E_RVVM2HFmode] = ps;
    adjust_mode_mask (E_RVVM2HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2BFmode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2BFmode], mode_nunits[E_RVVM2BFmode]);
    mode_precision[E_RVVM2BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2BFmode], BITS_PER_UNIT, &mode_size[E_RVVM2BFmode]))
      mode_size[E_RVVM2BFmode] = -1;
    mode_nunits[E_RVVM2BFmode] = ps;
    adjust_mode_mask (E_RVVM2BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2DImode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2DImode], mode_nunits[E_RVVM2DImode]);
    mode_precision[E_RVVM2DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2DImode], BITS_PER_UNIT, &mode_size[E_RVVM2DImode]))
      mode_size[E_RVVM2DImode] = -1;
    mode_nunits[E_RVVM2DImode] = ps;
    adjust_mode_mask (E_RVVM2DImode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2SImode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2SImode], mode_nunits[E_RVVM2SImode]);
    mode_precision[E_RVVM2SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2SImode], BITS_PER_UNIT, &mode_size[E_RVVM2SImode]))
      mode_size[E_RVVM2SImode] = -1;
    mode_nunits[E_RVVM2SImode] = ps;
    adjust_mode_mask (E_RVVM2SImode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2HImode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2HImode], mode_nunits[E_RVVM2HImode]);
    mode_precision[E_RVVM2HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2HImode], BITS_PER_UNIT, &mode_size[E_RVVM2HImode]))
      mode_size[E_RVVM2HImode] = -1;
    mode_nunits[E_RVVM2HImode] = ps;
    adjust_mode_mask (E_RVVM2HImode);
  }

  {
    /* config/riscv/riscv-modes.def:147 */
  ps = riscv_v_adjust_nunits (RVVM2QImode, false, 2, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM2QImode], mode_nunits[E_RVVM2QImode]);
    mode_precision[E_RVVM2QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM2QImode], BITS_PER_UNIT, &mode_size[E_RVVM2QImode]))
      mode_size[E_RVVM2QImode] = -1;
    mode_nunits[E_RVVM2QImode] = ps;
    adjust_mode_mask (E_RVVM2QImode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1DFmode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1DFmode], mode_nunits[E_RVVM1DFmode]);
    mode_precision[E_RVVM1DFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1DFmode], BITS_PER_UNIT, &mode_size[E_RVVM1DFmode]))
      mode_size[E_RVVM1DFmode] = -1;
    mode_nunits[E_RVVM1DFmode] = ps;
    adjust_mode_mask (E_RVVM1DFmode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1SFmode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1SFmode], mode_nunits[E_RVVM1SFmode]);
    mode_precision[E_RVVM1SFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1SFmode], BITS_PER_UNIT, &mode_size[E_RVVM1SFmode]))
      mode_size[E_RVVM1SFmode] = -1;
    mode_nunits[E_RVVM1SFmode] = ps;
    adjust_mode_mask (E_RVVM1SFmode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1HFmode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1HFmode], mode_nunits[E_RVVM1HFmode]);
    mode_precision[E_RVVM1HFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1HFmode], BITS_PER_UNIT, &mode_size[E_RVVM1HFmode]))
      mode_size[E_RVVM1HFmode] = -1;
    mode_nunits[E_RVVM1HFmode] = ps;
    adjust_mode_mask (E_RVVM1HFmode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1BFmode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1BFmode], mode_nunits[E_RVVM1BFmode]);
    mode_precision[E_RVVM1BFmode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1BFmode], BITS_PER_UNIT, &mode_size[E_RVVM1BFmode]))
      mode_size[E_RVVM1BFmode] = -1;
    mode_nunits[E_RVVM1BFmode] = ps;
    adjust_mode_mask (E_RVVM1BFmode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1DImode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1DImode], mode_nunits[E_RVVM1DImode]);
    mode_precision[E_RVVM1DImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1DImode], BITS_PER_UNIT, &mode_size[E_RVVM1DImode]))
      mode_size[E_RVVM1DImode] = -1;
    mode_nunits[E_RVVM1DImode] = ps;
    adjust_mode_mask (E_RVVM1DImode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1SImode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1SImode], mode_nunits[E_RVVM1SImode]);
    mode_precision[E_RVVM1SImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1SImode], BITS_PER_UNIT, &mode_size[E_RVVM1SImode]))
      mode_size[E_RVVM1SImode] = -1;
    mode_nunits[E_RVVM1SImode] = ps;
    adjust_mode_mask (E_RVVM1SImode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1HImode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1HImode], mode_nunits[E_RVVM1HImode]);
    mode_precision[E_RVVM1HImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1HImode], BITS_PER_UNIT, &mode_size[E_RVVM1HImode]))
      mode_size[E_RVVM1HImode] = -1;
    mode_nunits[E_RVVM1HImode] = ps;
    adjust_mode_mask (E_RVVM1HImode);
  }

  {
    /* config/riscv/riscv-modes.def:146 */
  ps = riscv_v_adjust_nunits (RVVM1QImode, false, 1, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVM1QImode], mode_nunits[E_RVVM1QImode]);
    mode_precision[E_RVVM1QImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1QImode], BITS_PER_UNIT, &mode_size[E_RVVM1QImode]))
      mode_size[E_RVVM1QImode] = -1;
    mode_nunits[E_RVVM1QImode] = ps;
    adjust_mode_mask (E_RVVM1QImode);
  }

  {
    /* config/riscv/riscv-modes.def:60 */
  ps = riscv_v_adjust_nunits (RVVMF64BImode, 1);
    int old_factor = vector_element_size (mode_precision[E_RVVMF64BImode], mode_nunits[E_RVVMF64BImode]);
    mode_precision[E_RVVMF64BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF64BImode], BITS_PER_UNIT, &mode_size[E_RVVMF64BImode]))
      mode_size[E_RVVMF64BImode] = -1;
    mode_nunits[E_RVVMF64BImode] = ps;
    adjust_mode_mask (E_RVVMF64BImode);
  }

  {
    /* config/riscv/riscv-modes.def:59 */
  ps = riscv_v_adjust_nunits (RVVMF32BImode, 2);
    int old_factor = vector_element_size (mode_precision[E_RVVMF32BImode], mode_nunits[E_RVVMF32BImode]);
    mode_precision[E_RVVMF32BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF32BImode], BITS_PER_UNIT, &mode_size[E_RVVMF32BImode]))
      mode_size[E_RVVMF32BImode] = -1;
    mode_nunits[E_RVVMF32BImode] = ps;
    adjust_mode_mask (E_RVVMF32BImode);
  }

  {
    /* config/riscv/riscv-modes.def:58 */
  ps = riscv_v_adjust_nunits (RVVMF16BImode, 4);
    int old_factor = vector_element_size (mode_precision[E_RVVMF16BImode], mode_nunits[E_RVVMF16BImode]);
    mode_precision[E_RVVMF16BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF16BImode], BITS_PER_UNIT, &mode_size[E_RVVMF16BImode]))
      mode_size[E_RVVMF16BImode] = -1;
    mode_nunits[E_RVVMF16BImode] = ps;
    adjust_mode_mask (E_RVVMF16BImode);
  }

  {
    /* config/riscv/riscv-modes.def:57 */
  ps = riscv_v_adjust_nunits (RVVMF8BImode, 8);
    int old_factor = vector_element_size (mode_precision[E_RVVMF8BImode], mode_nunits[E_RVVMF8BImode]);
    mode_precision[E_RVVMF8BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF8BImode], BITS_PER_UNIT, &mode_size[E_RVVMF8BImode]))
      mode_size[E_RVVMF8BImode] = -1;
    mode_nunits[E_RVVMF8BImode] = ps;
    adjust_mode_mask (E_RVVMF8BImode);
  }

  {
    /* config/riscv/riscv-modes.def:56 */
  ps = riscv_v_adjust_nunits (RVVMF4BImode, 16);
    int old_factor = vector_element_size (mode_precision[E_RVVMF4BImode], mode_nunits[E_RVVMF4BImode]);
    mode_precision[E_RVVMF4BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF4BImode], BITS_PER_UNIT, &mode_size[E_RVVMF4BImode]))
      mode_size[E_RVVMF4BImode] = -1;
    mode_nunits[E_RVVMF4BImode] = ps;
    adjust_mode_mask (E_RVVMF4BImode);
  }

  {
    /* config/riscv/riscv-modes.def:55 */
  ps = riscv_v_adjust_nunits (RVVMF2BImode, 32);
    int old_factor = vector_element_size (mode_precision[E_RVVMF2BImode], mode_nunits[E_RVVMF2BImode]);
    mode_precision[E_RVVMF2BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVMF2BImode], BITS_PER_UNIT, &mode_size[E_RVVMF2BImode]))
      mode_size[E_RVVMF2BImode] = -1;
    mode_nunits[E_RVVMF2BImode] = ps;
    adjust_mode_mask (E_RVVMF2BImode);
  }

  {
    /* config/riscv/riscv-modes.def:54 */
  ps = riscv_v_adjust_nunits (RVVM1BImode, 64);
    int old_factor = vector_element_size (mode_precision[E_RVVM1BImode], mode_nunits[E_RVVM1BImode]);
    mode_precision[E_RVVM1BImode] = ps * old_factor;
    if (!multiple_p (mode_precision[E_RVVM1BImode], BITS_PER_UNIT, &mode_size[E_RVVM1BImode]))
      mode_size[E_RVVM1BImode] = -1;
    mode_nunits[E_RVVM1BImode] = ps;
    adjust_mode_mask (E_RVVM1BImode);
  }

  /* config/riscv/riscv-modes.def:84 */
  ps = riscv_v_adjust_bytesize (RVVMF64BImode, 1);
  s = mode_unit_size[E_RVVMF64BImode];
  mode_size[E_RVVMF64BImode] = ps;
  mode_base_align[E_RVVMF64BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:83 */
  ps = riscv_v_adjust_bytesize (RVVMF32BImode, 1);
  s = mode_unit_size[E_RVVMF32BImode];
  mode_size[E_RVVMF32BImode] = ps;
  mode_base_align[E_RVVMF32BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:82 */
  ps = riscv_v_adjust_bytesize (RVVMF16BImode, 1);
  s = mode_unit_size[E_RVVMF16BImode];
  mode_size[E_RVVMF16BImode] = ps;
  mode_base_align[E_RVVMF16BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:81 */
  ps = riscv_v_adjust_bytesize (RVVMF8BImode, 1);
  s = mode_unit_size[E_RVVMF8BImode];
  mode_size[E_RVVMF8BImode] = ps;
  mode_base_align[E_RVVMF8BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:80 */
  ps = riscv_v_adjust_bytesize (RVVMF4BImode, 2);
  s = mode_unit_size[E_RVVMF4BImode];
  mode_size[E_RVVMF4BImode] = ps;
  mode_base_align[E_RVVMF4BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:79 */
  ps = riscv_v_adjust_bytesize (RVVMF2BImode, 4);
  s = mode_unit_size[E_RVVMF2BImode];
  mode_size[E_RVVMF2BImode] = ps;
  mode_base_align[E_RVVMF2BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:78 */
  ps = riscv_v_adjust_bytesize (RVVM1BImode, 8);
  s = mode_unit_size[E_RVVM1BImode];
  mode_size[E_RVVM1BImode] = ps;
  mode_base_align[E_RVVM1BImode] = known_alignment (ps);

  /* config/riscv/riscv-modes.def:378 */
  s = 1;
  mode_base_align[E_V4096BImode] = s;

  /* config/riscv/riscv-modes.def:377 */
  s = 1;
  mode_base_align[E_V2048BImode] = s;

  /* config/riscv/riscv-modes.def:376 */
  s = 1;
  mode_base_align[E_V1024BImode] = s;

  /* config/riscv/riscv-modes.def:375 */
  s = 1;
  mode_base_align[E_V512BImode] = s;

  /* config/riscv/riscv-modes.def:374 */
  s = 1;
  mode_base_align[E_V256BImode] = s;

  /* config/riscv/riscv-modes.def:373 */
  s = 1;
  mode_base_align[E_V128BImode] = s;

  /* config/riscv/riscv-modes.def:372 */
  s = 1;
  mode_base_align[E_V64BImode] = s;

  /* config/riscv/riscv-modes.def:371 */
  s = 1;
  mode_base_align[E_V32BImode] = s;

  /* config/riscv/riscv-modes.def:370 */
  s = 1;
  mode_base_align[E_V16BImode] = s;

  /* config/riscv/riscv-modes.def:369 */
  s = 1;
  mode_base_align[E_V8BImode] = s;

  /* config/riscv/riscv-modes.def:368 */
  s = 1;
  mode_base_align[E_V4BImode] = s;

  /* config/riscv/riscv-modes.def:367 */
  s = 1;
  mode_base_align[E_V2BImode] = s;

  /* config/riscv/riscv-modes.def:366 */
  s = 1;
  mode_base_align[E_V1BImode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 8;
  mode_base_align[E_RVVM4x2DFmode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 8;
  mode_base_align[E_RVVM4x2DImode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 4;
  mode_base_align[E_RVVM4x2SFmode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 4;
  mode_base_align[E_RVVM4x2SImode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 2;
  mode_base_align[E_RVVM4x2HFmode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 2;
  mode_base_align[E_RVVM4x2BFmode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 2;
  mode_base_align[E_RVVM4x2HImode] = s;

  /* config/riscv/riscv-modes.def:343 */
  s = 1;
  mode_base_align[E_RVVM4x2QImode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 8;
  mode_base_align[E_RVVM2x4DFmode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 8;
  mode_base_align[E_RVVM2x4DImode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 4;
  mode_base_align[E_RVVM2x4SFmode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 4;
  mode_base_align[E_RVVM2x4SImode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 2;
  mode_base_align[E_RVVM2x4HFmode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 2;
  mode_base_align[E_RVVM2x4BFmode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 2;
  mode_base_align[E_RVVM2x4HImode] = s;

  /* config/riscv/riscv-modes.def:305 */
  s = 1;
  mode_base_align[E_RVVM2x4QImode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 8;
  mode_base_align[E_RVVM2x3DFmode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 8;
  mode_base_align[E_RVVM2x3DImode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 4;
  mode_base_align[E_RVVM2x3SFmode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 4;
  mode_base_align[E_RVVM2x3SImode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 2;
  mode_base_align[E_RVVM2x3HFmode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 2;
  mode_base_align[E_RVVM2x3BFmode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 2;
  mode_base_align[E_RVVM2x3HImode] = s;

  /* config/riscv/riscv-modes.def:304 */
  s = 1;
  mode_base_align[E_RVVM2x3QImode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 8;
  mode_base_align[E_RVVM2x2DFmode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 8;
  mode_base_align[E_RVVM2x2DImode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 4;
  mode_base_align[E_RVVM2x2SFmode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 4;
  mode_base_align[E_RVVM2x2SImode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 2;
  mode_base_align[E_RVVM2x2HFmode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 2;
  mode_base_align[E_RVVM2x2BFmode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 2;
  mode_base_align[E_RVVM2x2HImode] = s;

  /* config/riscv/riscv-modes.def:303 */
  s = 1;
  mode_base_align[E_RVVM2x2QImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 8;
  mode_base_align[E_RVVM1x2DFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 8;
  mode_base_align[E_RVVM1x2DImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 4;
  mode_base_align[E_RVVM1x2SFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 4;
  mode_base_align[E_RVVMF2x2SFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 4;
  mode_base_align[E_RVVM1x2SImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 4;
  mode_base_align[E_RVVMF2x2SImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVM1x2HFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF2x2HFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF4x2HFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVM1x2BFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF2x2BFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF4x2BFmode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVM1x2HImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF2x2HImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 2;
  mode_base_align[E_RVVMF4x2HImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 1;
  mode_base_align[E_RVVM1x2QImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 1;
  mode_base_align[E_RVVMF2x2QImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 1;
  mode_base_align[E_RVVMF4x2QImode] = s;

  /* config/riscv/riscv-modes.def:265 */
  s = 1;
  mode_base_align[E_RVVMF8x2QImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 8;
  mode_base_align[E_RVVM1x3DFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 8;
  mode_base_align[E_RVVM1x3DImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 4;
  mode_base_align[E_RVVM1x3SFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 4;
  mode_base_align[E_RVVMF2x3SFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 4;
  mode_base_align[E_RVVM1x3SImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 4;
  mode_base_align[E_RVVMF2x3SImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVM1x3HFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF2x3HFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF4x3HFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVM1x3BFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF2x3BFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF4x3BFmode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVM1x3HImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF2x3HImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 2;
  mode_base_align[E_RVVMF4x3HImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 1;
  mode_base_align[E_RVVM1x3QImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 1;
  mode_base_align[E_RVVMF2x3QImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 1;
  mode_base_align[E_RVVMF4x3QImode] = s;

  /* config/riscv/riscv-modes.def:264 */
  s = 1;
  mode_base_align[E_RVVMF8x3QImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 8;
  mode_base_align[E_RVVM1x4DFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 8;
  mode_base_align[E_RVVM1x4DImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 4;
  mode_base_align[E_RVVM1x4SFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 4;
  mode_base_align[E_RVVMF2x4SFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 4;
  mode_base_align[E_RVVM1x4SImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 4;
  mode_base_align[E_RVVMF2x4SImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVM1x4HFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF2x4HFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF4x4HFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVM1x4BFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF2x4BFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF4x4BFmode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVM1x4HImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF2x4HImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 2;
  mode_base_align[E_RVVMF4x4HImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 1;
  mode_base_align[E_RVVM1x4QImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 1;
  mode_base_align[E_RVVMF2x4QImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 1;
  mode_base_align[E_RVVMF4x4QImode] = s;

  /* config/riscv/riscv-modes.def:263 */
  s = 1;
  mode_base_align[E_RVVMF8x4QImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 8;
  mode_base_align[E_RVVM1x5DFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 8;
  mode_base_align[E_RVVM1x5DImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 4;
  mode_base_align[E_RVVM1x5SFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 4;
  mode_base_align[E_RVVMF2x5SFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 4;
  mode_base_align[E_RVVM1x5SImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 4;
  mode_base_align[E_RVVMF2x5SImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVM1x5HFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF2x5HFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF4x5HFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVM1x5BFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF2x5BFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF4x5BFmode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVM1x5HImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF2x5HImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 2;
  mode_base_align[E_RVVMF4x5HImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 1;
  mode_base_align[E_RVVM1x5QImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 1;
  mode_base_align[E_RVVMF2x5QImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 1;
  mode_base_align[E_RVVMF4x5QImode] = s;

  /* config/riscv/riscv-modes.def:262 */
  s = 1;
  mode_base_align[E_RVVMF8x5QImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 8;
  mode_base_align[E_RVVM1x6DFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 8;
  mode_base_align[E_RVVM1x6DImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 4;
  mode_base_align[E_RVVM1x6SFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 4;
  mode_base_align[E_RVVMF2x6SFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 4;
  mode_base_align[E_RVVM1x6SImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 4;
  mode_base_align[E_RVVMF2x6SImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVM1x6HFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF2x6HFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF4x6HFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVM1x6BFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF2x6BFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF4x6BFmode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVM1x6HImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF2x6HImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 2;
  mode_base_align[E_RVVMF4x6HImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 1;
  mode_base_align[E_RVVM1x6QImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 1;
  mode_base_align[E_RVVMF2x6QImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 1;
  mode_base_align[E_RVVMF4x6QImode] = s;

  /* config/riscv/riscv-modes.def:261 */
  s = 1;
  mode_base_align[E_RVVMF8x6QImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 8;
  mode_base_align[E_RVVM1x7DFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 8;
  mode_base_align[E_RVVM1x7DImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 4;
  mode_base_align[E_RVVM1x7SFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 4;
  mode_base_align[E_RVVMF2x7SFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 4;
  mode_base_align[E_RVVM1x7SImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 4;
  mode_base_align[E_RVVMF2x7SImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVM1x7HFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF2x7HFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF4x7HFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVM1x7BFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF2x7BFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF4x7BFmode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVM1x7HImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF2x7HImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 2;
  mode_base_align[E_RVVMF4x7HImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 1;
  mode_base_align[E_RVVM1x7QImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 1;
  mode_base_align[E_RVVMF2x7QImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 1;
  mode_base_align[E_RVVMF4x7QImode] = s;

  /* config/riscv/riscv-modes.def:260 */
  s = 1;
  mode_base_align[E_RVVMF8x7QImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 8;
  mode_base_align[E_RVVM1x8DFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 8;
  mode_base_align[E_RVVM1x8DImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 4;
  mode_base_align[E_RVVM1x8SFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 4;
  mode_base_align[E_RVVMF2x8SFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 4;
  mode_base_align[E_RVVM1x8SImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 4;
  mode_base_align[E_RVVMF2x8SImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVM1x8HFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF2x8HFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF4x8HFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVM1x8BFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF2x8BFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF4x8BFmode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVM1x8HImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF2x8HImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 2;
  mode_base_align[E_RVVMF4x8HImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 1;
  mode_base_align[E_RVVM1x8QImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 1;
  mode_base_align[E_RVVMF2x8QImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 1;
  mode_base_align[E_RVVMF4x8QImode] = s;

  /* config/riscv/riscv-modes.def:259 */
  s = 1;
  mode_base_align[E_RVVMF8x8QImode] = s;

  /* config/riscv/riscv-modes.def:169 */
  s = 4;
  mode_base_align[E_RVVMF2SFmode] = s;

  /* config/riscv/riscv-modes.def:168 */
  s = 4;
  mode_base_align[E_RVVMF2SImode] = s;

  /* config/riscv/riscv-modes.def:167 */
  s = 2;
  mode_base_align[E_RVVMF4HFmode] = s;

  /* config/riscv/riscv-modes.def:166 */
  s = 2;
  mode_base_align[E_RVVMF2HFmode] = s;

  /* config/riscv/riscv-modes.def:165 */
  s = 2;
  mode_base_align[E_RVVMF4BFmode] = s;

  /* config/riscv/riscv-modes.def:164 */
  s = 2;
  mode_base_align[E_RVVMF2BFmode] = s;

  /* config/riscv/riscv-modes.def:163 */
  s = 2;
  mode_base_align[E_RVVMF4HImode] = s;

  /* config/riscv/riscv-modes.def:162 */
  s = 2;
  mode_base_align[E_RVVMF2HImode] = s;

  /* config/riscv/riscv-modes.def:161 */
  s = 1;
  mode_base_align[E_RVVMF8QImode] = s;

  /* config/riscv/riscv-modes.def:160 */
  s = 1;
  mode_base_align[E_RVVMF4QImode] = s;

  /* config/riscv/riscv-modes.def:159 */
  s = 1;
  mode_base_align[E_RVVMF2QImode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 8;
  mode_base_align[E_RVVM8DFmode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 4;
  mode_base_align[E_RVVM8SFmode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 2;
  mode_base_align[E_RVVM8HFmode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 2;
  mode_base_align[E_RVVM8BFmode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 8;
  mode_base_align[E_RVVM8DImode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 4;
  mode_base_align[E_RVVM8SImode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 2;
  mode_base_align[E_RVVM8HImode] = s;

  /* config/riscv/riscv-modes.def:149 */
  s = 1;
  mode_base_align[E_RVVM8QImode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 8;
  mode_base_align[E_RVVM4DFmode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 4;
  mode_base_align[E_RVVM4SFmode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 2;
  mode_base_align[E_RVVM4HFmode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 2;
  mode_base_align[E_RVVM4BFmode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 8;
  mode_base_align[E_RVVM4DImode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 4;
  mode_base_align[E_RVVM4SImode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 2;
  mode_base_align[E_RVVM4HImode] = s;

  /* config/riscv/riscv-modes.def:148 */
  s = 1;
  mode_base_align[E_RVVM4QImode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 8;
  mode_base_align[E_RVVM2DFmode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 4;
  mode_base_align[E_RVVM2SFmode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 2;
  mode_base_align[E_RVVM2HFmode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 2;
  mode_base_align[E_RVVM2BFmode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 8;
  mode_base_align[E_RVVM2DImode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 4;
  mode_base_align[E_RVVM2SImode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 2;
  mode_base_align[E_RVVM2HImode] = s;

  /* config/riscv/riscv-modes.def:147 */
  s = 1;
  mode_base_align[E_RVVM2QImode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 8;
  mode_base_align[E_RVVM1DFmode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 4;
  mode_base_align[E_RVVM1SFmode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 2;
  mode_base_align[E_RVVM1HFmode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 2;
  mode_base_align[E_RVVM1BFmode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 8;
  mode_base_align[E_RVVM1DImode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 4;
  mode_base_align[E_RVVM1SImode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 2;
  mode_base_align[E_RVVM1HImode] = s;

  /* config/riscv/riscv-modes.def:146 */
  s = 1;
  mode_base_align[E_RVVM1QImode] = s;

  /* config/riscv/riscv-modes.def:68 */
  s = 1;
  mode_base_align[E_RVVMF64BImode] = s;

  /* config/riscv/riscv-modes.def:67 */
  s = 1;
  mode_base_align[E_RVVMF32BImode] = s;

  /* config/riscv/riscv-modes.def:66 */
  s = 1;
  mode_base_align[E_RVVMF16BImode] = s;

  /* config/riscv/riscv-modes.def:65 */
  s = 1;
  mode_base_align[E_RVVMF8BImode] = s;

  /* config/riscv/riscv-modes.def:64 */
  s = 1;
  mode_base_align[E_RVVMF4BImode] = s;

  /* config/riscv/riscv-modes.def:63 */
  s = 1;
  mode_base_align[E_RVVMF2BImode] = s;

  /* config/riscv/riscv-modes.def:62 */
  s = 1;
  mode_base_align[E_RVVM1BImode] = s;

  /* config/riscv/riscv-modes.def:28 */
  REAL_MODE_FORMAT (E_BFmode) = &arm_bfloat_half_format;

  /* config/riscv/riscv-modes.def:392.  */
  ps = 4096;
  mode_precision[E_V4096BImode] = ps;

  /* config/riscv/riscv-modes.def:391.  */
  ps = 2048;
  mode_precision[E_V2048BImode] = ps;

  /* config/riscv/riscv-modes.def:390.  */
  ps = 1024;
  mode_precision[E_V1024BImode] = ps;

  /* config/riscv/riscv-modes.def:389.  */
  ps = 512;
  mode_precision[E_V512BImode] = ps;

  /* config/riscv/riscv-modes.def:388.  */
  ps = 256;
  mode_precision[E_V256BImode] = ps;

  /* config/riscv/riscv-modes.def:387.  */
  ps = 128;
  mode_precision[E_V128BImode] = ps;

  /* config/riscv/riscv-modes.def:386.  */
  ps = 64;
  mode_precision[E_V64BImode] = ps;

  /* config/riscv/riscv-modes.def:385.  */
  ps = 32;
  mode_precision[E_V32BImode] = ps;

  /* config/riscv/riscv-modes.def:384.  */
  ps = 16;
  mode_precision[E_V16BImode] = ps;

  /* config/riscv/riscv-modes.def:383.  */
  ps = 8;
  mode_precision[E_V8BImode] = ps;

  /* config/riscv/riscv-modes.def:382.  */
  ps = 4;
  mode_precision[E_V4BImode] = ps;

  /* config/riscv/riscv-modes.def:381.  */
  ps = 2;
  mode_precision[E_V2BImode] = ps;

  /* config/riscv/riscv-modes.def:380.  */
  ps = 1;
  mode_precision[E_V1BImode] = ps;

  /* config/riscv/riscv-modes.def:76.  */
  ps = riscv_v_adjust_precision (RVVMF64BImode, 1);
  mode_precision[E_RVVMF64BImode] = ps;

  /* config/riscv/riscv-modes.def:75.  */
  ps = riscv_v_adjust_precision (RVVMF32BImode, 2);
  mode_precision[E_RVVMF32BImode] = ps;

  /* config/riscv/riscv-modes.def:74.  */
  ps = riscv_v_adjust_precision (RVVMF16BImode, 4);
  mode_precision[E_RVVMF16BImode] = ps;

  /* config/riscv/riscv-modes.def:73.  */
  ps = riscv_v_adjust_precision (RVVMF8BImode, 8);
  mode_precision[E_RVVMF8BImode] = ps;

  /* config/riscv/riscv-modes.def:72.  */
  ps = riscv_v_adjust_precision (RVVMF4BImode, 16);
  mode_precision[E_RVVMF4BImode] = ps;

  /* config/riscv/riscv-modes.def:71.  */
  ps = riscv_v_adjust_precision (RVVMF2BImode, 32);
  mode_precision[E_RVVMF2BImode] = ps;

  /* config/riscv/riscv-modes.def:70.  */
  ps = riscv_v_adjust_precision (RVVM1BImode, 64);
  mode_precision[E_RVVM1BImode] = ps;

  gcc_assert (maybe_ne (mode_size[E_VOIDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BLKmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_OImode], -1));

  gcc_assert (maybe_ne (mode_size[E_QQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UQQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UHQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_USQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UDQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UTQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UHAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_USAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UDAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UTAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CQImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CHImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CSImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CDImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CTImode], -1));

  gcc_assert (maybe_ne (mode_size[E_COImode], -1));

  gcc_assert (maybe_ne (mode_size[E_BCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF16BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF32BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF64BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2048BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4096BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x3QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x3QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x5QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x5QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x6QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x6QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x3HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x7QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x7QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF8x8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x5HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x6HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x7HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2048QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4096QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2048HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM8DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x3BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x3HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x5BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x5HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x6BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x6HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x3SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x7BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x7HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF4x8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM4x2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x5SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x6SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x3DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x3DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x7SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVMF2x8SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x4DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM2x4DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x5DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x6DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x7DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_RVVM1x8DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V256DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2048HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2048BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1024SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V512DFmode], -1));
}

const unsigned char mode_ibit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* OI */
  0,                       /* QQ */
  0,                       /* HQ */
  0,                       /* SQ */
  0,                       /* DQ */
  0,                       /* TQ */
  0,                       /* UQQ */
  0,                       /* UHQ */
  0,                       /* USQ */
  0,                       /* UDQ */
  0,                       /* UTQ */
  8,                       /* HA */
  16,                      /* SA */
  32,                      /* DA */
  64,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* HF */
  0,                       /* BF */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* COI */
  0,                       /* BC */
  0,                       /* HC */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* TC */
  0,                       /* RVVMF8BI */
  0,                       /* RVVMF16BI */
  0,                       /* RVVMF32BI */
  0,                       /* RVVMF64BI */
  0,                       /* V1BI */
  0,                       /* V2BI */
  0,                       /* V4BI */
  0,                       /* V8BI */
  0,                       /* RVVMF4BI */
  0,                       /* V16BI */
  0,                       /* RVVMF2BI */
  0,                       /* V32BI */
  0,                       /* RVVM1BI */
  0,                       /* V64BI */
  0,                       /* V128BI */
  0,                       /* V256BI */
  0,                       /* V512BI */
  0,                       /* V1024BI */
  0,                       /* V2048BI */
  0,                       /* V4096BI */
  0,                       /* RVVM1QI */
  0,                       /* RVVM2QI */
  0,                       /* RVVMF2QI */
  0,                       /* RVVM1HI */
  0,                       /* RVVM4QI */
  0,                       /* RVVMF4QI */
  0,                       /* RVVM2HI */
  0,                       /* RVVMF2HI */
  0,                       /* RVVM1SI */
  0,                       /* RVVM8QI */
  0,                       /* RVVMF8QI */
  0,                       /* RVVM4HI */
  0,                       /* RVVMF4HI */
  0,                       /* RVVM2SI */
  0,                       /* RVVMF2SI */
  0,                       /* RVVM1DI */
  0,                       /* RVVM8HI */
  0,                       /* RVVM4SI */
  0,                       /* RVVM2DI */
  0,                       /* RVVM8SI */
  0,                       /* RVVM4DI */
  0,                       /* RVVM8DI */
  0,                       /* V1QI */
  0,                       /* RVVMF8x2QI */
  0,                       /* RVVMF4x2QI */
  0,                       /* RVVMF2x2QI */
  0,                       /* RVVM1x2QI */
  0,                       /* RVVM2x2QI */
  0,                       /* RVVM4x2QI */
  0,                       /* V2QI */
  0,                       /* V1HI */
  0,                       /* RVVMF8x3QI */
  0,                       /* RVVMF4x3QI */
  0,                       /* RVVMF2x3QI */
  0,                       /* RVVM1x3QI */
  0,                       /* RVVM2x3QI */
  0,                       /* RVVMF8x4QI */
  0,                       /* RVVMF4x4QI */
  0,                       /* RVVMF2x4QI */
  0,                       /* RVVM1x4QI */
  0,                       /* RVVM2x4QI */
  0,                       /* V4QI */
  0,                       /* RVVMF4x2HI */
  0,                       /* RVVMF2x2HI */
  0,                       /* RVVM1x2HI */
  0,                       /* RVVM2x2HI */
  0,                       /* RVVM4x2HI */
  0,                       /* V2HI */
  0,                       /* V1SI */
  0,                       /* RVVMF8x5QI */
  0,                       /* RVVMF4x5QI */
  0,                       /* RVVMF2x5QI */
  0,                       /* RVVM1x5QI */
  0,                       /* RVVMF8x6QI */
  0,                       /* RVVMF4x6QI */
  0,                       /* RVVMF2x6QI */
  0,                       /* RVVM1x6QI */
  0,                       /* RVVMF4x3HI */
  0,                       /* RVVMF2x3HI */
  0,                       /* RVVM1x3HI */
  0,                       /* RVVM2x3HI */
  0,                       /* RVVMF8x7QI */
  0,                       /* RVVMF4x7QI */
  0,                       /* RVVMF2x7QI */
  0,                       /* RVVM1x7QI */
  0,                       /* RVVMF8x8QI */
  0,                       /* RVVMF4x8QI */
  0,                       /* RVVMF2x8QI */
  0,                       /* RVVM1x8QI */
  0,                       /* V8QI */
  0,                       /* RVVMF4x4HI */
  0,                       /* RVVMF2x4HI */
  0,                       /* RVVM1x4HI */
  0,                       /* RVVM2x4HI */
  0,                       /* V4HI */
  0,                       /* RVVMF2x2SI */
  0,                       /* RVVM1x2SI */
  0,                       /* RVVM2x2SI */
  0,                       /* RVVM4x2SI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* RVVMF4x5HI */
  0,                       /* RVVMF2x5HI */
  0,                       /* RVVM1x5HI */
  0,                       /* RVVMF4x6HI */
  0,                       /* RVVMF2x6HI */
  0,                       /* RVVM1x6HI */
  0,                       /* RVVMF2x3SI */
  0,                       /* RVVM1x3SI */
  0,                       /* RVVM2x3SI */
  0,                       /* RVVMF4x7HI */
  0,                       /* RVVMF2x7HI */
  0,                       /* RVVM1x7HI */
  0,                       /* V16QI */
  0,                       /* RVVMF4x8HI */
  0,                       /* RVVMF2x8HI */
  0,                       /* RVVM1x8HI */
  0,                       /* V8HI */
  0,                       /* RVVMF2x4SI */
  0,                       /* RVVM1x4SI */
  0,                       /* RVVM2x4SI */
  0,                       /* V4SI */
  0,                       /* RVVM1x2DI */
  0,                       /* RVVM2x2DI */
  0,                       /* RVVM4x2DI */
  0,                       /* V2DI */
  0,                       /* RVVMF2x5SI */
  0,                       /* RVVM1x5SI */
  0,                       /* RVVMF2x6SI */
  0,                       /* RVVM1x6SI */
  0,                       /* RVVM1x3DI */
  0,                       /* RVVM2x3DI */
  0,                       /* RVVMF2x7SI */
  0,                       /* RVVM1x7SI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* RVVMF2x8SI */
  0,                       /* RVVM1x8SI */
  0,                       /* V8SI */
  0,                       /* RVVM1x4DI */
  0,                       /* RVVM2x4DI */
  0,                       /* V4DI */
  0,                       /* RVVM1x5DI */
  0,                       /* RVVM1x6DI */
  0,                       /* RVVM1x7DI */
  0,                       /* V64QI */
  0,                       /* V32HI */
  0,                       /* V16SI */
  0,                       /* RVVM1x8DI */
  0,                       /* V8DI */
  0,                       /* V128QI */
  0,                       /* V64HI */
  0,                       /* V32SI */
  0,                       /* V16DI */
  0,                       /* V256QI */
  0,                       /* V128HI */
  0,                       /* V64SI */
  0,                       /* V32DI */
  0,                       /* V512QI */
  0,                       /* V256HI */
  0,                       /* V128SI */
  0,                       /* V64DI */
  0,                       /* V1024QI */
  0,                       /* V512HI */
  0,                       /* V256SI */
  0,                       /* V128DI */
  0,                       /* V2048QI */
  0,                       /* V1024HI */
  0,                       /* V512SI */
  0,                       /* V256DI */
  0,                       /* V4096QI */
  0,                       /* V2048HI */
  0,                       /* V1024SI */
  0,                       /* V512DI */
  0,                       /* RVVM1BF */
  0,                       /* RVVM1HF */
  0,                       /* RVVM2BF */
  0,                       /* RVVM2HF */
  0,                       /* RVVMF2BF */
  0,                       /* RVVMF2HF */
  0,                       /* RVVM1SF */
  0,                       /* RVVM4BF */
  0,                       /* RVVM4HF */
  0,                       /* RVVMF4BF */
  0,                       /* RVVMF4HF */
  0,                       /* RVVM2SF */
  0,                       /* RVVMF2SF */
  0,                       /* RVVM1DF */
  0,                       /* RVVM8BF */
  0,                       /* RVVM8HF */
  0,                       /* RVVM4SF */
  0,                       /* RVVM2DF */
  0,                       /* RVVM8SF */
  0,                       /* RVVM4DF */
  0,                       /* RVVM8DF */
  0,                       /* V1HF */
  0,                       /* V1BF */
  0,                       /* RVVMF4x2BF */
  0,                       /* RVVMF2x2BF */
  0,                       /* RVVM1x2BF */
  0,                       /* RVVMF4x2HF */
  0,                       /* RVVMF2x2HF */
  0,                       /* RVVM1x2HF */
  0,                       /* RVVM2x2BF */
  0,                       /* RVVM2x2HF */
  0,                       /* RVVM4x2BF */
  0,                       /* RVVM4x2HF */
  0,                       /* V2HF */
  0,                       /* V2BF */
  0,                       /* V1SF */
  0,                       /* RVVMF4x3BF */
  0,                       /* RVVMF2x3BF */
  0,                       /* RVVM1x3BF */
  0,                       /* RVVMF4x3HF */
  0,                       /* RVVMF2x3HF */
  0,                       /* RVVM1x3HF */
  0,                       /* RVVM2x3BF */
  0,                       /* RVVM2x3HF */
  0,                       /* RVVMF4x4BF */
  0,                       /* RVVMF2x4BF */
  0,                       /* RVVM1x4BF */
  0,                       /* RVVMF4x4HF */
  0,                       /* RVVMF2x4HF */
  0,                       /* RVVM1x4HF */
  0,                       /* RVVM2x4BF */
  0,                       /* RVVM2x4HF */
  0,                       /* V4HF */
  0,                       /* V4BF */
  0,                       /* RVVMF2x2SF */
  0,                       /* RVVM1x2SF */
  0,                       /* RVVM2x2SF */
  0,                       /* RVVM4x2SF */
  0,                       /* V2SF */
  0,                       /* V1DF */
  0,                       /* RVVMF4x5BF */
  0,                       /* RVVMF2x5BF */
  0,                       /* RVVM1x5BF */
  0,                       /* RVVMF4x5HF */
  0,                       /* RVVMF2x5HF */
  0,                       /* RVVM1x5HF */
  0,                       /* RVVMF4x6BF */
  0,                       /* RVVMF2x6BF */
  0,                       /* RVVM1x6BF */
  0,                       /* RVVMF4x6HF */
  0,                       /* RVVMF2x6HF */
  0,                       /* RVVM1x6HF */
  0,                       /* RVVMF2x3SF */
  0,                       /* RVVM1x3SF */
  0,                       /* RVVM2x3SF */
  0,                       /* RVVMF4x7BF */
  0,                       /* RVVMF2x7BF */
  0,                       /* RVVM1x7BF */
  0,                       /* RVVMF4x7HF */
  0,                       /* RVVMF2x7HF */
  0,                       /* RVVM1x7HF */
  0,                       /* RVVMF4x8BF */
  0,                       /* RVVMF2x8BF */
  0,                       /* RVVM1x8BF */
  0,                       /* RVVMF4x8HF */
  0,                       /* RVVMF2x8HF */
  0,                       /* RVVM1x8HF */
  0,                       /* V8HF */
  0,                       /* V8BF */
  0,                       /* RVVMF2x4SF */
  0,                       /* RVVM1x4SF */
  0,                       /* RVVM2x4SF */
  0,                       /* V4SF */
  0,                       /* RVVM1x2DF */
  0,                       /* RVVM2x2DF */
  0,                       /* RVVM4x2DF */
  0,                       /* V2DF */
  0,                       /* RVVMF2x5SF */
  0,                       /* RVVM1x5SF */
  0,                       /* RVVMF2x6SF */
  0,                       /* RVVM1x6SF */
  0,                       /* RVVM1x3DF */
  0,                       /* RVVM2x3DF */
  0,                       /* RVVMF2x7SF */
  0,                       /* RVVM1x7SF */
  0,                       /* V16HF */
  0,                       /* V16BF */
  0,                       /* RVVMF2x8SF */
  0,                       /* RVVM1x8SF */
  0,                       /* V8SF */
  0,                       /* RVVM1x4DF */
  0,                       /* RVVM2x4DF */
  0,                       /* V4DF */
  0,                       /* RVVM1x5DF */
  0,                       /* RVVM1x6DF */
  0,                       /* RVVM1x7DF */
  0,                       /* V32HF */
  0,                       /* V32BF */
  0,                       /* V16SF */
  0,                       /* RVVM1x8DF */
  0,                       /* V8DF */
  0,                       /* V64HF */
  0,                       /* V64BF */
  0,                       /* V32SF */
  0,                       /* V16DF */
  0,                       /* V128HF */
  0,                       /* V128BF */
  0,                       /* V64SF */
  0,                       /* V32DF */
  0,                       /* V256HF */
  0,                       /* V256BF */
  0,                       /* V128SF */
  0,                       /* V64DF */
  0,                       /* V512HF */
  0,                       /* V512BF */
  0,                       /* V256SF */
  0,                       /* V128DF */
  0,                       /* V1024HF */
  0,                       /* V1024BF */
  0,                       /* V512SF */
  0,                       /* V256DF */
  0,                       /* V2048HF */
  0,                       /* V2048BF */
  0,                       /* V1024SF */
  0,                       /* V512DF */
};

const unsigned char mode_fbit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* OI */
  7,                       /* QQ */
  15,                      /* HQ */
  31,                      /* SQ */
  63,                      /* DQ */
  127,                     /* TQ */
  8,                       /* UQQ */
  16,                      /* UHQ */
  32,                      /* USQ */
  64,                      /* UDQ */
  128,                     /* UTQ */
  7,                       /* HA */
  15,                      /* SA */
  31,                      /* DA */
  63,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* HF */
  0,                       /* BF */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* COI */
  0,                       /* BC */
  0,                       /* HC */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* TC */
  0,                       /* RVVMF8BI */
  0,                       /* RVVMF16BI */
  0,                       /* RVVMF32BI */
  0,                       /* RVVMF64BI */
  0,                       /* V1BI */
  0,                       /* V2BI */
  0,                       /* V4BI */
  0,                       /* V8BI */
  0,                       /* RVVMF4BI */
  0,                       /* V16BI */
  0,                       /* RVVMF2BI */
  0,                       /* V32BI */
  0,                       /* RVVM1BI */
  0,                       /* V64BI */
  0,                       /* V128BI */
  0,                       /* V256BI */
  0,                       /* V512BI */
  0,                       /* V1024BI */
  0,                       /* V2048BI */
  0,                       /* V4096BI */
  0,                       /* RVVM1QI */
  0,                       /* RVVM2QI */
  0,                       /* RVVMF2QI */
  0,                       /* RVVM1HI */
  0,                       /* RVVM4QI */
  0,                       /* RVVMF4QI */
  0,                       /* RVVM2HI */
  0,                       /* RVVMF2HI */
  0,                       /* RVVM1SI */
  0,                       /* RVVM8QI */
  0,                       /* RVVMF8QI */
  0,                       /* RVVM4HI */
  0,                       /* RVVMF4HI */
  0,                       /* RVVM2SI */
  0,                       /* RVVMF2SI */
  0,                       /* RVVM1DI */
  0,                       /* RVVM8HI */
  0,                       /* RVVM4SI */
  0,                       /* RVVM2DI */
  0,                       /* RVVM8SI */
  0,                       /* RVVM4DI */
  0,                       /* RVVM8DI */
  0,                       /* V1QI */
  0,                       /* RVVMF8x2QI */
  0,                       /* RVVMF4x2QI */
  0,                       /* RVVMF2x2QI */
  0,                       /* RVVM1x2QI */
  0,                       /* RVVM2x2QI */
  0,                       /* RVVM4x2QI */
  0,                       /* V2QI */
  0,                       /* V1HI */
  0,                       /* RVVMF8x3QI */
  0,                       /* RVVMF4x3QI */
  0,                       /* RVVMF2x3QI */
  0,                       /* RVVM1x3QI */
  0,                       /* RVVM2x3QI */
  0,                       /* RVVMF8x4QI */
  0,                       /* RVVMF4x4QI */
  0,                       /* RVVMF2x4QI */
  0,                       /* RVVM1x4QI */
  0,                       /* RVVM2x4QI */
  0,                       /* V4QI */
  0,                       /* RVVMF4x2HI */
  0,                       /* RVVMF2x2HI */
  0,                       /* RVVM1x2HI */
  0,                       /* RVVM2x2HI */
  0,                       /* RVVM4x2HI */
  0,                       /* V2HI */
  0,                       /* V1SI */
  0,                       /* RVVMF8x5QI */
  0,                       /* RVVMF4x5QI */
  0,                       /* RVVMF2x5QI */
  0,                       /* RVVM1x5QI */
  0,                       /* RVVMF8x6QI */
  0,                       /* RVVMF4x6QI */
  0,                       /* RVVMF2x6QI */
  0,                       /* RVVM1x6QI */
  0,                       /* RVVMF4x3HI */
  0,                       /* RVVMF2x3HI */
  0,                       /* RVVM1x3HI */
  0,                       /* RVVM2x3HI */
  0,                       /* RVVMF8x7QI */
  0,                       /* RVVMF4x7QI */
  0,                       /* RVVMF2x7QI */
  0,                       /* RVVM1x7QI */
  0,                       /* RVVMF8x8QI */
  0,                       /* RVVMF4x8QI */
  0,                       /* RVVMF2x8QI */
  0,                       /* RVVM1x8QI */
  0,                       /* V8QI */
  0,                       /* RVVMF4x4HI */
  0,                       /* RVVMF2x4HI */
  0,                       /* RVVM1x4HI */
  0,                       /* RVVM2x4HI */
  0,                       /* V4HI */
  0,                       /* RVVMF2x2SI */
  0,                       /* RVVM1x2SI */
  0,                       /* RVVM2x2SI */
  0,                       /* RVVM4x2SI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* RVVMF4x5HI */
  0,                       /* RVVMF2x5HI */
  0,                       /* RVVM1x5HI */
  0,                       /* RVVMF4x6HI */
  0,                       /* RVVMF2x6HI */
  0,                       /* RVVM1x6HI */
  0,                       /* RVVMF2x3SI */
  0,                       /* RVVM1x3SI */
  0,                       /* RVVM2x3SI */
  0,                       /* RVVMF4x7HI */
  0,                       /* RVVMF2x7HI */
  0,                       /* RVVM1x7HI */
  0,                       /* V16QI */
  0,                       /* RVVMF4x8HI */
  0,                       /* RVVMF2x8HI */
  0,                       /* RVVM1x8HI */
  0,                       /* V8HI */
  0,                       /* RVVMF2x4SI */
  0,                       /* RVVM1x4SI */
  0,                       /* RVVM2x4SI */
  0,                       /* V4SI */
  0,                       /* RVVM1x2DI */
  0,                       /* RVVM2x2DI */
  0,                       /* RVVM4x2DI */
  0,                       /* V2DI */
  0,                       /* RVVMF2x5SI */
  0,                       /* RVVM1x5SI */
  0,                       /* RVVMF2x6SI */
  0,                       /* RVVM1x6SI */
  0,                       /* RVVM1x3DI */
  0,                       /* RVVM2x3DI */
  0,                       /* RVVMF2x7SI */
  0,                       /* RVVM1x7SI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* RVVMF2x8SI */
  0,                       /* RVVM1x8SI */
  0,                       /* V8SI */
  0,                       /* RVVM1x4DI */
  0,                       /* RVVM2x4DI */
  0,                       /* V4DI */
  0,                       /* RVVM1x5DI */
  0,                       /* RVVM1x6DI */
  0,                       /* RVVM1x7DI */
  0,                       /* V64QI */
  0,                       /* V32HI */
  0,                       /* V16SI */
  0,                       /* RVVM1x8DI */
  0,                       /* V8DI */
  0,                       /* V128QI */
  0,                       /* V64HI */
  0,                       /* V32SI */
  0,                       /* V16DI */
  0,                       /* V256QI */
  0,                       /* V128HI */
  0,                       /* V64SI */
  0,                       /* V32DI */
  0,                       /* V512QI */
  0,                       /* V256HI */
  0,                       /* V128SI */
  0,                       /* V64DI */
  0,                       /* V1024QI */
  0,                       /* V512HI */
  0,                       /* V256SI */
  0,                       /* V128DI */
  0,                       /* V2048QI */
  0,                       /* V1024HI */
  0,                       /* V512SI */
  0,                       /* V256DI */
  0,                       /* V4096QI */
  0,                       /* V2048HI */
  0,                       /* V1024SI */
  0,                       /* V512DI */
  0,                       /* RVVM1BF */
  0,                       /* RVVM1HF */
  0,                       /* RVVM2BF */
  0,                       /* RVVM2HF */
  0,                       /* RVVMF2BF */
  0,                       /* RVVMF2HF */
  0,                       /* RVVM1SF */
  0,                       /* RVVM4BF */
  0,                       /* RVVM4HF */
  0,                       /* RVVMF4BF */
  0,                       /* RVVMF4HF */
  0,                       /* RVVM2SF */
  0,                       /* RVVMF2SF */
  0,                       /* RVVM1DF */
  0,                       /* RVVM8BF */
  0,                       /* RVVM8HF */
  0,                       /* RVVM4SF */
  0,                       /* RVVM2DF */
  0,                       /* RVVM8SF */
  0,                       /* RVVM4DF */
  0,                       /* RVVM8DF */
  0,                       /* V1HF */
  0,                       /* V1BF */
  0,                       /* RVVMF4x2BF */
  0,                       /* RVVMF2x2BF */
  0,                       /* RVVM1x2BF */
  0,                       /* RVVMF4x2HF */
  0,                       /* RVVMF2x2HF */
  0,                       /* RVVM1x2HF */
  0,                       /* RVVM2x2BF */
  0,                       /* RVVM2x2HF */
  0,                       /* RVVM4x2BF */
  0,                       /* RVVM4x2HF */
  0,                       /* V2HF */
  0,                       /* V2BF */
  0,                       /* V1SF */
  0,                       /* RVVMF4x3BF */
  0,                       /* RVVMF2x3BF */
  0,                       /* RVVM1x3BF */
  0,                       /* RVVMF4x3HF */
  0,                       /* RVVMF2x3HF */
  0,                       /* RVVM1x3HF */
  0,                       /* RVVM2x3BF */
  0,                       /* RVVM2x3HF */
  0,                       /* RVVMF4x4BF */
  0,                       /* RVVMF2x4BF */
  0,                       /* RVVM1x4BF */
  0,                       /* RVVMF4x4HF */
  0,                       /* RVVMF2x4HF */
  0,                       /* RVVM1x4HF */
  0,                       /* RVVM2x4BF */
  0,                       /* RVVM2x4HF */
  0,                       /* V4HF */
  0,                       /* V4BF */
  0,                       /* RVVMF2x2SF */
  0,                       /* RVVM1x2SF */
  0,                       /* RVVM2x2SF */
  0,                       /* RVVM4x2SF */
  0,                       /* V2SF */
  0,                       /* V1DF */
  0,                       /* RVVMF4x5BF */
  0,                       /* RVVMF2x5BF */
  0,                       /* RVVM1x5BF */
  0,                       /* RVVMF4x5HF */
  0,                       /* RVVMF2x5HF */
  0,                       /* RVVM1x5HF */
  0,                       /* RVVMF4x6BF */
  0,                       /* RVVMF2x6BF */
  0,                       /* RVVM1x6BF */
  0,                       /* RVVMF4x6HF */
  0,                       /* RVVMF2x6HF */
  0,                       /* RVVM1x6HF */
  0,                       /* RVVMF2x3SF */
  0,                       /* RVVM1x3SF */
  0,                       /* RVVM2x3SF */
  0,                       /* RVVMF4x7BF */
  0,                       /* RVVMF2x7BF */
  0,                       /* RVVM1x7BF */
  0,                       /* RVVMF4x7HF */
  0,                       /* RVVMF2x7HF */
  0,                       /* RVVM1x7HF */
  0,                       /* RVVMF4x8BF */
  0,                       /* RVVMF2x8BF */
  0,                       /* RVVM1x8BF */
  0,                       /* RVVMF4x8HF */
  0,                       /* RVVMF2x8HF */
  0,                       /* RVVM1x8HF */
  0,                       /* V8HF */
  0,                       /* V8BF */
  0,                       /* RVVMF2x4SF */
  0,                       /* RVVM1x4SF */
  0,                       /* RVVM2x4SF */
  0,                       /* V4SF */
  0,                       /* RVVM1x2DF */
  0,                       /* RVVM2x2DF */
  0,                       /* RVVM4x2DF */
  0,                       /* V2DF */
  0,                       /* RVVMF2x5SF */
  0,                       /* RVVM1x5SF */
  0,                       /* RVVMF2x6SF */
  0,                       /* RVVM1x6SF */
  0,                       /* RVVM1x3DF */
  0,                       /* RVVM2x3DF */
  0,                       /* RVVMF2x7SF */
  0,                       /* RVVM1x7SF */
  0,                       /* V16HF */
  0,                       /* V16BF */
  0,                       /* RVVMF2x8SF */
  0,                       /* RVVM1x8SF */
  0,                       /* V8SF */
  0,                       /* RVVM1x4DF */
  0,                       /* RVVM2x4DF */
  0,                       /* V4DF */
  0,                       /* RVVM1x5DF */
  0,                       /* RVVM1x6DF */
  0,                       /* RVVM1x7DF */
  0,                       /* V32HF */
  0,                       /* V32BF */
  0,                       /* V16SF */
  0,                       /* RVVM1x8DF */
  0,                       /* V8DF */
  0,                       /* V64HF */
  0,                       /* V64BF */
  0,                       /* V32SF */
  0,                       /* V16DF */
  0,                       /* V128HF */
  0,                       /* V128BF */
  0,                       /* V64SF */
  0,                       /* V32DF */
  0,                       /* V256HF */
  0,                       /* V256BF */
  0,                       /* V128SF */
  0,                       /* V64DF */
  0,                       /* V512HF */
  0,                       /* V512BF */
  0,                       /* V256SF */
  0,                       /* V128DF */
  0,                       /* V1024HF */
  0,                       /* V1024BF */
  0,                       /* V512SF */
  0,                       /* V256DF */
  0,                       /* V2048HF */
  0,                       /* V2048BF */
  0,                       /* V1024SF */
  0,                       /* V512DF */
};

const int_n_data_t int_n_data[] =
{
 {
  128,                     /* TI */
{ E_TImode }, },
};
