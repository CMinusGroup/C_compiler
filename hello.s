	.file	"hello.cpp"
	.def	__gxx_personality_sj0;	.scl	2;	.type	32;	.endef
	.def	_Unwind_SjLj_Register;	.scl	2;	.type	32;	.endef
	.def	_Unwind_SjLj_Unregister;	.scl	2;	.type	32;	.endef
	.text
	.def	swscanf;	.scl	3;	.type	32;	.endef
	.seh_proc	swscanf
swscanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA1(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L4(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vswscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L6
.L4:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L6:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA1:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1-.LLSDACSB1
.LLSDACSB1:
	.uleb128 0
	.uleb128 0
.LLSDACSE1:
	.text
	.seh_endproc
	.def	wscanf;	.scl	3;	.type	32;	.endef
	.seh_proc	wscanf
wscanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rdx, 280(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rcx, 272(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA2(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L10(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	280(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vwscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L12
.L10:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L12:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA2:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2-.LLSDACSB2
.LLSDACSB2:
	.uleb128 0
	.uleb128 0
.LLSDACSE2:
	.text
	.seh_endproc
	.def	fwscanf;	.scl	3;	.type	32;	.endef
	.seh_proc	fwscanf
fwscanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA3(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L16(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vfwscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L18
.L16:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L18:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA3:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3-.LLSDACSB3
.LLSDACSB3:
	.uleb128 0
	.uleb128 0
.LLSDACSE3:
	.text
	.seh_endproc
	.def	fwprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	fwprintf
fwprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA7(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L22(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vfwprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L24
.L22:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L24:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA7:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE7-.LLSDACSB7
.LLSDACSB7:
	.uleb128 0
	.uleb128 0
.LLSDACSE7:
	.text
	.seh_endproc
	.def	wprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	wprintf
wprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rdx, 280(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rcx, 272(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA8(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L28(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	280(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vwprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L30
.L28:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L30:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA8:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE8-.LLSDACSB8
.LLSDACSB8:
	.uleb128 0
	.uleb128 0
.LLSDACSE8:
	.text
	.seh_endproc
	.def	swprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	swprintf
swprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA9(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L34(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vswprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L36
.L34:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L36:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA9:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9-.LLSDACSB9
.LLSDACSB9:
	.uleb128 0
	.uleb128 0
.LLSDACSE9:
	.text
	.seh_endproc
	.def	snwprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	snwprintf
snwprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%rdx, 280(%rbp)
	movq	%r9, 296(%rbp)
	movq	%r8, 288(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA13(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L40(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	296(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rcx
	movq	288(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rcx, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vsnwprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L42
.L40:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L42:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA13:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE13-.LLSDACSB13
.LLSDACSB13:
	.uleb128 0
	.uleb128 0
.LLSDACSE13:
	.text
	.seh_endproc
.lcomm _ZStL8__ioinit,1,1
	.def	sscanf;	.scl	3;	.type	32;	.endef
	.seh_proc	sscanf
sscanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA968(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L46(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vsscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L48
.L46:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L48:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA968:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE968-.LLSDACSB968
.LLSDACSB968:
	.uleb128 0
	.uleb128 0
.LLSDACSE968:
	.text
	.seh_endproc
	.def	scanf;	.scl	3;	.type	32;	.endef
	.seh_proc	scanf
scanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rdx, 280(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rcx, 272(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA969(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L52(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	280(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L54
.L52:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L54:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA969:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE969-.LLSDACSB969
.LLSDACSB969:
	.uleb128 0
	.uleb128 0
.LLSDACSE969:
	.text
	.seh_endproc
	.def	fscanf;	.scl	3;	.type	32;	.endef
	.seh_proc	fscanf
fscanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%r8, 288(%rbp)
	movq	%r9, 296(%rbp)
	movq	%rdx, 280(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA970(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L58(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	288(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vfscanf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L60
.L58:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L60:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA970:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE970-.LLSDACSB970
.LLSDACSB970:
	.uleb128 0
	.uleb128 0
.LLSDACSE970:
	.text
	.seh_endproc
	.def	fprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	fprintf
fprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -24(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
	call	__mingw_vfprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rdx, -40(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -24(%rbp)
	movq	%rcx, -48(%rbp)
	leaq	-40(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
	call	__mingw_vprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	sprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	sprintf
sprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -24(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
	call	__mingw_vsprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	asprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	asprintf
asprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -48(%rbp)
	movq	%r8, -32(%rbp)
	movq	%r9, -24(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	-48(%rbp), %rcx
	call	__mingw_vasprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	snprintf;	.scl	3;	.type	32;	.endef
	.seh_proc	snprintf
snprintf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$328, %rsp
	.seh_stackalloc	328
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	movaps	%xmm6, 32(%rbp)
	.seh_savexmm	%xmm6, 160
	movaps	%xmm7, 48(%rbp)
	.seh_savexmm	%xmm7, 176
	movaps	%xmm8, 64(%rbp)
	.seh_savexmm	%xmm8, 192
	movaps	%xmm9, 80(%rbp)
	.seh_savexmm	%xmm9, 208
	movaps	%xmm10, 96(%rbp)
	.seh_savexmm	%xmm10, 224
	movaps	%xmm11, 112(%rbp)
	.seh_savexmm	%xmm11, 240
	movaps	%xmm12, 128(%rbp)
	.seh_savexmm	%xmm12, 256
	movaps	%xmm13, 144(%rbp)
	.seh_savexmm	%xmm13, 272
	movaps	%xmm14, 160(%rbp)
	.seh_savexmm	%xmm14, 288
	movaps	%xmm15, 176(%rbp)
	.seh_savexmm	%xmm15, 304
	.seh_endprologue
	movq	%rcx, 272(%rbp)
	movq	%rdx, 280(%rbp)
	movq	%r9, 296(%rbp)
	movq	%r8, 288(%rbp)
	leaq	__gxx_personality_sj0(%rip), %rax
	movq	%rax, -48(%rbp)
	leaq	.LLSDA982(%rip), %rax
	movq	%rax, -40(%rbp)
	leaq	-32(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, (%rax)
	leaq	.L72(%rip), %rdx
	movq	%rdx, 8(%rax)
	movq	%rsp, 16(%rax)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Register
	leaq	296(%rbp), %rax
	movq	%rax, 24(%rbp)
	movq	24(%rbp), %rcx
	movq	288(%rbp), %rdx
	movq	280(%rbp), %rax
	movl	$1, -88(%rbp)
	movq	%rcx, %r9
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	272(%rbp), %rcx
	call	__mingw_vsnprintf
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 12(%rbp)
	jmp	.L74
.L72:
	leaq	-32(%rbp), %rbp
	movq	-80(%rbp), %rax
	movl	$-1, -88(%rbp)
	movq	%rax, %rcx
	call	_Unwind_SjLj_Resume
.L74:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_Unwind_SjLj_Unregister
	movl	12(%rbp), %eax
	movaps	32(%rbp), %xmm6
	movaps	48(%rbp), %xmm7
	movaps	64(%rbp), %xmm8
	movaps	80(%rbp), %xmm9
	movaps	96(%rbp), %xmm10
	movaps	112(%rbp), %xmm11
	movaps	128(%rbp), %xmm12
	movaps	144(%rbp), %xmm13
	movaps	160(%rbp), %xmm14
	movaps	176(%rbp), %xmm15
	addq	$328, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	ret
	.section	.gcc_except_table,"w"
.LLSDA982:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE982-.LLSDACSB982
.LLSDACSB982:
	.uleb128 0
	.uleb128 0
.LLSDACSE982:
	.text
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "hello,world\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L78
	cmpl	$65535, 24(%rbp)
	jne	.L78
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	nop
.L78:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_main
_GLOBAL__sub_I_main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.def	_Unwind_SjLj_Resume;	.scl	2;	.type	32;	.endef
	.def	__mingw_vswscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vwscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfwscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfwprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vwprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vswprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vsnwprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vsscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vsprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vasprintf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vsnprintf;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
