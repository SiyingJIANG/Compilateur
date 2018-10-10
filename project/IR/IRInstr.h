//
// Created by MbpQifan on 2018/3/26.
//

#ifndef PROJECT_IRINSTR_H
#define PROJECT_IRINSTR_H

#include <structure/Type.h>
#include <string>
#include <vector>


using namespace std;

class BasicBlock;

//! The class for one 3-address instruction
class IRInstr {

public:
    /** The instructions themselves -- feel free to subclass instead */
    typedef enum {
        ldconst,
        add,
        sub,
        mul,
        div,
        mod,
        rmem,
        wmem,
        call,
        cmp_eq,
        cmp_lt,
        cmp_le,
        jmp
    } Operation;


    /**  constructor */
    IRInstr(BasicBlock *bb_, Operation op, Type t)
            : bb(bb_), op(op), t(t) {};

    virtual ~IRInstr(){};

    /** Actual code generation */
    virtual void gen_asm(ostream &o) = 0; /**< x86 assembly code generation for this IR instruction */
    void gen_mov_asm(ostream &o, string s, string d);
    void gen_cmp_asm(ostream &o, string op1, string op2);

    Operation getOperation() {
        return op;
    }

    void setIsCmpLastInstr(bool isLastInstr) {
        this->isCmpLastInstr = isLastInstr;
    }


    const string &getD() const {
        return d;
    }

    void setD(const string &d) {
        IRInstr::d = d;
    }

    const Type &getT() const {
        return t;
    }

protected:
    BasicBlock *bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
    Operation op;
    Type t;
    //vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
    // if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design.
    bool isCmpLastInstr;
    string d;//destination
};

class LdconstInstr : public IRInstr {
public:
    LdconstInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &constant)
            : IRInstr(bb_, ldconst, t), c(constant) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string c;
};

class AddInstr : public IRInstr {
public:
    AddInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, add, t),  op1(op1_), op2(op2_) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
};

class SubInstr : public IRInstr {
public:
    SubInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, sub, t),  op1(op1_), op2(op2_) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
};

class MulInstr : public IRInstr {
public:
    MulInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, mul, t), op1(op1_), op2(op2_) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
};

class DivInstr : public IRInstr{
public:
    DivInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
    : IRInstr(bb_, mul, t), op1(op1_), op2(op2_) {
        setD(destination);
    };
    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
};

class ModInstr : public IRInstr{
public:
    ModInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, mul, t), op1(op1_), op2(op2_) {
        setD(destination);
    };
    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
};

class RmemInstr : public IRInstr {
public:
    RmemInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &address)
            : IRInstr(bb_, rmem, t), addr(address) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string addr;
};

class WmemInstr : public IRInstr {
public:
    WmemInstr(BasicBlock *bb_, const Type &t, const string &address, const string &variable)
            : IRInstr(bb_, wmem, t), addr(address), var(variable) {};

    virtual void gen_asm(ostream &o);

private:
    string addr;
    string var;
};

class CallInstr : public IRInstr {
public:
    CallInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &label,
              const vector<string> &params_)
            : IRInstr(bb_, call, t), l(label), params(params_) {
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string l;
    vector<string> params;

};

class CmpEqInstr : public IRInstr {
public:
    CmpEqInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, cmp_eq, t), op1(op1_), op2(op2_){
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

private:
    string op1;
    string op2;
    string lTrue;
    string lFalse;
};

class CmpLtInstr : public IRInstr {
public:
    CmpLtInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, cmp_lt, t), op1(op1_), op2(op2_){
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

    void setLTrue(const string &lTrue) {
        this->lTrue = lTrue;
    }

    void setLFalse(const string &lFalse) {
        this->lFalse = lFalse;
    }
private:
    string op1;
    string op2;
    string lTrue;
    string lFalse;
};

class CmpLeInstr : public IRInstr {
public:
    CmpLeInstr(BasicBlock *bb_, const Type &t, const string &destination, const string &op1_, const string &op2_)
            : IRInstr(bb_, cmp_le, t), op1(op1_), op2(op2_){
        setD(destination);
    };

    virtual void gen_asm(ostream &o);

    void setLTrue(const string &lTrue) {
        this->lTrue = lTrue;
    }

    void setLFalse(const string &lFalse) {
        this->lFalse = lFalse;
    }

private:
    string op1;
    string op2;
    string lTrue;
    string lFalse;
};

class JmpInstr : public IRInstr {
public:
    JmpInstr(BasicBlock *bb_, const string &label)
            : IRInstr(bb_, jmp, VOID), l(label){};

    virtual void gen_asm(ostream &o);


private:
    string l;
};

#endif //PROJECT_IRINSTR_H
