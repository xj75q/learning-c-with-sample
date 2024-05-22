//线性结构-【数组】

#include <stdio.h>
#include <stdlib.h>  //包含了exit()
#include <malloc.h>
#include <stdbool.h>
//定义一个数据类型，名字叫struct Arr，有三个成员
struct Arr{
    int * pBase; //存储数组第一个元素的地址
    int length; //数组所能容纳最大元素个数
    int cnt; //当前数组有效元素个数
};

void init_arr(struct Arr * pArr, int length); //初始化一个数组
bool isEmpty(struct Arr * pArr); //判断数组是否为空
void show_arr(struct Arr * pArr); //打印数组
bool append_arr(struct Arr * pArr,int element); //在数组末尾追加一个元素
bool intsert_arr(struct Arr * pArr,int element,int pos); //在数组中插入一个元素
bool delete_arr(struct Arr * pArr,int *pElement,int pos); //删除数组中的一个元素
int get(struct Arr * pArr,int pos); //获取数组中的一个元素
bool isFull(struct Arr * pArr); //判断数组是否满
void sort_arr(struct Arr * pArr); //对数组进行排序
void inversion_arr(struct Arr * pArr); //倒置数组

/**
    初始化数组
    struct Arr * pArr 用于动态改变变量的值
    int length 自定义数组长度个数
*/
void init_arr(struct Arr * pArr, int length){
    pArr->pBase = (int *)malloc(sizeof(int)*length);
    if(NULL == pArr->pBase){
        printf("动态内存分配失败！");
        exit(-1);
    }
    pArr->cnt=0;
    pArr->length=length;
    return;
}

/**
    判断数组是否为空
*/
bool isEmpty(struct Arr * pArr) {
    if(pArr->cnt==0){
        return true;
    }else{
        return false;
    }
}


/**
    打印数组
*/
void show_arr(struct Arr * pArr){
    if(isEmpty(pArr)){  //如果数组为空，则输出提示
        printf("数组为空！\n");
    }else{ //如果不为空，则打钱输出数组
        for(int i=0; i<pArr->cnt; i++){
            printf("%d\t", pArr->pBase[i]);
        }
        printf("\n");
    }
    return;
}

/**
    判断数组是否为满
*/
bool isFull(struct Arr * pArr){
    if(pArr->cnt == pArr->length)
        return true;
    else
        return false;
}

/**
    在数组末尾追加元素
    struct Arr * pArr 接收数组第一个元素的地址
    int element 需要追加的元素
*/
bool append_arr(struct Arr * pArr,int element){
    if(isFull(pArr)){
        printf("数组已满！\n");
        return false;
    }else{
        pArr->pBase[pArr->cnt] = element;
        pArr->cnt++;
        return true;
    }
}

/**
    把元素插入指定的位置
    int pos 表示元素的位置，如果换算成数组下标则为 pos-1
*/
bool intsert_arr(struct Arr * pArr,int element,int pos){
    //判断数组是否为满
    if(isFull(pArr))
        return false;
    //判断插入元素的位置是否合法
    if(pos<1 || pArr->cnt+1<pos)
        return false;
    //移动元素
    for(int i = pArr->cnt-1; i>=pos-1; --i){
        pArr->pBase[i+1] = pArr->pBase[i];
    }
    pArr->pBase[pos-1] = element;
    pArr->cnt++;
    return true;
}

/**
    删除一个元素，并返回被删除元素的值
*/
bool delete_arr(struct Arr * pArr,int *pElement,int pos){
    if(isEmpty(pArr))
        return false;
    if(pos<1 || pos > pArr->cnt)
        return false;

    //保存删除的元素
    *pElement = pArr->pBase[pos-1];
    //移动元素
    for(int i=pos; i<pArr->cnt; i++){
        pArr->pBase[i-1] = pArr->pBase[i];
    }
    pArr->cnt--;
    return true;
}

/**
    倒置数组
*/
void inversion_arr(struct Arr * pArr){
    int i=0,t;
    int j=pArr->cnt-1;
    while(i<j){
        t=pArr->pBase[i];
        pArr->pBase[i] = pArr->pBase[j];
        pArr->pBase[j] = t;
        i++;
        j--;
    }
    return;
}

/**
    对数组排序
*/
void sort_arr(struct Arr * pArr){
    int i,j,t;
    for(i=0;i<pArr->cnt-1;i++){
        for(j=i+1;j<pArr->cnt-1;j++){
            if(pArr->pBase[i] > pArr->pBase[j]){
                t=pArr->pBase[i];
                pArr->pBase[i] = pArr->pBase[j];
                pArr->pBase[j] = t;
            }
        }
    }
    return;
}

/**
    查找指定位置元素的值，并返回它的值
*/
int get(struct Arr * pArr,int pos){
    return pArr->pBase[pos-1];
}

int main()
{
    struct Arr arr;  //定义一个结构变量
    int elem; //保存被删除元素的值
    //测试初始化功能
    init_arr(&arr,6);
    show_arr(&arr);
    //测试追加功能
    append_arr(&arr,1);
    append_arr(&arr,2);
    append_arr(&arr,3);
    append_arr(&arr,4);
   /*append_arr(&arr,5);
    append_arr(&arr,6);
    append_arr(&arr,7);*/
    //测试插入元素功能
    intsert_arr(&arr,22,1);
    //intsert_arr(&arr,22,-1);
    //intsert_arr(&arr,33,6);
    //intsert_arr(&arr,88,7);
    //intsert_arr(&arr,88,0);

    //测试删除元素
    if(delete_arr(&arr,&elem,3)){
        printf("删除成功，你删除的元素是：%d\n",elem);
    }else{
        printf("删除失败！");
    }
    show_arr(&arr);
    printf("====================== \n");

    //测试倒置
    inversion_arr(&arr);
    show_arr(&arr);

    //测试排序
    sort_arr(&arr);
    show_arr(&arr);

    //测试查找指定元素
    printf("你要的元素是：%d ",get(&arr,3));
    return 0;
}
