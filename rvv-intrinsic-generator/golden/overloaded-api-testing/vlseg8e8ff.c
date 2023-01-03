#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vlseg8e8ff_v_i8mf8_m(vint8mf8_t *v0, vint8mf8_t *v1, vint8mf8_t *v2, vint8mf8_t *v3, vint8mf8_t *v4, vint8mf8_t *v5, vint8mf8_t *v6, vint8mf8_t *v7, vbool64_t mask, vint8mf8_t maskedoff0, vint8mf8_t maskedoff1, vint8mf8_t maskedoff2, vint8mf8_t maskedoff3, vint8mf8_t maskedoff4, vint8mf8_t maskedoff5, vint8mf8_t maskedoff6, vint8mf8_t maskedoff7, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_i8mf4_m(vint8mf4_t *v0, vint8mf4_t *v1, vint8mf4_t *v2, vint8mf4_t *v3, vint8mf4_t *v4, vint8mf4_t *v5, vint8mf4_t *v6, vint8mf4_t *v7, vbool32_t mask, vint8mf4_t maskedoff0, vint8mf4_t maskedoff1, vint8mf4_t maskedoff2, vint8mf4_t maskedoff3, vint8mf4_t maskedoff4, vint8mf4_t maskedoff5, vint8mf4_t maskedoff6, vint8mf4_t maskedoff7, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_i8mf2_m(vint8mf2_t *v0, vint8mf2_t *v1, vint8mf2_t *v2, vint8mf2_t *v3, vint8mf2_t *v4, vint8mf2_t *v5, vint8mf2_t *v6, vint8mf2_t *v7, vbool16_t mask, vint8mf2_t maskedoff0, vint8mf2_t maskedoff1, vint8mf2_t maskedoff2, vint8mf2_t maskedoff3, vint8mf2_t maskedoff4, vint8mf2_t maskedoff5, vint8mf2_t maskedoff6, vint8mf2_t maskedoff7, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_i8m1_m(vint8m1_t *v0, vint8m1_t *v1, vint8m1_t *v2, vint8m1_t *v3, vint8m1_t *v4, vint8m1_t *v5, vint8m1_t *v6, vint8m1_t *v7, vbool8_t mask, vint8m1_t maskedoff0, vint8m1_t maskedoff1, vint8m1_t maskedoff2, vint8m1_t maskedoff3, vint8m1_t maskedoff4, vint8m1_t maskedoff5, vint8m1_t maskedoff6, vint8m1_t maskedoff7, const int8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_u8mf8_m(vuint8mf8_t *v0, vuint8mf8_t *v1, vuint8mf8_t *v2, vuint8mf8_t *v3, vuint8mf8_t *v4, vuint8mf8_t *v5, vuint8mf8_t *v6, vuint8mf8_t *v7, vbool64_t mask, vuint8mf8_t maskedoff0, vuint8mf8_t maskedoff1, vuint8mf8_t maskedoff2, vuint8mf8_t maskedoff3, vuint8mf8_t maskedoff4, vuint8mf8_t maskedoff5, vuint8mf8_t maskedoff6, vuint8mf8_t maskedoff7, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_u8mf4_m(vuint8mf4_t *v0, vuint8mf4_t *v1, vuint8mf4_t *v2, vuint8mf4_t *v3, vuint8mf4_t *v4, vuint8mf4_t *v5, vuint8mf4_t *v6, vuint8mf4_t *v7, vbool32_t mask, vuint8mf4_t maskedoff0, vuint8mf4_t maskedoff1, vuint8mf4_t maskedoff2, vuint8mf4_t maskedoff3, vuint8mf4_t maskedoff4, vuint8mf4_t maskedoff5, vuint8mf4_t maskedoff6, vuint8mf4_t maskedoff7, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_u8mf2_m(vuint8mf2_t *v0, vuint8mf2_t *v1, vuint8mf2_t *v2, vuint8mf2_t *v3, vuint8mf2_t *v4, vuint8mf2_t *v5, vuint8mf2_t *v6, vuint8mf2_t *v7, vbool16_t mask, vuint8mf2_t maskedoff0, vuint8mf2_t maskedoff1, vuint8mf2_t maskedoff2, vuint8mf2_t maskedoff3, vuint8mf2_t maskedoff4, vuint8mf2_t maskedoff5, vuint8mf2_t maskedoff6, vuint8mf2_t maskedoff7, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

void test_vlseg8e8ff_v_u8m1_m(vuint8m1_t *v0, vuint8m1_t *v1, vuint8m1_t *v2, vuint8m1_t *v3, vuint8m1_t *v4, vuint8m1_t *v5, vuint8m1_t *v6, vuint8m1_t *v7, vbool8_t mask, vuint8m1_t maskedoff0, vuint8m1_t maskedoff1, vuint8m1_t maskedoff2, vuint8m1_t maskedoff3, vuint8m1_t maskedoff4, vuint8m1_t maskedoff5, vuint8m1_t maskedoff6, vuint8m1_t maskedoff7, const uint8_t *base, size_t *new_vl, size_t vl) {
  return vlseg8e8ff(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, new_vl, vl);
}

