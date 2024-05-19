#include<stdio.h>  

void demo1() {
    int number = 0;

    printf("enter a number:");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even number\n", number);
    }

}



void demo2() {
    int number = 0;

    printf("enter a number:");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even number\n", number);
    }
    else {
        printf("%d is odd number\n", number);
    }    
}




void demo3() {
    int number = 0;

    printf("enter a number:");
    scanf("%d", &number);

    if (number == 10) {
        printf("number is equals to 10\n");
    }else if (number == 50) {
        printf("number is equal to 50\n");
    }else if (number == 100) {
        printf("number is equal to 100\n");
    }else {
        printf("number is not equal to 10, 50 or 100\n");
    }
}


void demo4() {
    int score = 0;
    printf("enter a score:");
    scanf("%d", &score);

    if (score >= 60) { // 下面是嵌套if-else语句
        if (score <= 80) {
            printf("分数大于60小于80，中等水平\n");
        }else if (score > 80 && score < 90) {
            printf("分数大于60小于80，成绩良好\n");
        }else{// 大于 90 以上
            printf("分数大于90，成绩优秀\n");
        }
    }else {
        printf("分数小于 60 分，不及格~！\n");
    }
}





void main(){
    // demo1();
    demo2();
}