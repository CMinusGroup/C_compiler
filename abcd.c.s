	.text
	.file	"abcd.c"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movl	$0, 12(%rsp)
	movabsq	$4608083138725491507, %rax # imm = 0x3FF3333333333333
	movq	%rax, 16(%rsp)
	cmpl	$10, 12(%rsp)
	jge	.LBB0_3
	.p2align	4, 0x90
.LBB0_1:                                # %loop
                                        # =>This Inner Loop Header: Depth=1
	movsd	16(%rsp), %xmm0         # xmm0 = mem[0],zero
	movl	$.L__unnamed_1, %edi
	movb	$1, %al
	callq	printf
	movl	$.L__unnamed_2, %edi
	xorl	%eax, %eax
	callq	printf
	incl	12(%rsp)
	movsd	16(%rsp), %xmm0         # xmm0 = mem[0],zero
	mulsd	%xmm0, %xmm0
	movsd	%xmm0, 16(%rsp)
	cmpl	$10, 12(%rsp)
	jl	.LBB0_1
.LBB0_3:                                # %outer
	xorl	%eax, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L__unnamed_1,@object   # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"sddd = %f"
	.size	.L__unnamed_1, 10

	.type	.L__unnamed_2,@object   # @1
.L__unnamed_2:
	.asciz	"\n"
	.size	.L__unnamed_2, 2

	.section	".note.GNU-stack","",@progbits
