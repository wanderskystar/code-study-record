#define MAX_SIZE 100
typedef int SqBiTree[MAX_SIZE]; 

void initTree(SqBiTree T) {
    T[0] = 0; // 0号位置不用，或存储节点总数
    // 将其他位置初始化为空值（如 -1 或 0）
}
"""
父子关系公式（设某节点下标为 i):

左孩子下标 2 * i

右孩子下标 2 * i + 1

父节点下标 i / 2(向下取整)
"""