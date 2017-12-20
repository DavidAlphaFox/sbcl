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
#define SBCL_GENESIS_CLASSOID 1
#ifndef LANGUAGE_ASSEMBLY

struct classoid {
    lispobj header;
    lispobj _layout;
    lispobj class_info;
    lispobj enumerable;
    lispobj hash_value;
    lispobj might_contain_other_types_p;
    lispobj name;
    lispobj layout;
    lispobj state;
    lispobj direct_superclasses;
    lispobj subclasses;
    lispobj pcl_class;
};

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_CLASSOID */
