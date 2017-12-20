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
#ifndef SBCL_GENESIS_ARRAY
#define SBCL_GENESIS_ARRAY 1
#ifndef LANGUAGE_ASSEMBLY

struct array {
    lispobj header;
    lispobj fill_pointer;
    lispobj fill_pointer_p;
    lispobj elements;
    lispobj data;
    lispobj displacement;
    lispobj displaced_p;
    lispobj displaced_from;
    lispobj dimensions[1];
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define ARRAY_FILL_POINTER_OFFSET -7
#define ARRAY_FILL_POINTER_P_OFFSET 1
#define ARRAY_ELEMENTS_OFFSET 9
#define ARRAY_DATA_OFFSET 17
#define ARRAY_DISPLACEMENT_OFFSET 25
#define ARRAY_DISPLACED_P_OFFSET 33
#define ARRAY_DISPLACED_FROM_OFFSET 41
#define ARRAY_DIMENSIONS_OFFSET 49

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_ARRAY */
