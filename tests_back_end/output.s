.text
.globl main
putint:
push %rbp
movq %rsp, %rbp
subq $352, %rsp

movq %rdi, -32(%rbp)
.bb_putint_0:
movq $0, -56(%rbp)
movq $-48, -64(%rbp)
movq %rbp, %rax
addq -64(%rbp), %rax
movq %rax, -64(%rbp)
movq -64(%rbp), %rax
movq -56(%rbp), %r10
movq %r10, (%rax)
movq $-24, -72(%rbp)
movq %rbp, %rax
addq -72(%rbp), %rax
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq -32(%rbp), %r10
movq %r10, (%rax)
jmp .bb_putint_0_testStmt
.bb_putint_0_testStmt:
movq $0, -80(%rbp)
movq -80(%rbp), %rax
cmpq -32(%rbp), %rax 
setl %al 
movzbq %al, %rax 
movq %rax, -88(%rbp)
cmpq $0, -88(%rbp)
je .bb_putint_1
jmp .bb_putint_0_bodyStmt
.bb_putint_0_bodyStmt:
movq $1, -96(%rbp)
movq -48(%rbp), %rax
addq -96(%rbp), %rax
movq %rax, -104(%rbp)
movq $-48, -112(%rbp)
movq %rbp, %rax
addq -112(%rbp), %rax
movq %rax, -112(%rbp)
movq -112(%rbp), %rax
movq -104(%rbp), %r10
movq %r10, (%rax)
movq $10, -120(%rbp)
movq $0, %rdx
movq -32(%rbp), %rax
divq -120(%rbp)
movq %rax, -128(%rbp)
#div
movq $-32, -136(%rbp)
movq %rbp, %rax
addq -136(%rbp), %rax
movq %rax, -136(%rbp)
movq -136(%rbp), %rax
movq -128(%rbp), %r10
movq %r10, (%rax)
jmp .bb_putint_0_testStmt
.bb_putint_1:
movq $1, -144(%rbp)
movq $-16, -152(%rbp)
movq %rbp, %rax
addq -152(%rbp), %rax
movq %rax, -152(%rbp)
movq -152(%rbp), %rax
movq -144(%rbp), %r10
movq %r10, (%rax)
movq $-48, -160(%rbp)
movq %rbp, %rax
addq -160(%rbp), %rax
movq %rax, -160(%rbp)
movq -160(%rbp), %rax
movq -48(%rbp), %r10
movq %r10, (%rax)
movq $-40, -168(%rbp)
movq %rbp, %rax
addq -168(%rbp), %rax
movq %rax, -168(%rbp)
movq -168(%rbp), %rax
movq -48(%rbp), %r10
movq %r10, (%rax)
jmp .bb_putint_1_testStmt
.bb_putint_1_testStmt:
movq $1, -176(%rbp)
movq -176(%rbp), %rax
cmpq -48(%rbp), %rax 
setl %al 
movzbq %al, %rax 
movq %rax, -184(%rbp)
cmpq $0, -184(%rbp)
je .bb_putint_2
jmp .bb_putint_1_bodyStmt
.bb_putint_1_bodyStmt:
movq $10, -192(%rbp)
movq -16(%rbp), %rax
mulq -192(%rbp)
movq %rax, -200(%rbp)
movq $-16, -208(%rbp)
movq %rbp, %rax
addq -208(%rbp), %rax
movq %rax, -208(%rbp)
movq -208(%rbp), %rax
movq -200(%rbp), %r10
movq %r10, (%rax)
movq $1, -216(%rbp)
movq -48(%rbp), %rax
subq -216(%rbp), %rax 
movq %rax, -224(%rbp)
movq $-48, -232(%rbp)
movq %rbp, %rax
addq -232(%rbp), %rax
movq %rax, -232(%rbp)
movq -232(%rbp), %rax
movq -224(%rbp), %r10
movq %r10, (%rax)
jmp .bb_putint_1_testStmt
.bb_putint_2:
jmp .bb_putint_2_testStmt
.bb_putint_2_testStmt:
movq $0, -240(%rbp)
movq -240(%rbp), %rax
cmpq -40(%rbp), %rax 
setl %al 
movzbq %al, %rax 
movq %rax, -248(%rbp)
cmpq $0, -248(%rbp)
je .bb_putint_3
jmp .bb_putint_2_bodyStmt
.bb_putint_2_bodyStmt:
movq $0, %rdx
movq -24(%rbp), %rax
divq -16(%rbp)
movq %rax, -256(%rbp)
#div
movq $-8, -264(%rbp)
movq %rbp, %rax
addq -264(%rbp), %rax
movq %rax, -264(%rbp)
movq -264(%rbp), %rax
movq -256(%rbp), %r10
movq %r10, (%rax)
movq $48, -272(%rbp)
movq -8(%rbp), %rax
addq -272(%rbp), %rax
movq %rax, -280(%rbp)
movq -280(%rbp), %rdi
call putchar
movq $0, %rdx
movq -24(%rbp), %rax
divq -16(%rbp)
movq %rdx, -288(%rbp)
#mod
movq $-24, -296(%rbp)
movq %rbp, %rax
addq -296(%rbp), %rax
movq %rax, -296(%rbp)
movq -296(%rbp), %rax
movq -288(%rbp), %r10
movq %r10, (%rax)
movq $10, -304(%rbp)
movq $0, %rdx
movq -16(%rbp), %rax
divq -304(%rbp)
movq %rax, -312(%rbp)
#div
movq $-16, -320(%rbp)
movq %rbp, %rax
addq -320(%rbp), %rax
movq %rax, -320(%rbp)
movq -320(%rbp), %rax
movq -312(%rbp), %r10
movq %r10, (%rax)
movq $1, -328(%rbp)
movq -40(%rbp), %rax
subq -328(%rbp), %rax 
movq %rax, -336(%rbp)
movq $-40, -344(%rbp)
movq %rbp, %rax
addq -344(%rbp), %rax
movq %rax, -344(%rbp)
movq -344(%rbp), %rax
movq -336(%rbp), %r10
movq %r10, (%rax)
jmp .bb_putint_2_testStmt
.bb_putint_3:
movq $32, -352(%rbp)
movq -352(%rbp), %rdi
call putchar
jmp putint_rep
putint_rep:
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
call putint
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
subq $16, %rsp

.bb_main_0:
movq $12, -16(%rbp)
movq -16(%rbp), %rdi
call syracuse
movq %rax, -8(%rbp)
jmp main_rep
main_rep:
movq %rbp, %rsp
pop %rbp
ret
