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
#ifndef SBCL_GENESIS_SIMD_PACK_256
#define SBCL_GENESIS_SIMD_PACK_256
#ifndef __ASSEMBLER__

struct simd_pack_256 {
    lispobj header;
    lispobj tag;
    long p0;
    long p1;
    long p2;
    long p3;
};

#else /* __ASSEMBLER__ */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define SIMD_PACK_256_TAG_OFFSET -7
#define SIMD_PACK_256_P0_OFFSET 1
#define SIMD_PACK_256_P1_OFFSET 9
#define SIMD_PACK_256_P2_OFFSET 17
#define SIMD_PACK_256_P3_OFFSET 25
#define SIMD_PACK_256_SIZE 6

#endif /* __ASSEMBLER__ */

#endif
