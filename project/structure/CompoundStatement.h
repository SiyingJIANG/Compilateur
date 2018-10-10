//
// Created by Gheorghe on 18-Mar-18.
//

#ifndef PROJECT_COMPOUNDSTATEMENT_H
#define PROJECT_COMPOUNDSTATEMENT_H

#include "Statement.h"
#include <vector>


class CompoundStatement: public Statement
{
public:
    CompoundStatement(const std::vector<Statement *> &vectorStatement);
    ~CompoundStatement();

    void SolveScope(Scope *scope) override;
    string buildIR(CFG * cfg);


    void TypePropagation() override;;;

protected:
    std::vector<Statement *> vectorStatement;
    Scope * scope;
};


#endif //PROJECT_COMPOUNDSTATEMENT_H
