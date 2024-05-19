//猴博士今儿纳妃，有一堆母猴排着队一个接一个地给他表演才艺以求被选上。猴博士总共只肯看她们300分钟。请编程统计300分钟后，猴博士看了多少只母猴。

#include <stdio.h>
int main(){
    float totolTime=0,lookTime;
    int n =0 ;
    while (totolTime<300)
    {
       printf("请输入第%d只母猴的表演时间(单位为分钟)",n);
       scanf("%f",&lookTime);
       totolTime = totolTime +lookTime;
       n =  n+1;
    }
    printf("猴博士看了%d只母猴\n",n);
    return 0;
    
}