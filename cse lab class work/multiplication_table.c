#include <stdio.h>
int main()
{
    int i,j,table;

    for(i=1;i<=10;i++)
    {
       for(j=2;j<=10;j++)
       {
           table=i*j;
           printf("%d\t",table);

       }
       printf("\n");
    }
}