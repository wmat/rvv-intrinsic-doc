#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4(vint8mf8_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2(vint8mf4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1(vint8mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2(vint8m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4(vint8m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8(vint8m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4(vuint8mf8_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2(vuint8mf4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1(vuint8mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2(vuint8m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4(vuint8m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8(vuint8m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2(vfloat16mf4_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2(vfloat16mf4_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1(vfloat16mf2_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1(vfloat16mf2_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2(vfloat16m1_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2(vfloat16m1_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4(vfloat16m2_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4(vfloat16m2_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8(vfloat16m4_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8(vfloat16m4_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2(vfloat16mf4_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2(vfloat16mf4_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1(vfloat16mf2_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1(vfloat16mf2_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2(vfloat16m1_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2(vfloat16m1_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4(vfloat16m2_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4(vfloat16m2_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8(vfloat16m4_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8(vfloat16m4_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2(vint16mf4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1(vint16mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2(vint16m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4(vint16m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8(vint16m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2(vuint16mf4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1(vuint16mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2(vuint16m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4(vuint16m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8(vuint16m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2(vfloat16mf4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1(vfloat16mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2(vfloat16m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4(vfloat16m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8(vfloat16m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1(vfloat32mf2_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2(vfloat32m1_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4(vfloat32m2_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return vfwcvt_x(src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8(vfloat32m4_t src, size_t vl) {
  return vfwcvt_rtz_x(src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1(vfloat32mf2_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2(vfloat32m1_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4(vfloat32m2_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return vfwcvt_xu(src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8(vfloat32m4_t src, size_t vl) {
  return vfwcvt_rtz_xu(src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1(vint32mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2(vint32m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4(vint32m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8(vint32m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1(vuint32mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2(vuint32m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4(vuint32m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8(vuint32m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1(vfloat32mf2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2(vfloat32m1_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4(vfloat32m2_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8(vfloat32m4_t src, size_t vl) {
  return vfwcvt_f(src, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_m(vbool64_t mask, vfloat16mf4_t maskedoff, vint8mf8_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_m(vbool32_t mask, vfloat16mf2_t maskedoff, vint8mf4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, vint8mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vint8m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vint8m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vint8m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_m(vbool64_t mask, vfloat16mf4_t maskedoff, vuint8mf8_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_m(vbool32_t mask, vfloat16mf2_t maskedoff, vuint8mf4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_m(vbool16_t mask, vfloat16m1_t maskedoff, vuint8mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_m(vbool8_t mask, vfloat16m2_t maskedoff, vuint8m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_m(vbool4_t mask, vfloat16m4_t maskedoff, vuint8m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_m(vbool2_t mask, vfloat16m8_t maskedoff, vuint8m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint32mf2_t test_vfwcvt_rtz_x_f_v_i32mf2_m(vbool64_t mask, vint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint32m1_t test_vfwcvt_rtz_x_f_v_i32m1_m(vbool32_t mask, vint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint32m2_t test_vfwcvt_rtz_x_f_v_i32m2_m(vbool16_t mask, vint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint32m4_t test_vfwcvt_rtz_x_f_v_i32m4_m(vbool8_t mask, vint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_m(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint32m8_t test_vfwcvt_rtz_x_f_v_i32m8_m(vbool4_t mask, vint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint32mf2_t test_vfwcvt_rtz_xu_f_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint32m1_t test_vfwcvt_rtz_xu_f_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint32m2_t test_vfwcvt_rtz_xu_f_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint32m4_t test_vfwcvt_rtz_xu_f_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint32m8_t test_vfwcvt_rtz_xu_f_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vint16mf4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vint16mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vint16m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vint16m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vint16m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vuint16mf4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vuint16mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vuint16m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vuint16m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vuint16m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_m(vbool64_t mask, vfloat32mf2_t maskedoff, vfloat16mf4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_m(vbool32_t mask, vfloat32m1_t maskedoff, vfloat16mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_m(vbool16_t mask, vfloat32m2_t maskedoff, vfloat16m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_m(vbool8_t mask, vfloat32m4_t maskedoff, vfloat16m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_m(vbool4_t mask, vfloat32m8_t maskedoff, vfloat16m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint64m1_t test_vfwcvt_rtz_x_f_v_i64m1_m(vbool64_t mask, vint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_m(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint64m2_t test_vfwcvt_rtz_x_f_v_i64m2_m(vbool32_t mask, vint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_m(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint64m4_t test_vfwcvt_rtz_x_f_v_i64m4_m(vbool16_t mask, vint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_m(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfwcvt_x(mask, maskedoff, src, vl);
}

vint64m8_t test_vfwcvt_rtz_x_f_v_i64m8_m(vbool8_t mask, vint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfwcvt_rtz_x(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint64m1_t test_vfwcvt_rtz_xu_f_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint64m2_t test_vfwcvt_rtz_xu_f_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint64m4_t test_vfwcvt_rtz_xu_f_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfwcvt_xu(mask, maskedoff, src, vl);
}

vuint64m8_t test_vfwcvt_rtz_xu_f_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfwcvt_rtz_xu(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vint32mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vint32m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vint32m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vint32m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vuint32mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vuint32m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vuint32m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vuint32m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_m(vbool64_t mask, vfloat64m1_t maskedoff, vfloat32mf2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_m(vbool32_t mask, vfloat64m2_t maskedoff, vfloat32m1_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_m(vbool16_t mask, vfloat64m4_t maskedoff, vfloat32m2_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_m(vbool8_t mask, vfloat64m8_t maskedoff, vfloat32m4_t src, size_t vl) {
  return vfwcvt_f(mask, maskedoff, src, vl);
}

