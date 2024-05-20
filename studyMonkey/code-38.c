//请编程输入10个整数，并将这10个数由小到大排序
//调用无参函数

#include<stdio.h>

void sortData(int a[],int n){
    int i,j,t;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; i < n; j++)
        {
           if (a[i]>a[j]){
            t = a[i];
            a[i] =a[j];
            a[j] =t;
           }
        }
    }
        
}

int main(){
    void sortData(int a[],int n);
    int a[10],i;
    printf("请输入10个整数：\n");
    for ( i = 0; i <=9; i++)
    {
       scanf("%d",&a[i]);
    }
    sortData(a,10);
    printf("排序后的整数依次是：\n");
    for ( i = 0; i <= 10; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}