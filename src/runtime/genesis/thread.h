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
#define SBCL_GENESIS_THREAD
#ifndef __ASSEMBLER__

#define THREAD_HEADER_SLOTS 16
#define THREAD_FUNCTION_LAYOUT_SLOT -1
#define THREAD_VARYOBJ_SPACE_ADDR_SLOT -2
#define THREAD_VARYOBJ_CARD_COUNT_SLOT -3
#define THREAD_VARYOBJ_CARD_MARKS_SLOT -4

struct thread {
    lispobj no_tls_value_marker;
    os_thread_t os_thread;
    lispobj * binding_stack_pointer;
    lispobj current_catch_block;
    lispobj current_unwind_protect_block;
    lispobj pseudo_atomic_bits;
    lispobj * alien_stack_pointer;
    lispobj stepping;
    lispobj msan_param_tls;
    lispobj dynspace_addr;
    lispobj dynspace_card_count;
    lispobj dynspace_pte_base;
    uword_t * profile_data;
    struct alloc_region alloc_region;
    void * os_address;
    lispobj * alien_stack_start;
    lispobj * binding_stack_start;
    os_sem_t * state_sem;
    os_sem_t * state_not_running_sem;
    int state_not_running_waitcount;
    os_sem_t * state_not_stopped_sem;
    int state_not_stopped_waitcount;
    lispobj * control_stack_start;
    lispobj * control_stack_end;
    lispobj control_stack_guard_page_protected;
    struct thread * this;
    struct thread * prev;
    struct thread * next;
    lispobj state;
    lispobj tls_size;
    struct interrupt_data * interrupt_data;
    boolean foreign_function_call_active;
    lispobj * control_stack_pointer;
    mach_port_name_t mach_port_name;
};

#else /* __ASSEMBLER__ */

/* These offsets are SLOT-OFFSET * N-WORD-BYTES - LOWTAG
 * so they work directly on tagged addresses. */

#define THREAD_NO_TLS_VALUE_MARKER_OFFSET 0
#define THREAD_OS_THREAD_OFFSET 8
#define THREAD_BINDING_STACK_POINTER_OFFSET 16
#define THREAD_CURRENT_CATCH_BLOCK_OFFSET 24
#define THREAD_CURRENT_UNWIND_PROTECT_BLOCK_OFFSET 32
#define THREAD_PSEUDO_ATOMIC_BITS_OFFSET 40
#define THREAD_ALIEN_STACK_POINTER_OFFSET 48
#define THREAD_STEPPING_OFFSET 56
#define THREAD_MSAN_PARAM_TLS_OFFSET 64
#define THREAD_DYNSPACE_ADDR_OFFSET 72
#define THREAD_DYNSPACE_CARD_COUNT_OFFSET 80
#define THREAD_DYNSPACE_PTE_BASE_OFFSET 88
#define THREAD_PROFILE_DATA_OFFSET 96
#define THREAD_ALLOC_REGION_OFFSET 104
#define THREAD_OS_ADDRESS_OFFSET 136
#define THREAD_ALIEN_STACK_START_OFFSET 144
#define THREAD_BINDING_STACK_START_OFFSET 152
#define THREAD_STATE_SEM_OFFSET 160
#define THREAD_STATE_NOT_RUNNING_SEM_OFFSET 168
#define THREAD_STATE_NOT_RUNNING_WAITCOUNT_OFFSET 176
#define THREAD_STATE_NOT_STOPPED_SEM_OFFSET 184
#define THREAD_STATE_NOT_STOPPED_WAITCOUNT_OFFSET 192
#define THREAD_CONTROL_STACK_START_OFFSET 200
#define THREAD_CONTROL_STACK_END_OFFSET 208
#define THREAD_CONTROL_STACK_GUARD_PAGE_PROTECTED_OFFSET 216
#define THREAD_THIS_OFFSET 224
#define THREAD_PREV_OFFSET 232
#define THREAD_NEXT_OFFSET 240
#define THREAD_STATE_OFFSET 248
#define THREAD_TLS_SIZE_OFFSET 256
#define THREAD_INTERRUPT_DATA_OFFSET 264
#define THREAD_FOREIGN_FUNCTION_CALL_ACTIVE_OFFSET 272
#define THREAD_CONTROL_STACK_POINTER_OFFSET 280
#define THREAD_MACH_PORT_NAME_OFFSET 288
#define THREAD_SIZE 37

#endif /* __ASSEMBLER__ */

#endif
