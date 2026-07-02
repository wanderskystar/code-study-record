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
//4.出栈(弹栈) 删除头结点后的第一个节点
bool Pop(LinkStack S,SElemType *e){
    if(StackEmpty(S)){
        prinf("栈空,无法出栈\n");
        return false;
    }
    SNode *p=S->next;
    *e = p->data;
    S->next = p->next;
    free(p);
    return true;
}
//5.获取栈顶元素
SElemType GetTop(StackNode *S){
    if(S->next!=NULL){
        return S->next->data;
    }    
}
//获取栈中元素个数
int StackLength(LinkStack S) {
    int len = 0;
    StackNode *p = S->next;
    while (p) {
        len++;
        p = p->next;
    }
    return len;
}
//销毁链栈（释放所有节点）
void DestroyStack(LinkStack *S) {
    StackNode *p = *S;
    StackNode *q;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
    *S = NULL;  // 防止野指针
}
int main(){
    
}