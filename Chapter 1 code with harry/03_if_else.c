#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age < 18 || age > 90)
    {
        printf("you can't drive\n");
    }
    else
    {
        printf("you can drive\n");}
        if(age==50){
            printf("Half century\n");
        }
    }

