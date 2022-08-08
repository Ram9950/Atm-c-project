#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp=NULL;
    char str[40];
    fp=fopen("abc.text","a");
    if (fp==NULL)
    {
        printf("Error");
    exit(1);     // Exit used in "stdlib" header file
    }
    printf("enter the content that you want to append");
    gets(str);
    fprintf(fp,"\n %s",str);
    fclose(fp);
}

