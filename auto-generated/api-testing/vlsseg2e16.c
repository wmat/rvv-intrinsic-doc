#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2(base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2(base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2(base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2(base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2(const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2(base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2(base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2(base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2(base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2(base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2(const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2(base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2(base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2(base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2(base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2(base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2(const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2(base, bstride, vl);
}

vfloat16mf4x2_t test_vlsseg2e16_v_f16mf4x2_m(vbool64_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf4x2_m(mask, base, bstride, vl);
}

vfloat16mf2x2_t test_vlsseg2e16_v_f16mf2x2_m(vbool32_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16mf2x2_m(mask, base, bstride, vl);
}

vfloat16m1x2_t test_vlsseg2e16_v_f16m1x2_m(vbool16_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m1x2_m(mask, base, bstride, vl);
}

vfloat16m2x2_t test_vlsseg2e16_v_f16m2x2_m(vbool8_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m2x2_m(mask, base, bstride, vl);
}

vfloat16m4x2_t test_vlsseg2e16_v_f16m4x2_m(vbool4_t mask, const float16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_f16m4x2_m(mask, base, bstride, vl);
}

vint16mf4x2_t test_vlsseg2e16_v_i16mf4x2_m(vbool64_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf4x2_m(mask, base, bstride, vl);
}

vint16mf2x2_t test_vlsseg2e16_v_i16mf2x2_m(vbool32_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16mf2x2_m(mask, base, bstride, vl);
}

vint16m1x2_t test_vlsseg2e16_v_i16m1x2_m(vbool16_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m1x2_m(mask, base, bstride, vl);
}

vint16m2x2_t test_vlsseg2e16_v_i16m2x2_m(vbool8_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m2x2_m(mask, base, bstride, vl);
}

vint16m4x2_t test_vlsseg2e16_v_i16m4x2_m(vbool4_t mask, const int16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_i16m4x2_m(mask, base, bstride, vl);
}

vuint16mf4x2_t test_vlsseg2e16_v_u16mf4x2_m(vbool64_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf4x2_m(mask, base, bstride, vl);
}

vuint16mf2x2_t test_vlsseg2e16_v_u16mf2x2_m(vbool32_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16mf2x2_m(mask, base, bstride, vl);
}

vuint16m1x2_t test_vlsseg2e16_v_u16m1x2_m(vbool16_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m1x2_m(mask, base, bstride, vl);
}

vuint16m2x2_t test_vlsseg2e16_v_u16m2x2_m(vbool8_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m2x2_m(mask, base, bstride, vl);
}

vuint16m4x2_t test_vlsseg2e16_v_u16m4x2_m(vbool4_t mask, const uint16_t *base, ptrdiff_t bstride, size_t vl) {
  return __riscv_vlsseg2e16_v_u16m4x2_m(mask, base, bstride, vl);
}

