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
#ifndef SBCL_GENESIS_SIMPLE_FUN
#define SBCL_GENESIS_SIMPLE_FUN 1
#ifndef LANGUAGE_ASSEMBLY

struct simple_fun {
    lispobj header;
    lispobj self;
    lispobj next;
    lispobj name;
    lispobj arglist;
    lispobj type;
    lispobj info;
    unsigned char code[1];
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define SIMPLE_FUN_SELF_OFFSET -3
#define SIMPLE_FUN_NEXT_OFFSET 5
#define SIMPLE_FUN_NAME_OFFSET 13
#define SIMPLE_FUN_ARGLIST_OFFSET 21
#define SIMPLE_FUN_TYPE_OFFSET 29
#define SIMPLE_FUN_INFO_OFFSET 37
#define SIMPLE_FUN_CODE_OFFSET 45

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_SIMPLE-FUN */
