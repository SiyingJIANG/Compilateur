//
// Created by MbpQifan on 2018/3/26.
//

#include "BasicBlock.h"

void BasicBlock::add_IRInstr(IRInstr::Operation op, Type t, vector<string> params) {

    IRInstr *irInstr;
    switch (op) {
        case IRInstr::ldconst:
            irInstr = new LdconstInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), params[1]);
            break;
        case IRInstr::add:
            irInstr = new AddInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                   this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::sub:
            irInstr = new SubInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                   this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::mul:
            irInstr = new MulInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                   this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::div:
            irInstr = new DivInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                   this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::mod:
            irInstr = new ModInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                   this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::rmem:
            irInstr = new RmemInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]));
            break;
        case IRInstr::wmem:
            irInstr = new WmemInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]));
            break;
        case IRInstr::call: {
            vector<string> paramsEntree;
            for (vector<string>::iterator iter = params.begin() + 2; iter != params.end(); ++iter) {
                paramsEntree.push_back(this->cfg->IR_reg_to_asm(*iter));
            }
            if (params[0] == "") {
                irInstr = new CallInstr(this, t, params[0], params[1], paramsEntree);
            } else {
                irInstr = new CallInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), params[1], paramsEntree);
            }
            break;
        }
        case IRInstr::cmp_eq:
            irInstr = new CmpEqInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                     this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::cmp_lt:
            irInstr = new CmpLtInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                     this->cfg->IR_reg_to_asm(params[2]));
            break;
        case IRInstr::cmp_le:
            irInstr = new CmpLeInstr(this, t, this->cfg->IR_reg_to_asm(params[0]), this->cfg->IR_reg_to_asm(params[1]),
                                     this->cfg->IR_reg_to_asm(params[2]));
            break;

        case IRInstr::jmp:
            irInstr = new JmpInstr(this, params[0]);
            break;
    }
    instrs.push_back(irInstr);
}

void BasicBlock::gen_asm(ostream &o) {
    o << label << ":" << endl;
    for (IRInstr *instruction : instrs) {
        instruction->gen_asm(o);
    }

    if(exit_true == nullptr) //the basic block is a leaf of the cfg
        //at this point the current_bb has been set to the last bb
        o << "jmp " << cfg->getLabel_ret() << endl;
    else
    {
        if(exit_false != nullptr){ //the basic block divides into two new basic blocks
            o << "cmpq $0, " << cfg->IR_reg_to_asm(conditionVar) << endl;
            o << "je " << exit_false->getLabel() << endl;
        }
        //in any case the basic block must have a jump to its exit_true_
        o << "jmp " << exit_true->getLabel() << endl;

    }
}

void BasicBlock::setExit_true(BasicBlock *exit_true) {
    BasicBlock::exit_true = exit_true;
}

void BasicBlock::setExit_false(BasicBlock *exit_false) {
    BasicBlock::exit_false = exit_false;
}

BasicBlock *BasicBlock::getExit_true() const {
    return exit_true;
}

BasicBlock *BasicBlock::getExit_false() const {
    return exit_false;
}

string BasicBlock::getLabel()
{
        return label;
}

void BasicBlock::addInstr(IRInstr *instr)
{
    instrs.push_back(instr);
}

string BasicBlock::getConditionVar() const
{
    return conditionVar;
}

void BasicBlock::setConditionVar(string conditionVar)
{
    this->conditionVar = conditionVar;
}

BasicBlock::~BasicBlock()
{
    for (auto instruction:instrs)
        delete instruction;
}

