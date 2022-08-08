#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int length=0,i=0;
    printf("enter string\n");
    gets(name);
    // length=strlen(name);   //Using prefdefined function in sting.h laibrary///
    while(name[i]!='\0')    //without Using predefine functions//
    {
        i++;
        length++;
    }                            
    puts(name);
    printf("the length of string is %d",length);
}