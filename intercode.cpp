#include"intercode.h"
#include"ast.h"
using namespace std;

varNode::varNode(){
    num=-1;
    useAddr=false;
}
varNode::varNode(string nm, string tp){
    name=nm;
    type=tp;
    num=-1;
    useAddr=false;
}

InterCode::InterCode(){
    tmp_no=0;
    var_no=0;
    func_no=0;
}

varNode InterCode::lookup_var_node(string name){
    for(int i=block_stk.size();i>=0;i--){
        if(block_stk[i].var_map.find(name)!=block_stk[i].var_map.end()){
            return block_stk[i].var_map[name];
        }
    }
    varNode tmp;
    tmp.num=-1;
    return tmp;
}

void error(){

}

void InterCode::add_code(string code){
    code_list.push_back(code);
}

void InterCode::code_print(){
    for(int i=0;i<code_list.size();i++){
        cout<<code_list[i]<<endl;
    }
}

void InterCode::code_gen(ASTnode* root){

}

void InterCode::gen_root(ASTnode* node){
    if(node==NULL || node->line_no==-1){
        return;
    }
    if(node->name=="declaration"){
        gen_decl(node);
        node=node->right;
    }else if(node->name=="function_definition"){
        gen_func_def(node);
        node=node->right;
    }else if(node->name=="statement"){
        gen_stmt(node);
        node=node->right;
    }else{

    }

    if(node!=NULL){
        gen_root(node->left);
        gen_root(node->right);
    }
}

void InterCode::gen_decl(ASTnode* node){
    
}

void InterCode::gen_stmt(ASTnode* node){
    if(node->left->name=="labeled_statement"){

    }else if(node->left->name=="compound_statement"){
        gen_cmpd_stmt(node->left);
    }else if(node->left->name=="expression_statement"){
        gen_expr_stmt(node->left);
    }else if(node->left->name=="selection_statement"){
        gen_slct_stmt(node->left);
    }else if(node->left->name=="iteration_statement"){
        gen_iter_stmt(node->left);
    }else if(node->left->name=="jump_statememt"){
        gen_jump_stmt(node->left);
    }
}

void InterCode::gen_jump_stmt(ASTnode* node){

}

void InterCode::gen_cmpd_stmt(ASTnode* node){

}

void InterCode::gen_iter_stmt(ASTnode* node){

}

void InterCode::gen_expr_stmt(ASTnode* node){
    if(node->left->name=="expression"){
        gen_expr(node->left);
    }
}

varNode InterCode::gen_prim_expr(ASTnode* node){
    if(node->left->name=="IDENTIFIER"){
        string cont=node->left->content;
        varNode vn=lookup_var_node(cont);
        if(vn.num<0){
            error();
        }
        return vn;
    }else if(node->left->name=="CONSTANT_INT"){
        string cont=node->left->content;
        string tmp="%"+to_string(tmp_no++);
        string rt_type="i32";
        return varNode(tmp,rt_type);
    }
}

varNode InterCode::gen_pstfx_expr(ASTnode* node){
    if(node->left->name=="primary_expression"){
        return gen_prim_expr(node->left);
    }else if(node->left->right->name=="["){

    }else if(node->left->right->name=="("){

    }
}

varNode InterCode::gen_unary_expr(ASTnode* node){
    if(node->left->name=="postfix_expression"){
        return gen_pstfx_expr(node->left);
    }else if(node->left->name=="OP_INC" || node->left->name=="OP_DEC"){
        string op=node->left->name;
        if(op=="OP_INC"){
            op="add";
        }else if(op=="OP_DEC"){
            op="sub";
        }
        varNode vn=gen_unary_expr(node->left->right);
        if(vn.type!="i32"){
            error();
        }
        string op_type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = "+op+" "+op_type+" "+vn.name+","+"1";
        add_code(tmp_code);
        string rt_type="i32";
        return varNode(tmp,rt_type);
    }else if(node->left->name=="unary_operator"){
        string op=node->left->left->name;
        varNode vn=gen_unary_expr(node->left->right);
        if(op=="+"){
            if(vn.type!="i32" && vn.type!="double"){
                error();
            }
            return vn;
        }else if(op=="-"){
            if(vn.type!="i32" && vn.type!="double"){
                error();
            }
            string op_type="i32";
            string tmp="%"+to_string(tmp_no++);
            string tmp_code=tmp+" = "+"sub"+" "+op_type+" 0"+","+vn.name;
            add_code(tmp_code);
            string rt_type="i32";
            return varNode(tmp,rt_type);
        }else if(op=="!"){

        }else if(op=="~"){

        }
    }
}

