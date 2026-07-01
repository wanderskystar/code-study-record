#include<stdio.h>
#include<stdlib.h>
#define MAXZSIZE 100

typedef int SElemType;

typedef struct StackNode{
    SElemType data;
    struct StackNode *next;
}SNode,*LinkStack;

SNode* initStack(){
    SNode* S = (SNode*)malloc(sizeof(SNode));
    S->data=0;
    S->next=NULL;
    return S;
}
