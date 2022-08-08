#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[50];
    printf("enter the string\n");
gets(str);

   fp= fopen("paa.txt", "w");
   if (fp==NULL)
   {
       printf("Error");
       exit(1);
   }
   
   fputs(str,fp);
   fclose(fp);

}