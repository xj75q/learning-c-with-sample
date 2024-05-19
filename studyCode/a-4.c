#include <stdio.h>  
#include <string.h>
void main()  
{  
   char ch[20]={'e', 'x', 'a', 'm', 'p', 'l','e', '.', 'c', 'o', 'm', '\0'};
   char doname[]="www.example.com";  
   printf("Length of string is: %d\n",strlen(ch));  
   printf("Length of doname is: %d\n",strlen(doname));  
}

