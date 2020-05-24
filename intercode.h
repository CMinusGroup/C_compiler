#ifndef _INTERCODE_H
#define _INTERCODE_H

#include<vector>
#include<string>
#include<map>
#include"ast.h"

struct varNode{
    std::string name;
    std::string type;
    int num;
    bool useAddr;
    varNode();
    varNode(std::string nm, std::string tp);
};

struct funcNode{
    bool definied=false;
    std::string name;
    std::string rtn_type;
    std::vector<varNode> paras;
};

struct arrNode{
    std::string name;
    std::string type;
    int arr_size=-1;
};

class Block{
public:
    funcNode func;
    bool isfunc;
    std::map<std::string,varNode> var_map;
    std::map<std::string,arrNode> arr_map;
    std::string break_label_name;
    bool can_break;
};

class InterCode{
private:
    std::vector<std::string> code_list;
public:
    int tmp_no;
    int var_no;
    int func_no;
    std::vector<Block> block_stk;
    std::map<std::string,funcNode> func_pool;

    InterCode();

    varNode lookup_var_node(std::string);

    void add_code(std::string code);
    void code_print();

    void code_gen(ASTnode* root);

    varNode gen_prim_expr(ASTnode* node);
    varNode gen_pstfx_expr(ASTnode* node);
    varNode gen_unary_expr(ASTnode* node);
    varNode gen_cast_expr(ASTnode* node);
    varNode gen_mul_expr(ASTnode* node);
    varNode gen_add_expr(ASTnode* node);
    varNode gen_shift_expr(ASTnode* node);
    varNode gen_rela_expr(ASTnode* node);
    varNode gen_eq_expr(ASTnode* node);
    varNode gen_and_expr(ASTnode* node);
    varNode gen_exclu_or_expr(ASTnode* node);
    varNode gen_inclu_or_expr(ASTnode* node);
    varNode gen_logic_and_expr(ASTnode* node);
    varNode gen_logic_or_expr(ASTnode* node);
    varNode gen_cond_expr(ASTnode* node);
    varNode gen_assign_expr(ASTnode* node);
    varNode gen_expr(ASTnode* node);

    void gen_selection_stmt(ASTnode* node);
    void gen_IF_stmt(ASTnode* node);
    void gen_SWITCH_stmt(ASTnode* node);
    void gen_assign_stmt(ASTnode* node);
    void gen_stmt(ASTnode* node);
};

#endif