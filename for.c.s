	.text
	.file	"for.c"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	pushq	%rax
	.cfi_def_cfa_offset 16
	movl	$-30, 4(%rsp)
	cmpl	$180, 4(%rsp)
	jge	.LBB0_3
	.p2align	4, 0x90
.LBB0_1:                                # %loop
                                        # =>This Inner Loop Header: Depth=1
	movl	4(%rsp), %esi
	movl	$.L__unnamed_1, %edi
	xorl	%eax, %eax
	callq	printf
	movl	$.L__unnamed_2, %edi
	xorl	%eax, %eax
	callq	printf
	addl	$10, 4(%rsp)
	cmpl	$180, 4(%rsp)
	jl	.LBB0_1
.LBB0_3:                                # %outer
	xorl	%eax, %eax
	popq	%rcx
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L__unnamed_1,@object   # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"i = %d"
	.size	.L__unnamed_1, 7

	.type	.L__unnamed_2,@object   # @1
.L__unnamed_2:
	.asciz	"\n"
	.size	.L__unnamed_2, 2

	.section	".note.GNU-stack","",@progbits
