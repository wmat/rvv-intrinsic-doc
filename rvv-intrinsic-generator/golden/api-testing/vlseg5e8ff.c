#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg5e8ff_v_i8mf8(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf8(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf8(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf4(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf2(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8m1(v0, v1, v2, v3, v4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_i8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf8_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8mf2_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

void test_vlseg5e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg5e8ff_v_u8m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, new_vl, vl);
}

