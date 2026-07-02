#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int SElemType;

typedef struct StackNode{
    SElemType data;
    struct StackNode *next;
}StackNode,*LinkStack;
//1.初始化(带头节点/哨兵节点)  S指向的是头结点
SNode* initStack(){
    SNode* S = (SNode*)malloc(sizeof(SNode));
    S->data=0;
    S->next=NULL;
    return S;
}
//2.判断栈是否为空
bool StackEmpty(StackNode *S){
    return S->next == NULL;
}
//3.入栈
int PushStack(StackNode *S,SElemType e){
    LinkStack p=(LinkStack)malloc(sizeof(StackNode));
    p->data = e;
    p->next = S->next; //让新节点p指向原栈顶(即第一个元素)
    S->next = p;       //让头节点指向新节点 p
    return 1;          //顺序不能乱
}
//4.出栈(出栈) 删除头结点后的第一个节点
bool Pop(LinkStack S,SElemType *e){
    if(StackEmpty(S)){
        prinf("栈空,无法出栈\n");
        return false;
    }
    
}