#include <stdio.h>

void hello(){  
    printf("hello c\n");// 没有返回值，只是打印一个字符串
}


int get(){  
    return 10;  
}


float get2(){  
    return 10.2;  
}


void hello2(){  
    printf("hello c");  
}


int cube(int n){  
    return n*n*n;  
}


int add(int a, int b){  
   return a+b;  
}



void main(){
    hello(); //calls function that doesn't return a value  
int value=get(); //calls function that returns value  
int value2=add(10,20); //calls parameterized function by passing 2 values
printf("####%d\n",value);
printf("*****%d\n",value2);

}

