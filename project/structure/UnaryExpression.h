//
// Created by Gheorghe on 22-Mar-18.
//

#ifndef PROJECT_UNARYEXPRESSION_H
#define PROJECT_UNARYEXPRESSION_H

#include "Expression.h"
#include <algorithm>

class UnaryExpression:public Expression
{
public:
    UnaryExpression(Expression * e, string opLabel,int position)
            :e(e)
    {
        switch (position)
        {
            case 1:
            {
                op = new Operator(distance(LabelOp, find(LabelOp, LabelOp + 2, opLabel)));
                break;
            }
            case 2:
            {
                op = new Operator(distance(LabelOp, find(LabelOp+2, LabelOp + 8, opLabel)));
                break;
            }
        }
    };
    ~UnaryExpression()
    {
        delete e;
        delete op;
    }
    string buildIR(CFG * cfg){return "";};

    void SolveScope(Scope *scope) override;

    void TypePropagation() override;

protected:
    Expression * e;
    Operator * op;
};


#endif //PROJECT_UNARYEXPRESSION_H
