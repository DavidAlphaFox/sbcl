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
#ifndef SBCL_GENESIS_COMPILED_DEBUG_FUN
#define SBCL_GENESIS_COMPILED_DEBUG_FUN 1
#ifndef LANGUAGE_ASSEMBLY

struct compiled_debug_fun {
    lispobj header;
    lispobj _layout;
    lispobj name;
    lispobj kind;
    lispobj vars;
    lispobj blocks;
    lispobj tlf_number;
    lispobj arguments;
    lispobj returns;
    lispobj return_pc;
    lispobj old_fp;
    lispobj nfp;
    lispobj start_pc;
    lispobj elsewhere_pc;
    lispobj closure_save;
    lispobj bsp_save;
};

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_COMPILED-DEBUG-FUN */
