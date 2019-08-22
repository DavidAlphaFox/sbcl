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
#ifndef SBCL_GENESIS_HASH_TABLE
#define SBCL_GENESIS_HASH_TABLE
#ifndef __ASSEMBLER__

struct hash_table {
    lispobj header; // = word_0_
    lispobj gethash_impl;
    lispobj puthash_impl;
    lispobj remhash_impl;
    lispobj clrhash_impl;
    lispobj pairs;
    lispobj cache;
    lispobj index_vector;
    lispobj next_vector;
    lispobj hash_vector;
    lispobj flags;
    lispobj lock;
    lispobj test_fun;
    lispobj hash_fun;
    lispobj test;
    lispobj rehash_size;
    lispobj word_16_; // rehash_threshold
    lispobj _count;
    lispobj next_free_kv;
    lispobj n_rehashfind;
    lispobj n_lsearch;
    lispobj smashed_cells;
    lispobj next_weak_hash_table;
    lispobj culled_values;
};

#endif /* __ASSEMBLER__ */

#endif
