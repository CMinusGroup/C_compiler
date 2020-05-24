#ifndef _AST_H
#define _AST_H

#include<iostream>
#include<string>
#include<cstdarg>

extern char* yytext;
extern int yylineno;

class ASTnode{
public:
	std::string content;
	std::string name;
	int line_no;
	ASTnode* left;
	ASTnode* right;
	ASTnode();
	void code_gen();
};

ASTnode* treeCreate(std::string name, int num,...);
void treeNodeFree(ASTnode* node);
void treePrint(ASTnode* node, int level);

#endif