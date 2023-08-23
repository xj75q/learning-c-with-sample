#include <stdio.h>      
#define PI 3.14  //#define预处理器也用于定义常量。稍后我们将了解#define预处理程序指令。
void main() {
    // const float PI = 3.14159;
    // PI = 4.5;
    printf("The value of PI is: %f \n", PI);
}

//Compile Time Error: Cannot modify a const object

