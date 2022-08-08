#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp=NULL;
char c;
int n=1;
    fp=fopen("jk.text","r");
    if (fp==NULL)
    {
        printf("Error");
    exit(1);     // Exit used in "stdlib" header file
    }
    while(c=fgetc(fp)!=EOF);  // EOF for end of file
    {
        if(c=='\n')
        {
            n=n+1;
        }
    }
    fclose(fp);
    printf("%d\n",n);
}