varNode InterCode::gen_cast_expr(ASTnode* node){
    if(node->left->name=="unary_expression"){
        return gen_unary_expr(node->left);
    }else if(node->left->name=="("){

    }
}

varNode InterCode::gen_mul_expr(ASTnode* node){
    if(node->left->name=="cast_expression"){
        return gen_cast_expr(node->left);
    }else if(node->left->name=="multiplicative_expression"){
        string op=node->left->right->name;
        if(op=="*"){
            op="mul";
        }else if(op=="/"){
            op="div";
        }else if(op=="%"){
            op="srem";
        }
        varNode vn1=gen_mul_expr(node->left);
        varNode vn2=gen_cast_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string op_type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = "+op+" "+op_type+" "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        string rt_type="i32";
        return varNode(tmp,rt_type);
    }
}

varNode InterCode::gen_add_expr(ASTnode* node){
    if(node->left->name=="multiplicative_expression"){
        return gen_mul_expr(node->left);
    }else if(node->left->name=="additive_expression"){
        string op=node->left->right->name;
        if(op=="+"){
            op="add";
        }else if(op=="-"){
            op="sub";
        }
        varNode vn1=gen_add_expr(node->left);
        varNode vn2=gen_mul_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string op_type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = "+op+" "+op_type+" "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        string rt_type="i32";
        return varNode(tmp,rt_type);
    }
}

varNode InterCode::gen_shift_expr(ASTnode* node){
    if(node->left->name=="additive_expression"){
        return gen_add_expr(node->left);
    }else if(node->left->name=="shift_expression"){
        string op=node->left->right->name;
        if(op=="OP_LEFTSHIFT"){
            op="shl";
        }else if(op=="OP_RIGHTSHIFT"){
            op="lshr";
        }
        varNode vn1=gen_shift_expr(node->left);
        varNode vn2=gen_add_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = "+op+" "+type+" "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i32");
    }
}

varNode InterCode::gen_rela_expr(ASTnode* node){
    if(node->left->name=="shift_expression"){
        return gen_shift_expr(node->left);
    }else if(node->left->name=="relational_expression"){
        string op=node->left->right->name;
        if(op=="OP_LE"){
            op="sle";
        }else if(op=="OP_GE"){
            op="sge";
        }else if(op==">"){
            op="sgt";
        }else if(op=="<"){
            op="slt";
        }
        varNode vn1=gen_rela_expr(node->left);
        varNode vn2=gen_shift_expr(node->left->right->right);
        if(vn1.type!=vn2.type){
            error();
        }
        string type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = icmp "+op+" "+type+" "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i1");
    }
}

varNode InterCode::gen_eq_expr(ASTnode* node){
    if(node->left->name=="relational_expression"){
        return gen_rela_expr(node->left);
    }else if(node->left->name=="equality_expression"){
        string op;
        if(node->left->right->name=="OP_EQ"){
            op=="eq";
        }else if(node->left->right->name=="OP_NE"){
            op="ne";
        }
        varNode vn1=gen_eq_expr(node->left);
        varNode vn2=gen_rela_expr(node->left->right->right);
        if(vn1.type != vn2.type){
            error();
        }
        string type="i32";
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = icmp "+op+" "+type+" "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i1");
    }
}

varNode InterCode::gen_and_expr(ASTnode* node){
    if(node->left->name=="equality_expression"){
        return gen_eq_expr(node->left);
    }else if(node->left->name=="and_expression"){
        varNode vn1=gen_and_expr(node->left);
        varNode vn2=gen_eq_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = and i1 "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i32");
    }
}

varNode InterCode::gen_exclu_or_expr(ASTnode* node){
    if(node->left->name=="and_expression"){
        return gen_and_expr(node->left);
    }else if(node->left->name=="exclusive_or_expression"){
        varNode vn1=gen_exclu_or_expr(node->left);
        varNode vn2=gen_and_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = xor i1 "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i32");
    }
}

varNode InterCode::gen_inclu_or_expr(ASTnode* node){
    if(node->left->name=="exclusive_or_expression"){
        return gen_exclu_or_expr(node->left);
    }else if(node->left->name=="inclusive_or_expression"){
        varNode vn1=gen_inclu_or_expr(node->left);
        varNode vn2=gen_exclu_or_expr(node->left->right->right);
        if(vn1.type!="i32" || vn2.type!="i32"){
            error();
        }
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = or i1 "+vn1.name+","+vn2.name;
        add_code(tmp_code);
        return varNode(tmp,"i32");
    }
}

