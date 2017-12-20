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
#define SBCL_GENESIS_HASH_TABLE 1
#ifndef LANGUAGE_ASSEMBLY

struct hash_table {
    lispobj header;
    lispobj _layout;
    lispobj test;
    lispobj test_fun;
    lispobj hash_fun;
    lispobj rehash_size;
    lispobj raw_slot_padding5;
    lispobj rehash_trigger;
    lispobj number_entries;
    lispobj table;
    lispobj next_weak_hash_table;
    lispobj weakness;
    lispobj next_free_kv;
    lispobj cache;
    lispobj index_vector;
    lispobj next_vector;
    lispobj hash_vector;
    lispobj lock;
    lispobj needs_rehash_p;
    lispobj synchronized_p;
};

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_HASH-TABLE */
