grammar subC;

prog
   :	declaration*
   ;

declaration
    :   defFun #functionDef
    |   decVariable #variableDec
    ;

type
	:	CHAR    #char
	|	INT32   #int32
	|	INT64   #int64
	|	VOID    #void
	;
const_expr
    :   NUMERICV
    |   CHARV
    ;

decVariable
	:	type var (',' var)* ';'
	;

var
	:	NAME ('=' varInit)?                                   #var_simple
	|   NAME '[' assignmentExpression ']' ('=' scalarInit)?   #var_table_size
	|   NAME '['  ']' ('=' scalarInit)                        #var_table
	;

varInit
	:	assignmentExpression  #varInit1
	|	scalarInit   #varInit2
	;
scalarInit
    :   '{' assignmentExpression (',' assignmentExpression )* '}'
    ;

defFun
	:	type NAME '('  listeparam ')' bloc  #defFun_param
	|	type NAME '(' VOID? ')' bloc        #defFun_no_param
	;

listeparam
	:	param (',' param)*
	;

param
    :   type NAME ('['expression?']')?
    ;

bloc
	:	'{' statement* '}'
	;

statement
	:	decVariable
	|	stmtExpression
	|	stmtCompound
	|	stmtWhile
	|	stmtIf
	|	stmtReturn
//	|	stmtGetchar
	|	stmtPutchar
	|	stmtBreak
	|   stmtContinue
	;

stmtCompound
	:	bloc
	;

stmtExpression
	:	(expression)? ';'
	;

stmtWhile
	:	WHILE '(' expression ')' statement
	;

stmtIf
	:	IF '(' expression ')' statement stmtElse?
	;

stmtElse
	:	ELSE statement
	;

stmtReturn
	:	RETURN expression ';'
	;

//stmtGetchar
//	:	GETCHAR '('  ')' ';'
//	;

stmtPutchar
	:	PUTCHAR '(' assignmentExpression ')' ';'
	;

stmtBreak
	:	BREAK ';'
	;

stmtContinue
    :   CONTINUE ';'
    ;

primaryExpression
    :	NAME        #identifier
    |	NUMERICV    #numericValue
    |	CHARV       #charValue
    |	'(' expression ')'  #parantheses
    ;

postfixExpression
    :   primaryExpression       #primaryE
	|	postfixExpression '++'	#postunary
	|	postfixExpression '--'	#postunary
	|	functionCall #callFunction
	|	NAME '[' expression ']' #subscript
	;

functionCall
    :   NAME '(' arguments ')'
    ;

arguments
	:
	|   assignmentExpression (',' assignmentExpression)*
	;

unaryExpression
    :   postfixExpression       #postfixE
    |	'++' unaryExpression	#preunary
    |	'--' unaryExpression	#preunary
	|	'-' unaryExpression	    #preunary
    |   '+' unaryExpression     #preunary
    |	'!' unaryExpression	    #preunary
    |	'~' unaryExpression 	#preunary
    ;
binaryExpression
    :   unaryExpression
	|   binaryExpression ('*'|'/'|'%') binaryExpression
	|	binaryExpression ('+'|'-') binaryExpression
	|	binaryExpression ('<<'|'>>') binaryExpression
	|	binaryExpression ('>'|'<'|'>='|'<=') binaryExpression
    |	binaryExpression ('=='|'!=') binaryExpression
	|	binaryExpression '&' binaryExpression
	|   binaryExpression '^' binaryExpression
	|	binaryExpression '|' binaryExpression
	|	binaryExpression '&&' binaryExpression
	|	binaryExpression '||' binaryExpression
	;

assignmentExpression
    :   binaryExpression    #binaryE
    |	affectation         #assignment
	;

affectation
	:	NAME ('[' expression ']')? ('='|'+='|'-='|'*='|'/='|'%='|'&='|'|='|'^=') assignmentExpression
	;

expression
    :   assignmentExpression
    |   expression ',' assignmentExpression
    ;

CHAR
	:	'char'
	;

INT32
	:	'int32_t'
	;

INT64
	:	'int64_t'
	;

VOID
	:	'void'
	;

BREAK
	:	'break'
	;

CONTINUE
    :   'continue'
    ;

fragment
Nondigit
	:	[a-zA-Z_]
	;

fragment
Digit
	:	[0-9]
	;

fragment
NUMBER_NO_LEADING_ZEROS
	:	('0'..'9') | (('1'..'9')('0'..'9')+)
	;

WHILE
	:	'while'
	;

IF
	:	'if'
	;

ELSE
	:	'else'
	;

RETURN
	:	'return'
	;

//GETCHAR
//	:	'getchar'
//	;

PUTCHAR
	:	'putchar'
	;

CHARV
	:	'\''.'\''
	|   '\'\\n\''
	|   '\'\\r\''
	|   '\'\\r\\n\''
	;

NUMERICV
	:	NUMBER_NO_LEADING_ZEROS
	;

Whitespace
	:	[ \t\r\n]+
		-> skip
	;

BlockComment
	:	'/*' .*? '*/'
		-> skip
	;

LineComment
	:   '//' ~[\r\n]*
		-> skip
	;

INCLUDE
	:   '#include' ' '* INCLUDENAME
	    -> skip
    ;

INCLUDENAME
    :   '<'.*?'>'
    |   '"'.*?'"'
    ;

NAME
	:	[a-zA-Z]+[a-zA-Z_0-9]*
	;