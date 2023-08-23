#include <stdio.h>  


void demo1()
{
    char ch[11] = { 'e', 'x', 'a', 'm', 'p', 'l','e', '.', 'c', 'o', 'm', '\0' };
    char ch2[] = "www.example.com";

    printf("Char Array Value is: %s\n", ch);
    printf("String Literal Value is: %s\n", ch2);
}


void demo2() {
    char name[50];
    printf("Enter your name: ");
    gets(name); //reads string from user  
    printf("Your name is: ");
    puts(name);  //displays string  

}


void demo3()  
{  
   char ch[20]={'e', 'x', 'a', 'm', 'm', 'p', '.', 'c', 'o', 'm', '\0'};
   char doname[]="www.example.com";  
   printf("Length of string is: %d",strlen(ch));  
   printf("Length of doname is: %d",strlen(doname));  
}


void demo4()
{
    char ch[20] = { 'e', 'x', 'a', 'm', 'p', 'l','e', '.', 'c', 'o', 'm', '\0' };
    char ch2[20];
    strcpy(ch2, ch);
    printf("Value of second string is: %s \n", ch2);
}


void demo5()  
{  
   char ch[32]={'e', 'x', 'a', 'm', 'p','l','e', '\0'};  
   char ch2[10]={'.', 'c','o','m','\0'};  
   strcat(ch,ch2);  
   printf("Value of first string is: %s",ch);  
}



void demo6() {
    char str1[20], str2[20];

    while(1){
        printf("Enter 1st string: ");
        gets(str1);//reads string from console  
        printf("Enter 2nd string: ");
        gets(str2);
        if (strcmp(str1, str2) == 0)
            printf("Strings are equal \n");
        else
            printf("Strings are not equal \n");
    }
}


void demo7() {
    char str[20];

    printf("Enter string: ");
    gets(str);//reads string from console  
    printf("String is: %s \n", str);
    printf("\nReverse String is: %s \n", strrev(str));

}


void demo8() {
    char str[20];

    printf("Enter string: ");
    gets(str);//reads string from console  
    printf("String is: %s", str);
    printf("Lower String is: %s", strlwr(str));

}




void demo9() {
    char str[20];

    printf("Enter string: ");
    gets(str);//reads string from console  
    printf("String is: %s",str);  
    printf("\nUpper String is: %s \n",strupr(str));  
}





void main(){
    demo8();
}