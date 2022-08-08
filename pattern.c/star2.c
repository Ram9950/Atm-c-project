#include<stdio.h>
void main()
{
    int i,j,row;
    printf("Enter number of rows :\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for (j=(row+1-i);j>=1;j--)
{
    printf("*");
}
printf("\n");

    }
}