#include <stdio.h>  

void change(int num) {
    printf("Before adding value inside function num=%d \n", num);
    num = num + 10;
    printf("After adding value inside function num=%d \n", num);
}

int demo1() {
    int x = 10;
    // 更新之前参数x的值
    printf("Before function call x=%d \n", x);
    change(x); // passing value in function  
    // 更新之后参数x的值
    printf("After function call x=%d \n", x);

    return 0;
}


// 定义函数，注意这里的参数名称前加了一个星号(*)
void change2(int *num) {
    printf("Before adding value inside function num=%d \n", *num);
    (*num) += 100;
    printf("After adding value inside function num=%d \n", *num);
}

int demo2() {
    int x = 200;

    printf("Before function call x=%d \n", x);
    // 注意，下面传递的参数名称前加了一个符号(&)
    change2(&x);// passing reference in function  
    printf("After function call x=%d \n", x);

    return 0;
}


void main(){
    demo2();
}