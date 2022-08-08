#include<stdio.h>
int main ()
{
    char s[4];
    printf("enter a sentence:");
    //scanf("%8s",s);       /* Not appropriate way but a way to print our size string*/
   gets(s);
    puts(s);
    
    return 0;
}