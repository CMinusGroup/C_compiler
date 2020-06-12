// #include<stdio.h>
// #define println printf
int i;
int go(int a){
    if(a==1){
        return 1;
    }else{
        if(a==2){
            return 1;
        }else
        {
            return go(a-1)+go(a-2);
        }
        
    }
}
int main(){
    i = go(10);
    println("hello,%d",i);
    return 0;
}