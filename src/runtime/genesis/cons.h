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
#ifndef SBCL_GENESIS_CONS
#define SBCL_GENESIS_CONS
#ifndef __ASSEMBLER__

struct cons {
    lispobj car;
    lispobj cdr;
};
static inline struct cons* CONS(lispobj obj) {
  return (struct cons*)(obj - 7);
}

#else /* __ASSEMBLER__ */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define CONS_CAR_OFFSET -7
#define CONS_CDR_OFFSET 1
#define CONS_SIZE 2

#endif /* __ASSEMBLER__ */

#endif
