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
#ifndef SBCL_GENESIS_CODE
#define SBCL_GENESIS_CODE 1
#ifndef LANGUAGE_ASSEMBLY

struct code {
    lispobj header;
    lispobj code_size;
    lispobj entry_points;
    lispobj debug_info;
    lispobj constants[1];
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define CODE_CODE_SIZE_OFFSET -7
#define CODE_ENTRY_POINTS_OFFSET 1
#define CODE_DEBUG_INFO_OFFSET 9
#define CODE_CONSTANTS_OFFSET 17

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_CODE */
