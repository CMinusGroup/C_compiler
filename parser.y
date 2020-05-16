%{
#include <iostream>
#include <vector>
#include <string>
#include "grammartree.cpp"
#include <cstdio>

extern char* yytext;
extern int col;
extern FILE* yyin;
extern FILE* yyout;
GrammarTreeNode* root;
extern int yylineno;


%}

%union{
    struct GrammarTreeNode* gtn;
}

%token <gtn> AUTO SIZEOF GOTO RETURN

%token <gtn> DO WHILE FOR CONTINUE BREAK SWITCH DEFAULT CASE IF ELSE

%token <gtn> FLOAT DOUBLE CHAR VOID INT LONG BOOL SHORT 
%token <gtn> CONST SIGNED UNSIGNED

%token <gtn> STATIC EXTERN INLINE TYPEDEF STRUCT ENUM UNION

%token <gtn> CONSTANT CONSTANT_INT CONSTANT_DOUBLE
%token <gtn> ELLIPSIS STRING_LITERAL

%token <gtn> ASSIGN_RIGHTSHIFT ASSIGN_LEFTSHIFT
%token <gtn> ASSIGN_ADD ASSIGN_SUB ASSIGN_MUL ASSIGN_DIV ASSIGN_MOD
%token <gtn> ASSIGN_AND ASSIGN_OR ASSIGN_OR

%token <gtn> ELLIPSIS

%token <gtn> OP_RIGHTSHIFT OP_LEFTSHIFT
%token <gtn> OP_INC OP_DEC OP_PTR
%token <gtn> OP_AND OP_OR OP_LE OP_GE OP_EQ OP_NE

%token <gtn> ';' ',' ':' '.' 			
%token <gtn> '&' '|' '~' '^'			
%token <gtn> '+' '-' '*' '/' '%'		
%token <gtn> '>' '<' '?' '!' '='		
%token <gtn> '(' ')' '[' ']' '{' '}'	

%start program
%%

program
    : translation_unit         { $$ = treeCreate("program",1,$1);root = $$}
	;

primary_expression
	: IDENTIFIER				{$$ = treeCreate("primary_expression",1,$1);}
	| CONSTANT					{$$ = treeCreate("primary_expression",1,$1);}
	| STRING_LITERAL			{$$ = treeCreate("primary_expression",1,$1);}
	| '(' expression ')'		{$$ = treeCreate("primary_expression",3,$1,$2,$3);}
	;

postfix_expression
	: primary_expression									{$$ = treeCreate("postfix_expression",1,$1);}
	| postfix_expression '[' expression ']'					{$$ = treeCreate("postfix_expression",4,$1,$2,$3,$4);}	
	| postfix_expression '(' ')'							{$$ = treeCreate("postfix_expression",3,$1,$2,$3);}
	| postfix_expression '(' argument_expression_list ')'	{$$ = treeCreate("postfix_expression",4,$1,$2,$3,$4)}
	| postfix_expression '.' IDENTIFIER						{$$ = treeCreate("postfix_expression",3,$1,$2,$3);}
	| postfix_expression OP_PTR IDENTIFIER					{$$ = treeCreate("postfix_expression",3,$1,$2,$3);}
	| postfix_expression OP_INC								{$$ = treeCreate("postfix_expression",2,$1,$2);}
	| postfix_expression OP_DEC								{$$ = treeCreate("postfix_expression",2,$1,$2);}
	| '(' type_name ')' '{' initializer_list '}'			{$$ = treeCreate("postfix_expression",6,$1,$2,$3,$4,$5,$6);}
	| '(' type_name ')' '{' initializer_list ',' '}'		{$$ = treeCreate("postfix_expression",7,$1,$2,$3,$4,$5,$6,$7);}
	;

argument_expression_list
	: assignment_expression									{$$ = treeCreate("argument_expression_list",1,$1);}
	| argument_expression_list ',' assignment_expression	{$$ = treeCreate("argument_expression_list",3,$1,$2,$3);}
	;

