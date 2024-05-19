//输入两个实数a、b，按数值由小到大的顺序输出这两个数。
#include<stdio.h>
int demo1(){
    double a,b,t;
    scanf("%lf,%lf",&a,&b);
    if (a>b){
        t = a;
        a =b ;
        b = t;
    }
    printf("%0.2f,%0.2f\n",a,b);
    return 0;
}

int demo2(){
    double a,b;
    scanf("%lf,%lf",&a,&b);
    a>b?printf("%f,%f\n",b,a):printf("%f,%f",a,b);
    return 0 ;
}




int main(){
   //demo1();
   demo2();
}