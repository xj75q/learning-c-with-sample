//键盘输入五名学生的信息(包括学号、姓名和2门课程的成绩)，并输出平均分最高的学生的信息
//使用结构体变量做函数参数

#include<stdio.h>

struct student
{
    int stuId;
    char name[30];
    float fen1;
    float fen2;
}stu[5];

struct student max(struct student a[]){
    float average[5];
    int i,highest;
    for ( i = 0; i <=4 ; i++)
    {
        average[i] = (a[i].fen1+a[i].fen2)/2;
    }

    for (highest =0,i=1;i<=4;i++){
        if(average[highest]<average[i]){
            highest=i;
        }
    }

    return(a[highest]);
    
}


int main(){
    struct student max(struct student a[]);
    struct student xueba;
    int i;
    for ( i = 0; i <= 4; i++)
    {
       printf("请输入第%d名学生的学号,姓名,和2门成绩：\n",i+1);
       scanf("%d,%s,%f,%f",&stu[i].stuId,stu[i].name,&stu[i].fen1,&stu[i].fen2);
    }
    xueba = max(stu);
    printf("平均分最高的学生的信息如下：\n");
    printf("学号：%d\n姓名%s\n2门成绩%0.2f50.2f\n",xueba.stuId,xueba.name,xueba.fen1,xueba.fen2);

    
    
}
