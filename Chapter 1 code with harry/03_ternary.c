#include<stdio.h>
void main()
{
    int a;
    printf("Enter a\n");
    scanf("%d",&a);
    // one liner
    (a<5) ? printf("your number is less than 5") :printf("your number is not less than 5");
}