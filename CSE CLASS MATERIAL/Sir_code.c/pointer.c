#include<stdio.h>
void main()
{
    
    int a=100;
    int *b;
   b=&a;
    printf("Address of a==%u\n",&a);
    printf("Address of a==%u\n",b);
    printf("Address of b==%u\n",&b);
    printf("values a==%d\n",*(&a));
    printf("Value a==%d\n",*b);

}