varNode InterCode::gen_logic_and_expr(ASTnode* node){
    if(node->left->name=="inclusive_or_expression"){
        return gen_inclu_or_expr(node->left);
    }else if(node->left->name=="logical_and_expression"){
        varNode node1=gen_logic_and_expr(node->left);
        varNode node2=gen_inclu_or_expr(node->left->right->right);
        if(node1.type!="i1" || node2.type!="i1"){
            error();
        }
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = and i1 "+node1.name+","+node2.name;
        add_code(tmp_code);
        return varNode(tmp,"i1");
    }
}

varNode InterCode::gen_logic_or_expr(ASTnode* node){
    if(node->left->name=="logical_and_expression"){
        return gen_logic_and_expr(node->left);
    }else if(node->left->name=="logic_or_expr"){
        varNode node1=gen_logic_or_expr(node->left);
        varNode node2=gen_logic_and_expr(node->left->right->right);
        if(node1.type!="i1" || node2.type!="i1"){
            error();
        }
        string tmp="%"+to_string(tmp_no++);
        string tmp_code=tmp+" = or i1 "+node1.name+","+node2.name;
        add_code(tmp_code);
        return varNode(tmp,"i1");
    }
}

varNode InterCode::gen_cond_expr(ASTnode* node){
    if(node->left->name!="logical_or_expression"){
        error();
    }
    if(node->left->right==NULL){
        return gen_logic_or_expr(node->left);
    }else{

    }
}

varNode InterCode::gen_assign_expr(ASTnode* node){
    if(node->left->name=="conditional_expression"){
        return gen_cond_expr(node->left);
    }else if(node->left->name=="unary_expression"){
        varNode vn1=gen_unary_expr(node->left);
        varNode vn2=gen_assign_expr(node->left->right->right);
        varNode vn3;
        string op=node->left->right->name;
        if(op=="="){
            vn3=vn2;
        }else{
            string tmp="%"+to_string(tmp_no++);
            string vn3_type=vn1.type;
            vn3=varNode(tmp,vn3_type);
            if(op=="ASSIGN_MUL"){
                op="mul";
            }else if(op=="ASSIGN_DIV"){
                op="div";
            }else if(op=="ASSIGN_MOD"){
                op="srem";
            }else if(op=="ASSIGN_ADD"){
                op="add";
            }else if(op=="ASSIGN_SUB"){
                op="sub";
            }else if(op=="ASSIGN_LEFTSHIFT"){
                op="shl";
            }else if(op=="ASSIGN_RIGHTSHIFT"){
                op="lshr";
            }else if(op=="ASSIGN_AND"){
                op="and";
            }else if(op=="ASSIGN_OR"){
                op="or";
            }else if(op=="ASSIGN_XOR"){
                op="xor";
            }
            string tmp_code=vn3.name+" = "+op+" "+vn1.name+", "+vn2.name;
            add_code(tmp_code);
        }
        string tmp_code=vn1.name+" = "+vn3.name;
        add_code(tmp_code);
        return vn1;
    }
}

varNode InterCode::gen_expr(ASTnode* node){
    if(node->left->name=="expresiion"){
        return gen_expr(node->left);
    }else if(node->left->name=="assignment_expression"){
        return gen_assign_expr(node->left);
    }
    if(node->right->name==","){
        return gen_assign_expr(node->right->right);
    }
}

void InterCode::gen_slct_stmt(ASTnode* node){
    ASTnode* slct=node->left;
    if(slct->name=="IF"){
        gen_IF_stmt(slct);
    }else if(slct->name=="SWITCH"){

    }
}

void InterCode::gen_IF_stmt(ASTnode* node){
    if(node->right->right->right->right->right==NULL){
        ASTnode* expr_n=node->right->right;
        ASTnode* stmt_n=node->right->right->right->right;
        varNode vn1=gen_expr(expr_n);
        varNode vn2;
        if(vn1.type=="i1"){
            vn2=vn1;
        }else{
            string vn2_nm="%"+to_string(tmp_no++);
            string vn2_tp="i1";
            vn2=varNode(vn2_nm,vn2_tp);
            string tmp_code=vn2.name+" = icmp ne i32 "+vn1.name+", 0";
            add_code(tmp_code);
        }
        string lb1="%label"+to_string(label_no++);
        string lb2="%label"+to_string(label_no++);
        string tmp_code="br i1 "+vn2.name+", label "+lb1+", label "+lb2;
        add_code(tmp_code);
        add_code(lb1);
        gen_stmt(stmt_n);
        add_code(lb2);
    }else{

    }
}

void InterCode::gen_SWITCH_stmt(ASTnode* node){

}

void InterCode::gen_assign_stmt(ASTnode* node){

}
