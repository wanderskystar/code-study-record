#include<stdio.h>
#include<stdlib.h>


//结构体
typedef struct LNode{
    ElemType data;      //节点的数据域
    struct LNode *next; //节点的指针域，*next为结构体类型
}LNode,*LinkList;

//初始化
LinkList InitList(LinkList *L){
    LNode *head = (LNode*)malloc(sizeof(LNode));
    head ->data = 0;       //用于计算链表中的元素个数
    head ->next = NULL;
    return head;
}
//头插法
int insertElem(LinkList L,ElemType e){
    LNode *p=(LNode*)malloc(sizeof(LNode)); //先创建一块节点空间
    if(p == NULL) return 0;//内存分配失败
    p->data = e;
    p->next = L->next;
    L->next = p;
    L->data++;
    return 1;
}
//尾插法(需要先获得尾巴)
LNode* GeTail(LinkList L){
    LNode *p=(LNode*)malloc(sizeof(LNode));
    p->next=L->next;
    if(p->next  != NULL)
        p = p->next;
    return p;
}
LNode* inserTail(LinkList L,ElemType e){
    LNode* GeTail(L) = Tail;
    LNode *p=(LNode*)malloc(sizeof(LNode));
    p->data =e;
    Tail->next = p;
    p->next = NULL;
    L->data++;
    return p;
}