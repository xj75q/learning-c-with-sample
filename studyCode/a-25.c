#include <stdio.h>    

void demo1() {
    int i = 0;
    int marks[5];//declaration of array  

    marks[0] = 80;//initialization of array  
    marks[1] = 60;
    marks[2] = 70;
    marks[3] = 85;
    marks[4] = 75;

    // 遍历数组
    for (i = 0;i<5;i++) {
        printf("%d \n", marks[i]);
    }//end of for loop  

}


void demo2() {
    int i = 0;
    int marks[5] = { 20,30,40,50,60 };//declaration and initialization of array  

    //traversal of array  
    for (i = 0;i<5;i++) {
        printf("%d \n", marks[i]);
    }

}


void main(){
    demo2();
}