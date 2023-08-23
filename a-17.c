#include <stdio.h>    

void demo1() {
    int i = 1;//initializing a local variable  

    //starting a loop from 1 to 10  
    for (i = 1;i <= 10;i++) {
        printf("%d \n", i);
        if (i == 5) {//if value of i is equal to 5, it will break the loop  
            break;
        }
    }//end of for loop  

}


void demo2() {
    int i = 1, j = 1;//initializing a local variable  

    for (i = 1;i <= 3;i++) {
        for (j = 1;j <= 3;j++) {
            printf("%d %d\n", i, j);
            if (i == 2 && j == 2) {
                break;//will break loop of j only  
            }
        }
    }//end of for loop  

}


//从上面控制台上的输出中可以看到，2 3不打印，因为 i == 2和j == 2 后有break语句退出的内部循环。但是打印3 1，3 2和3 3，因为break语句只适用于内循环。

					




void main(){
    demo2();
}
