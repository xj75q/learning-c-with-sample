//线性结构的应用-【队列】

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct Queue{
    int* pBase;
    int qFront;
    int qRear;
}QUEUE;

/**
    函数声明
*/
void init_queue(QUEUE *); //初始化一个队列
bool en_queue(QUEUE * pQueue,int element); //向队列插入一个元素
void traverse_queue(QUEUE *);   //遍历一个队列
bool isFull(QUEUE *);   //判断队列是否满
bool isEmpty(QUEUE *);  //判断队列是否为空
bool out_queue(QUEUE *,int *); //出队

int main()
{
    QUEUE Q;
    //测试 初始化队列
    init_queue(&Q);

    //测试 入队
    en_queue(&Q,1);
    en_queue(&Q,2);
    en_queue(&Q,3);
    en_queue(&Q,4);
    en_queue(&Q,5);
    //插入失败，队列已满
    en_queue(&Q,6);
    en_queue(&Q,7);

    //测试 遍历队列
    traverse_queue(&Q);

    //测试 出队
    int element;
    if(out_queue(&Q,&element)){
        printf("出队成功，出队的元素是：%d\n",element);
    }else{
        printf("出队失败！\n");
    }
    traverse_queue(&Q);

    return 0;
}

/**
    初始化一个队列
*/
void init_queue(QUEUE * pQueue){
    //生成一个数组，并把首地址赋给pBase
    pQueue->pBase = (int *)malloc(sizeof(int)*6);

    //初始化前后位置
    pQueue->qFront=0;
    pQueue->qRear=0;

    return;
}

/**
    判断队列是否满
*/
bool isFull(QUEUE *pQueue){
    //队列预留一个空存储空间，如果队尾指针加一取余数组长度 等于 队头指针，则队列为满
    //(pQueue->qFront+1)%6 == pQueue->qRear 这样写是错误的
    if((pQueue->qRear+1)%6 == pQueue->qFront)
        return true;
    else
        return false;
}

/**
    入队
*/
bool en_queue(QUEUE * pQueue,int element){
    if(isFull(pQueue))
        return false;

    //插入元素
    pQueue->pBase[pQueue->qRear]=element;
    //队尾指针指向下一个存储单元
    pQueue->qRear = (pQueue->qRear + 1)%6;

    return true;
}

/**
    遍历一个队列
*/
void traverse_queue(QUEUE * pQueue){
    int i = pQueue->qFront;
    //从队头开始遍历，如果遍历指针 等于 队尾指针，则遍历完成
    while(i != pQueue->qRear){
        printf("%d\t",pQueue->pBase[i]);
        i = (i+1)%6;
    }
    printf("\n");

    return;
}

/**
    判断队列是否空
*/
bool isEmpty(QUEUE *pQueue){
    //当头尾指针指向同一个元素的时候，队列为空
    if(pQueue->qFront == pQueue->qRear)
        return true;
    else
        return false;
}

/**
    出队
*/
bool out_queue(QUEUE *pQueue,int *pElement){
    if(isEmpty(pQueue))
        return false;
    //保存要删除的元素
    *pElement = pQueue->pBase[pQueue->qFront];
    //队头指针向后移
    pQueue->qFront = (pQueue->qFront+1)%6;

    return true;
}
