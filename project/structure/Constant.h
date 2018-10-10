//
// Created by Gheorghe on 20-Mar-18.
//

#ifndef PROJECT_CONSTANT_H
#define PROJECT_CONSTANT_H

#include <IR/CFG.h>
#include "Expression.h"
#include "string"
#include "Type.h"
class Constant:public Expression
{
public:
    Constant(Type type,int64_t value);

    ~Constant();

    void SolveScope(Scope *scope) override;

    string buildIR(CFG *cfg) override;

    int64_t getValue() override;

protected:
    int64_t value;
};


#endif //PROJECT_CONSTANT_H
