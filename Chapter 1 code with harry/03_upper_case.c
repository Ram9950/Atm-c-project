// Write a program to determine whether a charcacter is 
//  lower case or upper case.

#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("%c  uppercase");}
        else{
printf("%c  lower case");
        }

    }



