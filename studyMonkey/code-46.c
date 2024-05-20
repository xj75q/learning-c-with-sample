//把一个学生的信息(包括学号、姓名、性别3项信息)放在一个结构体变量中,然后输出这个学生的信息。
//

#include<stdio.h>

struct student
{
   int stuId;
   char name[30];
   char sex;
}a={001,"Houge",'M'};

int main(){
    struct student *p;
    p =&a;
    printf("学号：%d\n姓名:%s\n性别：%c\n",(*p).stuId,(*p).name,(*p).sex);
    printf("===================\n");
    printf("学号：%d\n姓名:%s\n性别：%c\n",p->stuId,p->name,p->sex);
    return 0;
}

