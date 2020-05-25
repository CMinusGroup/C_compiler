#ifndef func_h
#define func_h
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include "grammartree.h"
#include "queue"
#include <map>

using namespace std;
using namespace llvm;

static LLVMContext ctxt;
static IRBuilder<> builder(ctxt);
static std::map<std::string, Value*> NamedValues;
std::map<std::string,void *> tmap;

typedef GrammarTreeNode* node;

//return a children nodes vector
vector<node> childs(node parent = nullptr){
    vector<node> k;
    parent =parent->left;
    // k.push_back(parent);
    while (parent)
    {
        k.push_back(parent);
        parent = parent->right;
    }
    return k;
}

//return a recursive nodes vector by a -> a,b; and b1,b2,b3,b4,b5,---
vector<node> recurchilds(node parent = nullptr){
    const string pname = parent->name;
    vector<node> store;
    while (parent->name == pname)   
    {
        if(parent->left->name!=pname)
            store.push_back(parent->left);
        else
            store.push_back(parent->left->right->right);
        parent = parent->left;
    }
    return store;
    
}

void genblockelem(node head = nullptr,shared_ptr<Module> m = nullptr){

}

void genfunc(node head = nullptr,shared_ptr<Module> m = nullptr){
    std::vector<Type*> param_type;
    string rettype = head->left->left->left->content;
    cout<<"rettype"<<rettype<<endl;

    string funcname = head->left->left->right->left->left->left->content;
    cout<<"func"<<funcname<<endl;
    node ptl = head->left->left->right->left->left->left->right->right;
    cout<<ptl->name<<endl;
    FunctionType* functp = nullptr;

}

void gendecl(node head = nullptr,shared_ptr<Module> m = nullptr){
    // head->name = 'declaration_specfifiers'
    node typenode = head->left;
    node templist = head->left->right;
    llvm:string type = head->left->left->content;
    cout<<type<<endl;

    vector<node> kss = recurchilds(templist);

    /*
    * ksss[0] = declarator
    * ksss[1] = =
    * ksss[2] = initializer  
    */
    for(node item:kss){
        cout<<item->name<<endl;
        vector<node> ksss = childs(item);
        string vname = ksss[0]->left->left->content;

        if(ksss.size()==1){
            auto v = new GlobalVariable(static_cast<IntegerType*>(tmap[type]),
                                    false,
                                    GlobalVariable::InternalLinkage,
                                    builder.getInt32(0),
                                    vname);
            m->getGlobalList().push_back(v);       


        }else{
            node tempvalue = ksss[2];
            while (tempvalue->name !="primary_expression")
            {
                tempvalue = tempvalue->left;
            }
            cout<<tempvalue->left->intval<<endl;
            auto v = new GlobalVariable(static_cast<IntegerType*>(tmap[type]),
                                        false,
                                        GlobalVariable::InternalLinkage,
                                        builder.getInt32(tempvalue->left->intval),
                                        vname);
            m->getGlobalList().push_back(v);       

        }
    }
}

void gen(GrammarTreeNode* head=nullptr,string filename = "a"){
    tmap[string("int")] = Type::getInt32Ty(ctxt);
    tmap[string("bool")] = Type::getInt1Ty(ctxt);
    tmap[string("double")] = Type::getDoubleTy(ctxt);
    tmap[string("float")] = Type::getFloatTy(ctxt);

    std::shared_ptr<Module> module(new Module(filename,ctxt));

    stack<GrammarTreeNode*> kt;
    node temp = head->left;
    while (temp->name=="translation_unit")  
    {
        if(temp->left->name=="translation_unit")
            kt.push(temp->left->right);
        else{
            kt.push(temp->left);
        }
        temp=temp->left;
    }
    while (!kt.empty())
    {
        node k = kt.top();

        if(k->left->name=="function_definition"){
            genfunc(k->left,module);
            cout<<k->left->name<<endl;
        }
        else{
            gendecl(k->left,module);
            cout<<k->left->name<<endl;
        }

        kt.pop();
    }
    
    // output the IR codes stored in module to *.ll file
    raw_ostream *out = &outs();
    std::error_code EC;
    out = new raw_fd_ostream(filename+".ll",EC,sys::fs::F_None);
    module->print(*out, nullptr);
    delete out;
}

