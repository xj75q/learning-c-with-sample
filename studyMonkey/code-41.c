//用递归方法求 n!
//函数的递归

#include <stdio.h>

int jiecheng(int n){
    int result;
    if (n<0){
        printf("n<0,数字输入的不对！");
    }else if (n==0||n==1){
        result =1;
    }else{
        result = jiecheng(n-1)*n;
    }
    return result;
}

int main(){
    int jiecheng(int n);
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("%d 的阶乘是 %d \n",n,jiecheng(n));
    return 0;
}