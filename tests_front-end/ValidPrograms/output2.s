.text
.globl main
main:
push %rbp
movq %rsp, %rbp
subq $80, %rsp

.bb_main_0:
movq $0, -16(%rbp)
movq $-8, -24(%rbp)
movq %rbp, %rax
addq -24(%rbp), %rax
movq %rax, -24(%rbp)
movq -24(%rbp), %rax
movq -16(%rbp), %r10
movq %r10, (%rax)
movq $2, -32(%rbp)
movq -8(%rbp), %rax
cmpq -32(%rbp), %rax 
sete %al 
movzbq %al, %rax 
movq %rax, -40(%rbp)
cmpq $0, -40(%rbp)
je .bb_main_0_falseStmt
jmp .bb_main_0_trueStmt
.bb_main_0_trueStmt:
movq $86, -48(%rbp)
movq -48(%rbp), %rdi
call putchar
jmp .bb_main_1
.bb_main_0_falseStmt:
jmp .bb_main_1
.bb_main_1:
movq $1, -56(%rbp)
movq -8(%rbp), %rax
addq -56(%rbp), %rax
movq %rax, -64(%rbp)
movq $-8, -72(%rbp)
movq %rbp, %rax
addq -72(%rbp), %rax
movq %rax, -72(%rbp)
movq -72(%rbp), %rax
movq -64(%rbp), %r10
movq %r10, (%rax)
movq $10, -80(%rbp)
movq -80(%rbp), %rdi
call putchar
jmp main_rep
main_rep:
movq %rbp, %rsp
pop %rbp
ret
