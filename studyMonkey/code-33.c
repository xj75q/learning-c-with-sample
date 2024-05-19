//定义一个字符串"HouBoShi Shuai!"，然后输出这个字符串

#include <stdio.h>
int main(){
    char c[15]={'H','o','u','B','o','S','h','i','S','h','u','a','i','!'};
    int i;
    for(i =0;i <=14;i++){
        printf("%c",c[i]);
    }
    printf("\n");

}