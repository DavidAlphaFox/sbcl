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
#ifndef SBCL_GENESIS_CONSTANTS
#define SBCL_GENESIS_CONSTANTS 1
#define FIXNUM_TAG_MASK 1 /* 0x1 */
#define N_FIXNUM_TAG_BITS 1 /* 0x1 */
#define N_LOWTAG_BITS 4 /* 0x4 */
#define N_WIDETAG_BITS 8 /* 0x8 */
#define N_WORD_BYTES 8 /* 0x8 */
#define LOWTAG_MASK 15 /* 0xF */
#define N_WORD_BITS 64 /* 0x40 */
#define WIDETAG_MASK 255 /* 0xFF */

#define EVEN_FIXNUM_LOWTAG 0 /* 0x0 */
#define OTHER_IMMEDIATE_0_LOWTAG 1 /* 0x1 */
#define PAD0_LOWTAG 2 /* 0x2 */
#define INSTANCE_POINTER_LOWTAG 3 /* 0x3 */
#define PAD1_LOWTAG 4 /* 0x4 */
#define OTHER_IMMEDIATE_1_LOWTAG 5 /* 0x5 */
#define PAD2_LOWTAG 6 /* 0x6 */
#define LIST_POINTER_LOWTAG 7 /* 0x7 */
#define ODD_FIXNUM_LOWTAG 8 /* 0x8 */
#define OTHER_IMMEDIATE_2_LOWTAG 9 /* 0x9 */
#define PAD3_LOWTAG 10 /* 0xA */
#define FUN_POINTER_LOWTAG 11 /* 0xB */
#define PAD4_LOWTAG 12 /* 0xC */
#define OTHER_IMMEDIATE_3_LOWTAG 13 /* 0xD */
#define PAD5_LOWTAG 14 /* 0xE */
#define OTHER_POINTER_LOWTAG 15 /* 0xF */

