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
#define SBCL_GENESIS_LAYOUT 1
#ifndef LANGUAGE_ASSEMBLY

struct layout {
    lispobj header;
    lispobj _layout;
    lispobj clos_hash;
    lispobj classoid;
    lispobj invalid;
    lispobj inherits;
    lispobj depthoid;
    lispobj length;
    lispobj info;
    lispobj pure;
    lispobj untagged_bitmap;
    lispobj equalp_tests;
    lispobj source_location;
    lispobj slot_list;
    lispobj slot_table;
    lispobj _for_std_class_b;
};

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_LAYOUT */
