#include <stdio.h>
void main()
{
    int i,j,N;
    printf("Enter number of rows");
    scanf("%d",&N);
    for (i=1;i<=(2*N)-1;i++)
    {
        for(j=1;j<=N;j++)
        {
            if((i==1||i==N||i==(2*N)-1)&&(j>1&&j<=N-1) ||(j==1||j==N)&&(i>1&&i!=N&&i!=(2*N)-1))
            {
                printf("*");
            }
            
            else
            {
                printf(" ");
            }

            
                
            }
        
        printf("\n");
        
    }}
    