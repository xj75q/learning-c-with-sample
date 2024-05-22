//线性结构的应用-【栈】

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
/**
    定义结点数据类型
*/
typedef struct Node{
    int data;
    struct Node * pNext;
}NODE,*PNODE;

/**
    定义栈结构
*/
typedef struct stack{
    PNODE pTop;
    PNODE pBottom;
}STACK,*PSTACK;

/**
    声明函数
*/
void init_stack(PSTACK); //初始化一个栈,即构建一个栈结构
void push_stack(PSTACK,int); //把一个元素压栈
void traverse_stack(PSTACK); //遍历栈
bool isEmpty(PSTACK);   //判断栈空
bool pop_stack(PSTACK,int *); //出栈
void clear_stack(PSTACK);   //清空栈

int main()
{
    STACK s; //定义一个栈
    //测试 初始化栈
    init_stack(&s);

    //测试 压栈
    push_stack(&s,2);
    push_stack(&s,5);
    push_stack(&s,4);
    push_stack(&s,8);

    //测试 遍历栈
    traverse_stack(&s);


    //测试清空栈
    clear_stack(&s);

    //测试 出栈
    int element;  //保存删除的元素
    if(pop_stack(&s,&element)){
        printf("删除成功，你删除的元素是：%d \n",element);
    }else{
        printf("删除失败！\n");
    }
    traverse_stack(&s);
    printf("=============================\n");
    return 0;
}

/**
    初始化栈
*/
void init_stack(PSTACK pStack){
    //为栈生成一个不存放任何数据的头结点，并且用栈栈底指针指向它
    pStack->pBottom = (PNODE)malloc(sizeof(NODE));
    if(pStack->pBottom == NULL){
        printf("内存分配失败，程序结束！");
        exit(-1);
    }
    //内存分配成功，也把栈顶指针指向头结点
    pStack->pTop = pStack->pBottom;

    //初始化头结点，把头结点的指针域设为NULL
    pStack->pTop->pNext=NULL;
}

/**
    把一个元素压栈
*/
void push_stack(PSTACK pStack,int element){
    //为新结点动态分配一个存储空间
    PNODE pNew = (PNODE)malloc(sizeof(NODE));
    if(pNew == NULL){
        printf("内存分配失败，程序结束！");
        exit(-1);
    }

    //把新插入元素的值放入到数据域中
    pNew->data = element;

    //压栈：把新结点挂到头结点后面
    pNew->pNext = pStack->pTop;

    //把栈顶指针指向栈顶元素
    pStack->pTop = pNew;

    return;
}

/**
    遍历栈
*/
void traverse_stack(PSTACK pStack){
    //得到栈顶元素的位置
    PNODE p = pStack->pTop;

    //遍历栈
    while(p != pStack->pBottom){
        printf("%d\t",p->data);
        p = p->pNext;
    }
    printf("\n");

    return;
}

/**
    判断栈是否为空
*/
bool isEmpty(PSTACK pStack){
    if(pStack->pBottom == pStack->pTop)
        return true;
    else
        return false;
}


/**
    出栈，并保存出栈元素
*/
bool pop_stack(PSTACK pStack,int *pElement){
    if(isEmpty(pStack)){
        printf("出栈失败！栈为空！");
        return false;
    }
    //定义一个值保存删除的结点
    PNODE p = pStack->pTop;
    *pElement = p->data;
    pStack->pTop = p->pNext;
    free(p);
    p=NULL;

    return true;

}

/**
    清空栈
*/
void clear_stack(PSTACK pStack){
    if(isEmpty(pStack))
        return;

    PNODE p = pStack->pTop;
    PNODE q = NULL;

    while(p != pStack->pBottom){
        q = p->pNext;
        free(p);
        p=q;
    }
    pStack->pTop = pStack->pBottom;
    return;
}
