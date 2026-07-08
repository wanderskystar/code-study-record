#include<stdio.h>
#include<stdlib.h>
#define OK 0
#define ERROR 1
#define MAXSIZE 10
#define Status int

//定义有序表结构体 SSTable
typedef struct{
    ElemType *R;  //0号单元用作监视哨
    int length;
}SSTable;
//关键字域ElemType
typedef struct{
    int key; //关键字域
}ElemType;
//初始化
Status InitList SSTable(SSTable *L){
    L->R =   ; //分配存储空间
    if(!L->R)
    {
               //提示初始化错误
    }
    L->length =  ; //长度赋初始值
    return OK;
}
//数据插入
void Insert SSTable(SSTable *L)
{
    for(int i=0;i<MAXSIZE;i++)
    {
               //插入数据
    }
}
int Search_Seq(SSTable ST;KeyType key)
