//
// Created by Gheorghe on 18-Mar-18.
//

#ifndef PROJECT_STRUCTSTATEMENT_H
#define PROJECT_STRUCTSTATEMENT_H

#include "Statement.h"
#include "Expression.h"

class StructStatement: public Statement
{
public:
    StructStatement(Expression *expression, Statement *statement) : expression(expression), statement(statement)
    {};
    virtual ~StructStatement()
    {
        delete expression;
        delete statement;
    }

    virtual void SolveScope(Scope *scope) override;
    virtual string buildIR(CFG * cfg){return "";}

    void TypePropagation() override;

protected:
    Expression * expression;
    Statement * statement;
};


#endif //PROJECT_STRUCTSTATEMENT_H
