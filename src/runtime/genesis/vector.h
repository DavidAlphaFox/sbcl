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
#ifndef SBCL_GENESIS_VECTOR
#define SBCL_GENESIS_VECTOR 1
#ifndef LANGUAGE_ASSEMBLY

struct vector {
    lispobj header;
    lispobj length;
    uword_t data[1];
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define VECTOR_LENGTH_OFFSET -7
#define VECTOR_DATA_OFFSET 1

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_VECTOR */
