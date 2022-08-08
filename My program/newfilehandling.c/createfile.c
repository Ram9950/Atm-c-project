#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char str[50];
    fp =fopen("data.txt","r");
    printf("enter the content you want to write in file");
    gets(str);
    fputs(str,fp);
    fclose(fp);
}