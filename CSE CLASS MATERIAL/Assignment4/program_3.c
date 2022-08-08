#include<stdio.h>
#include<string.h>
int main()
{
      FILE *fp;
      char ch;
      int i=0,pos;
      fp=fopen("input.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}