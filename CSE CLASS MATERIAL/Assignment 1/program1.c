// Write a C program to check whether the given year is leap year or not.//

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if   (year % 100 == 0 && year % 400 == 0)
    
        printf("leap year\n");
    
    else if ((year % 100!=0) && (year % 4 == 0))
    
        printf("leap year\n");
    
    else
    
        printf("Not leap year\n ");
    
    return 0;
}
