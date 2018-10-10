//
// Created by MbpQifan on 2018/3/26.
//

#include <iostream>
#include "IRInstr.h"


void LdconstInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, "$" + this->c, this->d);
}

void AddInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "addq " + this->op2 + ", " + "%rax" + "\n";
    gen_mov_asm(o, "%rax", this->d);
}

void SubInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "subq " + this->op2 + ", %rax " + "\n";
    gen_mov_asm(o, "%rax", this->d);
}

void MulInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "mulq " + this->op2 + "\n";
    gen_mov_asm(o, "%rax", this->d);
}

void DivInstr::gen_asm(ostream &o) {
    o << "movq $0, %rdx" << endl;
    gen_mov_asm(o, this->op1, "%rax");
    o << "divq " + this->op2 << endl;
    gen_mov_asm(o, "%rax", this->d);
    o << "#div" << endl;
}

void ModInstr::gen_asm(ostream &o) {
    o << "movq $0, %rdx" << endl;
    gen_mov_asm(o, this->op1, "%rax");
    o << "divq " + this->op2 << endl;
    gen_mov_asm(o, "%rdx", this->d);
    o << "#mod" << endl;
}

void RmemInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->addr, "%rax");
    gen_mov_asm(o, "(%rax)", "%r10");
    gen_mov_asm(o, "%r10", this->d);
}

void WmemInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->addr, "%rax");
    gen_mov_asm(o, this->var, "%r10");
    gen_mov_asm(o, "%r10", "(%rax)");
}

//Exception à generer
void CallInstr::gen_asm(ostream &o) {
    vector<string> regs = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};
    if (this->params.size() <= 6) {
        for (int i = 0; i < params.size(); i++) {
            gen_mov_asm(o, params[i], regs[i]);
        }
    } else {
        for (int i = 0; i < 6; i++) {
            gen_mov_asm(o, params[i], regs[i]);
        }
        //gen_mov_asm(o, params[6], "%rax");
        //gen_mov_asm(o, "%rax", "(%rsp)");
        for (int i = 6; i < params.size(); i++) {
            gen_mov_asm(o, params[i], "%r"+to_string(4+i));
        }
        for (int i = 6; i < params.size(); i++) {
            string s = to_string((i - 6) * 8) + "(%rsp)";
        //    gen_mov_asm(o, params[i], "%rax");
            gen_mov_asm(o, "%r"+to_string(4+i), s);

        }
    }
    o << "call " + this->l << endl;
    if (this->d != "") {
        gen_mov_asm(o, "%rax", this->d);
    }
}

void CmpEqInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "cmpq " << this->op2 << ", %rax \n";
    o << "sete %al \n"; //set the value of the register to 1 if condition else 0
    o << "movzbq %al, %rax \n"; //move the value of the 8 bits registers extended to 64 bits with zeros
    o << "movq %rax, " << this->d << "\n";
}

void CmpLtInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "cmpq " << this->op2 << ", %rax \n";
    o << "setl %al \n"; //set the value of the register to 1 if condition else 0
    o << "movzbq %al, %rax \n"; //move the value of the 8 bits registers extended to 64 bits with zeros
    o << "movq %rax, " << this->d << "\n";
}

void CmpLeInstr::gen_asm(ostream &o) {
    gen_mov_asm(o, this->op1, "%rax");
    o << "cmpq " << this->op2 << ", %rax \n";
    o << "setle %al \n"; //set the value of the register to 1 if condition else 0
    o << "movzbq %al, %rax \n"; //move the value of the 8 bits registers extended to 64 bits with zeros
    o << "movq %rax, " << this->d << "\n";
}

void IRInstr::gen_mov_asm(ostream &o, string s, string d) {
    o << "movq " + s + ", " + d + "\n";
}

void IRInstr::gen_cmp_asm(ostream &o, string op1, string op2) {
    gen_mov_asm(o, op1, "%rax");
    o << "cmp " + op2 + ", " + "%rax" + "\n";
}

void JmpInstr::gen_asm(ostream &o) {
    o << "jmp " + this->l + "\n";
}
