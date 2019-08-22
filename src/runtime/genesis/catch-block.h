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
#ifndef SBCL_GENESIS_CATCH_BLOCK
#define SBCL_GENESIS_CATCH_BLOCK
#ifndef __ASSEMBLER__

struct catch_block {
    struct unwind_block * uwp;
    lispobj * cfp;
    lispobj entry_pc;
    lispobj bsp;
    struct catch_block * previous_catch;
    lispobj tag;
};

#else /* __ASSEMBLER__ */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define CATCH_BLOCK_UWP_OFFSET 0
#define CATCH_BLOCK_CFP_OFFSET 8
#define CATCH_BLOCK_ENTRY_PC_OFFSET 16
#define CATCH_BLOCK_BSP_OFFSET 24
#define CATCH_BLOCK_PREVIOUS_CATCH_OFFSET 32
#define CATCH_BLOCK_TAG_OFFSET 40
#define CATCH_BLOCK_SIZE 6

#endif /* __ASSEMBLER__ */

#endif
