/*
	Project: WARP | (C) Noctefugia, April 2024
	File: mb_asm.c
	Description: assembler macros for M&B function calls
*/

#define THISCALL_RET(ret_value, ret_type) ret_value = (ret_type)tcall_retval
#define TSC_CAST(my_struct) ((uint)(&my_struct[0]))

#define THISCALL1(address, param_1) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=r" (tcall_retval) /*! output */ \
		: "r" (address), "r" (param_1) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL2(address, param_1, param_2) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=r" (tcall_retval) /*! output */ \
		: "r" (address), "r" (param_1), "r" (param_2) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL3(address, param_1, param_2, param_3) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %4\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=r" (tcall_retval) /*! output */ \
		: "r" (address), "r" (param_1), "r" (param_2), "r" (param_3) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL4(address, param_1, param_2, param_3, param_4) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %5\n\t" \
		"push %4\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=r" (tcall_retval) /*! output */ \
		: "r" (address), "r" (param_1), "r" (param_2), "r" (param_3), "r" (param_4) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL5(address, param_1, param_2, param_3, param_4, param_5) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %6\n\t" \
		"push %5\n\t" \
		"push %4\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=r" (tcall_retval) /*! output */ \
		: "r" (address), "r" (param_1), "r" (param_2), "r" (param_3), "g" (param_4), "g" (param_5) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL6(address, param_1, param_2, param_3, param_4, param_5, param_6) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %7\n\t" \
		"push %6\n\t" \
		"push %5\n\t" \
		"push %4\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=g" (tcall_retval) /*! output */ \
		: "g" (address), "g" (param_1), "g" (param_2), "g" (param_3), "g" (param_4), "g" (param_5), "g" (param_6) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 

#define THISCALL7(address, param_1, param_2, param_3, param_4, param_5, param_6, param_7) \
	uint tcall_retval; \
	__asm__ __volatile__( \
		"mov %2, %%ecx\n\t" \
		"push %8\n\t" \
		"push %7\n\t" \
		"push %6\n\t" \
		"push %5\n\t" \
		"push %4\n\t" \
		"push %3\n\t" \
		"call *%1\n\t" \
		"mov %%eax, %0\n\t" \
		: "=g" (tcall_retval) /*! output */ \
		: "g" (address), "g" (param_1), "g" (param_2), "g" (param_3), "g" (param_4), "g" (param_5), "g" (param_6), "g" (param_7) /*! input */ \
		: "ecx", "eax" /*! clobbers */ \
	); 
