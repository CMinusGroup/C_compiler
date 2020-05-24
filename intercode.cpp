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
    if(node->left->name!="contidional_expression"){
        error();
    }
    if(node->left->right==NULL){
        return gen_cond_expr(node->left);
    }else{

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

void InterCode::gen_selection_stmt(ASTnode* node){
    ASTnode* slct=node->left;
    if(slct->name=="IF"){
        gen_IF_stmt(slct);
    }else if(slct->name=="SWITCH"){

    }
}

void InterCode::gen_IF_stmt(ASTnode* node){
    if(node->right->right->right->right->right==NULL){
        ASTnode* expr=node->right->right;
        ASTnode* stmt=node->right->right->right->right;
        string cmp_res=gen_expr(expr).name;
        string code="br i1 "+cmp_res+",label %if.then,label %if.end";
        add_code(code);
        add_code("if.then:");
        gen_stmt(stmt);
        add_code("if.end:");
    }else{

    }
}

void InterCode::gen_SWITCH_stmt(ASTnode* node){

}

void InterCode::gen_assign_stmt(ASTnode* node){

}

void InterCode::gen_stmt(ASTnode* node){

}