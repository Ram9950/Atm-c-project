// Quiz : Write a program to find grade of a student given his
//  based on below :
//  90-100= A Grade
//  80-90= B Grade
//  70-80= C Grade
//  60-70= D Grade
//  50-60= E Grade
//  <50= Fail

#include <stdio.h>
void main()
{
    int num;
    printf("enter marks obtained\n");
    scanf("%d", &num);

    if (num>=90 && num<=100)
    {
        printf("grade A");
    }
    else if (num>=80 && num<90)
    {
        printf("grade B");
    }
    else if (num>=70&&num<80)
    {
        printf("grade C");
    }
    else if (num>=60 && num<70)
    {
        printf("grade D");
    }
    else if (num>=50 && num<60)
    {
        printf("grade E");
    }
    else if (num>100)
    {
        printf("Maximum marks is only 100");
    }
    else
    {
        printf("you are fail");
    }
}

