//输入两个实数a,b 按数值有小到大的顺序输出这两个数
#include <stdio.h>
int main(){
    double a,b,t;
    scanf("%lf,%lf",&a,&b);
    if (a>b){
        t = a;
        a = b;
        b = t;
    }

    printf("%0.2f,%0.2f\n",a,b);

    return 0;
}