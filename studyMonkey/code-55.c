//递归-【用递归求前n项和】

#include <stdio.h>
#include <stdlib.h>

long sum(int n){
    if(1==n)
        return 1;
    else
        return sum(n-1)+n;
}


int main()
{
    int n;
    printf("请输入需要求前n项和的n：");
    scanf("%d",&n);
    printf("你所要求的前n项和为：%ld\n",sum(n));
    return 0;
}
