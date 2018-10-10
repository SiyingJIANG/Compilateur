//
// Created by MbpQifan on 2018/3/26.
//

#ifndef PROJECT_CFG_H
#define PROJECT_CFG_H


#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <structure/Type.h>
#include <vector>
#include "IRInstr.h"
class Function;
class BasicBlock;
using namespace std;
class CFG {
public:
    //CFG(DefFonction* ast);
    CFG(Function *f);
    ~CFG();

    //DefFonction* ast; /**< The AST this CFG comes from */

    void add_bb(BasicBlock* bb);

    // x86 code generation: could be encapsulated in a processor class in a retargetable compiler
    void gen_asm(ostream& o);
    void gen_asm_prologue(ostream& o);
    void gen_asm_epilogue(ostream& o);
    string IR_reg_to_asm(string var_name); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */

    // symbol table methods
    void add_to_symbol_table(string name, Type t);
    void add_to_symbol_table(string name, Type t, int size);
    string create_new_tempvar(Type t);
    int get_var_index(string name);
    Type get_var_type(string name);

    // basic block management
    string new_BB_name();

    BasicBlock* getCurrent_bb();


    void setCurrent_bb(BasicBlock *current_bb);

    // add instruction.
    // L'ordre de parametres doit respecter l'ordre des attributs qui correspond à chaque instruction dans IRInstr.h
    void add_IRInstr(IRInstr::Operation op, Type t, vector<string> params);

    const string &getLabel_ret() const;

protected:
    Function *function;
    map <string, Type> SymbolType; /**< part of the symbol table  */
    map <string, int> SymbolIndex; /**< part of the symbol table  */
    int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
    int nextBBnumber; /**< just for naming */

    vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
    BasicBlock* current_bb;

    string label_ret;

};



#endif //PROJECT_CFG_H
