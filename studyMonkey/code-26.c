//用while语句做数学运算

#include<stdio.h>

//求2+4+6+…+100
int demo1(){
    int n=1,sum=0,a=2;
    while (n<=50)
    {
        n = n+1;
        sum = sum +a ;
        a = a+2;
    }
    printf("计算结果是：%d\n",sum);
    return 0;
}

int demo2(){
    int n=1,sum=0,a=2;
    do
    {
        n = n+1;
        sum = sum +a ;
        a = a+2;
    }while(n <=50);
    printf("计算结果是：%d\n",sum);
    return 0;
}




//求20以内的阶乘  1!+2！+3!+....+20!
int demo4(){
    int n = 1,sum =0 ,a =1;
    while (n<=20)
    {
        n = n+1;
        sum = sum +a;
        a = a*n;
    }
    printf("计算结果是：%d\n",sum);
    return 0;
}

int demo5(){
    int sum,a,n;
    for (sum =0,a=1,n=1;n <=20;n =n+1){
        a = n *a;
        sum = sum +a;
    }
    printf("计算结果是：%d\n",sum);
    return 0;
}

int demo6(){
    int n = 1,sum =0 ,a =1;
    for (;n <=20;n=n+1)
    {
        a = a*n;
        sum = sum +a;
        
    }
    printf("计算结果是：%d\n",sum);
    return 0;
}

//=============n++ n--的使用==========
int demo51(){
    int n =99 ;
    while (n <300)
    {
        n++;
        if (n%4==0){
            continue;
        }
        printf("%d\t",n);
    }
    return 0;
}

int demo52(){
    int n;
    for(n =100;n<=300;n++){
        if (n%4==0){
            continue;
        }
        printf("%d\t",n);
    }

    return 0;
}







//==============以下类似===============

int demo61(){
    int n=1 ;
    while (n <=10)
    {
        /* code */
    }

    do{

    }while (n <=10);


    for (size_t i = 0; i < 10; i++)
    {
        /* code */
    }

    return 0;
}

int main(){
    //demo1();
    //demo2();
    //demo3();
    //demo4();
    //demo6();
    //demo51();
    demo52();

}