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
#ifndef SBCL_GENESIS_RATIO
#define SBCL_GENESIS_RATIO
#ifndef __ASSEMBLER__

struct ratio {
    lispobj header;
    lispobj numerator;
    lispobj denominator;
};

#else /* __ASSEMBLER__ */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define RATIO_NUMERATOR_OFFSET -7
#define RATIO_DENOMINATOR_OFFSET 1
#define RATIO_SIZE 3

#endif /* __ASSEMBLER__ */

#endif
