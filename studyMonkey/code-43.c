//输入两个学生的学号、姓名和成绩，输出成绩较高者的学号、姓名和成绩。若二者相等，则输出两个学生的全部信息。
//结构体

#include <stdio.h>

struct student{
    int stuId;
    char name[30];
    float score;
}a,b;

int main(){
    printf("请输入第一个学生的学号，姓名，成绩：\n");
    scanf("%d,%s,%f",&a.stuId,a.name,&a.score);

    printf("请输入第二个学生的学号，姓名，成绩：\n");
    scanf("%d,%s,%f",&b.stuId,b.name,&b.score);

    printf("成绩较高者的信息如下：\n");
    if (a.score >b.score){
        printf("%d\t%s\t%0.2f\n",a.stuId,a.name,a.score);
    }else if(a.score<b.score){
        printf("%d\t%s\t%0.2f\n",b.stuId,b.name,b.score);
    }else{
        printf("%d\t%s\t%0.2f\n",a.stuId,a.name,a.score);
        printf("%d\t%s\t%0.2f\n",b.stuId,b.name,b.score);
    }


    return 0;
}