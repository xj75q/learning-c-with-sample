#include <stdio.h>  
void demo1() {
    FILE *fp;
    fp = fopen("myfile.txt", "w");//opening file  
    fputc('y', fp);//writing single character into file  
    fputc('i', fp);
    fputc('i', fp);
    fputc('b', fp);
    fputc('a', fp);
    fputc('i', fp);
    fputc('.', fp);
    fputc('c', fp);
    fputc('o', fp);
    fputc('m', fp);
    fclose(fp);//closing file  
    printf("character have all write to file: myfile.txt\n");
}


void demo2() {
    FILE *fp;
    char c;

    fp = fopen("myfile.txt", "r");

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c); // 一个一个字符地读取
    }
    fclose(fp);

}



void demo3() {
    FILE *fp;

    fp = fopen("myfile2.txt", "w");
    fputs("hello c programming \n", fp);
    fputs("yiibai tutorials c programming \n", fp);
    printf("all content had write to file: myfile2.txt\n");
    fclose(fp);
}


void demo4() {
    FILE *fp;
    char text[300];

    fp = fopen("myfile2.txt", "r");
    printf("%s", fgets(text, 200, fp)); // 第一行
    printf("%s", fgets(text, 200, fp)); // 第二行
    fclose(fp);
}



void demo5() {
    FILE *fp;

    fp = fopen("myfile.txt", "w+");
    fputs("This is yiibai tutorial\n", fp);

    fseek(fp, 7, SEEK_SET);
    fputs("maxsu", fp);
    fclose(fp);
}



void demo6() {
    FILE *fp;
    char c;

    fp = fopen("string-file.txt", "r");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    rewind(fp); // moves the file pointer at beginning of the file  
    // 不用重新打开文件，直接从头读取内容
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    fclose(fp);

}




void demo8() {
    FILE *fp;
    int length;

    fp = fopen("myfile.txt", "r");
    fseek(fp, 0, SEEK_END);

    length = ftell(fp);

    fclose(fp);
    printf("Size of file: %d bytes", length);

}




void main(){
    demo2();
}