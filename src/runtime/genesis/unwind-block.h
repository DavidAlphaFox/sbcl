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
#ifndef SBCL_GENESIS_UNWIND_BLOCK
#define SBCL_GENESIS_UNWIND_BLOCK 1
#ifndef LANGUAGE_ASSEMBLY

struct unwind_block {
    struct unwind_block * current_uwp;
    lispobj * current_cont;
    lispobj entry_pc;
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define UNWIND_BLOCK_CURRENT_UWP_OFFSET 0
#define UNWIND_BLOCK_CURRENT_CONT_OFFSET 8
#define UNWIND_BLOCK_ENTRY_PC_OFFSET 16

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_UNWIND-BLOCK */
