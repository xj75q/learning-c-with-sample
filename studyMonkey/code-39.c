//请编程输入4个整数，并找出其中最大的数，
//函数的嵌套

#include <stdio.h>
int max2(int a,int b){
    return(a>b?a:b);
}


int max4(int a,int b,int c,int d){
    int max2(int a,int b);
    return (max2(max2(max2(a,b),c),d));
}

int main(){
    int max4(int a,int b,int c,int d);
    int a,b,c,d,largest;
    printf("请输入4个整数:\n");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    largest = max4(a,b,c,d);
    printf("最大数为：%d\n",largest);
    return 0;
}