unary_expression
	: postfix_expression				{$$ = treeCreate("unary_expression",1,$1);}
	| OP_INC unary_expression			{$$ = treeCreate("unary_expression",2,$1,$2);}
	| OP_DEC unary_expression			{$$ = treeCreate("unary_expression",2,$1,$2);}
	| unary_operator cast_expression 	{$$ = treeCreate("unary_expression",2,$1,$2);}
	| SIZEOF unary_expression			{$$ = treeCreate("unary_expression",2,$1,$2);}
	| SIZEOF '(' type_name ')'			{$$ = treeCreate("unary_expression",4,$1,$2,$3,$4);}
	;

unary_operator
	: '&'		{$$ = treeCreate("unary_operator",1,$1);}
	| '*'		{$$ = treeCreate("unary_operator",1,$1);}
	| '+'		{$$ = treeCreate("unary_operator",1,$1);}
	| '-'		{$$ = treeCreate("unary_operator",1,$1);}
	| '~'		{$$ = treeCreate("unary_operator",1,$1);}
	| '!'		{$$ = treeCreate("unary_operator",1,$1);}
	;

cast_expression
	: unary_expression								{$$ = treeCreate("cast_expression",1,$1);}
	| '(' type_name ')' cast_expression				{$$ = treeCreate("cast_expression",4,$1,$2,$3,$4);}
	;

multiplicative_expression
	: cast_expression									{$$ = treeCreate("multiplicative_expression",1,$1);}
	| multiplicative_expression '*' cast_expression		{$$ = treeCreate("multiplicative_expression",3,$1,$2,$3);}
	| multiplicative_expression '/' cast_expression		{$$ = treeCreate("multiplicative_expression",3,$1,$2,$3);}
	| multiplicative_expression '%' cast_expression		{$$ = treeCreate("multiplicative_expression",3,$1,$2,$3);}
	;

additive_expression
	: multiplicative_expression								{$$ = treeCreate("additive_expression",1,$1);}
	| additive_expression '+' multiplicative_expression		{$$ = treeCreate("additive_expression",3,$1,$2,$3);}
	| additive_expression '-' multiplicative_expression		{$$ = treeCreate("additive_expression",3,$1,$2,$3);}
	;

shift_expression
	: additive_expression									{$$ = treeCreate("shift_expression",1,$1);}
	| shift_expression OP_LEFTSHIFT additive_expression		{$$ = treeCreate("shift_expression",3,$1,$2,$3);}
	| shift_expression OP_RIGHTSHIFT additive_expression	{$$ = treeCreate("shift_expression",3,$1,$2,$3);}
	;

relational_expression
	: shift_expression									{$$ = treeCreate("relational_expression",1,$1);}
	| relational_expression '<' shift_expression		{$$ = treeCreate("relational_expression",3,$1,$2,$3);}
	| relational_expression '>' shift_expression		{$$ = treeCreate("relational_expression",3,$1,$2,$3);}
	| relational_expression OP_LE shift_expression		{$$ = treeCreate("relational_expression",3,$1,$2,$3);}
	| relational_expression OP_GE shift_expression		{$$ = treeCreate("relational_expression",3,$1,$2,$3);}
	;

equality_expression
	: relational_expression								{$$ = treeCreate("equality_expression",1,$1);}
	| equality_expression OP_EQ relational_expression	{$$ = treeCreate("equality_expression",3,$1,$2,$3);}
	| equality_expression OP_NE relational_expression	{$$ = treeCreate("equality_expression",3,$1,$2,$3);}
	;

and_expression
	: equality_expression							{$$ = treeCreate("and_expression",1,$1);}
	| and_expression '&' equality_expression		{$$ = treeCreate("and_expression",3,$1,$2,$3);}
	;

exclusive_or_expression
	: and_expression								{$$ = treeCreate("exclusive_or_expression",1,$1);}
	| exclusive_or_expression '^' and_expression	{$$ = treeCreate("exclusive_or_expression",3,$1,$2,$3);}
	;

inclusive_or_expression
	: exclusive_or_expression								{$$ = treeCreate("inclusive_or_expression",1,$1);}
	| inclusive_or_expression '|' exclusive_or_expression	{$$ = treeCreate("inclusive_or_expression",3,$1,$2,$3);}
	;

logical_and_expression
	: inclusive_or_expression									{$$ = treeCreate("logical_and_expression",1,$1);}
	| logical_and_expression OP_AND inclusive_or_expression		{$$ = treeCreate("logical_and_expression",3,$1,$2,$3);}
	;

