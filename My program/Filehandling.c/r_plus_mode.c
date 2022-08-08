#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fp=NULL;
    //char str[40];
    fp=fopen("abc.text","r+");
    if (fp==NULL)
    {
        printf("Error");
    exit(1);     // Exit used in "stdlib" header file
    }
    fputs("ramkrishnarrrrrrkkkkkk",fp);    // we get a modify file in abc.text
    fclose(fp);
}