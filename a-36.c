#include <stdio.h>  
void demo1() {
    FILE *fp;
    fp = fopen("file.txt", "w");//opening file  
    fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
    fclose(fp);//closing file  
    printf("Write to file : file.txt finished.");
}



void demo2(){  
   FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("file.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   printf("%s ", buff );  
   }  
   fclose(fp);  
}



void demo3()
{
    FILE *fptr;
    int id;
    char name[30];
    float salary;
    fptr = fopen("emp.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the Emp ID:");
    scanf("%d", &id);
    fprintf(fptr, "Id= %d\n", id);
    printf("Enter the name: ");
    scanf("%s", name);
    fprintf(fptr, "Name= %s\n", name);
    printf("Enter the salary: ");
    scanf("%f", &salary);
    fprintf(fptr, "Salary= %.2f\n", salary);
    fclose(fptr);
}


void main(){
    demo3();
}
