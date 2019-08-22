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
#ifndef SBCL_GENESIS_DEFSTRUCT_DESCRIPTION
#define SBCL_GENESIS_DEFSTRUCT_DESCRIPTION
#ifndef __ASSEMBLER__

struct defstruct_description {
    lispobj header; // = word_0_
    lispobj name;
    lispobj doc;
    lispobj conc_name;
    lispobj constructors;
    lispobj null_lexenv_p;
    lispobj copier_name;
    lispobj predicate_name;
    lispobj include;
    lispobj alternate_metaclass;
    lispobj slots;
    lispobj inherited_accessor_alist;
    lispobj length;
    lispobj type;
    lispobj element_type;
    lispobj named;
    lispobj offset;
    lispobj print_option;
    lispobj printer_fname;
    lispobj pure;
};

#endif /* __ASSEMBLER__ */

#endif
