#include <stdio.h>      

//定义一个无参数函数，简单地打印一个字符串
void hello() {
    printf("hello c programming");
}
void demo1() {

    hello(); // 调用函数
    hello(); // 再一次调用函数
    hello(); // 再一次调用函数
}




// 定义一函数，返回给定参数值的立方值
int cube(int n) {
    return n*n*n;
}

// 定义一函数，返回给定两个参数值的最大值
int max(int a, int b) {
    if (a > b) {
        return a;
    }else {
        return b;
    }
}

void demo2() {
    int result1 = 0, result2 = 0;
    int a = 10, b = 20, c = 0;

    result1 = cube(2); // 调用函数
    result2 = cube(5);

    c = max(a, b); //

    printf("the cube of 2 is : %d \n", result1);
    printf("the cube of 5 is : %d \n", result2);
    printf("the max value of %d and %d is :%d \n", a, b, c);
}




void main(){
    demo2();
}