//有三名学生的3项信息:学号、姓名和成绩。请编程按成绩由高到低输出各学生的信息。
//结构体数组

//信息为:001，HouBoShi，99;002，ShaPaoZi，70;003，ShaLeBaji，90

#include<stdio.h>
struct student 
{
   int stuId;
   char name[30];
   float score;
}stu[3]={{001,"HouBoShi",99},{002,"ShaPaoZi",70},{003,"ShaLeBaji",90}};

int main(){
    struct student tmp;
    int i,j;
    for (i=0;i<2;i++){
        for ( j = i+1; j < 3; j++)
        {
            if(stu[j].score>stu[i].score){
                tmp =stu[i];
                stu[i]=stu[j];
                stu[j] = tmp;
            }
        }  
    }

    printf("排序好的各学生信息如下：\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%d\t%s\t%0.2f\n",stu[i].stuId,stu[i].name,stu[i].score);
    }
    
    
}