#define WORD_SHIFT 3 /* 0x3 */
#define BIGNUM_WIDETAG 17 /* 0x11 */
#define RATIO_WIDETAG 21 /* 0x15 */
#define SINGLE_FLOAT_WIDETAG 25 /* 0x19 */
#define DOUBLE_FLOAT_WIDETAG 29 /* 0x1D */
#define FLOAT_SIGN_SHIFT 31 /* 0x1F */
#define COMPLEX_WIDETAG 33 /* 0x21 */
#define COMPLEX_SINGLE_FLOAT_WIDETAG 37 /* 0x25 */
#define COMPLEX_DOUBLE_FLOAT_WIDETAG 41 /* 0x29 */
#define CODE_HEADER_WIDETAG 45 /* 0x2D */
#define SIMPLE_FUN_HEADER_WIDETAG 49 /* 0x31 */
#define CLOSURE_HEADER_WIDETAG 53 /* 0x35 */
#define FUNCALLABLE_INSTANCE_HEADER_WIDETAG 57 /* 0x39 */
#define RETURN_PC_HEADER_WIDETAG 61 /* 0x3D */
#define VALUE_CELL_HEADER_WIDETAG 65 /* 0x41 */
#define SYMBOL_HEADER_WIDETAG 69 /* 0x45 */
#define CHARACTER_WIDETAG 73 /* 0x49 */
#define SAP_WIDETAG 77 /* 0x4D */
#define UNBOUND_MARKER_WIDETAG 81 /* 0x51 */
#define WEAK_POINTER_WIDETAG 85 /* 0x55 */
#define INSTANCE_HEADER_WIDETAG 89 /* 0x59 */
#define FDEFN_WIDETAG 93 /* 0x5D */
#define NO_TLS_VALUE_MARKER_WIDETAG 97 /* 0x61 */
#define SIMD_PACK_WIDETAG 101 /* 0x65 */
#define SIMPLE_ARRAY_WIDETAG 129 /* 0x81 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_2_WIDETAG 133 /* 0x85 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_4_WIDETAG 137 /* 0x89 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_7_WIDETAG 141 /* 0x8D */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_8_WIDETAG 145 /* 0x91 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_15_WIDETAG 149 /* 0x95 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_16_WIDETAG 153 /* 0x99 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_31_WIDETAG 157 /* 0x9D */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_32_WIDETAG 161 /* 0xA1 */
#define SIMPLE_ARRAY_UNSIGNED_FIXNUM_WIDETAG 165 /* 0xA5 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_63_WIDETAG 169 /* 0xA9 */
#define SIMPLE_ARRAY_UNSIGNED_BYTE_64_WIDETAG 173 /* 0xAD */
#define SIMPLE_ARRAY_SIGNED_BYTE_8_WIDETAG 177 /* 0xB1 */
#define SIMPLE_ARRAY_SIGNED_BYTE_16_WIDETAG 181 /* 0xB5 */
#define SIMPLE_ARRAY_SIGNED_BYTE_32_WIDETAG 185 /* 0xB9 */
#define SIMPLE_ARRAY_FIXNUM_WIDETAG 189 /* 0xBD */
#define SIMPLE_ARRAY_SIGNED_BYTE_64_WIDETAG 193 /* 0xC1 */
#define SIMPLE_ARRAY_SINGLE_FLOAT_WIDETAG 197 /* 0xC5 */
#define SIMPLE_ARRAY_DOUBLE_FLOAT_WIDETAG 201 /* 0xC9 */
#define SIMPLE_ARRAY_COMPLEX_SINGLE_FLOAT_WIDETAG 205 /* 0xCD */
#define SIMPLE_ARRAY_COMPLEX_DOUBLE_FLOAT_WIDETAG 209 /* 0xD1 */
#define SIMPLE_BIT_VECTOR_WIDETAG 213 /* 0xD5 */
#define SIMPLE_VECTOR_WIDETAG 217 /* 0xD9 */
#define SIMPLE_ARRAY_NIL_WIDETAG 221 /* 0xDD */
#define SIMPLE_BASE_STRING_WIDETAG 225 /* 0xE1 */
#define SIMPLE_CHARACTER_STRING_WIDETAG 229 /* 0xE5 */
#define COMPLEX_CHARACTER_STRING_WIDETAG 233 /* 0xE9 */
#define COMPLEX_BASE_STRING_WIDETAG 237 /* 0xED */
#define COMPLEX_VECTOR_NIL_WIDETAG 241 /* 0xF1 */
#define COMPLEX_BIT_VECTOR_WIDETAG 245 /* 0xF5 */
#define COMPLEX_VECTOR_WIDETAG 249 /* 0xF9 */
#define COMPLEX_ARRAY_WIDETAG 253 /* 0xFD */

#define flag_DeflatedCoreSpaceId 4 /* 0x4 */

#define trap_Halt 8 /* 0x8 */
#define trap_PendingInterrupt 9 /* 0x9 */
#define trap_Error 10 /* 0xA */
#define trap_Cerror 11 /* 0xB */
#define trap_Breakpoint 12 /* 0xC */
#define trap_FunEndBreakpoint 13 /* 0xD */
#define trap_SingleStepAround 14 /* 0xE */
#define trap_SingleStepBefore 15 /* 0xF */
#define trap_ObjectNotList 24 /* 0x18 */
#define trap_ObjectNotInstance 25 /* 0x19 */

#define subtype_VectorNormal 0 /* 0x0 */
#define subtype_VectorValidHashing 2 /* 0x2 */

