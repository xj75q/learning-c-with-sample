//把一个学生的信息(学号:001、姓名:houge、性别:M、住址:huaguoshan)放在一个结构体变量中，然后输出这个学生的信息。
//结构体

#include <stdio.h>

//======写法1===============
struct student1{
    int studentId;
    char name[30];
    char sex;
    char address[60];
};
struct student1 a ={001,"houge",'M',"hua guo shan"};

//======写法2===============
struct student{
    int studentId;
    char name[30];
    char sex;
    char address[60];
}a ={001,"houge",'M',"hua guo shan"};

int main(){
    printf("学号:%d\n姓名：%s\n性别:%c\n住址%s\n",a.studentId,a.name,a.sex,a.address);
    return 0;
}