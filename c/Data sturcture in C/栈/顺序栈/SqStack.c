#include<stdio.h>
#include<stdbool.h>
#define MAXZSIZE 100

typedef int SElemType;

//顺序栈结构体
typedef struct{
    SElemType data[MAXZSIZE]; //静态数组
    int top;
}SqStack;      


//1.初始化
void initStack(SqStack *S){
    S->top = -1;
}
//2.判断是否为空
bool IsEmpty(SqStack *S){
    return S->top==-1;
}
//3.判断是否为满
bool IsFull(SqStack *S){
    return S->top == MAXSIZE-1; //因为top的初始值为-1嘛
}
//4.入栈(压栈)
bool PushStack(SqStack *S,SElemType e){
    if(IsFull(S)==1){
        printf("栈已满");
        return false;
    }
    S->data[++S->top]=e;
    return true;
}
//5.出栈
bool PopStack(SqStack *S,SElemType *e){
    if(IsEmpty(S)==1){
        printf("栈为空无法出栈！");
        return false;
    }
    *e = S->data[S->top--];
    return true;
}
//6.获取栈顶元素(只读不出栈)
bool GetTop(SqStack *S,SElemType *e){
    if(IsEmpty(S)==1){
        printf("栈空无栈顶元素!\n")；
        return false;
    }
    *e = S->data[S-top];
    return true;
}
//7.获取栈中的元素个数
int Stacklength(SqStack *S){
    return S->top+1;  //top的初始化为-1,0个元素的时候+1为0个元素

}
int main(){
    
}