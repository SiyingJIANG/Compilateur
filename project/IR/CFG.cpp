//
// Created by MbpQifan on 2018/3/26.
//

#include <structure/Declaration.h>
#include <structure/VarDeclaration.h>

#include "CFG.h"
#include <structure/Function.h>
#include "BasicBlock.h"

CFG::CFG(Function *f)
        : function(f), nextFreeSymbolIndex(0), nextBBnumber(0) {
    for (pair<string, Declaration *> p: f->getSymbolTable()) {
        if (VarDeclaration *vd = dynamic_cast<VarDeclaration *>(p.second)) {
            if (vd->IsArray())
                add_to_symbol_table(p.first, vd->getType(), vd->getSize());
            else
                add_to_symbol_table(p.first, vd->getType());
        }
    }
    if (this->function->getType() != VOID) {
        add_to_symbol_table("retvalue", this->function->getType());
    }
    BasicBlock *basicBlock = new BasicBlock(this, new_BB_name());
    add_bb(basicBlock);
    //labet_ret
    label_ret = (dynamic_cast<Declaration *>(function))->getName() + "_rep";
}

CFG::~CFG()
{
    for (auto a:bbs)
        delete a;
}

void CFG::add_bb(BasicBlock *bb) {
    bbs.push_back(bb);
    current_bb = bb;
};

// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
void CFG::gen_asm(ostream &o) {
    current_bb = bbs[bbs.size() - 1];
    gen_asm_prologue(o);
    for (auto bb:bbs) {
        bb->gen_asm(o);
    }
    gen_asm_epilogue(o);
};

void CFG::gen_asm_prologue(ostream &o) {
    string pro;
    pro += (dynamic_cast<Declaration *>(function))->getName();
    pro += ":\r\n";
    pro += "push %rbp\r\n";
    pro += "movq %rsp, %rbp\r\n";
    pro += "subq $";
    pro += to_string(nextFreeSymbolIndex);
    pro += ", %rsp\r\n\r\n";

    int nParameters = function->getVectorParameter().size();
    vector<string> regs = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};
    if (nParameters <= 6) {
        for (int i = 0; i < nParameters; i++) {
            string s = regs[i];
            string d = IR_reg_to_asm(this->function->getVectorParameter().at(i)->getName());
            pro += "movq " + s + ", " + d + "\n";

        }
    } else {
        for (int i = 0; i < 6; i++) {
            string s = regs[i];
            string d = IR_reg_to_asm(this->function->getVectorParameter().at(i)->getName());
            pro += "movq " + s + ", " + d + "\n";

        }
        for (int i = 6; i < nParameters; i++) {
            string s = to_string(8*i-32) + "(%rbp)";
            string d = IR_reg_to_asm(this->function->getVectorParameter().at(i)->getName());
            pro += "movq " + s + ", %r" +to_string(i+4) +"\n";
           // pro += "movq %rax, " + d + "\n";
        }
        for (int i = 6; i < nParameters; i++) {
            string s = to_string(8*i+16) + "(%rbp)";
            string d = IR_reg_to_asm(this->function->getVectorParameter().at(i)->getName());
          //  pro += "movq " + s + ", %r" +to_string(i+4) "\n";
            pro += "movq %r"+to_string(i+4)+", " + d + "\n";
        }
    }
    o << pro;
};

void CFG::gen_asm_epilogue(ostream &o) {
    string ep;
    ep += label_ret;
    ep += ":\r\n";
    if (this->function->getType() != VOID) {
        ep += "movq " + IR_reg_to_asm("retvalue") + ", %rax\r\n";
    }
    ep += "movq %rbp, %rsp\r\n";
    ep += "pop %rbp\r\n";
    ep += "ret\r\n";
    o << ep;
};

void CFG::add_to_symbol_table(string name, Type t) {
    nextFreeSymbolIndex += 8 * 1;
    SymbolIndex.insert(make_pair(name, nextFreeSymbolIndex));
    SymbolType.insert(make_pair(name, t));
};

void CFG::add_to_symbol_table(string name, Type t, int size) {
    nextFreeSymbolIndex += 8 * size;
    SymbolIndex.insert(make_pair(name, nextFreeSymbolIndex));
    SymbolType.insert(make_pair(name, t));
};

int CFG::get_var_index(string name) {
    return SymbolIndex.find(name)->second;
};

Type CFG::get_var_type(string name) {
    return SymbolType.find(name)->second;
}

string CFG::create_new_tempvar(Type t) {
    string var_name = "!tmp" + to_string(nextFreeSymbolIndex + 8);
    add_to_symbol_table(var_name, t);
    return var_name;
}

string CFG::new_BB_name() {
    return ".bb_" + function->getName() + "_" + to_string(nextBBnumber++);
}

void CFG::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {
    this->current_bb->add_IRInstr(op, t, params);
};


string CFG::IR_reg_to_asm(string var_name) {
    if (var_name == "!bp") {
        return "%rbp";
    }
    return "-" + to_string(get_var_index(var_name)) + "(%rbp)";
}

void CFG::setCurrent_bb(BasicBlock *current_bb) {
    CFG::current_bb = current_bb;
}

const string &CFG::getLabel_ret() const {
    return label_ret;
}

BasicBlock *CFG::getCurrent_bb()
{
    return current_bb;
}


