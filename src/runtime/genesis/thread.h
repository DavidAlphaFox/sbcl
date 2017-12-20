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
#ifndef SBCL_GENESIS_THREAD
#define SBCL_GENESIS_THREAD 1
#ifndef LANGUAGE_ASSEMBLY

struct thread {
    lispobj no_tls_value_marker;
    os_thread_t os_thread;
    void * os_address;
    struct alloc_region alloc_region;
    lispobj pseudo_atomic_bits;
    lispobj * alien_stack_pointer;
    lispobj * binding_stack_pointer;
    lispobj * alien_stack_start;
    lispobj * binding_stack_start;
    lispobj * control_stack_start;
    lispobj * control_stack_end;
    lispobj control_stack_guard_page_protected;
    struct thread * this;
    struct thread * prev;
    struct thread * next;
    lispobj state;
    lispobj tls_cookie;
    struct interrupt_data * interrupt_data;
    lispobj stepping;
    mach_port_name_t mach_port_name;
    struct nonpointer_thread_data * nonpointer_data;
    os_context_t * interrupt_contexts[1];
};

#else /* LANGUAGE_ASSEMBLY */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define THREAD_NO_TLS_VALUE_MARKER_OFFSET 0
#define THREAD_OS_THREAD_OFFSET 8
#define THREAD_OS_ADDRESS_OFFSET 16
#define THREAD_ALLOC_REGION_OFFSET 24
#define THREAD_PSEUDO_ATOMIC_BITS_OFFSET 64
#define THREAD_ALIEN_STACK_POINTER_OFFSET 72
#define THREAD_BINDING_STACK_POINTER_OFFSET 80
#define THREAD_ALIEN_STACK_START_OFFSET 88
#define THREAD_BINDING_STACK_START_OFFSET 96
#define THREAD_CONTROL_STACK_START_OFFSET 104
#define THREAD_CONTROL_STACK_END_OFFSET 112
#define THREAD_CONTROL_STACK_GUARD_PAGE_PROTECTED_OFFSET 120
#define THREAD_THIS_OFFSET 128
#define THREAD_PREV_OFFSET 136
#define THREAD_NEXT_OFFSET 144
#define THREAD_STATE_OFFSET 152
#define THREAD_TLS_COOKIE_OFFSET 160
#define THREAD_INTERRUPT_DATA_OFFSET 168
#define THREAD_STEPPING_OFFSET 176
#define THREAD_MACH_PORT_NAME_OFFSET 184
#define THREAD_NONPOINTER_DATA_OFFSET 192
#define THREAD_INTERRUPT_CONTEXTS_OFFSET 200

#endif /* LANGUAGE_ASSEMBLY */

#endif /* SBCL_GENESIS_THREAD */
