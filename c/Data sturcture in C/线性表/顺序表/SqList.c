#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef int ElemType
//写结构体 静态顺序表data[maxsize]
typedef struct{
    ElemType data[MAXSIZE]; //一个数组对应ElemType
    int length;
}SeqList;
//然后初始化
void InitList(SeqList *L){  //用指针是因为传参是值传递(会复制变量)
                            //只有传地址即指针才能修改外部真正的顺序表实现初始化
    L->length = 0;
}
/*当为动态顺序表的时候就需要手动开辟内存
typedef struct{
    ElemType *data; //动态数组指针
    int length;     //当前有效元素
    int listsize;   //堆内存开辟的空间大小
}SeqList;

void InitList(SeqList *L){  
    //向堆申请INIT_SIZE个连续内存
    L->data = (ElemType*)malloc(sizeof(ElemType)*INIT_SIZE);
    L->length = 0;//当前有效元素
    L->listsize = INIT_SIZE;//当前总容量
}
*/
//顺序表尾插入元素e
int appendElem(SeqList*L,ElemType e){
    if(L->length == MAXSIZE){
        printf("表满了，错误！"\n);
        return 0;
    }
    L->data[L->length] = e;
    L->length++;
    return 1;
}