#define sc_Constant 0 /* 0x0 */
#define sc_FpSingleZero 1 /* 0x1 */
#define sc_FpDoubleZero 2 /* 0x2 */
#define sc_Immediate 12 /* 0xC */
#define sc_ControlStack 13 /* 0xD */
#define sc_SignedStack 14 /* 0xE */
#define sc_UnsignedStack 15 /* 0xF */
#define sc_CharacterStack 16 /* 0x10 */
#define sc_SapStack 17 /* 0x11 */
#define sc_SingleStack 18 /* 0x12 */
#define sc_DoubleStack 19 /* 0x13 */
#define sc_ComplexSingleStack 20 /* 0x14 */
#define sc_ComplexDoubleStack 21 /* 0x15 */
#define sc_IgnoreMe 25 /* 0x19 */
#define sc_AnyReg 26 /* 0x1A */
#define sc_DescriptorReg 27 /* 0x1B */
#define sc_CharacterReg 28 /* 0x1C */
#define sc_SapReg 29 /* 0x1D */
#define sc_SignedReg 30 /* 0x1E */
#define sc_UnsignedReg 31 /* 0x1F */
#define sc_WordReg 32 /* 0x20 */
#define sc_ByteReg 34 /* 0x22 */
#define sc_SingleReg 35 /* 0x23 */
#define sc_DoubleReg 36 /* 0x24 */
#define sc_ComplexSingleReg 37 /* 0x25 */
#define sc_ComplexDoubleReg 38 /* 0x26 */
#define sc_CatchBlock 43 /* 0x2B */

#define BINDING_SIZE 2 /* 0x2 */
#define COMPLEX_SINGLE_FLOAT_SIZE 2 /* 0x2 */
#define CONS_SIZE 2 /* 0x2 */
#define DOUBLE_FLOAT_SIZE 2 /* 0x2 */
#define SAP_SIZE 2 /* 0x2 */
#define VALUE_CELL_SIZE 2 /* 0x2 */
#define COMPLEX_SIZE 3 /* 0x3 */
#define RATIO_SIZE 3 /* 0x3 */
#define UNWIND_BLOCK_SIZE 3 /* 0x3 */
#define COMPLEX_DOUBLE_FLOAT_SIZE 4 /* 0x4 */
#define FDEFN_SIZE 4 /* 0x4 */
#define SIMD_PACK_SIZE 4 /* 0x4 */
#define WEAK_POINTER_SIZE 4 /* 0x4 */
#define CATCH_BLOCK_SIZE 5 /* 0x5 */
#define SYMBOL_SIZE 6 /* 0x6 */
#define LINKAGE_TABLE_ENTRY_SIZE 16 /* 0x10 */
#define MAX_INTERRUPTS 1024 /* 0x400 */
#define TLS_SIZE 4096 /* 0x1000 */

#define GENCGC_ALLOC_GRANULARITY 0LU /* 0x0 */
#define GENCGC_CARD_BYTES 32768LU /* 0x8000 */
#define GENCGC_RELEASE_GRANULARITY 32768LU /* 0x8000 */
#define READ_ONLY_SPACE_START 536870912LU /* 0x20000000 */
#define READ_ONLY_SPACE_END 537911296LU /* 0x200FE000 */
#define STATIC_SPACE_START 537919488LU /* 0x20100000 */
#define STATIC_SPACE_END 538963968LU /* 0x201FF000 */
#define LINKAGE_TABLE_SPACE_START 538968064LU /* 0x20200000 */
#define LINKAGE_TABLE_SPACE_END 540012544LU /* 0x202FF000 */
#define DYNAMIC_SPACE_START 68719476736LU /* 0x1000000000 */
#define DYNAMIC_SPACE_END 69793218560LU /* 0x1040000000 */
#define MAX_DYNAMIC_SPACE_END 18446744073709551615LU /* 0xFFFFFFFFFFFFFFFF */

#define END_CORE_ENTRY_TYPE_CODE 3840 /* 0xF00 */
#define BUILD_ID_CORE_ENTRY_TYPE_CODE 3860 /* 0xF14 */
#define NEW_DIRECTORY_CORE_ENTRY_TYPE_CODE 3861 /* 0xF15 */
#define INITIAL_FUN_CORE_ENTRY_TYPE_CODE 3863 /* 0xF17 */
#define PAGE_TABLE_CORE_ENTRY_TYPE_CODE 3880 /* 0xF28 */

