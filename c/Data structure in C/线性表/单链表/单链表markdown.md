1. 一个要点：
在destroylist 销毁链表的时候：
分为以下几步：
    1.创建两个指针 
    p 指向头结点 p = L
    q 指向的下一个节点  q = p->next
    2. 释放掉p free(p)
    此时p->next已经无法访问了那我们怎么继续销毁后面的节点呢，但是不慌，我们用q 保存了下一个要删除的节点(q = p->next)
    3.重置需要释放的p即可
    p = q
    如下：
    LNode*p=L;
    LNode *q;
    while(p!=NULL){
        q = p->next; 
        free(p);
        p  =  q; 
    }