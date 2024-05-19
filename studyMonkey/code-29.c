//对10个数组元素依次赋值为0、1、2、3、4、5、6、7、8、9,并按倒序输出。

#include <stdio.h>

int main(){
    int i,a[10]={0,1,2,3,4,5,6,7,8,9};
    for (i =9 ;i >=0; i--){
        printf("%d\t",a[i]);
    }
    return 0;
}