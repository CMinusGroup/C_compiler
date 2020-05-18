#pragma once
#ifndef GRAMMARTREE_H
#define GRAMMARTREE_H
#include <iostream>
#include <string>
#include <cstdarg>
#include <cstring>
#include "stdarg.h"
#include <stdlib.h>
#include <stdio.h>

extern char *yytext;
extern int yylineno;
using namespace std;
string int2string(int a);

class GrammarTreeNode
{
public:
	std::string content;
	std::string name;
	int line_no;
	GrammarTreeNode *left;
	GrammarTreeNode *right;
	GrammarTreeNode()
	{
		left = NULL;
		right = NULL;
		content = "";
		name = "";
		line_no = -1;
	};
	GrammarTreeNode(string nname, int t, int lineNO)
	{
		this->name = nname;
		this->line_no = lineNO;

		if (this->name == "CONSTANT_INT")
		{
			int int_value;
			// std::cout << "\nhere i am" << endl;

			if (strlen(yytext) > 1 && yytext[0] == 0 && yytext[1] != 'x')
			{
				sscanf(yytext, "%o", &int_value);
			}
			else if (strlen(yytext) > 1 && yytext[0] == 0 && yytext[1] == 'x')
			{
				sscanf(yytext, "%x", &int_value);
			}
			else
			{
				int_value = atoi(yytext);
			}
			this->content = int2string(int_value);
		}
		else if (this->name == "CONSTANT_DOUBLE")
		{
			this->content = yytext;
		}
		else if (this->name == "TRUE")
		{
			this->content = int2string(1);
		}
		else if (this->name == "FALSE")
		{
			this->content = int2string(0);
		}
		else if (this->name == "STRING_LITERAL")
		{
			this->content = yytext;
		}
		else
		{
			this->content = yytext;
		}
	};
};
GrammarTreeNode *treeCreate(std::string name, int num, ...);
void treeNodeFree(GrammarTreeNode *node);
void treePrint(GrammarTreeNode *node, int level);
void printtree(GrammarTreeNode *head);
#endif