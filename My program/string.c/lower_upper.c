#include<stdio.h>
#include<string.h>
int main ()
{
    int i;
    char s1[90];
    printf("enter string :");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
          s1[i]=s1[i]+32;
        }
        
    }
printf("%s",s1);
}