#include<stdio.h>
void main()    

{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
}
/*
#include<stdio.h>
void main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
}
*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
    return 0;
    */