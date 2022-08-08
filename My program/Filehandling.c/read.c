#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50];
    

   fp= fopen("ravi.txt", "r");
   if (fp==NULL)
   {
       printf("Error");
       exit(1);
   }
while(!feof(fp))   // feof is used for "end of a file notation"
{
   fgets(str,5,fp);      // "fgets and fgetc" for  reading purpose.
   printf("%s",str);
}
   fclose(fp);

}