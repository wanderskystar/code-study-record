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
//删除指定位置的元素
int deleteNode(LinkList L,int pos){
    if(pos<1) return 0;
    LNode *p=L;
    int j;
    while(p&&j<pos-1){
        p=p->next;
        j++;
    }
    if (p==NULL || p->next = NULL)
        return 0;
    LNode *q = p->next;  //待删除元素
    p->next = q->next;   //覆盖删除
    free(q);
    L->data--;
    return 1;
}
//查找某个元素--值查找
LNode LocateElem(LinkList L,ElemType e){
    LNode *p=L->next;
    int i=0;
    while(p&&p->data != e){
        p=p->next;
        i =  i+1;
    }
    printf("%d值所在的位置为%d号位置",p->data,i);
    return p;
}
//根据位置查找
void Locatespos(LinkList L,int pos){{
    LNode*p=L->next;
    int i =1;
    while(i<pos){
        p=p->next;
        i++;
    }
    //判断是否找到
    if(p&&i == pos ){
          printf("%d位置的元素值为%d",pos,p->data);
    }
    else{
        printf("%d位置超出单链表"pos);
    }
}
//销毁单链表
//从链表头部开始一个一个释放
void destroylist(LinkList L){
    LNode*p=L;
    LNode *q;
    while(p!=NULL){
        q = p->next; //用临时指针保存后路，因为free掉p后，p->next为非法访问
        free(p);
        p  =  q; //q保存了接着要删除的后面节点，赋值free即可
        
    }
}
int main{
    
}