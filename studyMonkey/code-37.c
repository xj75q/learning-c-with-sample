//有两个小组，分别有5名学生和10名学生。请编程输入这些学生的成绩，并调用一个aver 函数求这两个小组的平均分。

#include<stdio.h>

float aver(float a[],int n){
    float sum = a[0],average;
    int i ;
    for ( i = 0; i < n; i++)
    {
       sum = sum +a[i];
    }
    average = sum /n;
    return average;
}

int main(){
    float aver(float a[],int n);
    float group1[5],group2[10];
    int i;
    printf("请输入第1组的学生成绩：\n");
    for ( i = 0; i <= 4; i++)
    {
       scanf("%f",&group1);
    }
    printf("请输入第2组的学生成绩：\n");
    for ( i = 0; i <= 9; i++)
    {
        scanf("%f",&group2);
    }
    printf("第1组的平均成绩是%0.2f\n",aver(group1,5));
    printf("第2组的平均成绩是%0.2f\n",aver(group2,10));
    return 0;
}