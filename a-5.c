#include <stdio.h>  
#include <string.h>
void main()
{
    char ch[20] = { 'e', 'x', 'a', 'm', 'p', 'l','e', '.', 'c', 'o', 'm', '\0' };
    char ch2[20];
    strcpy(ch2, ch);
    printf("Value of second string is: %s \n", ch2);
}

