//有5个学生，第5个学生比第4个学生大2岁，第4个学生比第3个学生大2岁，第3个学生比第2个学生大2岁，第2个学生比第1个学生大2岁，第1个学生是10岁。请编程计算出第5个学生的年龄。
//函数的递归

#include<stdio.h>

int age(int n){
    int ageData;
    if (n==1){
        ageData=10;
    }else{
        ageData = age(n-1) +2;
    }
    return ageData;
}

int main(){
    int age(int n);
    printf("第5个学生的年龄是:%d\n",age(5));

}