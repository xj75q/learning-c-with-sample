#include <stdio.h>  
#include <string.h>
void main()  
{  
   char ch[32]={'e', 'x', 'a', 'm', 'p','l','e', '\0'};  
   char ch2[10]={'.', 'c','o','m','\0'};  
   strcat(ch,ch2);  
   printf("Value of first string is: %s",ch);  
}

