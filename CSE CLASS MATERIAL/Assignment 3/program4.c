#include <stdio.h>
#include<stdlib.h>


int main()
{
    int i, j,k,sum=0, r1,r2, c1,c2,addition;
     int a[20][20], b[20][20],add[20][20],sub[20][20],multiply[20][20];
    
    printf("Enter the number of rows and columns of 1st matrix  :\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter 1st matrix is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d",(*(a + i) + j));
        }
    }
     printf("Enter the number of rows and columns of 2nd matrix :\n");
    scanf("%d%d", &r2, &c2);
    printf("Enter 2nd matrix is :\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    if (c1!=c2 && r1!=r2)
{
    
printf("addition and subtraction not possible");
exit(0);
    }
    
       printf("addition of two matrices :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
*(*(add+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(add+i)+j));
}
printf("\n");
        
    }
   
    printf("subtraction of two matrices :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
*(*(sub+i)+j)=*(*(a+i)+j)- *(*(b+i)+j);
printf("%d ",*(*(sub+i)+j));
}
printf("\n");
        
    }
    if(c1!=r2)
    {
        printf("multilpication not possible");
        exit(0);
    }
    else
    {
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        sum=0;
        for(k=0;k<r1;k++)
        {
            sum=sum+(*(*(a + i) + k)) * (*(*(b+ k) + j));
        }
        (*(*(multiply + i) + j))=sum;
    }
} 
    }
printf("multiplication\n");
for(i=0;i<r1;i++)
{
    for (j=0;j<c2;j++)
    {
        printf("%d\t",(*(*(multiply + i) + j)));
    }
    printf("\n");
}
}
