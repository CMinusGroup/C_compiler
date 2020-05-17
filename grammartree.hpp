#ifndef _GRAMMARTREE_HPP
#define _GRAMMARTREE_HPP

#include<iostream>
#include<string>
#include<cstdarg>

extern char* yytext;
extern int yylineno;

struct GrammarTreeNode{
	std::string content;
	std::string name;
	int line_no;
	struct GrammarTreeNode* left;
	struct GrammarTreeNode* right;
	GrammarTreeNode();
};

GrammarTreeNode* treeCreate(std::string name, int num,...);
void treeNodeFree(GrammarTreeNode* node);
void treePrint(GrammarTreeNode* node, int level);

#endif