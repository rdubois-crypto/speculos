static unsigned char const C_cx_Ed25519_a[] = {
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xec
};
static unsigned char const C_cx_Ed25519_d[] = {
  // d:  0x52036cee2b6ffe738cc740797779e89800700a4d4141d8ab75eb4dca135978a3
  0x52, 0x03, 0x6c, 0xee, 0x2b, 0x6f, 0xfe, 0x73, 0x8c, 0xc7, 0x40,
  0x79, 0x77, 0x79, 0xe8, 0x98, 0x00, 0x70, 0x0a, 0x4d, 0x41, 0x41,
  0xd8, 0xab, 0x75, 0xeb, 0x4d, 0xca, 0x13, 0x59, 0x78, 0xa3
};

/* prime field referred as p everywhere else*/
static unsigned char const C_cx_Ed25519_q[] = {
  // q:  0x7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffed
  0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed
};
static unsigned char const C_cx_Ed25519_Hq[] = {
  // Hq: 0x00000000000000000000000000000000000000000000000000000000000005a4
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xa4
};
static unsigned char const C_cx_Ed25519_Bx[] = {
  0x21, 0x69, 0x36, 0xd3, 0xcd, 0x6e, 0x53, 0xfe, 0xc0, 0xa4, 0xe2,
  0x31, 0xfd, 0xd6, 0xdc, 0x5c, 0x69, 0x2c, 0xc7, 0x60, 0x95, 0x25,
  0xa7, 0xb2, 0xc9, 0x56, 0x2d, 0x60, 0x8f, 0x25, 0xd5, 0x1a
};
static unsigned char const C_cx_Ed25519_By[] = {
  0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
  0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
  0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x58
};
static unsigned char const C_cx_Ed25519_l[] = {
  // l:  0x1000000000000000000000000000000014DEF9DEA2F79CD65812631A5CF5D3ED
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0xDE, 0xF9, 0xDE, 0xA2, 0xF7,
  0x9C, 0xD6, 0x58, 0x12, 0x63, 0x1A, 0x5C, 0xF5, 0xD3, 0xED
};
static unsigned char const C_cx_Ed25519_Hl[] = {
  // Hl: 0x0399411b7c309a3dceec73d217f5be65d00e1ba768859347a40611e3449c0f01
  0x03, 0x99, 0x41, 0x1b, 0x7c, 0x30, 0x9a, 0x3d, 0xce, 0xec, 0x73,
  0xd2, 0x17, 0xf5, 0xbe, 0x65, 0xd0, 0x0e, 0x1b, 0xa7, 0x68, 0x85,
  0x93, 0x47, 0xa4, 0x06, 0x11, 0xe3, 0x44, 0x9c, 0x0f, 0x01
};
static unsigned char const C_cx_Ed25519_I[] = {
  // I: 0x2b8324804fc1df0b2b4d00993dfbd7a72f431806ad2fe478c4ee1b274a0ea0b0
  0x2b, 0x83, 0x24, 0x80, 0x4f, 0xc1, 0xdf, 0x0b, 0x2b, 0x4d, 0x00,
  0x99, 0x3d, 0xfb, 0xd7, 0xa7, 0x2f, 0x43, 0x18, 0x06, 0xad, 0x2f,
  0xe4, 0x78, 0xc4, 0xee, 0x1b, 0x27, 0x4a, 0x0e, 0xa0, 0xb0
};
static unsigned char const C_cx_Ed25519_Qplus3div8[] = {
  // q3: 0x0ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe
};

#define C_cx_Ed25519_h C_cofactor_8

static cx_curve_twisted_edward_t const C_cx_Ed25519 = {
  .curve = CX_CURVE_Ed25519,
  .bit_size = 256,
  .length = 32,
  .a = C_cx_Ed25519_a,
  .b = C_cx_Ed25519_d, /*unused field, convenient for structure reuse*/
  .p = C_cx_Ed25519_q,
  .Gx = C_cx_Ed25519_Bx,
  .Gy = C_cx_Ed25519_By,
  .n = C_cx_Ed25519_l,
  .h = C_cx_Ed25519_h,
  .Hp = C_cx_Ed25519_Hq,
  .Hn = C_cx_Ed25519_Hl,

  .I = C_cx_Ed25519_I,
  .d = C_cx_Ed25519_d,
  .Qq = C_cx_Ed25519_Qplus3div8,
};
