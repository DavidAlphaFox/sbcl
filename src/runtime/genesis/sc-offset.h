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
#ifndef SBCL_GENESIS_SC_OFFSET
#define SBCL_GENESIS_SC_OFFSET
struct sc_and_offset_byte {
    int size;
    int position;
};

static struct sc_and_offset_byte sc_and_offset_sc_number_bytes[] = {
    {  2,  0 },
    {  4, 23 }
};

static struct sc_and_offset_byte sc_and_offset_offset_bytes[] = {
    { 21,  2 }
};

#endif
