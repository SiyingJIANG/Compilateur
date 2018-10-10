//
// Created by Gheorghe on 15-Mar-18.
//

#include "If.h"
#include "IR/CFG.h"
#include "Identifier.h"

void If::SolveScope(Scope *scope) {
    StructStatement::SolveScope(scope);
    if (elseStatement != nullptr) {
        elseStatement->SolveScope(scope);
    }
}

string If::buildIR(CFG *cfg) {
    string result = this->expression->buildIR(cfg);

    BasicBlock *testBB = cfg->getCurrent_bb();
    testBB->setConditionVar(result);

    BasicBlock *thenBB = new BasicBlock(cfg, testBB->getLabel() + "_trueStmt");
    cfg->add_bb(thenBB);
    cfg->setCurrent_bb(thenBB);
    this->statement->buildIR(cfg);
    if (elseStatement)
    {
        BasicBlock *elseBB = new BasicBlock(cfg, testBB->getLabel() + "_falseStmt");
        cfg->add_bb(elseBB);
        cfg->setCurrent_bb(elseBB);
        this->elseStatement->buildIR(cfg);
        BasicBlock *afterIfBB = new BasicBlock(cfg, cfg->new_BB_name());
        cfg->add_bb(afterIfBB);
        afterIfBB->setExit_true(testBB->getExit_true());
        afterIfBB->setExit_false(testBB->getExit_false());
        testBB->setExit_true(thenBB);
        testBB->setExit_false(elseBB);
        thenBB->setExit_true(afterIfBB);
        thenBB->setExit_false(nullptr);
        elseBB->setExit_true(afterIfBB);
        elseBB->setExit_false(nullptr);
        cfg->setCurrent_bb(afterIfBB);
    } else{
        BasicBlock *afterIfBB = new BasicBlock(cfg, cfg->new_BB_name());
        cfg->add_bb(afterIfBB);
        afterIfBB->setExit_true(testBB->getExit_true());
        afterIfBB->setExit_false(testBB->getExit_false());
        testBB->setExit_true(thenBB);
        testBB->setExit_false(afterIfBB);
        thenBB->setExit_true(afterIfBB);
        thenBB->setExit_false(nullptr);
        cfg->setCurrent_bb(afterIfBB);
    }


    return "";
}

If::~If()
{
    delete elseStatement;
}


