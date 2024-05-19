//某课成绩原为A、B、C、D四个等级，
//现要将其转成百分制分数段，规则是:A等转成85~100，B等转成70~84，C等转成60~69，D等转成<60。
//请编一程序，成绩等级由键盘输入，输出分数段。

#include <stdio.h>
int main(){
    char level;
    scanf("%c",&level);
    switch (level)
    {
    case 'A':
        printf("该生分数为85~100\n");
        break;
    case 'B':
        printf("该生分数为70~84\n");
        break;
    case 'C':
        printf("该生分数为60~69\n");
        break;
    case 'D':
        printf("该生分数为 <60\n");
        break;

    
    default:
        printf("该生的等级输的不对！\n");
        break;
    }

}