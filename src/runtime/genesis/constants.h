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
#define SBCL_GENESIS_CONSTANTS
#define FIXNUM_TAG_MASK 1 /* 0x1 */
#define N_FIXNUM_TAG_BITS 1 /* 0x1 */
#define N_LOWTAG_BITS 4 /* 0x4 */
#define N_WIDETAG_BITS 8 /* 0x8 */
#define N_WORD_BYTES 8 /* 0x8 */
#define LOWTAG_MASK 15 /* 0xF */
#define N_WORD_BITS 64 /* 0x40 */
#define WIDETAG_MASK 255 /* 0xFF */
#define SHORT_HEADER_MAX_WORDS 32767 /* 0x7FFF */

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
#define LAYOUT_ALIGN 128 /* 0x80 */

#define WORD_SHIFT 3 /* 0x3 */
#define BIGNUM_WIDETAG 17 /* 0x11 */
#define RATIO_WIDETAG 21 /* 0x15 */
#define SINGLE_FLOAT_WIDETAG 25 /* 0x19 */
#define DOUBLE_FLOAT_WIDETAG 29 /* 0x1D */
#define FLOAT_SIGN_SHIFT 31 /* 0x1F */
#define CODE_HEADER_SIZE_SHIFT 32 /* 0x20 */
#define COMPLEX_WIDETAG 33 /* 0x21 */
#define COMPLEX_SINGLE_FLOAT_WIDETAG 37 /* 0x25 */
#define COMPLEX_DOUBLE_FLOAT_WIDETAG 41 /* 0x29 */
#define CODE_HEADER_WIDETAG 45 /* 0x2D */
#define SIMPLE_FUN_WIDETAG 49 /* 0x31 */
#define CLOSURE_WIDETAG 53 /* 0x35 */
#define FUNCALLABLE_INSTANCE_WIDETAG 57 /* 0x39 */
#define VALUE_CELL_WIDETAG 65 /* 0x41 */
#define SYMBOL_WIDETAG 69 /* 0x45 */
#define CHARACTER_WIDETAG 73 /* 0x49 */
#define SAP_WIDETAG 77 /* 0x4D */
#define UNBOUND_MARKER_WIDETAG 81 /* 0x51 */
#define WEAK_POINTER_WIDETAG 85 /* 0x55 */
#define INSTANCE_WIDETAG 89 /* 0x59 */
#define FDEFN_WIDETAG 93 /* 0x5D */
#define NO_TLS_VALUE_MARKER_WIDETAG 97 /* 0x61 */
#define SIMD_PACK_WIDETAG 101 /* 0x65 */
#define SIMD_PACK_256_WIDETAG 105 /* 0x69 */
#define FILLER_WIDETAG 109 /* 0x6D */
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
#define IMMEDIATE_WIDETAGS_MASK 1310784LU /* 0x140040 */

#define flag_DeflatedCoreSpaceId 8 /* 0x8 */

#define trap_Halt 8 /* 0x8 */
#define trap_PendingInterrupt 9 /* 0x9 */
#define trap_Cerror 10 /* 0xA */
#define trap_Breakpoint 11 /* 0xB */
#define trap_FunEndBreakpoint 12 /* 0xC */
#define trap_SingleStepAround 13 /* 0xD */
#define trap_SingleStepBefore 14 /* 0xE */
#define trap_UndefinedFunction 15 /* 0xF */
#define trap_InvalidArgCount 16 /* 0x10 */
#define trap_MemoryFaultEmulation 17 /* 0x11 */
#define trap_Error 18 /* 0x12 */

#define subtype_VectorNormal 0 /* 0x0 */
#define subtype_VectorWeak 1 /* 0x1 */
#define subtype_VectorAddrHashing 2 /* 0x2 */
#define subtype_VectorHashing 4 /* 0x4 */
#define subtype_VectorWeakVisited 8 /* 0x8 */
#define VECTOR_SHAREABLE 256 /* 0x100 */
#define VECTOR_SHAREABLE_NONSTD 512 /* 0x200 */