void treePrint(GrammarTreeNode *node, int level)
{
    if (node == NULL)
    {
        return;
    }
    string name = node->name;
    if (node->line_no == -1)
    {
        treePrint(node->left, level + 1);
        treePrint(node->right, level);
        return;
    }
    for (int i = 0; i < level; i++)
    {
        cout << "| ";
    }
    cout << node->name;
    if (node->name == "IDENTIFIER" || node->name == "BOOL" || node->name == "INT" || node->name == "CHAR" || node->name == "DOUBLE")
    {
        cout << ":" << node->content;
    }
    else if (node->name == "CONSTANT_INT" || node->name == "CONSTANT_DOUBLE")
    {
        // cout<<node->content<<endl;
        cout << ":" << node->content << " ";
    }
    else if (node->name == "TRUE" || node->name == "FALSE")
    {
        cout << ":" << node->content << " ";
    }
    else if (node->name == "STRING_LITERAL")
    {
        cout << ":" << node->content;
    }
    else
    {
        cout << "   <@" << node->line_no << ">";
    }
    cout << endl;
    treePrint(node->left, level + 1);
    treePrint(node->right, level);
};

void treeNodeFree(GrammarTreeNode *node)
{
    if (node == NULL)
    {
        return;
    }
    treeNodeFree(node->left);
    treeNodeFree(node->right);
    delete node;
};

void printtree(GrammarTreeNode *head){
    static int cnt = 0;
    if(!head)
        return;
    cnt++;
    for (int i = 0;i<cnt-1;i++)
        cout << "|  ";
    cout << head->name << endl;
    printtree(head->left);
    cnt--;
    printtree(head->right);
}

string int2string(int a)
{
    if (a == 0)
        return "0";
    string ret = "";
    while (a)
    {
        int t = a % 10;
        a /= 10;
        char c[] = "0";
        c[0] += t;
        ret = string(c) + ret;
    }
    return ret;
}

GrammarTreeNode *treeCreate(std::string name, int arg_cnt, ...)
{
    va_list valist;
    GrammarTreeNode *head = new GrammarTreeNode();
    if (!head)
    {
        printf("out of space\n");
        exit(0);
    }

    GrammarTreeNode *tmp = NULL;
    head->name = name;
    va_start(valist, arg_cnt);
    if (arg_cnt > 0)
    {
        tmp = va_arg(valist, GrammarTreeNode *);
        head->left = tmp;
        head->line_no = tmp->line_no;
        if (arg_cnt == 1)
        {
            head->content = tmp->content;
        }
        else
        {
            for (int i = 1; i < arg_cnt; i++)
            {
                tmp->right = va_arg(valist, GrammarTreeNode *);
                tmp = tmp->right;
            }
        }
    }
    else if (arg_cnt == 0)
    {
        // the following para is the current line number
        int ln = va_arg(valist, int);
        head->line_no = ln;
        if (head->name == "CONSTANT_INT")
        {
            int int_value;
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
            // cout<<int_value<<endl;
            head->content = int2string(int_value);
            head->intval = int_value;
            std::cout<<"hello"<<std::endl;
        }
        else if (head->name == "CONSTANT_DOUBLE")
        {
            head->content = yytext;
        }
        else if (head->name == "TRUE")
        {
            head->content = int2string(1);
        }
        else if (head->name == "FALSE")
        {
            head->content = int2string(0);
        }
        else if (head->name == "STRING_LITERAL")
        {
            head->content = yytext;
        }
        else
        {
            head->content = yytext;
        }
    }
    return head;
};
#endif