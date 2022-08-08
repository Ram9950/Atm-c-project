#include<stdio.h>
void main()
{

    int a=100;
    int *b;
    b=&a;
    printf("Address of a==%u\n",&a);
    printf("Address of a==%u\n",b);
    printf("Address of b==%u\n",&b);
    printf("value of a==%d\n",*(&a));
    printf("value of a==%d\n",*b);



}