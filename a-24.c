#include <stdio.h>  

//extern int counter = 0;


//register int counter = 0;



void demo1() {
    int a = 10;
    auto int b = 10;//same like above  
    printf("%d %d", a, b);
}



void func() {
    static int i = 0;//static variable  
    int j = 0;//local variable  
    i++;
    j++;
    printf("i= %d and j= %d\n", i, j);
}

void demo2() {
    func();
    func();
    func();
}