logical_or_expression
	: logical_and_expression								{$$ = treeCreate("logical_or_expression",1,$1);}
	| logical_or_expression OP_OR logical_and_expression	{$$ = treeCreate("logical_or_expression",3,$1,$2,$3);}
	;

conditional_expression
	: logical_or_expression												{$$ = treeCreate("conditional_expression",1,$1);}
	| logical_or_expression '?' expression ':' conditional_expression	{$$ = treeCreate("conditional_expression",)}
	;

assignment_expression
	: conditional_expression										{$$ = treeCreate("assignment_expression",1,$1);}
	| unary_expression assignment_operator assignment_expression	{$$ = treeCreate("assignment_expression",3,$1,$2,$3);}
	;

assignment_operator
	: '='					{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_MUL			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_DIV			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_MOD			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_ADD			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_SUB 			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_LEFTSHIFT		{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_RIGHTSHIFT		{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_AND			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_XOR			{$$ = treeCreate("assignment_operator",1,$1);}
	| ASSIGN_OR				{$$ = treeCreate("assignment_operator",1,$1);}
	;

expression
	: assignment_expression						{$$ = treeCreate("expression",1,$1);}
	| expression ',' assignment_expression		{$$ = treeCreate("expression",3,$1,$2,$3);}
	;

constant_expression
	: conditional_expression					{$$ = treeCreate("constant_expression",1,$1);}
	;

declaration
	: declaration_specifiers ';'							{$$ = treeCreate("declaration",2,$1,$2);}
	| declaration_specifiers init_declarator_list ';'		{$$ = treeCreate("declaration",3,$1,$2,$3);}
	;

declaration_specifiers
	: storage_class_specifier								{$$ = treeCreate("declaration_specifiers",1,$1);}
	| storage_class_specifier declaration_specifiers		{$$ = treeCreate("declaration_specifiers",2,$1,$2);}
	| type_specifier										{$$ = treeCreate("declaration_specifiers",1,$1);}
	| type_specifier declaration_specifiers					{$$ = treeCreate("declaration_specifiers",2,$1,$2);}
	| type_qualifier										{$$ = treeCreate("declaration_specifiers",1,$1);}
	| type_qualifier declaration_specifiers					{$$ = treeCreate("declaration_specifiers",2,$1,$2);}
	| function_specifier									{$$ = treeCreate("declaration_specifiers",1,$1);}
	| function_specifier declaration_specifiers				{$$ = treeCreate("declaration_specifiers",2,$1,$2);}
	;

init_declarator_list
	: init_declarator										{$$ = treeCreate("init_declarator_list",1,$1);}
	| init_declarator_list ',' init_declarator				{$$ = treeCreate("init_declarator_list",3,$1,$2,$3);}
	;

init_declarator
	: declarator											{$$ = treeCreate("init_declarator",1,$1);}
	| declarator '=' initializer							{$$ = treeCreate("init_declarator",3,$1,$2,$3);}
	;

storage_class_specifier
	: TYPEDEF				{$$ = treeCreate("storage_class_specifier",1,$1);}
	| EXTERN				{$$ = treeCreate("storage_class_specifier",1,$1);}
	| STATIC				{$$ = treeCreate("storage_class_specifier",1,$1);}
	| AUTO					{$$ = treeCreate("storage_class_specifier",1,$1);}
	| REGISTER				{$$ = treeCreate("storage_class_specifier",1,$1);}
	;	

type_specifier
	: VOID								{$$ = treeCreate("type_specifier",1,$1);}
	| CHAR								{$$ = treeCreate("type_specifier",1,$1);}
	| SHORT								{$$ = treeCreate("type_specifier",1,$1);}
	| INT								{$$ = treeCreate("type_specifier",1,$1);}
	| LONG								{$$ = treeCreate("type_specifier",1,$1);}
	| FLOAT								{$$ = treeCreate("type_specifier",1,$1);}
	| DOUBL								{$$ = treeCreate("type_specifier",1,$1);}
	| SIGNED							{$$ = treeCreate("type_specifier",1,$1);}
	| UNSIGNED							{$$ = treeCreate("type_specifier",1,$1);}
	| BOOL								{$$ = treeCreate("type_specifier",1,$1);}
	| COMPLEX							{$$ = treeCreate("type_specifier",1,$1);}
	| IMAGINARY							{$$ = treeCreate("type_specifier",1,$1);}
	| struct_or_union_specifier			{$$ = treeCreate("type_specifier",1,$1);}
	| enum_specifier					{$$ = treeCreate("type_specifier",1,$1);}
	| TYPE_NAME							{$$ = treeCreate("type_specifier",1,$1);}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'	{$$ = treeCreate("struct_or_union_specifier",5,$1,$2,$3,$4,$5);}
	| struct_or_union '{' struct_declaration_list '}'				{$$ = treeCreate("struct_or_union_specifier",4,$1,$2,$3,$4);}
	| struct_or_union IDENTIFIER									{$$ = treeCreate("struct_or_union_specifier",2,$1,$2);}
	;

struct_or_union
	: STRUCT										{$$ = treeCreate("struct_or_union",1,$1);}
	| UNION											{$$ = treeCreate("struct_or_union",1,$1);}
	;		

struct_declaration_list
	: struct_declaration							{$$ = treeCreate("struct_declarator_list",1,$1);}
	| struct_declaration_list struct_declaration	{$$ = treeCreate("struct_declarator_list",2,$1,$2);}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'	{$$ = treeCreate("struct_declaration",3,$1,$2,$3);}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list		{$$ = treeCreate("specifier_qualifier_list",2,$1,$2);}
	| type_specifier								{$$ = treeCreate("specifier_qualifier_list",1,$1);}
	| type_qualifier specifier_qualifier_list		{$$ = treeCreate("specifier_qualifier_list",2,$1,$2);}
	| type_qualifier								{$$ = treeCreate("specifier_qualifier_list",1,$1);}
	;

struct_declarator_list
	: struct_declarator								{$$ = treeCreate("struct_declarator_list",1,$1);}
	| struct_declarator_list ',' struct_declarator	{$$ = treeCreate("struct_declarator_list",3,$1,$2,$3);}
	;

struct_declarator
	: declarator									{$$ = treeCreate("struct_declarator",1,$1);}
	| ':' constant_expression						{$$ = treeCreate("struct_declarator",2,$1,$2);}
	| declarator ':' constant_expression			{$$ = treeCreate("struct_declarator",3,$1,$2,$3);}
	;

enum_specifier
	: ENUM '{' enumerator_list '}'					{$$ = treeCreate("enum_specifier",4,$1,$2,$3,$4);}
	| ENUM IDENTIFIER '{' enumerator_list '}'		{$$ = treeCreate("enum_specifier",5,$1,$2,$3,$4,$5);}
	| ENUM '{' enumerator_list ',' '}'				{$$ = treeCreate("enum_specifier",5,$1,$2,$3,$4,$5);}
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'	{$$ = treeCreate("enum_specifier",6,$1,$2,$3,$4,$5,$6);}
	| ENUM IDENTIFIER								{$$ = treeCreate("enum_specifier",2,$1,$2);}
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	;

function_specifier
	: INLINE
	;

declarator
	: pointer direct_declarator		{$$ = treeCreate("declarator",2,$1,$2);}
	| direct_declarator				{$$ = treeCreate("declarator",1,$1);}
	;

direct_declarator
	: IDENTIFIER					{$$ = treeCreate("direct_declarator",1,$1);}
	| '(' declarator ')'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '[' '*' ']'
	| direct_abstract_declarator '[' '*' ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression				{$$ = treeCreate("initializer",1,$1);}
	| '{' initializer_list '}'			{$$ = treeCreate("initializer",3,$1,$2,$3);}
	| '{' initializer_list ',' '}'		{$$ = treeCreate("initializer",4,$1,$2,$3,$4);}
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration   					 {$$ = treeCreate("translation_unit",1,$1);}
	| translation_unit external_declaration 	 {$$ = treeCreate("translation_unit",2,$1,$2);}
	;

external_declaration
	: function_definition
	| declaration	{$$ = treeCreate("external_declaration",1,$1);}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;


%%

void yyerror(char const *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", col, "^", col, s);
}

int main(int argc, char* argv[]){
    if(argc>1){
        yyin=fopen(argv[1],"r");
    }else{
        yyin=stdin;
    }
    yyparse();
    printf("\n");
    treePrint(root,0);
    
    treeNodeFree(root);

    fclose(yyin);

    return 0;
}
