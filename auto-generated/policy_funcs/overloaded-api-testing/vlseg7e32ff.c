#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tu(vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tu(vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tu(vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tu(vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tu(vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tu(vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tu(maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tum(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tum(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tum(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tum(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tum(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tum(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tum(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_tumu(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_tumu(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_tumu(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_tumu(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_tumu(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_tumu(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_tumu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32mf2x7_t test_vlseg7e32ff_v_f32mf2x7_mu(vbool64_t mask, vfloat32mf2x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vfloat32m1x7_t test_vlseg7e32ff_v_f32m1x7_mu(vbool32_t mask, vfloat32m1x7_t maskedoff_tuple, const float32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32mf2x7_t test_vlseg7e32ff_v_i32mf2x7_mu(vbool64_t mask, vint32mf2x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vint32m1x7_t test_vlseg7e32ff_v_i32m1x7_mu(vbool32_t mask, vint32m1x7_t maskedoff_tuple, const int32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32mf2x7_t test_vlseg7e32ff_v_u32mf2x7_mu(vbool64_t mask, vuint32mf2x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

vuint32m1x7_t test_vlseg7e32ff_v_u32m1x7_mu(vbool32_t mask, vuint32m1x7_t maskedoff_tuple, const uint32_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg7e32ff_mu(mask, maskedoff_tuple, base, new_vl, vl);
}

