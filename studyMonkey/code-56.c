//递归-【汉诺塔】
#include <stdio.h>
#include <stdlib.h>


void hanoi(int n,char A, char B, char C){
    if(1==n) //如果是一个盘子，直接将盘子从A柱子移到B柱子上
        printf("将编号为%d的盘子从柱子%c移到柱子%c\n",n,A,C);
    else{
        hanoi(n-1,A,C,B); //将A上的n-1个盘子借助C移到B
        printf("将编号为%d的盘子从柱子%c移到柱子%c\n",n,A,C); //直接将A柱子上的第N个盘子移到C柱子上
        hanoi(n-1,B,A,C); //将B柱子上的n-1个盘子借助A移到C
    }
}

int main()
{
    //模拟三个柱子
    char chA='A';
    char chB='B';
    char chC='C';
    //盘子个数
    int n;
    printf("请输入需要移动盘子的个数：");
    scanf("%d",&n);
    hanoi(n,chA,chB,chC);
    return 0;
}
