//输入一个字符，判断它是否为大写字母，
//若是则将其转换成小写字母，若不是则不转换，然后输出最后得到的字符。
#include<stdio.h>

int demo1(){
    char ch;
    printf("请输入：\n");
    scanf("%c",&ch);
    if(ch >='A'&&ch <='Z'){
        ch += 32;
    }
    printf("转换后的字符为：%c\n",ch);
    return 0;
}


int demo2(){
    printf("=================");
    char ch;
    scanf("%c",&ch);
    ch = (ch >='A'&& ch <='Z')?(ch+32):ch;
    printf("%c\n",ch);
    return 0;
}

int main(){
    //demo1();
    demo2();
}