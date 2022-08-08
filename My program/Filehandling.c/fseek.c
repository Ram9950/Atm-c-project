#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp=NULL;
    char ch;
    char str[40];
    fp=fopen("aaa.text","r");
    if (fp==NULL)
    {
        printf("Error");
    exit(1);     // Exit used in "stdlib" header file
    }
     fseek(fp,3,SEEK_SET);
    ch=fgetc(fp);
    printf("%c",ch);
    fclose(fp);
}