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
#ifndef SBCL_GENESIS_ERRNAMES
#define SBCL_GENESIS_ERRNAMES
#define INTERNAL_ERROR_NAMES \
"unknown system lossage", \
"An attempt was made to use an undefined FDEFINITION.", \
"An attempt was made to use an undefined alien function", \
"invalid argument count", \
"invalid argument count", \
"bogus argument to VALUES-LIST", \
"An attempt was made to use an undefined SYMBOL-VALUE.", \
"attempt to RETURN-FROM a block that no longer exists", \
"attempt to THROW to a non-existent tag", \
"division by zero", \
"Object is of the wrong type.", \
"odd number of &KEY arguments", \
"unknown &KEY argument", \
"invalid array index", \
"A function with declared result type NIL returned.", \
"An array with element-type NIL was accessed.", \
"Object layout is invalid. (indicates obsolete instance)", \
"Thread local storage exhausted.", \
"Failed aver", \
"Object is not of type SIMPLE-ARRAY-NIL.", \
"Object is not of type SIMPLE-BASE-STRING.", \
"Object is not of type SIMPLE-CHARACTER-STRING.", \
"Object is not of type SIMPLE-ARRAY-SINGLE-FLOAT.", \
"Object is not of type SIMPLE-ARRAY-DOUBLE-FLOAT.", \
"Object is not of type SIMPLE-BIT-VECTOR.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-2.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-4.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-7.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-8.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-15.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-16.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-31.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-32.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-FIXNUM.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-63.", \
"Object is not of type SIMPLE-ARRAY-UNSIGNED-BYTE-64.", \
"Object is not of type SIMPLE-ARRAY-SIGNED-BYTE-8.", \
"Object is not of type SIMPLE-ARRAY-SIGNED-BYTE-16.", \
"Object is not of type SIMPLE-ARRAY-SIGNED-BYTE-32.", \
"Object is not of type SIMPLE-ARRAY-FIXNUM.", \
"Object is not of type SIMPLE-ARRAY-SIGNED-BYTE-64.", \
"Object is not of type SIMPLE-ARRAY-COMPLEX-SINGLE-FLOAT.", \
"Object is not of type SIMPLE-ARRAY-COMPLEX-DOUBLE-FLOAT.", \
"Object is not of type SIMPLE-VECTOR.", \
"Object is not of type ARRAY-DIMENSION.", \
"Object is not of type SIMPLE-SPECIALIZED-VECTOR.", \
"Object is not of type SAP-OR-SIMPLE-SPECIALIZED-VECTOR.", \
"Object is not of type FUNCTION.", \
"Object is not of type LIST.", \
"Object is not of type BIGNUM.", \
"Object is not of type RATIO.", \
"Object is not of type SINGLE-FLOAT.", \
"Object is not of type DOUBLE-FLOAT.", \
"Object is not of type SIMPLE-STRING.", \
"Object is not of type FIXNUM.", \
"Object is not of type VECTOR.", \
"Object is not of type STRING.", \
"Object is not of type BASE-STRING.", \
"Object is not of type VECTOR-NIL.", \
"Object is not of type CHARACTER-STRING.", \
"Object is not of type BIT-VECTOR.", \
"Object is not of type ARRAY.", \
"Object is not of type NUMBER.", \
"Object is not of type RATIONAL.", \
"Object is not of type FLOAT.", \
"Object is not of type REAL.", \
"Object is not of type INTEGER.", \
"Object is not of type CONS.", \
"Object is not of type SYMBOL.", \
"Object is not of type SAP.", \
"Object is not of type SIMPLE-ARRAY.", \
"Object is not of type SIGNED-BYTE-32.", \
"Object is not of type SIGNED-BYTE-64.", \
"Object is not of type UNSIGNED-BYTE.", \
"Object is not of type UNSIGNED-BYTE-8.", \
"Object is not of type UNSIGNED-BYTE-9.", \
"Object is not of type UNSIGNED-BYTE-32.", \
"Object is not of type UNSIGNED-BYTE-64.", \
"Object is not of type COMPLEX.", \
"Object is not of type COMPLEX-RATIONAL.", \
"Object is not of type COMPLEX-FLOAT.", \
"Object is not of type COMPLEX-SINGLE-FLOAT.", \
"Object is not of type COMPLEX-DOUBLE-FLOAT.", \
"Object is not of type SIMD-PACK.", \
"Object is not of type SIMD-PACK-256.", \
"Object is not of type WEAK-POINTER.", \
"Object is not of type INSTANCE.", \
"Object is not of type CHARACTER.", \
"Object is not of type BASE-CHAR.", \
"Object is not of type COMPLEX-VECTOR.", \
"Object is not of type ITIALIZED.", \
"Object is not of type STORAGE-CLASS.", \
"Object is not of type TN-REF.", \
"Object is not of type INDEX.", \
"Object is not of type CTYPE.", \
"Object is not of type BUFFER.", \
"Object is not of type VOP.", \
"Object is not of type BASIC-COMBINATION.", \
"Object is not of type FD-STREAM.", \
"Object is not of type LAYOUT.", \
"Object is not of type ASSEM-SEGMENT.", \
"Object is not of type CBLOCK.", \
"Object is not of type DISASSEM-STATE.", \
"Object is not of type CTRAN.", \
"Object is not of type CLAMBDA.", \
"Object is not of type TN.", \
"Object is not of type CALLABLE.", \
"Object is not of type COMPONENT.", \
"Object is not of type INDEX-OR-NULL.", \
"Object is not of type STREAM.", \
"Object is not of type IR2-BLOCK.", \
"Object is not of type IR2-COMPONENT.", \
"Object is not of type TYPE-CLASS.", \
"Object is not of type LVAR.", \
"Object is not of type VOP-INFO.", \
"Object is not of type DISASSEMBLER-INSTRUCTION.", \
"Object is not of type UNICODE-CODE-POINT.", \
"Object is not of type COMPILER-NODE.", \
"Object is not of type SEQUENCE.", \
"Object is not of type FUNCTIONAL.", \
"Object is not of type BOOLEAN.", \
"Object is not of type LAMBDA-VAR.", \
"Object is not of type ALIEN-TYPE-CLASS.", \
"Object is not of type LEXENV.", \
"Object is not of type SIMPLE-RANK-1-ARRAY.", \
"Object is not of type HASH-TABLE.", \
"Object is not of type COMBINATION.", \
"Object is not of type NUMERIC-TYPE.", \
"Object is not of type DEFSTRUCT-DESCRIPTION.", \
"Object is not of type FORMAT-DIRECTIVE.", \
"Object is not of type PACKAGE.", \
"Object is not of type FORM-TRACKING-STREAM.", \
"Object is not of type ANSI-STREAM."

#define INTERNAL_ERROR_NARGS {0, 1, 1, 1, 2, 1, 1, 0, 1, 2, 2, 0, 1, 3, 1, 1, 2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

#endif
