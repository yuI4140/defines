#pragma once
#include<stdint.h>
// Unsigned int types.
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef unsigned long _u64;
// Signed int types.
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;
typedef signed long _s64;
// Regular int types.
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef long _i64;
// Floating point types
typedef float f32;
typedef double f64;
// void Func
typedef void vFn(void);
// void Func pointer
typedef void (*vFnp)(void);
#define SizeofArray(arr) (sizeof(arr) / sizeof((arr)[0]))
