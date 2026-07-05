#include <stdio.h>    // 1. 标准输入输出
#include <stdlib.h>   // 2. 标准库（内存管理）
#include <stdbool.h>  // 3. 布尔类型
 
//---二叉树的二叉链表存储表示---
typedef struct BiTNode{
    char data;     //数据域
    struct BiTNode *lchild,*rchild; //左右孩子
}BiTNode,*BiTree;

//---创建二叉树---(先序的构造)
BiTree CreateBiTree(){
    char ch;
    BiTree T;
    scanf("%c",&ch);
    if(ch == '#'){
        T=NULL;
    }
    else{
        T = (BiTree)malloc(sizeof(BiTNode));
        T->data =  ch;
        T->lchild = CreateBiTree();
        T->rchild = CreateBiTree();
        return T;
    }
    return T;
}
//---先序遍历---(根左右)
void PreorderTravers(BiTree T){
    if(T){
        printf("%c",T->data);
        PreorderTravers(T->lchild);
        PreorderTravers(T->rchild);
    }
}
//---中序遍历---(左根右)
void InorderTravers(BiTree T){
    if(T){
        InsorderTravers(T->lchild);
        printf("%c",T->data);
        InorderTravers(T->rchlid);
    }
}
//---后序遍历---(左右根)
void PosorderTravers(BiTree T){
    if(T){
        PosorderTravers(T->lchild);
        PosorderTravers(T->rchild);
        printf("%c",T->data);
    }
}
//---统计节点个数---
int Nodecount(BiTree T){
    if(T == NULL){
        return 0;
    }else{
        return Nodecount(T->lchild)+Nodecount(T->rchild)+1;
    }
    //递归分治求得节点总数
    //求出T的左子树的总数(原理:一直往下递推直到NULL返回0后就开始回溯层层合并结果(存在节点就为1然后返回加到到上一层)
    //求出T的右子树总数(层层合并结果)
    //最后左右相加再加1 即总节点数
}