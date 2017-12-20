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
#ifndef SBCL_GENESIS_TAGNAMES
#define SBCL_GENESIS_TAGNAMES 1

static const char *lowtag_names[] = {
    "even fixnum",
    "other immediate 0",
    "pad0",
    "instance pointer",
    "pad1",
    "other immediate 1",
    "pad2",
    "list pointer",
    "odd fixnum",
    "other immediate 2",
    "pad3",
    "fun pointer",
    "pad4",
    "other immediate 3",
    "pad5",
    "other pointer"
};

static const char *widetag_names[] = {
    "unknown [0]",
    "unknown [1]",
    "unknown [2]",
    "unknown [3]",
    "bignum",
    "ratio",
    "single float",
    "double float",
    "complex",
    "complex single float",
    "complex double float",
    "code header",
    "simple fun header",
    "closure header",
    "funcallable instance header",
    "return pc header",
    "value cell header",
    "symbol header",
    "character",
    "sap",
    "unbound marker",
    "weak pointer",
    "instance header",
    "fdefn",
    "no tls value marker",
    "simd pack",
    "unknown [26]",
    "unknown [27]",
    "unknown [28]",
    "unknown [29]",
    "unknown [30]",
    "unknown [31]",
    "simple array",
    "simple array unsigned byte 2",
    "simple array unsigned byte 4",
    "simple array unsigned byte 7",
    "simple array unsigned byte 8",
    "simple array unsigned byte 15",
    "simple array unsigned byte 16",
    "simple array unsigned byte 31",
    "simple array unsigned byte 32",
    "simple array unsigned fixnum",
    "simple array unsigned byte 63",
    "simple array unsigned byte 64",
    "simple array signed byte 8",
    "simple array signed byte 16",
    "simple array signed byte 32",
    "simple array fixnum",
    "simple array signed byte 64",
    "simple array single float",
    "simple array double float",
    "simple array complex single float",
    "simple array complex double float",
    "simple bit vector",
    "simple vector",
    "simple array nil",
    "simple base string",
    "simple character string",
    "complex character string",
    "complex base string",
    "complex vector nil",
    "complex bit vector",
    "complex vector",
    "complex array"
};

static unsigned char unprintable_array_types[32] = 
 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,32,32,32,32,32,32,32,2,32,2,32,0,0,32,0};
#endif /* SBCL_GENESIS_TAGNAMES */
