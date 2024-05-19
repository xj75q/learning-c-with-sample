//

// 大写变小写， +
// 小写变大写 ，-
#include<stdio.h>
int main(){
    char a='B',b='O',c='Y';
    a += 32;  //+32得到小写字母；-32得到大写字母
    b += 32;
    c += 32;
    printf("%c\t%c\t%c\n",a,b,c);
    return 0;
}