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
#ifndef SBCL_GENESIS_PACKAGE
#define SBCL_GENESIS_PACKAGE
#ifndef __ASSEMBLER__

struct package {
    lispobj header; // = word_0_
    lispobj _name;
    lispobj _nicknames;
    lispobj _use_list;
    lispobj tables;
    lispobj mru_table_index;
    lispobj _used_by_list;
    lispobj internal_symbols;
    lispobj external_symbols;
    lispobj _shadowing_symbols;
    lispobj doc_string;
    lispobj _bits;
    lispobj _implementation_packages;
    lispobj _local_nicknames;
    lispobj source_location;
};

#endif /* __ASSEMBLER__ */

#endif
