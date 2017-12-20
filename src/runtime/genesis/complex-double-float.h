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
#ifndef SBCL_GENESIS_COMPLEX_DOUBLE_FLOAT
#define SBCL_GENESIS_COMPLEX_DOUBLE_FLOAT 1
#ifndef LANGUAGE_ASSEMBLY

struct complex_double_float {
    lispobj header;
    lispobj filler;
    double real;
    double imag;
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define COMPLEX_DOUBLE_FLOAT_FILLER_OFFSET -7
#define COMPLEX_DOUBLE_FLOAT_REAL_OFFSET 1
#define COMPLEX_DOUBLE_FLOAT_IMAG_OFFSET 9

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_COMPLEX-DOUBLE-FLOAT */
