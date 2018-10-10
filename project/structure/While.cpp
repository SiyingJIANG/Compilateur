//
// Created by Gheorghe on 15-Mar-18.
//

#include "While.h"

#include "IR/CFG.h"

string While::buildIR(CFG *cfg) {
    BasicBlock* beforeWhileBB = cfg->getCurrent_bb();

    BasicBlock* testBB = new BasicBlock(cfg,beforeWhileBB->getLabel()+"_testStmt");
    cfg->add_bb(testBB);
    cfg->setCurrent_bb(testBB);
    string result=expression->buildIR(cfg);
    testBB->setConditionVar(result);

    BasicBlock* bodyBB = new BasicBlock(cfg,beforeWhileBB->getLabel()+"_bodyStmt");
    cfg->add_bb(bodyBB);
    cfg->setCurrent_bb(bodyBB);
    bodyBB->setExit_true(testBB);
    bodyBB->setExit_false(nullptr);
    this->statement->buildIR(cfg);

    BasicBlock* afterWhileBB=new BasicBlock(cfg,cfg->new_BB_name());
    cfg->add_bb(afterWhileBB);
    afterWhileBB->setExit_true(beforeWhileBB->getExit_true());
    afterWhileBB->setExit_false(beforeWhileBB->getExit_false());

    beforeWhileBB->setExit_true(testBB);
    beforeWhileBB->setExit_false(nullptr);
    testBB->setExit_true(bodyBB);
    testBB->setExit_false(afterWhileBB);


    cfg->setCurrent_bb(afterWhileBB);
    return "";
}
