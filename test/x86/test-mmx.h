#if !defined(SIMDE_TEST_X86_TEST_MMX_H)
#define SIMDE_TEST_X86_TEST_MMX_H

#include "test-x86.h"
#include "../../simde/x86/mmx.h"

SIMDE_TEST_X86_GENERATE_FLOAT_TYPE_FUNCS_(__m64, 32, 2)
SIMDE_TEST_X86_GENERATE_FLOAT_TYPE_FUNCS_(__m64, 64, 1)
SIMDE_TEST_X86_GENERATE_INT_TYPE_FUNCS_(__m64, 8, 8)
SIMDE_TEST_X86_GENERATE_INT_TYPE_FUNCS_(__m64, 16, 4)
SIMDE_TEST_X86_GENERATE_INT_TYPE_FUNCS_(__m64, 32, 2)
SIMDE_TEST_X86_GENERATE_INT_TYPE_FUNCS_(__m64, 64, 1)
SIMDE_TEST_X86_GENERATE_UINT_TYPE_FUNCS_(__m64, 8, 8)
SIMDE_TEST_X86_GENERATE_UINT_TYPE_FUNCS_(__m64, 16, 4)
SIMDE_TEST_X86_GENERATE_UINT_TYPE_FUNCS_(__m64, 32, 2)
SIMDE_TEST_X86_GENERATE_UINT_TYPE_FUNCS_(__m64, 64, 1)

#define simde_test_x86_assert_equal_f32x2(a, b, precision) simde_test_x86_assert_equal_f32x2_(a, b, 1e-##precision##f, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_f64x1(a, b, precision) simde_test_x86_assert_equal_f64x1_(a, b, 1e-##precision, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_i8x8(a, b) simde_test_x86_assert_equal_i8x8_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_i16x4(a, b) simde_test_x86_assert_equal_i16x4_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_i32x2(a, b) simde_test_x86_assert_equal_i32x2_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_i64x1(a, b) simde_test_x86_assert_equal_i64x1_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_u8x8(a, b) simde_test_x86_assert_equal_u8x8_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_u16x4(a, b) simde_test_x86_assert_equal_u16x4_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_u32x2(a, b) simde_test_x86_assert_equal_u32x2_(a, b, __FILE__, __LINE__, #a, #b)
#define simde_test_x86_assert_equal_u64x1(a, b) simde_test_x86_assert_equal_u64x1_(a, b, __FILE__, __LINE__, #a, #b)

#endif /* !defined(SIMDE_TEST_X86_TEST_MMX_H) */