#define DYNAMIC_CORE_SPACE_ID 1 /* 0x1 */
#define STATIC_CORE_SPACE_ID 2 /* 0x2 */
#define MAX_CORE_SPACE_ID 3 /* 0x3 */
#define READ_ONLY_CORE_SPACE_ID 3 /* 0x3 */
#define DEFLATED_CORE_SPACE_ID_FLAG 4 /* 0x4 */
#define MAGIC_HASH_VECTOR_VALUE 9223372036854775808LU /* 0x8000000000000000 */

#define HIGHEST_NORMAL_GENERATION 5 /* 0x5 */
#define PSEUDO_STATIC_GENERATION 6 /* 0x6 */

#define UNKNOWN_ERROR 0
#define UNDEFINED_FUN_ERROR 23
#define UNDEFINED_ALIEN_FUN_ERROR 24
#define INVALID_ARG_COUNT_ERROR 25
#define BOGUS_ARG_TO_VALUES_LIST_ERROR 26
#define UNBOUND_SYMBOL_ERROR 27
#define INVALID_UNWIND_ERROR 29
#define UNSEEN_THROW_TAG_ERROR 30
#define DIVISION_BY_ZERO_ERROR 31
#define OBJECT_NOT_TYPE_ERROR 32
#define ODD_KEY_ARGS_ERROR 33
#define UNKNOWN_KEY_ARG_ERROR 34
#define INVALID_ARRAY_INDEX_ERROR 35
#define WRONG_NUMBER_OF_INDICES_ERROR 36
#define NIL_FUN_RETURNED_ERROR 54
#define NIL_ARRAY_ACCESSED_ERROR 55
#define LAYOUT_INVALID_ERROR 56
#define TLS_EXHAUSTED_ERROR 58
#define INTERNAL_ERROR_NAMES \
"unknown system lossage", \
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
"Object is not of type (VECTOR NIL).", \
"Object is not of type (VECTOR CHARACTER).", \
"Object is not of type BIT-VECTOR.", \
"Object is not of type ARRAY.", \
"Object is not of type NUMBER.", \
"Object is not of type RATIONAL.", \
"Object is not of type FLOAT.", \
"Object is not of type REAL.", \
"Object is not of type INTEGER.", \
"Object is not of type CONS.", \
"Object is not of type SYMBOL.", \
"An attempt was made to use an undefined FDEFINITION.", \
"An attempt was made to use an undefined alien function", \
"invalid argument count", \
"bogus argument to VALUES-LIST", \
"An attempt was made to use an undefined SYMBOL-VALUE.", \
"Object is not of type SYSTEM-AREA-POINTER.", \
"attempt to RETURN-FROM a block that no longer exists", \
"attempt to THROW to a non-existent tag", \
"division by zero", \
"Object is of the wrong type.", \
"odd number of &KEY arguments", \
"unknown &KEY argument", \
"invalid array index", \
"wrong number of indices", \
"Object is not of type SIMPLE-ARRAY.", \
"Object is not of type (SIGNED-BYTE 32).", \
"Object is not of type (SIGNED-BYTE 64).", \
"Object is not of type UNSIGNED-BYTE.", \
"Object is not of type (UNSIGNED-BYTE 8).", \
"Object is not of type (UNSIGNED-BYTE 9).", \
"Object is not of type (UNSIGNED-BYTE 32).", \
"Object is not of type (UNSIGNED-BYTE 64).", \
"Object is not of type COMPLEX.", \
"Object is not of type (COMPLEX RATIONAL).", \
"Object is not of type (COMPLEX FLOAT).", \
"Object is not of type (COMPLEX SINGLE-FLOAT).", \
"Object is not of type (COMPLEX DOUBLE-FLOAT).", \
"Object is not of type SIMD-PACK.", \
"Object is not of type WEAK-POINTER.", \
"Object is not of type INSTANCE.", \
"Object is not of type CHARACTER.", \
"A function with declared result type NIL returned.", \
"An array with element-type NIL was accessed.", \
"Object layout is invalid. (indicates obsolete instance)", \
"Object is not of type (AND VECTOR (NOT SIMPLE-ARRAY)).", \
"Thread local storage exhausted.", \
"Object is not of type SC.", \
"Object is not of type (INTEGER 0 4611686018427387901).", \
"Object is not of type INDEX.", \
"Object is not of type TN-REF.", \
"Object is not of type CTYPE.", \
"Object is not of type BUFFER.", \
"Object is not of type VOP.", \
"Object is not of type BASIC-COMBINATION.", \
"Object is not of type FD-STREAM.", \
"Object is not of type LAYOUT.", \
"Object is not of type SEGMENT.", \
"Object is not of type CBLOCK.", \
"Object is not of type DISASSEM-STATE.", \
"Object is not of type CTRAN.", \
"Object is not of type CLAMBDA.", \
"Object is not of type TN.", \
"Object is not of type (OR FUNCTION SYMBOL).", \
"Object is not of type COMPONENT.", \
"Object is not of type (OR INDEX NULL).", \
"Object is not of type STREAM.", \
"Object is not of type IR2-BLOCK.", \
"Object is not of type LVAR.", \
"Object is not of type VOP-INFO.", \
"Object is not of type INSTRUCTION.", \
"Object is not of type (MOD 1114112).", \
"Object is not of type NODE.", \
"Object is not of type SEQUENCE.", \
"Object is not of type FUNCTIONAL.", \
"Object is not of type (MEMBER T NIL).", \
"Object is not of type LAMBDA-VAR.", \
"Object is not of type ALIEN-TYPE-CLASS.", \
"Object is not of type LEXENV.", \
"Object is not of type HASH-TABLE.", \
"Object is not of type PACKAGE.", \
"Object is not of type (SIMPLE-ARRAY NIL (*)).", \
"Object is not of type SIMPLE-BASE-STRING.", \
"Object is not of type (SIMPLE-ARRAY CHARACTER (*)).", \
"Object is not of type (SIMPLE-ARRAY SINGLE-FLOAT (*)).", \
"Object is not of type (SIMPLE-ARRAY DOUBLE-FLOAT (*)).", \
"Object is not of type SIMPLE-BIT-VECTOR.", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 2) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 4) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 7) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 8) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 15) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 16) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 31) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 32) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 62) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 63) (*)).", \
"Object is not of type (SIMPLE-ARRAY (UNSIGNED-BYTE 64) (*)).", \
"Object is not of type (SIMPLE-ARRAY (SIGNED-BYTE 8) (*)).", \
"Object is not of type (SIMPLE-ARRAY (SIGNED-BYTE 16) (*)).", \
"Object is not of type (SIMPLE-ARRAY (SIGNED-BYTE 32) (*)).", \
"Object is not of type (SIMPLE-ARRAY FIXNUM (*)).", \
"Object is not of type (SIMPLE-ARRAY (SIGNED-BYTE 64) (*)).", \
"Object is not of type (SIMPLE-ARRAY (COMPLEX SINGLE-FLOAT) (*)).", \
"Object is not of type (SIMPLE-ARRAY (COMPLEX DOUBLE-FLOAT) (*)).", \
"Object is not of type SIMPLE-VECTOR.", \
"Object is not of type SIMPLE-SPECIALIZED-VECTOR.", \
"Object is not of type SAP-OR-SIMPLE-SPECIALIZED-VECTOR.", \
"Object is not of type (SIMPLE-ARRAY * (*))."

#define BACKEND_PAGE_BYTES 32768LU

#define FLOAT_TRAPS_BYTE_POSITION 7 /* 0x7 */
#define FLOAT_TRAPS_BYTE_MASK 0x1F80 /* 8064 */
#define FLOAT_EXCEPTIONS_BYTE_POSITION 0 /* 0x0 */
#define FLOAT_EXCEPTIONS_BYTE_MASK 0x3F /* 63 */
#define FLOAT_STICKY_BITS_POSITION 0 /* 0x0 */
#define FLOAT_STICKY_BITS_MASK 0x3F /* 63 */
#define FLOAT_ROUNDING_MODE_POSITION 13 /* 0xD */
#define FLOAT_ROUNDING_MODE_MASK 0x6000 /* 24576 */
#endif /* SBCL_GENESIS_CONSTANTS */
