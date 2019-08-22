/*
 * This is a machine-generated file. Please do not edit it by hand.
 * (As of sbcl-0.8.14, it came from WRITE-CONFIG-H in genesis.lisp.)
 *
 * This file contains low-level information about the
 * internals of a particular version and configuration
 * of SBCL. It is used by the C compiler to create a runtime
 * support environment, an executable program in the host
 * operating system's native format, which can then be used to
 * load and run 'core' files, which are basically programs
 * in SBCL's own format.
 */
#ifndef SBCL_GENESIS_GC_TABLES
#define SBCL_GENESIS_GC_TABLES
static inline boolean specialized_vector_widetag_p(unsigned char widetag) {
  return widetag>=0x85 && (0x03BFFFFEU >> ((widetag-0x80)>>2)) & 1;
}
static inline boolean leaf_obj_widetag_p(unsigned char widetag) {
  return (0x3BFFFFE0E080690LU >> (widetag>>2)) & 1;
}
extern unsigned char lowtag_for_widetag[64];
static inline lispobj compute_lispobj(lispobj* base_addr) {
  lispobj header = *base_addr;
  return make_lispobj(base_addr,
                      is_cons_half(header) ? LIST_POINTER_LOWTAG :
                        lowtag_for_widetag[header_widetag(header)>>2]);
}

#ifdef WANT_SCAV_TRANS_SIZE_TABLES
unsigned char lowtag_for_widetag[64] = {
  0x0,0x0,0x0,0x0,0xF,0xF,0x0,0xF,0xF,0xF,0xF,0xF,0xB,0xB,0xB,0x0,
  0xF,0xF,0x0,0xF,0x0,0xF,0x3,0xF,0x0,0xF,0xF,0xF,0x0,0x0,0x0,0x0,
  0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,
  0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,0xF,
};
sword_t (*scavtab[256])(lispobj *where, lispobj object) = {
  scav_immediate,                scav_lose,                     scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_immediate,                scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_code_header,              scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_closure,                  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_funinstance,              scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_tiny_boxed,               scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_immediate,                scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_immediate,                scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_instance,                 scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_fdefn,                    scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_immediate,                scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_unboxed,                  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_lose,                     scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_unsigned_byte_2,   scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector_unsigned_byte_4,   scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_unsigned_byte_8,   scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_vector_unsigned_byte_8,   scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_unsigned_byte_16,  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector_unsigned_byte_16,  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_unsigned_byte_32,  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_vector_unsigned_byte_32,  scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_vector_unsigned_byte_8,   scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_unsigned_byte_16,  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector_unsigned_byte_32,  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_unsigned_byte_32,  scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_unsigned_byte_64,  scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_vector_unsigned_byte_128, scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_vector_bit,               scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_vector,                   scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_vector_nil,               scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_base_string,              scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_character_string,         scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_other_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_instance_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_list_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_fun_pointer,
  scav_immediate,                scav_boxed,                    scav_immediate,                scav_other_pointer,
};
static void (*scav_ptr[4])(lispobj *where, lispobj object)= {
  (void(*)(lispobj*,lispobj))scav_instance_pointer,
  (void(*)(lispobj*,lispobj))scav_list_pointer,
  (void(*)(lispobj*,lispobj))scav_fun_pointer,
  (void(*)(lispobj*,lispobj))scav_other_pointer
};
static lispobj (*transother[64])(lispobj object) = {
  trans_lose,                    trans_lose,                    trans_lose,                    trans_lose,
  trans_bignum,                  trans_ratio_or_complex,        trans_lose,                    trans_unboxed,
  trans_ratio_or_complex,        trans_unboxed,                 trans_unboxed,                 trans_code_header,
  trans_lose,                    trans_lose,                    trans_lose,                    trans_lose,
  trans_boxed,                   trans_tiny_boxed,              trans_lose,                    trans_unboxed,
  trans_lose,                    trans_weak_pointer,            trans_lose,                    trans_fdefn,
  trans_lose,                    trans_unboxed,                 trans_unboxed,                 trans_unboxed,
  trans_lose,                    trans_lose,                    trans_lose,                    trans_lose,
  trans_boxed,                   trans_vector_unsigned_byte_2,  trans_vector_unsigned_byte_4,  trans_vector_unsigned_byte_8,
  trans_vector_unsigned_byte_8,  trans_vector_unsigned_byte_16, trans_vector_unsigned_byte_16, trans_vector_unsigned_byte_32,
  trans_vector_unsigned_byte_32, trans_vector_unsigned_byte_64, trans_vector_unsigned_byte_64, trans_vector_unsigned_byte_64,
  trans_vector_unsigned_byte_8,  trans_vector_unsigned_byte_16, trans_vector_unsigned_byte_32, trans_vector_unsigned_byte_64,
  trans_vector_unsigned_byte_64, trans_vector_unsigned_byte_32, trans_vector_unsigned_byte_64, trans_vector_unsigned_byte_64,
  trans_vector_unsigned_byte_128,trans_vector_bit,              trans_vector,                  trans_vector_nil,
  trans_base_string,             trans_character_string,        trans_boxed,                   trans_boxed,
  trans_boxed,                   trans_boxed,                   trans_boxed,                   trans_boxed,
};
#define size_pointer size_immediate
#define size_unboxed size_boxed
sword_t (*sizetab[256])(lispobj *where) = {
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_bignum,                   size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_immediate,                size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_code_header,              size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_short_boxed,              size_immediate,                size_pointer,
  size_immediate,                size_short_boxed,              size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_tiny_boxed,               size_immediate,                size_pointer,
  size_immediate,                size_immediate,                size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_immediate,                size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_short_boxed,              size_immediate,                size_pointer,
  size_immediate,                size_fdefn,                    size_immediate,                size_pointer,
  size_immediate,                size_immediate,                size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_unboxed,                  size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_lose,                     size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_2,   size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_4,   size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_8,   size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_8,   size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_16,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_16,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_32,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_32,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_8,   size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_16,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_32,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_32,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_64,  size_immediate,                size_pointer,
  size_immediate,                size_vector_unsigned_byte_128, size_immediate,                size_pointer,
  size_immediate,                size_vector_bit,               size_immediate,                size_pointer,
  size_immediate,                size_vector,                   size_immediate,                size_pointer,
  size_immediate,                size_vector_nil,               size_immediate,                size_pointer,
  size_immediate,                size_base_string,              size_immediate,                size_pointer,
  size_immediate,                size_character_string,         size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
  size_immediate,                size_boxed,                    size_immediate,                size_pointer,
};
#undef size_pointer
#undef size_unboxed
#endif
#endif
