#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg6e16_v_f16mf4x6(float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf4x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_f16mf2x6(float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf2x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_f16m1x6(float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16m1x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16mf4x6(int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf4x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16mf2x6(int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf2x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16m1x6(int16_t *base, ptrdiff_t bstride, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16m1x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16mf4x6(uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf4x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16mf2x6(uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf2x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16m1x6(uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16m1x6(base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_f16mf4x6_m(vbool64_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf4x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_f16mf2x6_m(vbool32_t mask, float16_t *base, ptrdiff_t bstride, vfloat16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16mf2x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_f16m1x6_m(vbool16_t mask, float16_t *base, ptrdiff_t bstride, vfloat16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_f16m1x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16mf4x6_m(vbool64_t mask, int16_t *base, ptrdiff_t bstride, vint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf4x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16mf2x6_m(vbool32_t mask, int16_t *base, ptrdiff_t bstride, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16mf2x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_i16m1x6_m(vbool16_t mask, int16_t *base, ptrdiff_t bstride, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_i16m1x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16mf4x6_m(vbool64_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf4x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16mf2x6_m(vbool32_t mask, uint16_t *base, ptrdiff_t bstride, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16mf2x6_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg6e16_v_u16m1x6_m(vbool16_t mask, uint16_t *base, ptrdiff_t bstride, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vssseg6e16_v_u16m1x6_m(mask, base, bstride, v_tuple, vl);
}

