#include<stdio.h>
void main()
{
    int i,j,N;
    for(i=1;i<=5;i++)
    {
        for(j=3;j<=i;j++)
        {
           printf("%d",i+1);
           i=i+2;
        }
        printf("\n");
    }}