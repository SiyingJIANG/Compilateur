//
// Created by MbpQifan on 2018/3/19.
//

#ifndef PROJECT_AFFECTATION_H
#define PROJECT_AFFECTATION_H

#include <string>
#include "Expression.h"
#include "Identifier.h"
#include "IdentifierArr.h"
#include <algorithm>

using namespace std;

class Assignment: public Expression  {
public:
    Assignment(){};

    Assignment(string name,string label, Expression * subscript, Expression * expression)
            :expression(expression)
    {
        op = new Operator(distance(LabelOp, find(LabelOp+27, LabelOp + 36, label)));
        if (subscript)
            identifier=new IdentifierArr(name,subscript);
        else
            identifier=new Identifier(name);
    }

    ~Assignment()
    {
        delete identifier;
        delete op;
        delete expression;
    }

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;

private:
    Identifier * identifier;
    Operator * op;
    Expression *expression;
};


#endif //PROJECT_AFFECTATION_H
