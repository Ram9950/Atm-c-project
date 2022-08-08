#include<stdio.h>
void main()
{
    int a=10;
    if (a=11)   //Here '=' is an assignment operator which is true for every non zero value.
    printf("I am 11");   //Here we can't consider any curly braces bec.we have only one 
    else                 //statement so we can neglect curly braces but curly braces may be possible.
    printf("I am not 11");
    }