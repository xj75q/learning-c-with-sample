//
#include<stdio.h>

int main(){
    char ch;
    printf("请输入：\n");
    scanf("%c",&ch);
    if(ch >='A'&&ch <='Z'){
        ch += 32;
    }
    printf("%c\n",ch);
    return 0;
}