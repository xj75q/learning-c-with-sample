//输入10个地区的面积(面积为整数)，对它们由小到大排序并输出排序后的结果。
//选择法/冒泡法(沉底法)
//用冒泡法(沉底法)对它们由小到大排序并输出排序后的结果

#include <stdio.h>

int main(){
    int a[10];
    int i,j,t;
    printf("请输入10个面积：\n");
    for (i =0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    
    for (j =0;j <=8;j++){
        for (i = 0;i <=8-j;i++){
            if (a[i]>a[i+1]){
                t = a[i];
                a[i] = a[i+1];
                a[i+1] =t;
            }
        }
    }

    printf("排序后依次是：");
    for (i =0;i <=9;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}