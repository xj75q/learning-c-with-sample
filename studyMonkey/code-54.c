//递归-【递归求阶乘】


#include <stdio.h>
#include <stdlib.h>

long factorial(int n){
    if(1==n) //递归结束条件
        return 1;
    else
        return factorial(n-1)*n;
}

int main()
{
    int n;
    printf("请输入你要求阶乘的数：");
    scanf("%d",&n);
    printf("你所求的阶乘是：%ld\n",factorial(n));
    return 0;
}
