	.text
	.intel_syntax noprefix
	.file	"if.cpp"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	push	r14
	.cfi_def_cfa_offset 16
	push	rbx
	.cfi_def_cfa_offset 24
	push	rax
	.cfi_def_cfa_offset 32
	.cfi_offset rbx, -24
	.cfi_offset r14, -16
	mov	dword ptr [rsp + 4], 1
	mov	edi, offset _ZSt4cout
	mov	esi, offset .L.str
	mov	edx, 2
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	lea	rsi, [rsp + 4]
	mov	edi, offset _ZSt3cin
	call	_ZNSirsERi
	mov	ebx, dword ptr [rsp + 4]
	mov	edi, offset _ZSt4cout
	test	ebx, ebx
	je	.LBB0_5
# %bb.1:
	mov	esi, offset .L.str.2
	mov	edx, 3
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	mov	esi, dword ptr [rsp + 4]
	mov	edi, offset _ZSt4cout
	call	_ZNSolsEi
	mov	r14, rax
	test	ebx, ebx
	jle	.LBB0_8
# %bb.2:
	mov	esi, offset .L.str.3
	mov	edx, 14
	mov	rdi, r14
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	mov	rax, qword ptr [r14]
	mov	rax, qword ptr [rax - 24]
	mov	rbx, qword ptr [r14 + rax + 240]
	test	rbx, rbx
	je	.LBB0_16
# %bb.3:
	cmp	byte ptr [rbx + 56], 0
	je	.LBB0_11
.LBB0_4:
	mov	al, byte ptr [rbx + 67]
	jmp	.LBB0_12
.LBB0_5:
	mov	esi, offset .L.str.1
	mov	edx, 14
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	mov	rax, qword ptr [rip + _ZSt4cout]
	mov	rax, qword ptr [rax - 24]
	mov	rbx, qword ptr [rax + _ZSt4cout+240]
	test	rbx, rbx
	je	.LBB0_16
# %bb.6:
	cmp	byte ptr [rbx + 56], 0
	je	.LBB0_13
# %bb.7:
	mov	al, byte ptr [rbx + 67]
	jmp	.LBB0_14
.LBB0_8:
	mov	esi, offset .L.str.4
	mov	edx, 14
	mov	rdi, r14
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	mov	rax, qword ptr [r14]
	mov	rax, qword ptr [rax - 24]
	mov	rbx, qword ptr [r14 + rax + 240]
	test	rbx, rbx
	je	.LBB0_16
# %bb.9:
	cmp	byte ptr [rbx + 56], 0
	jne	.LBB0_4
.LBB0_11:
	mov	rdi, rbx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	mov	rax, qword ptr [rbx]
	mov	rdi, rbx
	mov	esi, 10
	call	qword ptr [rax + 48]
.LBB0_12:
	movsx	esi, al
	mov	rdi, r14
	jmp	.LBB0_15
.LBB0_13:
	mov	rdi, rbx
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	mov	rax, qword ptr [rbx]
	mov	rdi, rbx
	mov	esi, 10
	call	qword ptr [rax + 48]
.LBB0_14:
	movsx	esi, al
	mov	edi, offset _ZSt4cout
.LBB0_15:
	call	_ZNSo3putEc
	mov	rdi, rax
	call	_ZNSo5flushEv
	xor	eax, eax
	add	rsp, 8
	.cfi_def_cfa_offset 24
	pop	rbx
	.cfi_def_cfa_offset 16
	pop	r14
	.cfi_def_cfa_offset 8
	ret
.LBB0_16:
	.cfi_def_cfa_offset 32
	call	_ZSt16__throw_bad_castv
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.section	.text.startup,"ax",@progbits
	.p2align	4, 0x90         # -- Begin function _GLOBAL__sub_I_if.cpp
	.type	_GLOBAL__sub_I_if.cpp,@function
_GLOBAL__sub_I_if.cpp:                  # @_GLOBAL__sub_I_if.cpp
	.cfi_startproc
# %bb.0:
	push	rax
	.cfi_def_cfa_offset 16
	mov	edi, offset _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	edi, offset _ZNSt8ios_base4InitD1Ev
	mov	esi, offset _ZStL8__ioinit
	mov	edx, offset __dso_handle
	pop	rax
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit            # TAILCALL
.Lfunc_end1:
	.size	_GLOBAL__sub_I_if.cpp, .Lfunc_end1-_GLOBAL__sub_I_if.cpp
	.cfi_endproc
                                        # -- End function
	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"n:"
	.size	.L.str, 3

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"n \343\201\257 0 \343\201\247\343\201\231"
	.size	.L.str.1, 15

	.type	.L.str.2,@object        # @.str.2
.L.str.2:
	.asciz	"n ("
	.size	.L.str.2, 4

	.type	.L.str.3,@object        # @.str.3
.L.str.3:
	.asciz	") \343\201\257\346\255\243\343\201\247\343\201\231"
	.size	.L.str.3, 15

	.type	.L.str.4,@object        # @.str.4
.L.str.4:
	.asciz	") \343\201\257\350\262\240\343\201\247\343\201\231"
	.size	.L.str.4, 15

	.section	.init_array,"aw",@init_array
	.p2align	3
	.quad	_GLOBAL__sub_I_if.cpp
	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _GLOBAL__sub_I_if.cpp
	.addrsig_sym _ZStL8__ioinit
	.addrsig_sym __dso_handle
	.addrsig_sym _ZSt4cout
	.addrsig_sym _ZSt3cin
