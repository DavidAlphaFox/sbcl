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
#ifndef SBCL_GENESIS_STATIC_SYMBOLS
#define SBCL_GENESIS_STATIC_SYMBOLS
#define NIL LISPOBJ(0x20100017)
#define T LISPOBJ(0x2010004F)
#define IMMOBILE_FREELIST LISPOBJ(0x2010007F)
#define FREE_TLS_INDEX LISPOBJ(0x201000AF)
#define THREAD_INITIAL_BINDINGS LISPOBJ(0x201000DF)
#define CPUID_FN1_ECX LISPOBJ(0x2010010F)
#define FREE_INTERRUPT_CONTEXT_INDEX (*)
#define FREE_INTERRUPT_CONTEXT_INDEX_tlsindex 0x128
#define ALLOW_WITH_INTERRUPTS (*)
#define ALLOW_WITH_INTERRUPTS_tlsindex 0x130
#define INTERRUPTS_ENABLED (*)
#define INTERRUPTS_ENABLED_tlsindex 0x138
#define ALLOC_SIGNAL (*)
#define ALLOC_SIGNAL_tlsindex 0x140
#define INTERRUPT_PENDING (*)
#define INTERRUPT_PENDING_tlsindex 0x148
#define IN_WITHOUT_GCING (*)
#define IN_WITHOUT_GCING_tlsindex 0x150
#define GC_INHIBIT (*)
#define GC_INHIBIT_tlsindex 0x158
#define GC_PENDING (*)
#define GC_PENDING_tlsindex 0x160
#define STOP_FOR_GC_PENDING (*)
#define STOP_FOR_GC_PENDING_tlsindex 0x168
#define CURRENT_CATCH_BLOCK (*)
#define CURRENT_CATCH_BLOCK_tlsindex 0x18
#define CURRENT_UNWIND_PROTECT_BLOCK (*)
#define CURRENT_UNWIND_PROTECT_BLOCK_tlsindex 0x20
#define LAYOUT_OF_LAYOUT (lispobj)(FIXEDOBJ_SPACE_START+0x1103)
#define LAYOUT_OF_FUNCTION (lispobj)(FIXEDOBJ_SPACE_START+0x1183)
#define STATIC_FDEFNS LISPOBJ(0x2010013F)
#define SUB_GC_fdefn 0
#define SUB_GC_FDEFN (VECTOR(STATIC_FDEFNS)->data[0])
#define POST_GC_fdefn 1
#define POST_GC_FDEFN (VECTOR(STATIC_FDEFNS)->data[1])
#define INTERNAL_ERROR_fdefn 2
#define INTERNAL_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[2])
#define CONTROL_STACK_EXHAUSTED_ERROR_fdefn 3
#define CONTROL_STACK_EXHAUSTED_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[3])
#define BINDING_STACK_EXHAUSTED_ERROR_fdefn 4
#define BINDING_STACK_EXHAUSTED_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[4])
#define ALIEN_STACK_EXHAUSTED_ERROR_fdefn 5
#define ALIEN_STACK_EXHAUSTED_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[5])
#define HEAP_EXHAUSTED_ERROR_fdefn 6
#define HEAP_EXHAUSTED_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[6])
#define UNDEFINED_ALIEN_VARIABLE_ERROR_fdefn 7
#define UNDEFINED_ALIEN_VARIABLE_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[7])
#define MEMORY_FAULT_ERROR_fdefn 8
#define MEMORY_FAULT_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[8])
#define UNHANDLED_TRAP_ERROR_fdefn 9
#define UNHANDLED_TRAP_ERROR_FDEFN (VECTOR(STATIC_FDEFNS)->data[9])
#define HANDLE_BREAKPOINT_fdefn 10
#define HANDLE_BREAKPOINT_FDEFN (VECTOR(STATIC_FDEFNS)->data[10])
#define HANDLE_SINGLE_STEP_TRAP_fdefn 11
#define HANDLE_SINGLE_STEP_TRAP_FDEFN (VECTOR(STATIC_FDEFNS)->data[11])
#define ENTER_ALIEN_CALLBACK_fdefn 12
#define ENTER_ALIEN_CALLBACK_FDEFN (VECTOR(STATIC_FDEFNS)->data[12])
#define ENTER_FOREIGN_CALLBACK_fdefn 13
#define ENTER_FOREIGN_CALLBACK_FDEFN (VECTOR(STATIC_FDEFNS)->data[13])
#endif
