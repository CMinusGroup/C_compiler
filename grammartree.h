#pragma once
#ifndef GRAMMARTREE_H
#define GRAMMARTREE_H
#include"grammartree.cpp"
#include<iostream>
#include<string>
#include<cstdarg>

extern char* yytext;
extern int yylineno;

class GrammarTreeNode{
public:
	std::string content;
	std::string name;
	int line_no;
	GrammarTreeNode* left;
	GrammarTreeNode* right;
	GrammarTreeNode();
};

GrammarTreeNode* treeCreate(std::string name, int num,...);
void treeNodeFree(GrammarTreeNode* node);
void treePrint(GrammarTreeNode* node, int level);

#endif