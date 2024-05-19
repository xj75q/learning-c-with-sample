//某课成绩原为A、B、C、D四个等级，现要将其转成百分制分数段，规则是:A等、B等转成70~100，C等、D等转成<70。请编一程序，成绩等级由键盘输入，输出分数段。

#include<stdio.h>
int main(){
    char level;
    scanf("%c",&level);
    switch (level)
    {
    case 'A':
    case 'B':
        printf("该生分数为70~100\n");
        break;
    case 'C':
    case 'D':
        printf("该生分数<70\n");
        break;
    
    default:
        printf("该生的等级输的不对\n");
        break;
    }
    return 0;
}