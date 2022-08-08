#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i;



    char s1[20]="ravikumar";
    char s2[10]="gupta";

   // strcat(s1,s2);   ///using predefinefd functions
   strcat(s1,&s2[1]);
//    l1=strlen(s1);
// l2=strlen(s2);
// for(i=0;i<=l2;i++)
// {
//     s1[l1+i]=s2[i];
// }
    printf("string after concetenate is  %s \n ",s1);
    puts(s1);
}
