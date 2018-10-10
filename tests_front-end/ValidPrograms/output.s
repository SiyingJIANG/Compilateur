.text
.globl main
printint:
push %rbp
movq %rsp, %rbp
subq $88, %rsp

movq %rdi, -8(%rbp)
.bb_printint_0:
jmp .bb_printint_0_testStmt
.bb_printint_0_testStmt:
movq $0, -16(%rbp)
movq -16(%rbp), %rax
cmpq -8(%rbp), %rax 
setl %al 
movzbq %al, %rax 
movq %rax, -24(%rbp)
cmpq $0, -24(%rbp)
je .bb_printint_1
jmp .bb_printint_0_bodyStmt
.bb_printint_0_bodyStmt:
movq $10, -32(%rbp)
movq $0, %rdx
movq -8(%rbp), %rax
divq -32(%rbp)
movq %rdx, -40(%rbp)
#mod
movq $48, -48(%rbp)
movq -40(%rbp), %rax
addq -48(%rbp), %rax
movq %rax, -56(%rbp)
movq -56(%rbp), %rdi
call putchar
movq $10, -64(%rbp)
movq $0, %rdx
movq -8(%rbp), %rax
divq -64(%rbp)
movq %rax, -72(%rbp)
#div
movq $-8, -80(%rbp)
movq %rbp, %rax
addq -80(%rbp), %rax
movq %rax, -80(%rbp)
movq -80(%rbp), %rax
movq -72(%rbp), %r10
movq %r10, (%rax)
jmp .bb_printint_0_testStmt
.bb_printint_1:
movq $32, -88(%rbp)
movq -88(%rbp), %rdi
call putchar
jmp printint_rep
printint_rep:
movq %rbp, %rsp
pop %rbp
ret
syracuse:
push %rbp
movq %rsp, %rbp
subq $144, %rsp

movq %rdi, -8(%rbp)
.bb_syracuse_0:
jmp .bb_syracuse_0_testStmt
.bb_syracuse_0_testStmt:
movq $1, -24(%rbp)
movq -24(%rbp), %rax
cmpq -8(%rbp), %rax 
setl %al 
movzbq %al, %rax 
movq %rax, -32(%rbp)
cmpq $0, -32(%rbp)
je .bb_syracuse_2
jmp .bb_syracuse_0_bodyStmt
.bb_syracuse_0_bodyStmt:
movq $2, -40(%rbp)
movq $0, %rdx
movq -8(%rbp), %rax
divq -40(%rbp)
movq %rdx, -48(%rbp)
#mod
movq $-16, -56(%rbp)
movq %rbp, %rax
addq -56(%rbp), %rax
movq %rax, -56(%rbp)
movq -56(%rbp), %rax
movq -48(%rbp), %r10
movq %r10, (%rax)
movq $0, -64(%rbp)
movq -16(%rbp), %rax
cmpq -64(%rbp), %rax 
sete %al 
movzbq %al, %rax 
movq %rax, -72(%rbp)
cmpq $0, -72(%rbp)
je .bb_syracuse_0_bodyStmt_falseStmt
jmp .bb_syracuse_0_bodyStmt_trueStmt
.bb_syracuse_0_bodyStmt_trueStmt:
movq $2, -80(%rbp)
movq $0, %rdx
movq -8(%rbp), %rax
divq -80(%rbp)
movq %rax, -88(%rbp)
#div
movq $-8, -96(%rbp)
movq %rbp, %rax
addq -96(%rbp), %rax
movq %rax, -96(%rbp)
movq -96(%rbp), %rax
movq -88(%rbp), %r10
movq %r10, (%rax)
jmp .bb_syracuse_1
.bb_syracuse_0_bodyStmt_falseStmt:
movq $3, -104(%rbp)
movq -8(%rbp), %rax
mulq -104(%rbp)
movq %rax, -112(%rbp)
movq $1, -120(%rbp)
movq -112(%rbp), %rax
addq -120(%rbp), %rax
movq %rax, -128(%rbp)
movq $-8, -136(%rbp)
movq %rbp, %rax
addq -136(%rbp), %rax
movq %rax, -136(%rbp)
movq -136(%rbp), %rax
movq -128(%rbp), %r10
movq %r10, (%rax)
jmp .bb_syracuse_1
.bb_syracuse_1:
movq -8(%rbp), %rdi
call printint
movq %rax, -144(%rbp)
jmp .bb_syracuse_0_testStmt
.bb_syracuse_2:
jmp syracuse_rep
syracuse_rep:
movq %rbp, %rsp
pop %rbp
ret
main:
push %rbp
movq %rsp, %rbp
subq $24, %rsp

.bb_main_0:
movq $12, -16(%rbp)
movq -16(%rbp), %rdi
call syracuse
movq %rax, -8(%rbp)
movq $10, -24(%rbp)
movq -24(%rbp), %rdi
call putchar
jmp main_rep
main_rep:
movq %rbp, %rsp
pop %rbp
ret
