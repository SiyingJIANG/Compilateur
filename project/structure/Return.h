//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_RETURN_H
#define PROJECT_RETURN_H


#include "Statement.h"
#include "Expression.h"

class Return: public Statement
{
public:
    Return(const Expression &expression);

    Return(Expression *expression);

    ~Return();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);

    void TypePropagation() override;;;

protected:
    Expression * expression;
};


#endif //PROJECT_RETURN_H
