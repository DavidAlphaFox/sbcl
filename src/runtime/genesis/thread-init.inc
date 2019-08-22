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
INITIALIZE_TLS(FREE_INTERRUPT_CONTEXT_INDEX, 0);
INITIALIZE_TLS(ALLOW_WITH_INTERRUPTS, T);
INITIALIZE_TLS(INTERRUPTS_ENABLED, T);
INITIALIZE_TLS(ALLOC_SIGNAL, NIL);
INITIALIZE_TLS(INTERRUPT_PENDING, NIL);
INITIALIZE_TLS(IN_WITHOUT_GCING, NIL);
INITIALIZE_TLS(GC_INHIBIT, NIL);
INITIALIZE_TLS(GC_PENDING, NIL);
INITIALIZE_TLS(STOP_FOR_GC_PENDING, NIL);
INITIALIZE_TLS(CURRENT_CATCH_BLOCK, 0);
INITIALIZE_TLS(CURRENT_UNWIND_PROTECT_BLOCK, 0);
