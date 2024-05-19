//将一个二维数组 a- 。的行列元素互换，存到另一个二维数组b中并输出

#include <stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int b [3][2],i,j;
    for (i =0;i <=1;i++){
        for (j=0;j<=2;j++){
            b[j][i] = a[i][j];
        }
    }
    printf("数组b为：\n");
    for (i=0;i<=1;i++){
        printf("%d\t",b[j][i]);
    }
    printf("\n");

    return 0;
}