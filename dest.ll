; ModuleID = 'main_module'
source_filename = "main_module"

define i32 @main(){
entry:
    %a = alloca i32
    store volatile i32 1,i32* %a 

    %label0:
    %0 = icmp sgt i32 a, 0
    %1 = icmp eq i1 %0, 0 
    br i1 %1 label %label0,label %label2
    %label1:
    a = sub i32 a,1
    br label %label0
    %label2:
    ret i32 0
}