//线性结构——【链表】——【非循环单链表的实现】

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
/**
    定义一个链表结构体数据类型
*/
typedef struct Node{
    int data; //数据域
    struct Node * pNext; //指针域
}NODE,*PNODE; //NODE 等价于 struct Node，PNODE 等价于 struct Node *

/**
    函数声明
*/
PNODE create_list(); //初始化一个空链表
void traverse_list(PNODE pHead);  //遍历链表
bool isEmpty(PNODE pHead); //判断链表是否为空
int length_list(PNODE pHead); //计算链表的长度
bool insert_list(PNODE,int,int);  //插入链表
bool delete_list(PNODE,int,int *);  //删除链表
void sort_list(PNODE);  //排序链表

int main()
{
    int elem; //保存删除元素的值
    PNODE pHead=NULL; //等价于 struct Node * pHead
    pHead = create_list(); //创建一个非循环单链表，并把链表的头结点的地址赋给pHead
    //测试链表是否为空
    if(isEmpty(pHead))
        printf("链表为空！！！！！\n");
    //测试 遍历数组
    traverse_list(pHead);

    //测试 计算链表长度
    int leng = length_list(pHead);
    printf("链表的长度是：%d\n",leng);

    //测试 对链表进行排序
    sort_list(pHead);
    traverse_list(pHead);

    //测试 对链表插入元素
    insert_list(pHead,2,88);
    traverse_list(pHead);

    //测试 删除链表中的元素
    if(delete_list(pHead,2,&elem))
        printf("删除成功，你删除的元素是： %d\n ",elem);
    else
        printf("删除失败，找不到需要删除的元素！");
    traverse_list(pHead);
    return 0;
}

/**
    创建一个空链表
*/
PNODE create_list(){
    int length; //链表个数
    int data; //链表结点值

    //生成头结点,并把头结点的地址赋给头指针
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    if(pHead==NULL){
        printf("内存分配失败，程序终止！\n");
        exit(-1);
    }

    //定义一个尾指针,初始化时尾指针和头指针指同时指向头结点，并且其指针域为空，因为此时除了头结点外没有其他的结点
    PNODE pTail = pHead;
    pTail->pNext=NULL;
    //确定结点个数
    printf("请输入要生成链表结点的个数，length= ");
    scanf("%d",&length);

    //输入各结点的值
    for(int i=0; i<length; i++){
        printf("请输入第%d个结点的值： ",i+1);
        scanf("%d",&data);

        //生成新结点
        PNODE pNew = (PNODE)malloc(sizeof(NODE));
        if(pNew==NULL){
            printf("内存分配失败，程序终止！\n");
            exit(-1);
        }
        //把输入的值存到结点的数据域上
        pNew->data=data;
        //把新生成的结点挂到链表的最后面，尾插法
        pTail->pNext=pNew;
        pNew->pNext=NULL; //最后一个结点没有后继结点，所以它的指针域为空
        //把尾指针指向最后一个结点
        pTail=pNew;
    }

    return pHead;
}

/**
    遍历链表
*/
void traverse_list(PNODE pHead){
    //一般不对头指针直接操作，而是重新定义一个操作指针p，并且这个p要指向首结点
    PNODE p = pHead->pNext;

    //当链表为空时，结束程序
    if(p==NULL){
        printf("链表为空！\n");
        return;
    }

    //当链表不为空时，输出链表的值
    while(p != NULL){
        printf("%d\t",p->data);
        p=p->pNext;
    }
    printf("\n");

    return;
}

/**
    判断链表是否为空
*/
bool isEmpty(PNODE pHead){
    if(pHead->pNext==NULL)
        return true;
    else
        return false;
}

/**
    计算链表的长度，即结点的个数
*/
int length_list(PNODE pHead){
    PNODE p = pHead->pNext;
    int leng=0; //必须要初始化，如果不初始化，会出现垃圾数字

    while(p != NULL){
        leng++;
        p=p->pNext;
    }
    return leng;
}

/**
    对链表进行排序
    狭义的算法是与数据的存储方式密切相关
    广义的算法是与数据的存储方式无关
    所以，虽然单链表与顺序表的存储方式不同，但是在排序相关操作上基本上是一致的
*/
void sort_list(PNODE pHead){
    int i,j,t;
    int leg=length_list(pHead);
    PNODE p=NULL,q=NULL;
    for(i=0,p=pHead->pNext; i<leg-1; i++,p=p->pNext){
        for(j=i+1,q=p->pNext; j<leg; j++,q=q->pNext){
            if(p->data > q->data){ //类似于数组中的 a[i]>a[j]
                t=p->data;  //类似于数组中的 t=a[i]
                p->data = q->data;  //类似于数组中的 a[i]=a[j]
                q->data=t;  //类似于数组中的 a[j]=t
            }
        }
    }
    return;
}

/**
    在pHead所指向的链表的第pos个节点前插入一个值为element的新结点
    并且pos的值从1开始
*/
bool insert_list(PNODE pHead,int pos,int element){
    int i=0;
    PNODE p=pHead;
    //找到需要插入元素的位置,因为p->pNext可能为空，所以从头结点开始判断
    while(p != NULL && i<pos-1){
        p=p->pNext;
        ++i;
    }

    if(p==NULL || i>pos-1)
        return false;

    //为新结点动态分配内存空间
    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if(pNew==NULL){
        printf("动态内存分配失败！");
        exit(-1);
    }

    pNew->data = element;

    //把新结点插入元素中，借助第三个指针进行操作
    /*PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;*/

    //把新结点插入元素中,直接操作
    pNew->pNext = p->pNext;
    p->pNext = pNew;

    return true;
}

/**
    删除链表中指定位置的元素
*/
bool delete_list(PNODE pHead,int pos,int * pElement){
    int i=0;
    PNODE p=pHead;
    //找到需要删除的元素，因为是删除元素，所以要从首结点开始判断
    while(NULL != p->pNext && i<pos-1){
        p=p->pNext;
        i++;
    }

    if(p->pNext == NULL || i>pos-1)
        return false;

    //在时行删除之前，把要删除的元素保存下来
    PNODE q=p->pNext;
    *pElement = q->data;

    //执行删除操作
    p->pNext = p->pNext->pNext;
    free(q);
    q=NULL;

    return true;

}
