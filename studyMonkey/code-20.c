//编写一程序，判断某一年是否为闰年
#include<stdio.h>
int main(){
    int a;
    printf("请输入年份:\n");
    scanf("%d",&a);
    if ((a%100!=0&&a%4==0)||a%400==0){
        printf("%d年是闰年\n",a);
    }else{
        printf("%d年不是闰年\n",a);
    }
     
    return 0;
}