#define sc_DescriptorReg 0 /* 0x0 */
#define sc_AnyReg 1 /* 0x1 */
#define sc_SignedReg 2 /* 0x2 */
#define sc_Constant 3 /* 0x3 */
#define sc_FpSingleZero 4 /* 0x4 */
#define sc_FpDoubleZero 5 /* 0x5 */
#define sc_Immediate 18 /* 0x12 */
#define sc_ControlStack 19 /* 0x13 */
#define sc_SignedStack 20 /* 0x14 */
#define sc_UnsignedStack 21 /* 0x15 */
#define sc_CharacterStack 22 /* 0x16 */
#define sc_SapStack 23 /* 0x17 */
#define sc_SingleStack 24 /* 0x18 */
#define sc_DoubleStack 25 /* 0x19 */
#define sc_ComplexSingleStack 26 /* 0x1A */
#define sc_ComplexDoubleStack 27 /* 0x1B */
#define sc_IgnoreMe 34 /* 0x22 */
#define sc_CharacterReg 35 /* 0x23 */
#define sc_SapReg 36 /* 0x24 */
#define sc_UnsignedReg 37 /* 0x25 */
#define sc_SingleReg 38 /* 0x26 */
#define sc_DoubleReg 39 /* 0x27 */
#define sc_ComplexSingleReg 40 /* 0x28 */
#define sc_ComplexDoubleReg 41 /* 0x29 */
#define sc_CatchBlock 50 /* 0x32 */

#define BINDING_SIZE 2 /* 0x2 */
#define COMPLEX_SINGLE_FLOAT_SIZE 2 /* 0x2 */
#define CONS_SIZE 2 /* 0x2 */
#define DOUBLE_FLOAT_SIZE 2 /* 0x2 */
#define SAP_SIZE 2 /* 0x2 */
#define VALUE_CELL_SIZE 2 /* 0x2 */
#define COMPLEX_SIZE 3 /* 0x3 */
#define RATIO_SIZE 3 /* 0x3 */
#define WEAK_POINTER_SIZE 3 /* 0x3 */
#define COMPLEX_DOUBLE_FLOAT_SIZE 4 /* 0x4 */
#define FDEFN_SIZE 4 /* 0x4 */
#define SIMD_PACK_SIZE 4 /* 0x4 */
#define UNWIND_BLOCK_SIZE 5 /* 0x5 */
#define CATCH_BLOCK_SIZE 6 /* 0x6 */
#define SIMD_PACK_256_SIZE 6 /* 0x6 */
#define SYMBOL_SIZE 6 /* 0x6 */
#define EXTENDED_SYMBOL_SIZE 7 /* 0x7 */
#define LINKAGE_TABLE_ENTRY_SIZE 16 /* 0x10 */
#define MAX_INTERRUPTS 1024 /* 0x400 */
#define LARGE_OBJECT_SIZE 131072 /* 0x20000 */
#define FIXEDOBJ_SPACE_SIZE 25165824 /* 0x1800000 */
#define VARYOBJ_SPACE_SIZE 109051904 /* 0x6800000 */

#define GENCGC_ALLOC_GRANULARITY 0LU /* 0x0 */
#define INSTANCE_DATA_START 0LU /* 0x0 */
#define IMMOBILE_CARD_BYTES 4096LU /* 0x1000 */
#define GENCGC_CARD_BYTES 32768LU /* 0x8000 */
#define GENCGC_RELEASE_GRANULARITY 32768LU /* 0x8000 */
#define READ_ONLY_SPACE_START 536870912LU /* 0x20000000 */
#define READ_ONLY_SPACE_END 537919488LU /* 0x20100000 */
#define STATIC_SPACE_START 537919488LU /* 0x20100000 */
#define LINKAGE_TABLE_SPACE_START 538968064LU /* 0x20200000 */
#define STATIC_SPACE_END 538968064LU /* 0x20200000 */
#define LINKAGE_TABLE_SPACE_END 540016640LU /* 0x20300000 */
#define MAX_DYNAMIC_SPACE_END 18446744073709551615LU /* 0xFFFFFFFFFFFFFFFF */

