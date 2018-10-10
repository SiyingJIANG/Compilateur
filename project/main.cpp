#include <iostream>
#include "Constructor.h"
#include <antlr/subCLexer.h>
#include <antlr/subCParser.h>
#include <antlr/subCBaseVisitor.h>
#include <antlr4-runtime.h>
#include <structure/Program.h>
#include <fstream>
#include <sstream>

using namespace std;
using namespace antlr4;
int main()
{
    string filename="";
    cin>>filename;
    ifstream ifs(filename);

    //string filename="00_test.c";
    //cin>>filename;
    //ifstream ifs(filename);
    string content( (std::istreambuf_iterator<char>(ifs) ), (std::istreambuf_iterator<char>()    ) );
    ANTLRInputStream input(content);
    subCLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    subCParser parser(&tokens);
    tree::ParseTree* tree = parser.prog();
    Constructor visitor;
    Program *program = visitor.visit(tree);
    program->SolveScope();

    ofstream ofs("output.s");
    ofs<<".text"<<endl;
    ofs<<".globl main"<<endl;
    program->buildIR(ofs);

    return 0;
}