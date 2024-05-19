//输入三个实数a,b,c 按数值由大到小的顺序输出这三个数：
#include<stdio.h>
int main(){
    double a,b,c,t;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if(a>b){
        t =a ;
        a =b;
        b =t;
    }
    if (a >c){
        t =a;
        a =c;
        c =t;
    }
    if (b>c){
        t =b;
        b =c;
        c=t;
    }

    printf("%0.2f,%0.2f,%0.2f\n",a,b,c);

    return 0;
}