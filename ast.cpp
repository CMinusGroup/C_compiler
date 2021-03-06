#include"ast.h"
#include<cstring>
#include<iostream>
using namespace std;

ASTnode::ASTnode(){
    left=NULL;
    right=NULL;
    content="";
    name="";
    line_no=-1;
}

// arg_cnt represents the number of following paras
// 0: followed by current line number
ASTnode* treeCreate(string name, int arg_cnt,...){
    va_list valist;

    ASTnode* head=new ASTnode();
    if(!head){
        printf("out of space\n");
        exit(0);
    }

    ASTnode* tmp=NULL;
    head->name=name;
    va_start(valist,arg_cnt);
    if(arg_cnt>0){
        tmp=va_arg(valist,ASTnode*);
        head->left=tmp;
        head->line_no=tmp->line_no;
        if(arg_cnt==1){
            head->content=tmp->content;
        }else{
            for(int i=1;i<arg_cnt;i++){
                tmp->right=va_arg(valist,ASTnode*);
                tmp=tmp->right;
            }
        }
    }else if(arg_cnt==0){
        // the following para is the current line number
        int ln=va_arg(valist,int);
        head->line_no=ln;
        if(head->name=="CONSTANT_INT"){
            int int_value;
            if(strlen(yytext)>1 && yytext[0]==0 && yytext[1]!='x'){
                sscanf(yytext,"%o",&int_value);
            }else if(strlen(yytext)>1 && yytext[0]==0 && yytext[1]=='x'){
                sscanf(yytext,"%x",&int_value);
            }else{
                int_value=atoi(yytext);
            }
            head->content=to_string(int_value);
        }else if(head->name=="CONSTANT_DOUBLE"){
            head->content=yytext;
        }else if(head->name=="TRUE"){
            head->content=to_string(1);
        }else if(head->name=="FALSE"){
            head->content=to_string(0);
        }else if(head->name=="STRING_LITERAL"){
            head->content=yytext;
        }else{
            head->content=yytext;
        }
    }
    return head;
}

void treeNodeFree(ASTnode* node){
    if(node==NULL){
        return;
    }
    treeNodeFree(node->left);
    treeNodeFree(node->right);
    delete node;
}

void treePrint(ASTnode* node, int level){
    if(node==NULL){
        return;
    }
    string name=node->name;
    if(node->line_no==-1){
        treePrint(node->left,level+1);
        treePrint(node->right,level);
        return;
    }
    for(int i=0;i<level;i++){
        cout<<"| ";
    }
    cout<<node->name;
    if(node->name=="IDENTIFIER" || node->name=="BOOL" || node->name=="INT" || node->name=="CHAR" || node->name=="DOUBLE"){
        cout<<":"<<node->content;
    }else if(node->name=="CONSTANT_INT" || node->name=="CONSTANT_DOUBLE"){
        cout<<":"<<node->content<<" ";
    }else if(node->name=="TRUE" || node->name=="FALSE"){
        cout<<":"<<node->content<<" ";
    }else if(node->name=="STRING_LITERAL"){
        cout<<":"<<node->content;
    }else{
        cout<<"<@"<<node->line_no<<">";
    }
    cout<<endl;
    treePrint(node->left,level+1);
    treePrint(node->right,level);
}

void printTree(ASTnode *head){
    static int cnt = 0;
    if(!head)
        return;
    cnt++;
    for (int i = 0;i<cnt-1;i++)
        cout << "|  ";
    cout << head->name << endl;
    printTree(head->left);
    cnt--;
    printTree(head->right);
}