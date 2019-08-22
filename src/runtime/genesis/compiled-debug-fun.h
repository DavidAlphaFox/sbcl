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
#define SBCL_GENESIS_COMPILED_DEBUG_FUN
#ifndef __ASSEMBLER__

struct compiled_debug_fun {
    lispobj header; // = word_0_
    lispobj name;
    lispobj vars;
    lispobj blocks;
    lispobj arguments;
    lispobj returns;
    lispobj encoded_locs;
    lispobj next;
};

#endif /* __ASSEMBLER__ */

#endif
