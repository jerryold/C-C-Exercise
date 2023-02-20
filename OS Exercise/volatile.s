	.file	"volatile.c"
	.text
	.p2align 4
	.globl	foo
	.type	foo, @function
foo:
.LFB0:
	.cfi_startproc
	endbr64
	movl	i(%rip), %eax
	movl	j(%rip), %edx
	movl	%eax, a(%rip)
	testl	%edx, %edx
	leal	15(%rdx), %eax
	cmovns	%edx, %eax
	sarl	$4, %eax
	movl	%eax, b(%rip)
	ret
	.cfi_endproc
.LFE0:
	.size	foo, .-foo
	.comm	j,4,4
	.comm	i,4,4
	.comm	b,4,4
	.comm	a,4,4
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
