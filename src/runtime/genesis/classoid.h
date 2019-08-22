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
#ifndef SBCL_GENESIS_CLASSOID
#define SBCL_GENESIS_CLASSOID
#ifndef __ASSEMBLER__

struct classoid {
    lispobj header; // = word_0_
    lispobj class_info;
    lispobj hash_value;
    lispobj name;
    lispobj layout;
    lispobj state;
    lispobj direct_superclasses;
    lispobj source_location;
    lispobj subclasses;
    lispobj pcl_class;
};

#endif /* __ASSEMBLER__ */

#endif
