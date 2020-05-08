#ifndef _GRAMMARTREE_H
#define _GRAMMARTREE_H

#include<iostream>
#include<string>
#include<cstdarg>

extern char* yytext;
extern int yylineno;

struct GrammerTreeNode{
	std::string content;
	std::string name;
	int line_no;
	struct GrammerTreeNode* left;
	struct GrammerTreeNode* right;
	GrammerTreeNode();
};

GrammerTreeNode* treeCreate(std::string name, int num,...);
void treeNodeFree(GrammerTreeNode* node);
void treePrint(GrammerTreeNode* node, int level);

#endif