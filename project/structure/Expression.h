//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_EXPRESSION_H
#define PROJECT_EXPRESSION_H

#include "Statement.h"
#include "Type.h"
#include "Scope.h"
#include <deque>
#include <IR/CFG.h>

enum OperatorId
{
    POSTINC, POSTDEC, PREINC, PREDEC, UPLUS, UMINUS, LOGNOT, BITNOT, MULT, DIV, MOD, PLUS, MINUS, LSHIFT, RSHIFT, SMALL,
    SMALLE, BIG, BIGE, EQUAL, DIFF, BITAND, BITXOR, BITOR, LOGAND, LOGOR, COMMA,
    Directassign,Sumassign,Diffassign,Productassign,Quotientassign,Remainderassign,Bitandassign,Bitorassign,Bitxorassign
};
const string LabelOp[36]={"++","--","++","--","+","-","!","~","*","/","%","+","-","<<",">>","<","<=",">",">=","==","!=",
                          "&","^", "|","&&","||",",", "=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^="};

class Operator
{
public:
    Operator(int id)
            :id(id)
    {}
    ~Operator()
    {}
    operator int() const
    {
        return id;
    }
    string getText()
    {
        return LabelOp[id];
    }
protected:
    int id;
};
class Expression: public Statement
{
public:
    Expression()
            :type(UNKNOWN)
    {};
    Expression(int id)
        :type(id)
    {};

    virtual ~Expression()
    {};

    virtual int64_t getValue()
    {
        return  value;
    }
    virtual Type getType()
    {
        return type;
    }
    virtual void SolveScope(Scope *scope)=0;
    virtual string buildIR(CFG * cfg)=0;
    virtual void TypePropagation();
protected:
    Type type;
    int64_t value;
};

#endif //PROJECT_EXPRESSION_H