#define END_CORE_ENTRY_TYPE_CODE 3840 /* 0xF00 */
#define BUILD_ID_CORE_ENTRY_TYPE_CODE 3860 /* 0xF14 */
#define DIRECTORY_CORE_ENTRY_TYPE_CODE 3861 /* 0xF15 */
#define INITIAL_FUN_CORE_ENTRY_TYPE_CODE 3863 /* 0xF17 */
#define PAGE_TABLE_CORE_ENTRY_TYPE_CODE 3880 /* 0xF28 */
#define LINKAGE_TABLE_CORE_ENTRY_TYPE_CODE 3881 /* 0xF29 */

#define DYNAMIC_CORE_SPACE_ID 1 /* 0x1 */
#define STATIC_CORE_SPACE_ID 2 /* 0x2 */
#define READ_ONLY_CORE_SPACE_ID 3 /* 0x3 */
#define IMMOBILE_FIXEDOBJ_CORE_SPACE_ID 4 /* 0x4 */
#define IMMOBILE_VARYOBJ_CORE_SPACE_ID 5 /* 0x5 */
#define MAX_CORE_SPACE_ID 5 /* 0x5 */
#define DEFLATED_CORE_SPACE_ID_FLAG 8 /* 0x8 */
#define MAGIC_HASH_VECTOR_VALUE 4294967295LU /* 0xFFFFFFFF */

#define HIGHEST_NORMAL_GENERATION 5 /* 0x5 */
#define PSEUDO_STATIC_GENERATION 6 /* 0x6 */

#define BACKEND_PAGE_BYTES 32768
#define GENCGC_CARD_SHIFT 15
#ifndef DEFAULT_DYNAMIC_SPACE_SIZE
#define DEFAULT_DYNAMIC_SPACE_SIZE 1073741824 /* 0x40000000 */
#endif

#define UNKNOWN_ERROR 0
#define UNDEFINED_FUN_ERROR 1
#define UNDEFINED_ALIEN_FUN_ERROR 2
#define INVALID_ARG_COUNT_ERROR 3
#define LOCAL_INVALID_ARG_COUNT_ERROR 4
#define BOGUS_ARG_TO_VALUES_LIST_ERROR 5
#define UNBOUND_SYMBOL_ERROR 6
#define INVALID_UNWIND_ERROR 7
#define UNSEEN_THROW_TAG_ERROR 8
#define DIVISION_BY_ZERO_ERROR 9
#define OBJECT_NOT_TYPE_ERROR 10
#define ODD_KEY_ARGS_ERROR 11
#define UNKNOWN_KEY_ARG_ERROR 12
#define INVALID_ARRAY_INDEX_ERROR 13
#define NIL_FUN_RETURNED_ERROR 14
#define NIL_ARRAY_ACCESSED_ERROR 15
#define LAYOUT_INVALID_ERROR 16
#define TLS_EXHAUSTED_ERROR 17
#define FAILED_AVER_ERROR 18

#define FLOAT_TRAPS_BYTE_POSITION 7 /* 0x7 */
#define FLOAT_TRAPS_BYTE_MASK 0x1F80 /* 8064 */
#define FLOAT_EXCEPTIONS_BYTE_POSITION 0 /* 0x0 */
#define FLOAT_EXCEPTIONS_BYTE_MASK 0x3F /* 63 */
#define FLOAT_STICKY_BITS_POSITION 0 /* 0x0 */
#define FLOAT_STICKY_BITS_MASK 0x3F /* 63 */
#define FLOAT_ROUNDING_MODE_POSITION 13 /* 0xD */
#define FLOAT_ROUNDING_MODE_MASK 0x6000 /* 24576 */
#endif
