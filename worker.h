#ifndef _HOME_ELLIOT_DESKTOP_UB_WANG_XIAN_NV_DE_REN_WU_CODE_WORKER_H_GENERATED_
#define _HOME_ELLIOT_DESKTOP_UB_WANG_XIAN_NV_DE_REN_WU_CODE_WORKER_H_GENERATED_
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "wasm-rt.h"

#ifndef WASM_RT_MODULE_PREFIX
#define WASM_RT_MODULE_PREFIX
#endif

#define WASM_RT_PASTE_(x, y) x ## y
#define WASM_RT_PASTE(x, y) WASM_RT_PASTE_(x, y)
#define WASM_RT_ADD_PREFIX(x) WASM_RT_PASTE(WASM_RT_MODULE_PREFIX, x)

/* TODO(binji): only use stdint.h types in header */
typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;
typedef uint32_t u32;
typedef int32_t s32;
typedef uint64_t u64;
typedef int64_t s64;
typedef float f32;
typedef double f64;

extern void WASM_RT_ADD_PREFIX(init)(void);

/* import: 'env' 'memory' */
extern wasm_rt_memory_t (*Z_envZ_memory);
/* import: 'env' 'table' */
extern wasm_rt_table_t (*Z_envZ_table);
/* import: 'env' 'tableBase' */
extern u32 (*Z_envZ_tableBaseZ_i);
/* import: 'env' 'DYNAMICTOP_PTR' */
extern u32 (*Z_envZ_DYNAMICTOP_PTRZ_i);
/* import: 'env' 'STACKTOP' */
extern u32 (*Z_envZ_STACKTOPZ_i);
/* import: 'env' 'abort' */
extern void (*Z_envZ_abortZ_vi)(u32);
/* import: 'env' 'enlargeMemory' */
extern u32 (*Z_envZ_enlargeMemoryZ_iv)(void);
/* import: 'env' 'getTotalMemory' */
extern u32 (*Z_envZ_getTotalMemoryZ_iv)(void);
/* import: 'env' 'abortOnCannotGrowMemory' */
extern u32 (*Z_envZ_abortOnCannotGrowMemoryZ_iv)(void);
/* import: 'env' '___setErrNo' */
extern void (*Z_envZ____setErrNoZ_vi)(u32);
/* import: 'env' '___syscall20' */
extern u32 (*Z_envZ____syscall20Z_iii)(u32, u32);
/* import: 'env' '_emscripten_memcpy_big' */
extern u32 (*Z_envZ__emscripten_memcpy_bigZ_iiii)(u32, u32, u32);
/* import: 'env' '_ftime' */
extern u32 (*Z_envZ__ftimeZ_ii)(u32);
/* import: 'env' '_gmtime' */
extern u32 (*Z_envZ__gmtimeZ_ii)(u32);

/* export: '_cryptonight_create' */
extern u32 (*WASM_RT_ADD_PREFIX(Z__cryptonight_createZ_iv))(void);
/* export: '_cryptonight_destroy' */
extern void (*WASM_RT_ADD_PREFIX(Z__cryptonight_destroyZ_vi))(u32);
/* export: '_cryptonight_hash_variant_0' */
extern void (*WASM_RT_ADD_PREFIX(Z__cryptonight_hash_variant_0Z_viiii))(u32, u32, u32, u32);
/* export: '_cryptonight_hash_variant_1' */
extern void (*WASM_RT_ADD_PREFIX(Z__cryptonight_hash_variant_1Z_viiii))(u32, u32, u32, u32);
/* export: '_malloc' */
extern u32 (*WASM_RT_ADD_PREFIX(Z__mallocZ_ii))(u32);
/* export: 'stackAlloc' */
extern u32 (*WASM_RT_ADD_PREFIX(Z_stackAllocZ_ii))(u32);
#ifdef __cplusplus
}
#endif

#endif  /* _HOME_ELLIOT_DESKTOP_UB_WANG_XIAN_NV_DE_REN_WU_CODE_WORKER_H_GENERATED_ */
