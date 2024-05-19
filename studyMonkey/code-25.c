//某课成绩原为百分制，现要将其转成等级，
//规则是:90分以上为A、80~89分为 B、70~79分为C、60~69分为D、60分以下为E。请编一程序，分数由键盘输入，输出等级。

#include <stdio.h>
int main(){
    double score;
    printf("请输入分数：");
    scanf("%lf",&score);
    switch ((int)(score/10))
    {
    case 10:
    case 9:
        printf("该生等级为A \n");
        break;
     case 8:
        printf("该生等级为B \n");
        break;
    case 7:
        printf("该生等级为C \n");
        break;
    case 6:
        printf("该生等级为D \n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("该生等级为E \n");
        break;
       
    default:
        printf("这还是成绩吗？\n");
        break;
    }
}