
/* ------------------------------------------------------------------------ */
/* ---                               Ed448                              --- */
/* ------------------------------------------------------------------------ */
static uint8_t const C_cx_Ed448_a[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
};
static uint8_t const C_cx_Ed448_d[] = {
  // d:
  // 0xfffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffff6756
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x67, 0x56
};
static uint8_t const C_cx_Ed448_q[] = {
  // q:
  // 0xfffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffffffff
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
static uint8_t const C_cx_Ed448_Hq[] = {
  // Hq:
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
static uint8_t const C_cx_Ed448_Bx[] = {
  // Bx:
  // 0x4f1970c66bed0ded221d15a622bf36da9e146570470f1767ea6de324a3d3a46412ae1af72ab66511433b80e18b00938e2626a82bc70cc05e
  0x00, 0x4f, 0x19, 0x70, 0xc6, 0x6b, 0xed, 0x0d, 0xed, 0x22, 0x1d, 0x15,
  0xa6, 0x22, 0xbf, 0x36, 0xda, 0x9e, 0x14, 0x65, 0x70, 0x47, 0x0f, 0x17,
  0x67, 0xea, 0x6d, 0xe3, 0x24, 0xa3, 0xd3, 0xa4, 0x64, 0x12, 0xae, 0x1a,
  0xf7, 0x2a, 0xb6, 0x65, 0x11, 0x43, 0x3b, 0x80, 0xe1, 0x8b, 0x00, 0x93,
  0x8e, 0x26, 0x26, 0xa8, 0x2b, 0xc7, 0x0c, 0xc0, 0x5e
};
static uint8_t const C_cx_Ed448_By[] = {
  // By:
  // 0x693f46716eb6bc248876203756c9c7624bea73736ca3984087789c1e05a0c2d73ad3ff1ce67c39c4fdbd132c4ed7c8ad9808795bf230fa14
  0x00, 0x69, 0x3f, 0x46, 0x71, 0x6e, 0xb6, 0xbc, 0x24, 0x88, 0x76, 0x20,
  0x37, 0x56, 0xc9, 0xc7, 0x62, 0x4b, 0xea, 0x73, 0x73, 0x6c, 0xa3, 0x98,
  0x40, 0x87, 0x78, 0x9c, 0x1e, 0x05, 0xa0, 0xc2, 0xd7, 0x3a, 0xd3, 0xff,
  0x1c, 0xe6, 0x7c, 0x39, 0xc4, 0xfd, 0xbd, 0x13, 0x2c, 0x4e, 0xd7, 0xc8,
  0xad, 0x98, 0x08, 0x79, 0x5b, 0xf2, 0x30, 0xfa, 0x14
};
static uint8_t const C_cx_Ed448_l[] = {
  // l:
  // 0x3fffffffffffffffffffffffffffffffffffffffffffffffffffffff7cca23e9c44edb49aed63690216cc2728dc58f552378c292ab5844f3
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0x7c, 0xca, 0x23, 0xe9, 0xc4, 0x4e, 0xdb,
  0x49, 0xae, 0xd6, 0x36, 0x90, 0x21, 0x6c, 0xc2, 0x72, 0x8d, 0xc5, 0x8f,
  0x55, 0x23, 0x78, 0xc2, 0x92, 0xab, 0x58, 0x44, 0xf3
};
static uint8_t const C_cx_Ed448_Hl[] = {
  // Hl:
  0x00, 0x1a, 0x9c, 0xc1, 0x4b, 0xa3, 0xc4, 0x7c, 0x44, 0xae, 0x17, 0xcf,
  0x72, 0xc9, 0x86, 0x0f, 0xaa, 0x10, 0x75, 0x50, 0xba, 0x94, 0xd0, 0xe8,
  0x08, 0xf1, 0x0a, 0x98, 0xef, 0x88, 0xe1, 0x5b, 0xb4, 0x8b, 0xd8, 0x27,
  0xde, 0x12, 0x7c, 0xe5, 0xf2, 0x3e, 0x0a, 0xa6, 0x8d, 0x30, 0xdb, 0xb9,
  0x89, 0xbb, 0xec, 0xff, 0xc3, 0x3c, 0x3a, 0x37, 0x8c
};

#define C_cx_Ed448_h C_cofactor_4

cx_curve_twisted_edwards_t const C_cx_Ed448 = {
  .curve = CX_CURVE_Ed448,
  .bit_size = 448,
  .length = 57,

  .a = C_cx_Ed448_a,
  .b = C_cx_Ed448_d,
  .p = C_cx_Ed448_q,
  .Gx = C_cx_Ed448_Bx,
  .Gy = C_cx_Ed448_By,
  .n = C_cx_Ed448_l,
  .h = C_cx_Ed448_h,
  .Hp = C_cx_Ed448_Hq,
  .Hn = C_cx_Ed448_Hl,
};
