//
// Created by Gheorghe on 15-Mar-18.
//

#ifndef PROJECT_WHILE_H
#define PROJECT_WHILE_H


#include "StructStatement.h"
#include "Expression.h"
#include "IR/BasicBlock.h"

class While: public StructStatement
{
public:
    While(Expression *expression, Statement *statement):StructStatement(expression,statement){};

    ~While(){}
    string buildIR(CFG * cfg);


};


#endif //PROJECT_WHILE_H
