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
#ifndef SBCL_GENESIS_LAYOUT
#define SBCL_GENESIS_LAYOUT
#ifndef __ASSEMBLER__

struct layout {
    lispobj header; // = word_0_
    lispobj word_1_; // _bits
    lispobj clos_hash;
    lispobj classoid;
    lispobj invalid;
    lispobj inherits;
    lispobj info;
    lispobj bitmap;
    lispobj equalp_tests;
    lispobj slot_list;
    lispobj slot_table;
    lispobj depth2_ancestor;
    lispobj depth3_ancestor;
    lispobj depth4_ancestor;
};
static inline struct layout* LAYOUT(lispobj obj) {
  return (struct layout*)(obj - 3);
}

#endif /* __ASSEMBLER__ */

#endif
