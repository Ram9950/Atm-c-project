// practice program:C program to check whether the entered number is alphabet or not.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter your charcacter\n");
    scanf("%c",&c);
    if(isalpha(c))
    printf("%c is alphabet",c);
    else
    printf("%c is  not alphabet",c);
    return 0;
    
    

    }

    
    