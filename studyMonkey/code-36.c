//编写一程序，要求用户输入4个数字，输出前两个数中的最大数、后两个数中的最大以及四个数中的最大数。

#include <stdio.h>

float max(float x,float y){
    float largest;
    if (x >y){
        largest = x;
    }else
    {
        largest = y;
    }
    return largest;
}

//还可以这样写
float max2(float x,float y) {
    return (x>y?x:y);
}


int main(){
    //首先声明要调用的函数：
    float max(float x,float y);
    float a[4];
    int i;
    float t,u,v;
    for ( i = 0; i <=3; i++)
    {
       printf("请输入第%d个数字:",i+1);
       scanf("%f",&a[i]);
    }
    //调用函数
    t = max(a[0],a[1]);
    u = max(a[2],a[3]);
    v = max(t,u);
    printf("前两个数中最大数为:%0.2f\n",t);
    printf("后两个数中最大数为:%0.2f\n",u);
    printf("四个数中最大数为:%0.2f\n",v);
    return 0;
}
