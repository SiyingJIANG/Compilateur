//
// Created by Gheorghe on 20-Mar-18.
//

#ifndef PROJECT_BINARYEXPRESSION_H
#define PROJECT_BINARYEXPRESSION_H

#include "Expression.h"
#include <algorithm>
using namespace std;
class BinaryExpression:public Expression
{
public:
    BinaryExpression(Expression * e1, Expression * e2,string opLabel)
            :e1(e1),e2(e2)
    {
        op = new Operator(distance(LabelOp, find(LabelOp + 8, LabelOp + 27, opLabel)));
    }
    ~BinaryExpression()
    {
        delete e1;
        delete e2;
        delete op;
    }
    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;

protected:
    Expression * e1;
    Expression * e2;
    Operator * op;
};


#endif //PROJECT_BINARYEXPRESSION_H
