#include<stdio.h>  
#include<string.h>  
struct student {
    int rollno;
    char name[10];
};
// 定义可存储的最大学生数量
#define MAX 3

void main() {
    int i;
    struct student st[MAX];
    printf("Enter Records of 3 students");

    for (i = 0;i < MAX;i++) {
        printf("\nEnter Rollno:");
        scanf("%d", &st[i].rollno);
        printf("Enter Name:");
        scanf("%s", &st[i].name);
    }

    printf("Student Information List:\n");
    for (i = 0;i<MAX;i++) {
        printf("Rollno:%d, Name:%s\n", st[i].rollno, st[i].name);
    }

}


